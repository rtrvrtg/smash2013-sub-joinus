<?php
/**
 * @file
 * smash_joinus_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function smash_joinus_permissions_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: management.
  $roles['management'] = array(
    'name' => 'management',
    'weight' => 3,
  );

  return $roles;
}
