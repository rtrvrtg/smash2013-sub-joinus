default_run_options[:pty] = true  # Must be set for the password prompt from git to work
set :ssh_options, { :forward_agent => true }

set :user,        "smash"
set :application, "SMASH! Joinus"
set :domain,      "linode.smash.org.au"
set :repository,  "git@github.com:rtrvrtg/smash2013-sub-joinus.git"
set :deploy_to,   "/var/www/staging.smash.org.au/joinus"
set :shared_path, "#{deploy_to}/shared"
set :use_sudo, false
 
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
  '0' == capture("which #{app_name} > /dev/null && echo -n $?").strip
end

def is_drupal_installed?
  data = capture("drush status --root=#{current_release}").strip
  db_ok = /Database\s*:\s*([^\s]+)/.match(data)
  d7_ok = /Drupal bootstrap\s*:\s*([^\s]+)/.match(data)
  db_ok[1] == 'Connected' and d7_ok[1] == 'Successful'
end

namespace :deploy do
  task :start do ; end
  task :stop do ; end
  task :restart do ; end
  
  desc "Flush the Drupal cache system."
  task :cacheclear, :roles => :web do
    run "drush cc all --root=#{current_release}"
  end
end

namespace :drush do

  # Runs the makefile
  task :run_makefile, :roles => :web do
    run "cd #{current_release} && drush make #{current_release}/joinus.make -y"
  end
  
  # Installs site
  task :install_site, :roles => :web do
    if !is_drupal_installed?
      set(:db_user, Capistrano::CLI.ui.ask("DB User: ") )
      set(:db_pass, Capistrano::CLI.password_prompt("DB Pass: ") )
      set(:account_name, Capistrano::CLI.ui.ask("Account name: ") )
      set(:account_mail, Capistrano::CLI.ui.ask("Account email: ") )
      
      db_url = "mysql://#{db_user}:#{db_pass}@localhost/joinus_staging"
      
      account_setup = "--account-name=#{account_name} --account-mail=#{account_mail} --site-mail=#{account_mail}"
      db_switch = "--db-url=#{db_url}"
      db_su = "--db-su=#{db_user} --db-su-pw=#{db_pass}"
      
      run "drush site-install smash2013_joinus --root=#{current_release} #{db_switch} #{db_su} #{account_setup} -y"
    end
  end
  
  # Run drush updates
  task :run_updates, :roles => :web do
    installed = false
    run "drush status --root=#{current_release}" do |channel, stream, data|
      ok = /Database\s*:\s*([^\s]+)/.match(data)
      if data[1] == 'Connected'
        installed = true
      end
    end
    
    if installed == true
      run "drush -y features-revert-all --root=#{current_release}"
      run "drush -y updb --root=#{current_release}"
    end
  end

end

namespace :drupal do
  # The task below serves the purpose of creating symlinks for asset files.
  # User uploaded content and logs should not be checked into the repository; move them to a shared location.
  task :create_symlinks, :roles => :web do
    if !remote_file_exists? "#{shared_path}/sites-default"
      run "mkdir #{shared_path}/sites-default && mv #{current_release}/sites/default/* #{shared_path}/sites-default"
    end
    run "rm -rf #{current_release}/sites/default"
    run "ln -s #{shared_path}/sites-default #{current_release}/sites/default"
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
after "deploy:finalize_update", "compass:make_styles"

# Cap the number of checked-out revisions.
after "deploy", "deploy:cacheclear"
after "deploy:update", "deploy:cleanup"

