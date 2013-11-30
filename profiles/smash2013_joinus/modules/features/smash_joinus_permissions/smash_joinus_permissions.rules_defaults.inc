<?php
/**
 * @file
 * smash_joinus_permissions.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function smash_joinus_permissions_default_rules_configuration() {
  $items = array();
  $items['rules_not_smash_user'] = entity_import('rules_config', '{ "rules_not_smash_user" : {
      "LABEL" : "Not SMASH! user",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "NOT text_matches" : {
            "text" : [ "account:mail" ],
            "match" : "@smash.org.au",
            "operation" : "ends"
          }
        }
      ],
      "DO" : [
        { "user_block" : { "account" : [ "account" ] } },
        { "drupal_message" : {
            "message" : "\\u003Cimg src=\\u0022sites\\/all\\/themes\\/smash_joinus\\/images\\/frogout.gif\\u0022 \\/\\u003E",
            "type" : "error"
          }
        },
        { "redirect" : { "url" : "\\u003Cfront\\u003E" } }
      ]
    }
  }');
  $items['rules_user_is_smash_management'] = entity_import('rules_config', '{ "rules_user_is_smash_management" : {
      "LABEL" : "YOU ARE THE SUPERIOR DANCER",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "text_matches" : {
            "text" : [ "account:mail" ],
            "match" : "(geoffrey\\\\.roberts|alice\\\\.perrin|anita\\\\.huynh|clara\\\\.tse|jennifer\\\\.ta|justin\\\\.yem|kenji\\\\.iwasaki|mimi\\\\.lu|noel\\\\.wu|ray\\\\.elinon|renato\\\\.gaylican|samantha\\\\.newman)@smash\\\\.org\\\\.au",
            "operation" : "regex"
          }
        }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "4" : "4" } } } },
        { "drupal_message" : { "message" : "BOOYEAH" } },
        { "user_unblock" : { "account" : [ "account" ] } }
      ]
    }
  }');
  return $items;
}
