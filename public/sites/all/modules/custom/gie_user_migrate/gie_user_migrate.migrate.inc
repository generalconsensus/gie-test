<?php

/**
 * @file
 * Declares our migrations.
 */

/**
 * Implements hook_migrate_api().
 */
function gie_user_migrate_migrate_api()
{
  $api = array(
    'api' => 2,
    'groups' => array(
      'ges' => array(
        'title' => t('GES Content Migrate'),
      ),
    ),
    'migrations' => array(
      'GesUser' => array(
        'class_name' => 'GesUserMigration',
        'group_name' => 'ges',
      ),
    ),
  );

  return $api;
}