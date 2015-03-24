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
  $ds_fieldsetting->id = 'comment|comment_node_innovation|default';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_innovation';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
    'author' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['comment|comment_node_innovation|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_innovation_non_references|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_innovation_non_references';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'non_ref_display' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['field_collection_item|field_innovation_non_references|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|innovation|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'innovation';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '10',
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
  $ds_layout->id = 'comment|comment_node_innovation|default';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_innovation';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'slat';
  $ds_layout->settings = array(
    'regions' => array(
      'media' => array(
        0 => 'author',
      ),
      'main_content' => array(
        1 => 'post_date',
        2 => 'comment_body',
        3 => 'links',
      ),
    ),
    'fields' => array(
      'author' => 'media',
      'post_date' => 'main_content',
      'comment_body' => 'main_content',
      'links' => 'main_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'media' => 'div',
      'main_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['comment|comment_node_innovation|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_innovation|form';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_innovation';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'author',
        1 => 'comment_body',
      ),
      'hidden' => array(
        2 => 'subject_field',
        3 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'author' => 'ds_content',
      'comment_body' => 'ds_content',
      'subject_field' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['comment|comment_node_innovation|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_innovation_non_references|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_innovation_non_references';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_non_ref_photo',
        1 => 'non_ref_display',
      ),
    ),
    'fields' => array(
      'field_non_ref_photo' => 'ds_content',
      'non_ref_display' => 'ds_content',
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
  $export['field_collection_item|field_innovation_non_references|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_innovation_non_references|form';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_innovation_non_references';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_non_ref_first_name',
        1 => 'field_non_ref_last_name',
        2 => 'field_non_ref_email',
      ),
      'hidden' => array(
        3 => 'field_non_ref_photo',
        4 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_non_ref_first_name' => 'ds_content',
      'field_non_ref_last_name' => 'ds_content',
      'field_non_ref_email' => 'ds_content',
      'field_non_ref_photo' => 'hidden',
      '_add_existing_field' => 'hidden',
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
  $export['field_collection_item|field_innovation_non_references|form'] = $ds_layout;

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
