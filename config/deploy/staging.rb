server 'linode.smash.org.au', :app, :web, :primary => true
set :deploy_to, '/var/www/staging.smash.org.au/joinus2014'
set :db_name,     "joinus2014_staging"
set :url,         "http://joinus2014.staging.smash.org.au"

set(:releases_path)     { File.join(deploy_to, version_dir) }
set(:shared_path)       { File.join(deploy_to, shared_dir) }
set(:current_path)      { File.join(deploy_to, current_dir) }
set(:release_path)      { File.join(releases_path, release_name) }