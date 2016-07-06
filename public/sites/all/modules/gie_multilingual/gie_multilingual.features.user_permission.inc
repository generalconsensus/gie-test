<?php
/**
 * @file
 * gie_multilingual.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gie_multilingual_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer lingotek'.
  $permissions['administer lingotek'] = array(
    'name' => 'administer lingotek',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'lingotek',
  );

  // Exported permission: 'manage projects'.
  $permissions['manage projects'] = array(
    'name' => 'manage projects',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'lingotek',
  );

  // Exported permission: 'translation'.
  $permissions['translation'] = array(
    'name' => 'translation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'lingotek',
  );

  // Exported permission: 'use lingotek developer tools'.
  $permissions['use lingotek developer tools'] = array(
    'name' => 'use lingotek developer tools',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'lingotek',
  );

  return $permissions;
}
