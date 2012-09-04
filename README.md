Join Us
==============================================

HR application for SMASH! - post and register positions


Required Environment / Minimum Setup
----------------------------------------------

PHP: See the [system requirements for Drupal 7](http://drupal.org/requirements)  
Ruby: 1.9+

Runs on Apache or Nginx.

We recommend a minimum of 64mb RAM allocated to PHP.

You need [Drush](http://drupal.org/project/drush) to install the site.
It needs to be either version 5.0 or better, or else have the drush make extension installed.

You should be able to install Drush using PEAR like this:

sudo pear channel-discover pear.drush.org && sudo pear install drush/drush

If you want to install Drush manually:

1. Grab the tar.gz file from drupal.org (linked above) and place it on your machine wherever you want it.  
   I just put it in /usr/local/lib.
2. Extract it.  
   tar -xvzf drush-7.x-5.7.tar.gz
   (The version number above may be different.)
3. Symlink the drush executable in the new directory to one of the directories specified in your $PATH.
   eg. cd /usr/local/bin && ln -s /usr/local/lib/drush/drush .
4. Drush may ask you to download a PEAR extension to make it work.
   To do so, you'll need to download it into Drush's lib directory and extract it.
   (In the list of commands below, change the URL and filename below to whatever Drush asks for.)  
   cd /usr/local/lib/drush/lib  
   wget http://download.pear.php.net/package/Console_Table-1.1.3.tgz  
   tar -xvzf Console_Table-1.1.3.tgz


Notable Deviations
----------------------------------------------

You probably don't want to commit anything that is generated by the drush make step.  This includes the Drupal core as well as contributed modules.
If you want to add a contributed module to the repo, add it to the drush makefile, joinus.make.

[Drush Make](http://drupal.org/project/drush_make)
[Makefile syntax](http://drupalcode.org/project/drush_make.git/blob_plain/refs/heads/6.x-2.x:/README.txt)


Accessing the Site
----------------------------------------------

This depends on whether you set up a virtual host, or put it in a directory of your localhost.


Configuration
----------------------------------------------

Configuration file values are set in *config/drush.yml*

To install the dev version of the site, run  
```
bundle install  
bundle exec rake dev:config_files
```
to setup blank config files at config/drush.yml.

Once that's done, run
```
bundle exec rake drush:make  
bundle exec rake drush:install
```
to build your environment.

Walkthrough / Smoke Test
----------------------------------------------

No pre-generated content is created at present, but once some is you should be able to do the following steps:

1. Visit the homepage
2. Click Become a Staff Member
3. Click a department name
4. Click a position name
5. Read the position description and click apply
6. Fill in the application form including uploading files
7. Click Submit Registration
8. Position application is recorded on server


Testing
----------------------------------------------

How do you run the tests?


Staging Environment
----------------------------------------------

Where is it?  
How do I access it?  
Who do I speak with to get access?
How do I deploy to it?


Production Environment
----------------------------------------------

Where is it?  
How do I access it?  
Who do I speak with to get access?  
Is there a CDN? How does it work?  
Is there a particular release process?  
How do I deploy to it?  
How is it monitored?


Design
----------------------------------------------

This site uses Compass & SASS to pre-process CSS.  To update the compiled CSS:

1. Go to *sites/all/themes/smash_joinus*
2. Run `compass compile`

You can also use `compass watch` to update CSS as you edit.

Don't forget to commit any changes in SASS and CSS back to the repo.

Colour palette is in 
*sites/all/themes/smash_joinus/sass/_base.scss*


Known Issues / Gotchas
----------------------------------------------



Extended Resources
----------------------------------------------

Links to extended resources.
