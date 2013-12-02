<?php
/**
 * @file
 * smash_position_list.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function smash_position_list_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_private_path';
  $strongarm->value = 'sites/default/private/files';
  $export['file_private_path'] = $strongarm;

  return $export;
}
