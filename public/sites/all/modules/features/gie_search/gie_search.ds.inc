<?php
/**
 * @file
 * gie_search.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function gie_search_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'search_listing';
  $ds_view_mode->label = 'Search listing';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['search_listing'] = $ds_view_mode;

  return $export;
}
