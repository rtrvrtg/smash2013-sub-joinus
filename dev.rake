require 'rails'
require 'active_record'
require 'yaml'
require 'fileutils'

task :environment, [:env] => 'bundler:setup' do |cmd, args|
  ENV["DRUPAL_ENV"] = args[:env] || "development"
  ActiveRecord::Base.establish_connection(YAML::load(File.open('config/database.yml')))
  ActiveRecord::Base.logger = Logger.new(File.open('database.log', 'a'))
end

namespace :db do
  
  desc "Show settings"
  task :settings => :environment do
    env = args[:env] || "development"
    Rake::Task['environment'].invoke(env)
    
    abcs = ActiveRecord::Base.configurations
    puts DRUPAL_ENV
    puts abcs[DRUPAL_ENV]
  end
  
  desc "Drop database"
  task :drop => :environment do
    abcs = ActiveRecord::Base.configurations
    puts DRUPAL_ENV
    puts abcs[DRUPAL_ENV]
    #ActiveRecord::Base.establish_connection(abcs[DRUPAL_ENV])
    ActiveRecord::Base.connection.drop_database ActiveRecord::Base.connection.current_database rescue nil
  end
  
  desc "Create database"
  task :create => :environment do
    abcs = ActiveRecord::Base.configurations
    #ActiveRecord::Base.establish_connection(abcs[DRUPAL_ENV])
    ActiveRecord::Base.connection.create_database ActiveRecord::Base.connection.current_database rescue nil
  end
  
end

# The dev rake task does everything needed to setup an application to work in development mode for a new developer.
# Mostly for Ruby project, but can be useful for PHP projects as well.
#
# Running `rake dev:setup` should be all you need to get a new application running.
namespace :dev do

  desc "Basic development setup process"
  task :setup do
    if Rails.env.production?
      raise StandardError, "You probably didn't mean to setup the production database"
    end
    Rake::Task["dev:config_files"].invoke
    Rake::Task["dev:nuke"].invoke
  end

  # Nukes the database completely and re builds it using any seed file that is present.
  task :nuke do
    Rake::Task["db:drop"].invoke
    Rake::Task["db:create"].invoke
  end


  # Creates the needed config files for the system to start.  Put extra config files into
  # the config_files array with the source example file first and the target file second
  task :config_files do
    wd = File.expand_path File.dirname(__FILE__)
    puts wd
    config_files = [
      ['config/database.example.yml', 'config/database.yml']
    ]
    config_files.each do |pair|
      source = File.join(wd, pair.first)
      target = File.join(wd, pair.last)

      unless File.exist?(File.join(wd, source))
        `cp #{source} #{target}`
      end
    end
  end

end

namespace :drush do
  
  desc "Runs the makefile"
  task :make do
    sh "drush make joinus.make ."
  end
  
  desc "Nukes Drupal site"
  task :nuke do
    sh "rm sites/default/settings.php"
  end
  
  desc "Installs a site"
  task :install do
    db_url = 'mysql://root:password@localhost/db'
    db_su = 'root'
    db_su_pw = 'password'
    account_name = 'admin'
    account_mail = 'admin@example.com'
    site_mail = 'admin@example.com'
    sh "drush site-install smash2013ws --db-url=$DB_URL --db-su=$SU_USER --db-su-pw=$SU_PASS --account-name=$AD_USER --account-mail=$AD_MAIL --site-mail=$AD_MAIL"
  end
  
end
