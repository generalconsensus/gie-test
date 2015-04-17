<?php
/**
 * @file
 * gie_innovation.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gie_innovation_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node innovation content'.
  $permissions['administer panelizer node innovation content'] = array(
    'name' => 'administer panelizer node innovation content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node innovation context'.
  $permissions['administer panelizer node innovation context'] = array(
    'name' => 'administer panelizer node innovation context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node innovation defaults'.
  $permissions['administer panelizer node innovation defaults'] = array(
    'name' => 'administer panelizer node innovation defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node innovation layout'.
  $permissions['administer panelizer node innovation layout'] = array(
    'name' => 'administer panelizer node innovation layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node innovation overview'.
  $permissions['administer panelizer node innovation overview'] = array(
    'name' => 'administer panelizer node innovation overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node innovation settings'.
  $permissions['administer panelizer node innovation settings'] = array(
    'name' => 'administer panelizer node innovation settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create innovation content'.
  $permissions['create innovation content'] = array(
    'name' => 'create innovation content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any innovation content'.
  $permissions['delete any innovation content'] = array(
    'name' => 'delete any innovation content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own innovation content'.
  $permissions['delete own innovation content'] = array(
    'name' => 'delete own innovation content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any innovation content'.
  $permissions['edit any innovation content'] = array(
    'name' => 'edit any innovation content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own innovation content'.
  $permissions['edit own innovation content'] = array(
    'name' => 'edit own innovation content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
