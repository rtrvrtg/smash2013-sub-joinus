<?php
/**
 * @file
 * smash_joinus_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function smash_joinus_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'node',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => 'management',
    ),
    'module' => 'user',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: create department content.
  $permissions['create department content'] = array(
    'name' => 'create department content',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'node',
  );

  // Exported permission: create position content.
  $permissions['create position content'] = array(
    'name' => 'create position content',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any department content.
  $permissions['delete any department content'] = array(
    'name' => 'delete any department content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any position content.
  $permissions['delete any position content'] = array(
    'name' => 'delete any position content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own department content.
  $permissions['delete own department content'] = array(
    'name' => 'delete own department content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own position content.
  $permissions['delete own position content'] = array(
    'name' => 'delete own position content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any department content.
  $permissions['edit any department content'] = array(
    'name' => 'edit any department content',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any position content.
  $permissions['edit any position content'] = array(
    'name' => 'edit any position content',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own department content.
  $permissions['edit own department content'] = array(
    'name' => 'edit own department content',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own position content.
  $permissions['edit own position content'] = array(
    'name' => 'edit own position content',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'node',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'management',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format markdown.
  $permissions['use text format markdown'] = array(
    'name' => 'use text format markdown',
    'roles' => array(
      0 => 'administrator',
      1 => 'management',
    ),
    'module' => 'filter',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
