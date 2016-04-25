server 'publicweb.smash.org.au', :app, :web, :primary => true
set :deploy_to, '/home/joinus/www'
set :db_name,     "joinus_production"
set :url,         "https://joinus.smash.org.au"

set(:releases_path)     { File.join(deploy_to, version_dir) }
set(:shared_path)       { File.join(deploy_to, shared_dir) }
set(:current_path)      { File.join(deploy_to, current_dir) }
set(:release_path)      { File.join(releases_path, release_name) }
