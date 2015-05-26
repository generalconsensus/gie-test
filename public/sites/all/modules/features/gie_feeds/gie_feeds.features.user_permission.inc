<?php
/**
 * @file
 * gie_feeds.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gie_feeds_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'clear csv_importer feeds'.
  $permissions['clear csv_importer feeds'] = array(
    'name' => 'clear csv_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import csv_importer feeds'.
  $permissions['import csv_importer feeds'] = array(
    'name' => 'import csv_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper csv_importer'.
  $permissions['tamper csv_importer'] = array(
    'name' => 'tamper csv_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock csv_importer feeds'.
  $permissions['unlock csv_importer feeds'] = array(
    'name' => 'unlock csv_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
