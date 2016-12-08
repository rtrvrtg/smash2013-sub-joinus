<?php
/**
 * @file
 * smash_joinus_mail.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function smash_joinus_mail_default_rules_configuration() {
  $items = array();
  $items['rules_registration_notifications'] = entity_import('rules_config', '{ "rules_registration_notifications" : {
      "LABEL" : "Registration Notifications",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "registration" ],
      "ON" : { "registration_insert" : [] },
      "DO" : []
    }
  }');
  return $items;
}
