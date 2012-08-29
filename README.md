Join Us
==============================================

HR application for SMASH! - post and register positions


Required Environment / Minimum Setup
----------------------------------------------

PHP: See the [system requirements for Drupal 7](http://drupal.org/requirements)  
Ruby: 1.8+

We recommend a minimum of 64mb RAM allocated to PHP.


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
