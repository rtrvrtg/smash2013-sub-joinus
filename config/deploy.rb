default_run_options[:pty] = true  # Must be set for the password prompt from git to work
set :ssh_options, { :forward_agent => true }

set :user,        "joinus"
set :application, "smash-joinus"
set :domain,      "publicweb.smash.org.au"
set :repository,  "git@bitbucket.org:smashcon-it/joinus-drupal.git"
set :shared_path, "#{deploy_to}/shared"
set :install_profile, "smash2013_joinus"
set :use_sudo, false

set :stages, %w(production staging)
set :default_stage, "staging"
require 'capistrano/ext/multistage'
 
set :scm,        :git
set :branch,     'master'
set :deploy_via, :remote_cache

set :keep_releases, 5

role :web, domain
role :app, domain # this can be the same as the web server
role :db,  domain, :primary => true # this can be the same as the web server

# List the Drupal multi-site folders.  Use "default" if no multi-sites are installed.
set :domains, ["default"]

def remote_file_exists?(full_path)
  '1' == capture("if [ -e #{full_path} ]; then echo -n 1; fi").strip
end

def app_exists?(app_name)
  begin
    false == capture("which #{app_name}").strip.empty?
  rescue Exception => e
    false
  end
end

def drush_do(task)
  run "drush #{task} --root=#{current_release} -l #{url}"
end

def set_ownership(full_path, is_file = false, failure_ok = false)
  suffix = failure_ok == true ? '; true' : ''
  if !remote_file_exists? full_path
    run "#{try_sudo} mkdir #{full_path}"
  end
  if is_file
    run "#{try_sudo} chown smash:www-data #{full_path} #{suffix}"
  else
    run "#{try_sudo} chown -R smash:www-data #{full_path} #{suffix}"
  end
  set_chmod(full_path)
end

def symlink_me(full_path, short_path)
  run "cd #{current_release} && #{try_sudo} ln -s #{full_path} #{short_path}"
end

def set_chmod(full_path, perm = "2775", failure_ok = false)
  suffix = failure_ok == true ? '; true' : ''
  run "#{try_sudo} chmod #{perm} #{full_path} #{suffix}"
end

def is_drupal_installed?
  begin
    data = capture("drush status --root=#{current_release}").strip
    db_ok = /Database\s*:\s*([^\s]+)/.match(data)
    d7_ok = /Drupal bootstrap\s*:\s*([^\s]+)/.match(data)
    (!db_ok.nil? && !d7_ok?) && (db_ok[1] == 'Connected' and d7_ok[1] == 'Successful')
  rescue
    true
  end
end

namespace :deploy do
  task :start do ; end
  task :stop do ; end
  task :restart do ; end
  
  desc "Flush the Drupal cache system."
  task :cacheclear, :roles => :web, :on_error => :continue do
    drush_do("cc all")
  end
end

task :uname do
  run "uname -a"
end

task :pwd do
  run "echo #{deploy_to}"
end

namespace :drush do

  # Runs the makefile
  task :run_makefile, :roles => :web do
    run "cd #{current_release} && drush make #{current_release}/joinus.make -y"
  end
  
  # Installs site
  task :install_site, :roles => :web do
    run "cd #{current_release} && git submodule update --init"
    # run "mkdir #{current_release}/cache"
    # set_ownership("#{current_release}/cache");
    # set_chmod("#{current_release}/cache");
    
    # if !is_drupal_installed?
    #   set(:db_user, Capistrano::CLI.ui.ask("DB User: ") )
    #   set(:db_pass, Capistrano::CLI.password_prompt("DB Pass: ") )
    #   set(:account_name, Capistrano::CLI.ui.ask("Account name: ") )
    #   set(:account_mail, Capistrano::CLI.ui.ask("Account email: ") )
    #   
    #   db_url = "mysql://#{db_user}:#{db_pass}@localhost/#{db_name}"
    #   
    #   account_setup = "--account-name=#{account_name} --account-mail=#{account_mail} --site-mail=#{account_mail}"
    #   db_switch = "--db-url=#{db_url}"
    #   db_su = "--db-su=#{db_user} --db-su-pw=#{db_pass}"
    #  
    #   drush_do("site-install #{install_profile} #{db_switch} #{db_su} #{account_setup} -y")
    # end
  end

  # Rip up the settings.php file so we can start again.
  task :reset_install, :roles => :web do
    run "rm #{current_release}/sites/default/settings.php"
  end

  # User password
  task :upwd, :roles => :web do
    set(:ch_user, Capistrano::CLI.ui.ask("Username: ") )
    set(:ch_pass, Capistrano::CLI.password_prompt("New Password: ") )
    drush_do("upwd #{ch_user} --password='#{ch_pass}'")
  end

  # Enable modules
  task :en, :roles => :web do
    set(:module_prompted, Capistrano::CLI.ui.ask("Module names: ") )
    drush_do("en #{module_prompted} -y")
  end
  
  # Append caching stuff
  task :setup_filecache, :roles => :web, :on_error => :continue do
    cache_cfg = <<END
$conf['cache_backends'] = array('sites/all/modules/contrib/filecache/filecache.inc');
$conf['cache_default_class'] = 'DrupalFileCache';
$conf['filecache_directory'] = '/tmp/filecache-' . substr(conf_path(), 6);
END

    settings_path = "#{shared_path}/sites-default/settings.php"
    if is_drupal_installed? and !remote_file_exists?(settings_path)
      set_chmod("#{shared_path}/sites-default", "2775", true)
      set_chmod(settings_path, "644")
      File.open(settings_path, 'a+') do |f|
        current = File.read(f)
        if current.include?(cache_cfg) == false
          f.write(cache_cfg)
        end
      end
      #set_chmod(settings_path, "555")
    end
  end
  
  # Append caching stuff
  task :setup_files, :roles => :web do
    if is_drupal_installed?
      set_chmod("#{shared_path}/sites-default", "2755", true)
      ["private", "files"].each do |dir|
        set_ownership("#{shared_path}/sites-default/#{dir}", true, true)
      end
      #set_chmod("#{shared_path}/sites-default", "555")
    end
  end
  
  # Run drush updates
  task :run_updates, :roles => :web do
    if is_drupal_installed?
      drush_do("registry-rebuild -y")
      drush_do("updb -y")
      # drush_do("features-revert-all -y")
      drush_do("cron -y")
    end
  end
  
  # Grab remote database
  task :fetch_db, :roles => :web do
    if is_drupal_installed?
      filename = Time.new.strftime("%Y-%m-%d-%H-%M-%S") + '.dump'
      set_ownership "#{shared_path}/db-dumps"
      run "drush sql-dump --root=#{current_release} > #{shared_path}/db-dumps/#{filename}"
      get "#{shared_path}/db-dumps/#{filename}", "#{filename}"
      run "rm #{shared_path}/db-dumps/#{filename}"
    end
  end

end

namespace :drupal do
  # The task below serves the purpose of creating symlinks for asset files.
  # User uploaded content and logs should not be checked into the repository; move them to a shared location.
  task :create_symlinks, :roles => :web do
    shared_sites_default = "#{shared_path}/sites-default"
    current_sites_default = "#{current_release}/sites/default"

    if !remote_file_exists? shared_sites_default
      set_ownership shared_sites_default
    end

    if !remote_file_exists? "#{shared_sites_default}/default.settings.php"
      default_settings = []
      ["config/default.settings.php", "config/filecache.php"].each do |f|
        default_settings.push(File.read(f))
      end
      put default_settings.join("\n"), "#{shared_sites_default}/default.settings.php"
    end

    run "ls #{current_release}"
    run "ls #{current_release}/sites"
    run "ls #{current_sites_default}"
    run "rm -rf #{current_sites_default}"
    run "ln -s #{shared_sites_default} #{current_sites_default}"
  end
end

namespace :compass do
  # Build a fresh copy of theme stylesheets if compass is installed
  task :make_styles, :roles => :web do
    if app_exists? 'compass'
      run "cd #{current_release}/sites/all/themes/smash_joinus && compass compile"
    end
  end
end



# Run during setup
after "deploy:cold", "drush:run_makefile"
after "deploy:cold", "drush:install_site"

# Let's run these immediately after the deployment is finalised.
after "deploy:finalize_update", "drush:run_makefile"
after "deploy:finalize_update", "drupal:create_symlinks"
after "deploy:finalize_update", "drush:install_site"
after "deploy:finalize_update", "drush:run_updates"
after "deploy:finalize_update", "drush:setup_files"
# after "deploy:finalize_update", "drush:setup_filecache"
after "deploy:finalize_update", "compass:make_styles"

# Cap the number of checked-out revisions.
after "deploy", "deploy:cacheclear"
after "deploy:update", "deploy:cleanup"
