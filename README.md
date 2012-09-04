Join Us
==============================================

HR application for SMASH! - post and register positions


Required Environment / Minimum Setup
----------------------------------------------

PHP: See the [system requirements for Drupal 7](http://drupal.org/requirements)  
Ruby: 1.9+

We recommend a minimum of 64mb RAM allocated to PHP.

You need [Drush](http://drupal.org/project/drush) to install the site.

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

Document any case where this project deviates from the standard policies.  
Not using git flow? What's the branching model?  
Esoteric release schedule? Document it.


Accessing the Site
----------------------------------------------

Runs on Apache: confirmed.  
Should be set up to be runnable on nginx but needs custom Filecache configuration.


Configuration
----------------------------------------------

Configuration file values are set in *config/drush.yml*

To install the dev version of the site, run  
```
bundle install  
bundle exec rake dev:config_setup
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

Describe a manual smoke test process to ensure that the env is running as it should be.


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

Colour palette is in 
*sites/all/themes/smash_joinus/sass/_base.scss*


Known Issues / Gotchas
----------------------------------------------



Extended Resources
----------------------------------------------

Links to extended resources.
