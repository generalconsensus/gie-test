<?php
/**
 * @file
 * gie_assets.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gie_assets_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'show format selection for asset'.
  $permissions['show format selection for asset'] = array(
    'name' => 'show format selection for asset',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  return $permissions;
}
