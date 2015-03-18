<?php
/**
 * @file
 * gie_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gie_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_site_hash';
  $strongarm->value = '6kxw67';
  $export['search_api_solr_site_hash'] = $strongarm;

  return $export;
}
