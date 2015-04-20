<?php
/**
 * @file
 * gie_program.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gie_program_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create program content'.
  $permissions['create program content'] = array(
    'name' => 'create program content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any program content'.
  $permissions['delete any program content'] = array(
    'name' => 'delete any program content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own program content'.
  $permissions['delete own program content'] = array(
    'name' => 'delete own program content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any program content'.
  $permissions['edit any program content'] = array(
    'name' => 'edit any program content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own program content'.
  $permissions['edit own program content'] = array(
    'name' => 'edit own program content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
