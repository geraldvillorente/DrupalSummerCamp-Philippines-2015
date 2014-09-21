<?php
/**
 * @file
 * config_user_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function config_user_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  return $permissions;
}
