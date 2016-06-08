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

  // Exported permission: 'use text format long_form_filtered'.
  $permissions['use text format long_form_filtered'] = array(
    'name' => 'use text format long_form_filtered',
    'roles' => array(
      'Intern' => 'Intern',
      'Microsite Administrator' => 'Microsite Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format long_form_full'.
  $permissions['use text format long_form_full'] = array(
    'name' => 'use text format long_form_full',
    'roles' => array(
      'Intern' => 'Intern',
      'Microsite Administrator' => 'Microsite Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
