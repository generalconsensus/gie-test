<?php
/**
 * @file
 * gie_general.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function gie_general_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'listing';
  $ds_view_mode->label = 'Listing';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
    'user' => 'user',
  );
  $export['listing'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser_date';
  $ds_view_mode->label = 'Teaser with date';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['teaser_date'] = $ds_view_mode;

  return $export;
}
