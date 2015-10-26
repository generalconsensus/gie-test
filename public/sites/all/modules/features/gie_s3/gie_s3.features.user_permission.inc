<?php
/**
 * @file
 * gie_s3.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gie_s3_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer s3fs'.
  $permissions['administer s3fs'] = array(
    'name' => 'administer s3fs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 's3fs',
  );

  return $permissions;
}
