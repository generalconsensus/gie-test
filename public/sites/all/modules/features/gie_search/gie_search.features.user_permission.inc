<?php
/**
 * @file
 * gie_search.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gie_search_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer facetapi pretty paths'.
  $permissions['administer facetapi pretty paths'] = array(
    'name' => 'administer facetapi pretty paths',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'facetapi_pretty_paths',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  return $permissions;
}
