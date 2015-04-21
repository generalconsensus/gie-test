<?php
/**
 * @file
 * gie_taxonomies.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function gie_taxonomies_user_default_roles() {
  $roles = array();

  // Exported role: Location Manager.
  $roles['Location Manager'] = array(
    'name' => 'Location Manager',
    'weight' => 5,
  );

  // Exported role: Program Community Manager.
  $roles['Program Community Manager'] = array(
    'name' => 'Program Community Manager',
    'weight' => 6,
  );

  // Exported role: Sector Manager.
  $roles['Sector Manager'] = array(
    'name' => 'Sector Manager',
    'weight' => 3,
  );

  // Exported role: Topic Manager.
  $roles['Topic Manager'] = array(
    'name' => 'Topic Manager',
    'weight' => 4,
  );

  return $roles;
}
