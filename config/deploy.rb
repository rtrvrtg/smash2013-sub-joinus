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
 
namespace :deploy do
  task :start do ; end
  task :stop do ; end
  task :restart do ; end
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

# Let's run these immediately after the deployment is finalised.
after "deploy:finalize_update", :create_symlinks
after "deploy:finalize_update", :run_updates

# Cap the number of checked-out revisions.
after "deploy:update", "deploy:cleanup"

