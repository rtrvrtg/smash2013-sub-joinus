<?php
/**
 * @file
 * smash_position_types.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function smash_position_types_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Slug-Safe';
  $rule->name = 'slug_safe';
  $rule->field_name = 'field_url_slug';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'department';
  $rule->validator = 'field_validation_regex_validator';
  $rule->settings = array(
    'data' => '[a-z0-9-]*',
    'errors' => 0,
  );
  $rule->error_message = 'Only use lowercase A-Z, 0-9 and dashes.';
  $export['slug_safe'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Slug-Safe';
  $rule->name = 'slug_safe_position';
  $rule->field_name = 'field_url_slug';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'position';
  $rule->validator = 'field_validation_regex_validator';
  $rule->settings = array(
    'data' => '[a-z0-9-]*',
    'errors' => 0,
  );
  $rule->error_message = 'Only use lowercase A-Z, 0-9 and dashes.';
  $export['slug_safe_position'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Unique Slug';
  $rule->name = 'unique_slug';
  $rule->field_name = 'field_url_slug';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'department';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'bundle',
    'errors' => 0,
  );
  $rule->error_message = 'Slug must be unique.';
  $export['unique_slug'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Unique Slug Position';
  $rule->name = 'unique_slug_position';
  $rule->field_name = 'field_url_slug';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'position';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'bundle',
    'errors' => 0,
  );
  $rule->error_message = 'Slug must be unique.';
  $export['unique_slug_position'] = $rule;

  return $export;
}
