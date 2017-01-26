<?php
/**
 * @file
 * gie_long_form_content.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gie_long_form_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create asset with type background_video'.
  $permissions['create asset with type background_video'] = array(
    'name' => 'create asset with type background_video',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'delete asset with type background_video'.
  $permissions['delete asset with type background_video'] = array(
    'name' => 'delete asset with type background_video',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'edit asset with type background_video'.
  $permissions['edit asset with type background_video'] = array(
    'name' => 'edit asset with type background_video',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'use text format long_form_filtered'.
  $permissions['use text format long_form_filtered'] = array(
    'name' => 'use text format long_form_filtered',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format long_form_full'.
  $permissions['use text format long_form_full'] = array(
    'name' => 'use text format long_form_full',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
