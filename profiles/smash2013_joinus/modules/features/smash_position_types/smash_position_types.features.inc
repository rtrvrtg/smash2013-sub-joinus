<?php
/**
 * @file
 * smash_position_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function smash_position_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function smash_position_types_node_info() {
  $items = array(
    'department' => array(
      'name' => t('Department'),
      'base' => 'node_content',
      'description' => t('A department of SMASH!'),
      'has_title' => '1',
      'title_label' => t('Department Name'),
      'help' => '',
    ),
    'position' => array(
      'name' => t('Position'),
      'base' => 'node_content',
      'description' => t('A staff or crew position at SMASH!'),
      'has_title' => '1',
      'title_label' => t('Position Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_registration_state().
 */
function smash_position_types_default_registration_state() {
  $items = array();
  $items['canceled'] = entity_import('registration_state', '{
    "name" : "canceled",
    "label" : "Canceled",
    "description" : "Registration was cancelled.",
    "default_state" : "0",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "1",
    "weight" : "13",
    "rdf_mapping" : []
  }');
  $items['complete'] = entity_import('registration_state', '{
    "name" : "complete",
    "label" : "Accepted",
    "description" : "Registration was accepted.",
    "default_state" : "0",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "1",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  $items['pending'] = entity_import('registration_state', '{
    "name" : "pending",
    "label" : "Pending",
    "description" : "Registration is pending.",
    "default_state" : "1",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "0",
    "weight" : "-15",
    "rdf_mapping" : []
  }');
  $items['registration_viewed'] = entity_import('registration_state', '{
    "name" : "registration_viewed",
    "label" : "Viewed",
    "description" : "Registration has been viewed.",
    "default_state" : "0",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "1",
    "weight" : "-13",
    "rdf_mapping" : []
  }');
  $items['rejected'] = entity_import('registration_state', '{
    "name" : "rejected",
    "label" : "Rejected",
    "description" : "Registration was rejected.",
    "default_state" : "0",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "1",
    "weight" : "9",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function smash_position_types_default_registration_type() {
  $items = array();
  $items['crew'] = entity_import('registration_type', '{
    "name" : "crew",
    "label" : "Crew",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  $items['crew_simplified_'] = entity_import('registration_type', '{
    "name" : "crew_simplified_",
    "label" : "Crew (simplified)",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  $items['exhibitors_and_sponsorship'] = entity_import('registration_type', '{
    "name" : "exhibitors_and_sponsorship",
    "label" : "Exhibitors and Sponsorship",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  $items['guest_relations'] = entity_import('registration_type', '{
    "name" : "guest_relations",
    "label" : "Guest Relations",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  $items['it_ticketing_registration'] = entity_import('registration_type', '{
    "name" : "it_ticketing_registration",
    "label" : "IT Registration",
    "locked" : "0",
    "default_state" : null,
    "weight" : "0",
    "rdf_mapping" : [],
    "data" : { "held_expire" : "1", "held_expire_state" : "canceled" }
  }');
  $items['logistics'] = entity_import('registration_type', '{
    "name" : "logistics",
    "label" : "Logistics",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  $items['maid'] = entity_import('registration_type', '{
    "name" : "maid",
    "label" : "Maid Cafe",
    "locked" : "0",
    "default_state" : null,
    "weight" : "0",
    "rdf_mapping" : [],
    "data" : { "held_expire" : "1", "held_expire_state" : "canceled" }
  }');
  $items['marketing'] = entity_import('registration_type', '{
    "name" : "marketing",
    "label" : "Marketing",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  $items['marketing_visual_graphics'] = entity_import('registration_type', '{
    "name" : "marketing_visual_graphics",
    "label" : "Marketing - Visual Graphics",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  $items['marketing_website_co_ordinator'] = entity_import('registration_type', '{
    "name" : "marketing_website_co_ordinator",
    "label" : "Marketing - Website Co-ordinator",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  $items['mc'] = entity_import('registration_type', '{
    "name" : "mc",
    "label" : "MC",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  $items['programming_registration'] = entity_import('registration_type', '{
    "name" : "programming_registration",
    "label" : "Programming Registration",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  $items['sponsorship_registration'] = entity_import('registration_type', '{
    "name" : "sponsorship_registration",
    "label" : "Sponsorship Registration",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  $items['ticketing_positions'] = entity_import('registration_type', '{
    "name" : "ticketing_positions",
    "label" : "Ticketing Positions",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
