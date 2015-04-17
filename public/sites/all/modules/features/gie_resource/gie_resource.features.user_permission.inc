<?php
/**
 * @file
 * gie_resource.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gie_resource_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer comment comment_node_resource defaults'.
  $permissions['administer panelizer comment comment_node_resource defaults'] = array(
    'name' => 'administer panelizer comment comment_node_resource defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node resource content'.
  $permissions['administer panelizer node resource content'] = array(
    'name' => 'administer panelizer node resource content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node resource context'.
  $permissions['administer panelizer node resource context'] = array(
    'name' => 'administer panelizer node resource context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node resource defaults'.
  $permissions['administer panelizer node resource defaults'] = array(
    'name' => 'administer panelizer node resource defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node resource layout'.
  $permissions['administer panelizer node resource layout'] = array(
    'name' => 'administer panelizer node resource layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node resource overview'.
  $permissions['administer panelizer node resource overview'] = array(
    'name' => 'administer panelizer node resource overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node resource settings'.
  $permissions['administer panelizer node resource settings'] = array(
    'name' => 'administer panelizer node resource settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term resource_type defaults'.
  $permissions['administer panelizer taxonomy_term resource_type defaults'] = array(
    'name' => 'administer panelizer taxonomy_term resource_type defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create resource content'.
  $permissions['create resource content'] = array(
    'name' => 'create resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any resource content'.
  $permissions['delete any resource content'] = array(
    'name' => 'delete any resource content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own resource content'.
  $permissions['delete own resource content'] = array(
    'name' => 'delete own resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in resource_type'.
  $permissions['delete terms in resource_type'] = array(
    'name' => 'delete terms in resource_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any resource content'.
  $permissions['edit any resource content'] = array(
    'name' => 'edit any resource content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own resource content'.
  $permissions['edit own resource content'] = array(
    'name' => 'edit own resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in resource_type'.
  $permissions['edit terms in resource_type'] = array(
    'name' => 'edit terms in resource_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
