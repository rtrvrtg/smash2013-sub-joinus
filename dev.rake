require 'rails'
require 'active_record'
require 'yaml'
require 'fileutils'

namespace :bundler do
  task :setup do
    require 'rubygems'
    require 'bundler/setup'
  end
end

task :environment, [:env] => 'bundler:setup' do |cmd, args|
  ENV["DRUPAL_ENV"] = args[:env] || "development"
  config = YAML::load(File.open('config/database.yml'))
  ActiveRecord::Base.establish_connection(config[ENV["DRUPAL_ENV"]])
  ActiveRecord::Base.logger = Logger.new(File.open('database.log', 'a'))
end

namespace :db do
  
  desc "Show settings"
  task :settings, :env do |cmd, args|
    env = args[:env] || "development"
    Rake::Task['environment'].invoke(env)
    
    config = YAML::load(File.open('config/database.yml'))
    puts config[ENV["DRUPAL_ENV"]]
  end
  
  desc "Drop database"
  task :drop, :env do |cmd, args|
    env = args[:env] || "development"
    Rake::Task['environment'].invoke(env)
    
    ActiveRecord::Base.connection.drop_database ActiveRecord::Base.connection.current_database
  end
  
  desc "Create database"
  task :create, :env do |cmd, args|
    env = args[:env] || "development"
    Rake::Task['environment'].invoke(env)
    
    ActiveRecord::Base.connection.create_database ActiveRecord::Base.connection.current_database
  end
  
end

# The dev rake task does everything needed to setup an application to work in development mode for a new developer.
# Mostly for Ruby project, but can be useful for PHP projects as well.
#
# Running `rake dev:setup` should be all you need to get a new application running.
namespace :dev do

  desc "Basic development setup process"
  task :setup, :env do |cmd, args|
    env = args[:env] || "development"
    Rake::Task['environment'].invoke(env)
    
    if Rails.env.production?
      raise StandardError, "You probably didn't mean to setup the production database"
    end
    Rake::Task["dev:config_files"].invoke
    Rake::Task["dev:nuke"].invoke
  end

  # Nukes the database completely and re builds it using any seed file that is present.
  task :nuke, :env do |cmd, args|
    env = args[:env] || "development"
    Rake::Task['environment'].invoke(env)
    
    Rake::Task["db:drop"].invoke
    Rake::Task["db:create"].invoke
  end


  # Creates the needed config files for the system to start.  Put extra config files into
  # the config_files array with the source example file first and the target file second
  task :config_files, :env do |cmd, args|
    env = args[:env] || "development"
    Rake::Task['environment'].invoke(env)
    
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
  task :make, :env do |cmd, args|
    env = args[:env] || "development"
    Rake::Task['environment'].invoke(env)
    
    sh "drush make joinus.make ."
  end
  
  desc "Nukes Drupal site"
  task :nuke, :env do |cmd, args|
    env = args[:env] || "development"
    Rake::Task['environment'].invoke(env)
    
    sh "rm sites/default/settings.php"
  end
  
  desc "Installs a site"
  task :install, :env do |cmd, args|
    env = args[:env] || "development"
    Rake::Task['environment'].invoke(env)
    
    config = YAML::load(File.open('config/drush.yml'))
    site_cfg = config[ENV["DRUPAL_ENV"]]
    puts site_cfg
    
    cmd = "drush site-install smash2013ws"
    account_setup = "--account-name=#{site_cfg['account_name']} --account-mail=#{site_cfg['account_mail']} --site-mail=#{site_cfg['site_mail']}"
    db_switch = "--db-url=#{site_cfg['db_url']}"
    db_su = "--db-su=#{site_cfg['db_su']} --db-su-pw=#{site_cfg['db_su_pw']}"
    
    if site_cfg[:db_sqlite_scheme] then
      sh "#{cmd} #{db_switch} #{account_setup}"
    else
      sh "#{cmd} #{db_switch} #{db_su} #{account_setup}"
    end
  end
  
end
