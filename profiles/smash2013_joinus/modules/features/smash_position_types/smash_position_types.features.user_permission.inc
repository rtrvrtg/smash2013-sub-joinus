<?php
/**
 * @file
 * smash_position_types.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function smash_position_types_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer it_ticketing_registration registration.
  $permissions['administer it_ticketing_registration registration'] = array(
    'name' => 'administer it_ticketing_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer own it_ticketing_registration registration.
  $permissions['administer own it_ticketing_registration registration'] = array(
    'name' => 'administer own it_ticketing_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer own programming_registration registration.
  $permissions['administer own programming_registration registration'] = array(
    'name' => 'administer own programming_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer own sponsorship_registration registration.
  $permissions['administer own sponsorship_registration registration'] = array(
    'name' => 'administer own sponsorship_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer programming_registration registration.
  $permissions['administer programming_registration registration'] = array(
    'name' => 'administer programming_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer registration.
  $permissions['administer registration'] = array(
    'name' => 'administer registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer registration states.
  $permissions['administer registration states'] = array(
    'name' => 'administer registration states',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer registration types.
  $permissions['administer registration types'] = array(
    'name' => 'administer registration types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer sponsorship_registration registration.
  $permissions['administer sponsorship_registration registration'] = array(
    'name' => 'administer sponsorship_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: create it_ticketing_registration registration.
  $permissions['create it_ticketing_registration registration'] = array(
    'name' => 'create it_ticketing_registration registration',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create it_ticketing_registration registration other anonymous.
  $permissions['create it_ticketing_registration registration other anonymous'] = array(
    'name' => 'create it_ticketing_registration registration other anonymous',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create it_ticketing_registration registration other users.
  $permissions['create it_ticketing_registration registration other users'] = array(
    'name' => 'create it_ticketing_registration registration other users',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create programming_registration registration.
  $permissions['create programming_registration registration'] = array(
    'name' => 'create programming_registration registration',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create programming_registration registration other anonymous.
  $permissions['create programming_registration registration other anonymous'] = array(
    'name' => 'create programming_registration registration other anonymous',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create programming_registration registration other users.
  $permissions['create programming_registration registration other users'] = array(
    'name' => 'create programming_registration registration other users',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create sponsorship_registration registration.
  $permissions['create sponsorship_registration registration'] = array(
    'name' => 'create sponsorship_registration registration',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create sponsorship_registration registration other anonymous.
  $permissions['create sponsorship_registration registration other anonymous'] = array(
    'name' => 'create sponsorship_registration registration other anonymous',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create sponsorship_registration registration other users.
  $permissions['create sponsorship_registration registration other users'] = array(
    'name' => 'create sponsorship_registration registration other users',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete any it_ticketing_registration registration.
  $permissions['delete any it_ticketing_registration registration'] = array(
    'name' => 'delete any it_ticketing_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete any programming_registration registration.
  $permissions['delete any programming_registration registration'] = array(
    'name' => 'delete any programming_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete any sponsorship_registration registration.
  $permissions['delete any sponsorship_registration registration'] = array(
    'name' => 'delete any sponsorship_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete own it_ticketing_registration registration.
  $permissions['delete own it_ticketing_registration registration'] = array(
    'name' => 'delete own it_ticketing_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete own programming_registration registration.
  $permissions['delete own programming_registration registration'] = array(
    'name' => 'delete own programming_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete own sponsorship_registration registration.
  $permissions['delete own sponsorship_registration registration'] = array(
    'name' => 'delete own sponsorship_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update any it_ticketing_registration registration.
  $permissions['update any it_ticketing_registration registration'] = array(
    'name' => 'update any it_ticketing_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update any programming_registration registration.
  $permissions['update any programming_registration registration'] = array(
    'name' => 'update any programming_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update any sponsorship_registration registration.
  $permissions['update any sponsorship_registration registration'] = array(
    'name' => 'update any sponsorship_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update own it_ticketing_registration registration.
  $permissions['update own it_ticketing_registration registration'] = array(
    'name' => 'update own it_ticketing_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update own programming_registration registration.
  $permissions['update own programming_registration registration'] = array(
    'name' => 'update own programming_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update own sponsorship_registration registration.
  $permissions['update own sponsorship_registration registration'] = array(
    'name' => 'update own sponsorship_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: view it_ticketing_registration registration.
  $permissions['view it_ticketing_registration registration'] = array(
    'name' => 'view it_ticketing_registration registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: view own it_ticketing_registration registration.
  $permissions['view own it_ticketing_registration registration'] = array(
    'name' => 'view own it_ticketing_registration registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: view own programming_registration registration.
  $permissions['view own programming_registration registration'] = array(
    'name' => 'view own programming_registration registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: view own sponsorship_registration registration.
  $permissions['view own sponsorship_registration registration'] = array(
    'name' => 'view own sponsorship_registration registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: view programming_registration registration.
  $permissions['view programming_registration registration'] = array(
    'name' => 'view programming_registration registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: view sponsorship_registration registration.
  $permissions['view sponsorship_registration registration'] = array(
    'name' => 'view sponsorship_registration registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
