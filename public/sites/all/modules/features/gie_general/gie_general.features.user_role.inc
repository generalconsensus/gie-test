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

  return $roles;
}
