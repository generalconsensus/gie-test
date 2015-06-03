<?php
/**
 * @file
 * events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function events_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'flag attending'.
  $permissions['flag attending'] = array(
    'name' => 'flag attending',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag attending'.
  $permissions['unflag attending'] = array(
    'name' => 'unflag attending',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
