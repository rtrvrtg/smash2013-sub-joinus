<?php
/**
 * @file
 * smash_joinus_antispam.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function smash_joinus_antispam_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer spamicide'.
  $permissions['administer spamicide'] = array(
    'name' => 'administer spamicide',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'spamicide',
  );

  return $permissions;
}
