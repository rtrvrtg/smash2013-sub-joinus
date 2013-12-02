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

  // Exported permission: administer crew registration.
  $permissions['administer crew registration'] = array(
    'name' => 'administer crew registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer crew_simplified_ registration.
  $permissions['administer crew_simplified_ registration'] = array(
    'name' => 'administer crew_simplified_ registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer it_ticketing_registration registration.
  $permissions['administer it_ticketing_registration registration'] = array(
    'name' => 'administer it_ticketing_registration registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer logistics registration.
  $permissions['administer logistics registration'] = array(
    'name' => 'administer logistics registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer maid registration.
  $permissions['administer maid registration'] = array(
    'name' => 'administer maid registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer own crew registration.
  $permissions['administer own crew registration'] = array(
    'name' => 'administer own crew registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer own crew_simplified_ registration.
  $permissions['administer own crew_simplified_ registration'] = array(
    'name' => 'administer own crew_simplified_ registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer own it_ticketing_registration registration.
  $permissions['administer own it_ticketing_registration registration'] = array(
    'name' => 'administer own it_ticketing_registration registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer own logistics registration.
  $permissions['administer own logistics registration'] = array(
    'name' => 'administer own logistics registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer own maid registration.
  $permissions['administer own maid registration'] = array(
    'name' => 'administer own maid registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer own programming_registration registration.
  $permissions['administer own programming_registration registration'] = array(
    'name' => 'administer own programming_registration registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer own sponsorship_registration registration.
  $permissions['administer own sponsorship_registration registration'] = array(
    'name' => 'administer own sponsorship_registration registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer programming_registration registration.
  $permissions['administer programming_registration registration'] = array(
    'name' => 'administer programming_registration registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
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
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: create crew registration.
  $permissions['create crew registration'] = array(
    'name' => 'create crew registration',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create crew registration other anonymous.
  $permissions['create crew registration other anonymous'] = array(
    'name' => 'create crew registration other anonymous',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create crew registration other users.
  $permissions['create crew registration other users'] = array(
    'name' => 'create crew registration other users',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create crew_simplified_ registration.
  $permissions['create crew_simplified_ registration'] = array(
    'name' => 'create crew_simplified_ registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create crew_simplified_ registration other anonymous.
  $permissions['create crew_simplified_ registration other anonymous'] = array(
    'name' => 'create crew_simplified_ registration other anonymous',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create crew_simplified_ registration other users.
  $permissions['create crew_simplified_ registration other users'] = array(
    'name' => 'create crew_simplified_ registration other users',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
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

  // Exported permission: create logistics registration.
  $permissions['create logistics registration'] = array(
    'name' => 'create logistics registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: create logistics registration other anonymous.
  $permissions['create logistics registration other anonymous'] = array(
    'name' => 'create logistics registration other anonymous',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create logistics registration other users.
  $permissions['create logistics registration other users'] = array(
    'name' => 'create logistics registration other users',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create maid registration.
  $permissions['create maid registration'] = array(
    'name' => 'create maid registration',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create maid registration other anonymous.
  $permissions['create maid registration other anonymous'] = array(
    'name' => 'create maid registration other anonymous',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create maid registration other users.
  $permissions['create maid registration other users'] = array(
    'name' => 'create maid registration other users',
    'roles' => array(
      0 => 'authenticated user',
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

  // Exported permission: delete any crew registration.
  $permissions['delete any crew registration'] = array(
    'name' => 'delete any crew registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete any crew_simplified_ registration.
  $permissions['delete any crew_simplified_ registration'] = array(
    'name' => 'delete any crew_simplified_ registration',
    'roles' => array(
      0 => 'administrator',
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

  // Exported permission: delete any logistics registration.
  $permissions['delete any logistics registration'] = array(
    'name' => 'delete any logistics registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete any maid registration.
  $permissions['delete any maid registration'] = array(
    'name' => 'delete any maid registration',
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

  // Exported permission: delete own crew registration.
  $permissions['delete own crew registration'] = array(
    'name' => 'delete own crew registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete own crew_simplified_ registration.
  $permissions['delete own crew_simplified_ registration'] = array(
    'name' => 'delete own crew_simplified_ registration',
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

  // Exported permission: delete own logistics registration.
  $permissions['delete own logistics registration'] = array(
    'name' => 'delete own logistics registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete own maid registration.
  $permissions['delete own maid registration'] = array(
    'name' => 'delete own maid registration',
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

  // Exported permission: edit crew registration state.
  $permissions['edit crew registration state'] = array(
    'name' => 'edit crew registration state',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: edit crew_simplified_ registration state.
  $permissions['edit crew_simplified_ registration state'] = array(
    'name' => 'edit crew_simplified_ registration state',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: edit it_ticketing_registration registration state.
  $permissions['edit it_ticketing_registration registration state'] = array(
    'name' => 'edit it_ticketing_registration registration state',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: edit logistics registration state.
  $permissions['edit logistics registration state'] = array(
    'name' => 'edit logistics registration state',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: edit maid registration state.
  $permissions['edit maid registration state'] = array(
    'name' => 'edit maid registration state',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: edit programming_registration registration state.
  $permissions['edit programming_registration registration state'] = array(
    'name' => 'edit programming_registration registration state',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: edit sponsorship_registration registration state.
  $permissions['edit sponsorship_registration registration state'] = array(
    'name' => 'edit sponsorship_registration registration state',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update any crew registration.
  $permissions['update any crew registration'] = array(
    'name' => 'update any crew registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update any crew_simplified_ registration.
  $permissions['update any crew_simplified_ registration'] = array(
    'name' => 'update any crew_simplified_ registration',
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

  // Exported permission: update any logistics registration.
  $permissions['update any logistics registration'] = array(
    'name' => 'update any logistics registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update any maid registration.
  $permissions['update any maid registration'] = array(
    'name' => 'update any maid registration',
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

  // Exported permission: update own crew registration.
  $permissions['update own crew registration'] = array(
    'name' => 'update own crew registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update own crew_simplified_ registration.
  $permissions['update own crew_simplified_ registration'] = array(
    'name' => 'update own crew_simplified_ registration',
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

  // Exported permission: update own logistics registration.
  $permissions['update own logistics registration'] = array(
    'name' => 'update own logistics registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update own maid registration.
  $permissions['update own maid registration'] = array(
    'name' => 'update own maid registration',
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

  // Exported permission: view crew registration.
  $permissions['view crew registration'] = array(
    'name' => 'view crew registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: view crew_simplified_ registration.
  $permissions['view crew_simplified_ registration'] = array(
    'name' => 'view crew_simplified_ registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
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

  // Exported permission: view logistics registration.
  $permissions['view logistics registration'] = array(
    'name' => 'view logistics registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: view maid registration.
  $permissions['view maid registration'] = array(
    'name' => 'view maid registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: view own crew registration.
  $permissions['view own crew registration'] = array(
    'name' => 'view own crew registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: view own crew_simplified_ registration.
  $permissions['view own crew_simplified_ registration'] = array(
    'name' => 'view own crew_simplified_ registration',
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

  // Exported permission: view own logistics registration.
  $permissions['view own logistics registration'] = array(
    'name' => 'view own logistics registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: view own maid registration.
  $permissions['view own maid registration'] = array(
    'name' => 'view own maid registration',
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
