<?php
/**
 * @file
 * content_session.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function content_session_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_day'.
  $permissions['create field_day'] = array(
    'name' => 'create field_day',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_time'.
  $permissions['create field_time'] = array(
    'name' => 'create field_time',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_day'.
  $permissions['edit field_day'] = array(
    'name' => 'edit field_day',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_time'.
  $permissions['edit field_time'] = array(
    'name' => 'edit field_time',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_day'.
  $permissions['edit own field_day'] = array(
    'name' => 'edit own field_day',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_time'.
  $permissions['edit own field_time'] = array(
    'name' => 'edit own field_time',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_day'.
  $permissions['view field_day'] = array(
    'name' => 'view field_day',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_time'.
  $permissions['view field_time'] = array(
    'name' => 'view field_time',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_day'.
  $permissions['view own field_day'] = array(
    'name' => 'view own field_day',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_time'.
  $permissions['view own field_time'] = array(
    'name' => 'view own field_time',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
