<?php
/**
 * @file
 * smash_position_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function smash_position_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
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
    "show_on_form" : "1",
    "weight" : "-12",
    "rdf_mapping" : []
  }');
  $items['complete'] = entity_import('registration_state', '{
    "name" : "complete",
    "label" : "Accepted",
    "description" : "Registration was accepted.",
    "default_state" : "0",
    "active" : "1",
    "show_on_form" : "1",
    "weight" : "-14",
    "rdf_mapping" : []
  }');
  $items['pending'] = entity_import('registration_state', '{
    "name" : "pending",
    "label" : "Pending",
    "description" : "Registration is pending.",
    "default_state" : "1",
    "active" : "1",
    "show_on_form" : "0",
    "weight" : "-15",
    "rdf_mapping" : []
  }');
  $items['rejected'] = entity_import('registration_state', '{
    "name" : "rejected",
    "label" : "Rejected",
    "description" : "Registration was rejected.",
    "default_state" : "0",
    "active" : "1",
    "show_on_form" : "1",
    "weight" : "-13",
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
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['crew_simplified_'] = entity_import('registration_type', '{
    "name" : "crew_simplified_",
    "label" : "Crew (simplified)",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['it_ticketing_registration'] = entity_import('registration_type', '{
    "name" : "it_ticketing_registration",
    "label" : "IT \\u0026 Ticketing Registration",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['logistics'] = entity_import('registration_type', '{
    "name" : "logistics",
    "label" : "Logistics",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['maid'] = entity_import('registration_type', '{
    "name" : "maid",
    "label" : "Maid",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['programming_registration'] = entity_import('registration_type', '{
    "name" : "programming_registration",
    "label" : "Programming Registration",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['sponsorship_registration'] = entity_import('registration_type', '{
    "name" : "sponsorship_registration",
    "label" : "Sponsorship Registration",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
