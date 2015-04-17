<?php
/**
 * @file
 * gie_homepage.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gie_homepage_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create action_card content'.
  $permissions['create action_card content'] = array(
    'name' => 'create action_card content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create homepage content'.
  $permissions['create homepage content'] = array(
    'name' => 'create homepage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create persona content'.
  $permissions['create persona content'] = array(
    'name' => 'create persona content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any action_card content'.
  $permissions['delete any action_card content'] = array(
    'name' => 'delete any action_card content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any homepage content'.
  $permissions['delete any homepage content'] = array(
    'name' => 'delete any homepage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any persona content'.
  $permissions['delete any persona content'] = array(
    'name' => 'delete any persona content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own action_card content'.
  $permissions['delete own action_card content'] = array(
    'name' => 'delete own action_card content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own homepage content'.
  $permissions['delete own homepage content'] = array(
    'name' => 'delete own homepage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own persona content'.
  $permissions['delete own persona content'] = array(
    'name' => 'delete own persona content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any action_card content'.
  $permissions['edit any action_card content'] = array(
    'name' => 'edit any action_card content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any homepage content'.
  $permissions['edit any homepage content'] = array(
    'name' => 'edit any homepage content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any persona content'.
  $permissions['edit any persona content'] = array(
    'name' => 'edit any persona content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own action_card content'.
  $permissions['edit own action_card content'] = array(
    'name' => 'edit own action_card content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own homepage content'.
  $permissions['edit own homepage content'] = array(
    'name' => 'edit own homepage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own persona content'.
  $permissions['edit own persona content'] = array(
    'name' => 'edit own persona content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
