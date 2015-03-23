<?php
/**
 * @file
 * gie_dev.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gie_dev_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer stage_file_proxy settings'.
  $permissions['administer stage_file_proxy settings'] = array(
    'name' => 'administer stage_file_proxy settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'stage_file_proxy',
  );

  return $permissions;
}
