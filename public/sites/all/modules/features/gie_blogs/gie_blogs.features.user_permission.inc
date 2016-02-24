<?php
/**
 * @file
 * gie_blogs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gie_blogs_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create blogs content'.
  $permissions['create blogs content'] = array(
    'name' => 'create blogs content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any blogs content'.
  $permissions['delete any blogs content'] = array(
    'name' => 'delete any blogs content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own blogs content'.
  $permissions['delete own blogs content'] = array(
    'name' => 'delete own blogs content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any blogs content'.
  $permissions['edit any blogs content'] = array(
    'name' => 'edit any blogs content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own blogs content'.
  $permissions['edit own blogs content'] = array(
    'name' => 'edit own blogs content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
