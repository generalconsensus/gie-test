<?php
/**
 * @file
 * gie_funding.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gie_funding_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer comment comment_node_funding defaults'.
  $permissions['administer panelizer comment comment_node_funding defaults'] = array(
    'name' => 'administer panelizer comment comment_node_funding defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node funding content'.
  $permissions['administer panelizer node funding content'] = array(
    'name' => 'administer panelizer node funding content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node funding context'.
  $permissions['administer panelizer node funding context'] = array(
    'name' => 'administer panelizer node funding context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node funding defaults'.
  $permissions['administer panelizer node funding defaults'] = array(
    'name' => 'administer panelizer node funding defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node funding layout'.
  $permissions['administer panelizer node funding layout'] = array(
    'name' => 'administer panelizer node funding layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node funding overview'.
  $permissions['administer panelizer node funding overview'] = array(
    'name' => 'administer panelizer node funding overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node funding settings'.
  $permissions['administer panelizer node funding settings'] = array(
    'name' => 'administer panelizer node funding settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create funding content'.
  $permissions['create funding content'] = array(
    'name' => 'create funding content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any funding content'.
  $permissions['delete any funding content'] = array(
    'name' => 'delete any funding content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own funding content'.
  $permissions['delete own funding content'] = array(
    'name' => 'delete own funding content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in funding_type'.
  $permissions['delete terms in funding_type'] = array(
    'name' => 'delete terms in funding_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any funding content'.
  $permissions['edit any funding content'] = array(
    'name' => 'edit any funding content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own funding content'.
  $permissions['edit own funding content'] = array(
    'name' => 'edit own funding content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in funding_type'.
  $permissions['edit terms in funding_type'] = array(
    'name' => 'edit terms in funding_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
