<?php
/**
 * @file
 * gie_feeds.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gie_feeds_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_tamper';
  $strongarm->value = array(
    'csv_importer-funded_by-efq_finder' => FALSE,
    'csv_importer-funded_by-explode' => FALSE,
  );
  $export['default_feeds_tamper'] = $strongarm;

  return $export;
}
