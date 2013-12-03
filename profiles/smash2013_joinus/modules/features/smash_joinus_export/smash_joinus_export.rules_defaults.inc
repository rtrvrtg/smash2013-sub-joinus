<?php
/**
 * @file
 * smash_joinus_export.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function smash_joinus_export_default_rules_configuration() {
  $items = array();
  $items['rules_nightly_manifest_mailout'] = entity_import('rules_config', '{ "rules_nightly_manifest_mailout" : {
      "LABEL" : "Nightly Manifest Mailout",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [
        "cron_roles",
        "views_rules",
        "rules",
        "render_view_to_file",
        "mimemail",
        "rules_scheduler"
      ],
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "temp_add_roles" : { "roles" : { "value" : { "3" : "3" } } } },
              { "VIEW LOOP" : {
                  "VIEW" : "positions_with_manifests",
                  "DISPLAY" : "views_rules_1",
                  "ROW VARIABLES" : { "nid" : { "nid" : "Nid" } },
                  "DO" : [
                    { "entity_fetch" : {
                        "USING" : { "type" : "node", "id" : [ "nid:nid" ] },
                        "PROVIDE" : { "entity_fetched" : { "node" : "Fetched Position" } }
                      }
                    },
                    { "render_view_to_file_action_render" : {
                        "USING" : {
                          "view" : "registration_list|views_data_export_1",
                          "args" : "[node:title]",
                          "filename" : "private:\\/\\/[node:title].csv"
                        },
                        "PROVIDE" : { "file_uri" : { "file_uri" : "A file URI" } }
                      }
                    },
                    { "render_view_to_file_action_get_path" : {
                        "USING" : { "file_uri" : "[file-uri:value]" },
                        "PROVIDE" : { "file_path" : { "file_path" : "The file path" } }
                      }
                    },
                    { "mimemail" : {
                        "key" : "reg-manifest-[node:nid]",
                        "to" : "[node:field-position-owners]",
                        "subject" : "[SMASH! Join Us] All registrations for [node:title] as of [site:current-date]",
                        "body" : "Enclosed is the CSV registration manifest for [node:title] as of [site:current-date].\\r\\nOpen this up in Microsoft Excel.",
                        "plaintext" : "Enclosed is the CSV registration manifest for [node:title] as of [site:current-date].\\r\\nOpen this up in Microsoft Excel.",
                        "attachments" : "[file-path:value]",
                        "language" : [ "" ]
                      }
                    }
                  ]
                }
              },
              { "pop_temp_roles" : [] }
            ],
            "LABEL" : "Build and send manifest"
          }
        },
        { "RULE" : {
            "DO" : [
              { "schedule" : {
                  "component" : "rules_nightly_manifest_mailout",
                  "date" : "tomorrow 03:00",
                  "identifier" : "nightly1"
                }
              }
            ],
            "LABEL" : "Requeue for execution tomorrow"
          }
        }
      ]
    }
  }');
  return $items;
}
