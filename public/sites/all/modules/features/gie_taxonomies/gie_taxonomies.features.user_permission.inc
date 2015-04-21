<?php
/**
 * @file
 * gie_taxonomies.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gie_taxonomies_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit terms in program_discussions'.
  $permissions['edit terms in program_discussions'] = array(
    'name' => 'edit terms in program_discussions',
    'roles' => array(
      'Program Community Manager' => 'Program Community Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in region'.
  $permissions['edit terms in region'] = array(
    'name' => 'edit terms in region',
    'roles' => array(
      'Location Manager' => 'Location Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in sector'.
  $permissions['edit terms in sector'] = array(
    'name' => 'edit terms in sector',
    'roles' => array(
      'Sector Manager' => 'Sector Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in topic'.
  $permissions['edit terms in topic'] = array(
    'name' => 'edit terms in topic',
    'roles' => array(
      'Topic Manager' => 'Topic Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
