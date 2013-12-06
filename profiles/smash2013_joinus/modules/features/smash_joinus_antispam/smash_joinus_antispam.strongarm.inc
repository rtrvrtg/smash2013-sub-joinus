<?php
/**
 * @file
 * smash_joinus_antispam.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function smash_joinus_antispam_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spamicide_administration_mode';
  $strongarm->value = 1;
  $export['spamicide_administration_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spamicide_attempt_counter';
  $strongarm->value = 0;
  $export['spamicide_attempt_counter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spamicide_description';
  $strongarm->value = 'To prevent automated spam submissions leave this field empty.';
  $export['spamicide_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spamicide_dir';
  $strongarm->value = 'spamicide';
  $export['spamicide_dir'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spamicide_log_attempts';
  $strongarm->value = 1;
  $export['spamicide_log_attempts'] = $strongarm;

  return $export;
}
