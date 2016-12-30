<?php
/**
 * @file
 * gie_general.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function gie_general_user_default_roles() {
  $roles = array();

  // Exported role: Intern.
  $roles['Intern'] = array(
    'name' => 'Intern',
    'weight' => 2,
  );

  // Exported role: Microsite Administrator.
  $roles['Microsite Administrator'] = array(
    'name' => 'Microsite Administrator',
    'weight' => 7,
  );

  // Exported role: Superadmin.
  $roles['Superadmin'] = array(
    'name' => 'Superadmin',
    'weight' => 8,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 6,
  );

  return $roles;
}
