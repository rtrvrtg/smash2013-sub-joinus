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
 
namespace :deploy do
  task :start do ; end
  task :stop do ; end
  task :restart do ; end
  
  desc "Flush the Drupal cache system."
  task :cacheclear, :roles => :web do
    run "drush cc all --root=#{current_release}"
  end
end

# Runs the makefile
task :run_makefile, :roles => :web do
  run "drush make #{current_release}/joinus.make #{current_release}"
end

# Installs site
task :install_site, :roles => :web do
  set(:db_user, Capistrano::CLI.ui.ask("DB User: ") )
  set(:db_pass, Capistrano::CLI.password_prompt("DB Pass: ") )
  set(:account_name, Capistrano::CLI.ui.ask("Account name: ") )
  set(:account_mail, Capistrano::CLI.ui.ask("Account email: ") )
  
  db_url = "mysql://#{db_user}:#{db_pass}@localhost/joinus_staging"
  
  account_setup = "--account-name=#{account_name} --account-mail=#{account_mail} --site-mail=#{site_mail}"
  db_switch = "--db-url=#{db_url}"
  db_su = "--db-su=#{db_user} --db-su-pw=#{db_pass}"
  
  run "drush site-install smash2013_joinus #{db_switch} #{db_su} #{account_setup}"
end
 
# The task below serves the purpose of creating symlinks for asset files.
# User uploaded content and logs should not be checked into the repository; move them to a shared location.
task :create_symlinks, :roles => :web do
  run "ln -s #{shared_path}/sites-default #{current_release}/sites/default"
end

# Run drush updates
task :run_updates, :roles => :web do
  run "drush -y features-revert-all --root=#{current_release}"
  run "drush -y updb --root=#{current_release}"
end

# Run during setup
after "deploy:setup", :create_symlinks
after "deploy:setup", :run_makefile
after "deploy:setup", :install_site

# Let's run these immediately after the deployment is finalised.
after "deploy:finalize_update", :create_symlinks
after "deploy:finalize_update", :run_updates

# Cap the number of checked-out revisions.
after "deploy", "deploy:cacheclear"
after "deploy:update", "deploy:cleanup"

