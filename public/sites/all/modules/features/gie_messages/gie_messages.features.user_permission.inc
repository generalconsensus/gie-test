<?php
/**
 * @file
 * gie_messages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gie_messages_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer smtp module'.
  $permissions['administer smtp module'] = array(
    'name' => 'administer smtp module',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'smtp',
  );

  return $permissions;
}
