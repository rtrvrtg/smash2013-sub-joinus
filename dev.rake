require 'rails'

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
    if File.exist?(Rails.root.join('config/schema.rb'))
      Rake::Task["db:schema:load"].invoke
    end
    Rake::Task["db:migrate"].invoke
    Rake::Task["db:seed"].invoke
    Rake::Task["db:test:clone"].invoke
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
