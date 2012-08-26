require 'active_record'
require 'yaml'
require 'fileutils'
require 'logger'

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

namespace :drush do

  desc "Basic development setup process"
  task :setup, :env do |cmd, args|
    env = args[:env] || "development"
    Rake::Task['environment'].invoke(env)
    
    if Rails.env.production?
      raise StandardError, "You probably didn't mean to setup the production database"
    end
    Rake::Task["drush:make"].invoke
    Rake::Task["drush:install"].invoke
  end
  
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
    
    cmd = "drush site-install smash2013_joinus"
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
