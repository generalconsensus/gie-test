<?php
/**
 * @file
 * gie_needs.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gie_needs_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|needs|details';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'needs';
  $ds_fieldsetting->view_mode = 'details';
  $ds_fieldsetting->settings = array(
    'field_needs_type' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_needs_related_organization' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_needs_related_program' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_needs_amount_money' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|needs|details'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|needs|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'needs';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'ds_post_date_gie_general_slash_no_time',
    ),
    'field_needs_instructions' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
        ),
      ),
    ),
    'field_needs_qualifications' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
        ),
      ),
    ),
    'field_needs_certifications' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
        ),
      ),
    ),
  );
  $export['node|needs|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|needs|listing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'needs';
  $ds_fieldsetting->view_mode = 'listing';
  $ds_fieldsetting->settings = array(
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'node__title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'node__summary',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_needs_location' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Location',
          'lb-el' => 'span',
          'lb-cl' => 'card__list-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'card__list--split',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'card__list-content',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|needs|listing'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|needs|page_header';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'needs';
  $ds_fieldsetting->view_mode = 'page_header';
  $ds_fieldsetting->settings = array(
    'field_needs_date_needed' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Date Needed By',
          'lb-el' => 'span',
          'lb-cl' => 'card__list-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'card__list--split',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'card__list-content',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_needs_point_of_contact' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'card__author',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|needs|page_header'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_needs_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|needs|details';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'needs';
  $ds_layout->view_mode = 'details';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_needs_type',
        1 => 'group_details',
        2 => 'field_needs_date_needed',
        3 => 'field_needs_status',
        4 => 'field_needs_related_organization',
        5 => 'field_needs_related_program',
        6 => 'field_term_sector',
        7 => 'field_term_region',
        8 => 'field_term_topic',
        9 => 'field_needs_paid',
        10 => 'field_needs_amount_money',
        11 => 'field_needs_amount_items',
        12 => 'field_needs_amount_people',
      ),
    ),
    'fields' => array(
      'field_needs_type' => 'ds_content',
      'group_details' => 'ds_content',
      'field_needs_date_needed' => 'ds_content',
      'field_needs_status' => 'ds_content',
      'field_needs_related_organization' => 'ds_content',
      'field_needs_related_program' => 'ds_content',
      'field_term_sector' => 'ds_content',
      'field_term_region' => 'ds_content',
      'field_term_topic' => 'ds_content',
      'field_needs_paid' => 'ds_content',
      'field_needs_amount_money' => 'ds_content',
      'field_needs_amount_items' => 'ds_content',
      'field_needs_amount_people' => 'ds_content',
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
  $export['node|needs|details'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|needs|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'needs';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_needs_qualifications',
        2 => 'field_needs_instructions',
        3 => 'field_needs_certifications',
        4 => 'post_date',
        5 => 'comments',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_needs_qualifications' => 'ds_content',
      'field_needs_instructions' => 'ds_content',
      'field_needs_certifications' => 'ds_content',
      'post_date' => 'ds_content',
      'comments' => 'ds_content',
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
  $export['node|needs|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|needs|listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'needs';
  $ds_layout->view_mode = 'listing';
  $ds_layout->layout = 'slat';
  $ds_layout->settings = array(
    'regions' => array(
      'media' => array(
        0 => 'content_author_entity_poc_photo',
      ),
      'main_content' => array(
        1 => 'title_field',
        2 => 'body',
        3 => 'field_needs_location',
      ),
    ),
    'fields' => array(
      'content_author_entity_poc_photo' => 'media',
      'title_field' => 'main_content',
      'body' => 'main_content',
      'field_needs_location' => 'main_content',
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
  $export['node|needs|listing'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|needs|page_header';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'needs';
  $ds_layout->view_mode = 'page_header';
  $ds_layout->layout = 'slat';
  $ds_layout->settings = array(
    'regions' => array(
      'media' => array(
        0 => 'field_needs_image',
      ),
      'main_content' => array(
        1 => 'field_needs_point_of_contact',
        2 => 'field_needs_date_needed',
        3 => 'sharethis',
      ),
    ),
    'fields' => array(
      'field_needs_image' => 'media',
      'field_needs_point_of_contact' => 'main_content',
      'field_needs_date_needed' => 'main_content',
      'sharethis' => 'main_content',
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
  $export['node|needs|page_header'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function gie_needs_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'needs_list';
  $ds_view_mode->label = 'Needs List';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['needs_list'] = $ds_view_mode;

  return $export;
}
