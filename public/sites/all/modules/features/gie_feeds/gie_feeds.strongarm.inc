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
  $strongarm->name = 'default_feeds_importer';
  $strongarm->value = array(
    'csv_importer' => FALSE,
  );
  $export['default_feeds_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_tamper';
  $strongarm->value = array(
    'csv_importer-funded_by-efq_finder' => FALSE,
    'csv_importer-funded_by-explode' => FALSE,
    'csv_importer-sector-explode' => FALSE,
    'csv_importer-region-explode' => FALSE,
    'csv_importer-country_implemented_in-explode' => FALSE,
    'csv_importer-country_created_in-explode' => FALSE,
    'csv_importer-related_organization-explode' => FALSE,
  );
  $export['default_feeds_tamper'] = $strongarm;

  return $export;
}
