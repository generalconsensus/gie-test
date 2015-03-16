<?php
/**
 * @file
 * gie_innovation.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gie_innovation_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|innovation|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'innovation';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '24',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|innovation|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_innovation_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|innovation|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'innovation';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_innovation_stats',
        1 => 'field_innovation_status_update',
        2 => 'field_innovation_works',
        3 => 'field_innovation_evidence',
        4 => 'field_innovation_proof_evidence',
        5 => 'field_innovation_testers',
        6 => 'field_innovation_impact',
        7 => 'field_innovation_steps',
        8 => 'field_innovation_news',
        9 => 'field_innovation_resources',
        10 => 'comments',
        11 => 'field_innovation_funding_goal',
        12 => 'field_innovation_type',
        13 => 'field_innovation_stage',
        14 => 'field_innovation_cost_per_unit',
        15 => 'field_testing_phase',
        16 => 'field_innovation_created',
        17 => 'field_innovation_implemented',
        18 => 'field_innovation_sector',
        19 => 'field_innovation_program',
      ),
    ),
    'fields' => array(
      'group_innovation_stats' => 'ds_content',
      'field_innovation_status_update' => 'ds_content',
      'field_innovation_works' => 'ds_content',
      'field_innovation_evidence' => 'ds_content',
      'field_innovation_proof_evidence' => 'ds_content',
      'field_innovation_testers' => 'ds_content',
      'field_innovation_impact' => 'ds_content',
      'field_innovation_steps' => 'ds_content',
      'field_innovation_news' => 'ds_content',
      'field_innovation_resources' => 'ds_content',
      'comments' => 'ds_content',
      'field_innovation_funding_goal' => 'ds_content',
      'field_innovation_type' => 'ds_content',
      'field_innovation_stage' => 'ds_content',
      'field_innovation_cost_per_unit' => 'ds_content',
      'field_testing_phase' => 'ds_content',
      'field_innovation_created' => 'ds_content',
      'field_innovation_implemented' => 'ds_content',
      'field_innovation_sector' => 'ds_content',
      'field_innovation_program' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|innovation|full'] = $ds_layout;

  return $export;
}
