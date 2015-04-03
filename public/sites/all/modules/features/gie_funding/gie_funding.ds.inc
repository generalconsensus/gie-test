<?php
/**
 * @file
 * gie_funding.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gie_funding_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'comment|comment_node_funding|default';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_funding';
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
  $export['comment|comment_node_funding|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|funding|listing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'funding';
  $ds_fieldsetting->view_mode = 'listing';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'View',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
        'field_delimiter' => '',
        'linked_field' => array(
          'linked' => 0,
          'destination' => '',
          'advanced' => array(
            'title' => '',
            'target' => '',
            'class' => '',
            'rel' => '',
            'text' => '',
          ),
        ),
      ),
    ),
    'field_funding_deadline' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Due by',
          'lb-el' => 'span',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_funding_effort' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Time to Apply',
          'lb-el' => 'span',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_funding_eligibility' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Eligibility',
          'lb-el' => 'span',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_funding_topic' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Topics',
          'lb-el' => 'span',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_funding_grant_award_value' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => ' | ',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|funding|listing'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|funding|teaser_date';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'funding';
  $ds_fieldsetting->view_mode = 'teaser_date';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_gie_general_slash_no_time',
    ),
  );
  $export['node|funding|teaser_date'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_funding_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_funding|default';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_funding';
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
  $export['comment|comment_node_funding|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_funding|form';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_funding';
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
  $export['comment|comment_node_funding|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|funding|listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'funding';
  $ds_layout->view_mode = 'listing';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_funding_grant_award_value',
        2 => 'field_funding_deadline',
        3 => 'field_funding_eligibility',
        4 => 'field_funding_effort',
        5 => 'field_funding_topic',
        6 => 'node_link',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_funding_grant_award_value' => 'ds_content',
      'field_funding_deadline' => 'ds_content',
      'field_funding_eligibility' => 'ds_content',
      'field_funding_effort' => 'ds_content',
      'field_funding_topic' => 'ds_content',
      'node_link' => 'ds_content',
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
  $export['node|funding|listing'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|funding|teaser_date';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'funding';
  $ds_layout->view_mode = 'teaser_date';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'post_date',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'post_date' => 'ds_content',
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
  $export['node|funding|teaser_date'] = $ds_layout;

  return $export;
}