<?php
/**
 * @file
 * events.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function events_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '3',
      'label' => 'inline',
      'format' => 'default',
    ),
    'field_event_full_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_event_who_should_attend' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|event|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|listing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'listing';
  $ds_fieldsetting->settings = array(
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'card__primary-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_event_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_event_location' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Location',
          'lb-el' => 'div',
          'lb-cl' => 'card__list-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'card__list',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|event|listing'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function events_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|at_a_glance';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'at_a_glance';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'events_at_a_glance_favorites',
        1 => 'events_at_a_glance_comments',
        2 => 'events_at_a_glance_amount',
      ),
    ),
    'fields' => array(
      'events_at_a_glance_favorites' => 'ds_content',
      'events_at_a_glance_comments' => 'ds_content',
      'events_at_a_glance_amount' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|event|at_a_glance'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_event_details',
        1 => 'group_event_details_first',
        2 => 'field_event_full_description',
        3 => 'field_event_who_should_attend',
        4 => 'comments',
        5 => 'group_event_details_second',
        6 => 'field_event_size',
        7 => 'field_event_needs',
        8 => 'field_event_type',
        9 => 'field_event_website_url',
        10 => 'field_event_rsvp_url',
        11 => 'field_event_program',
        12 => 'field_event_country',
        13 => 'field_event_related_regions',
        14 => 'field_event_related_topics',
        15 => 'field_event_related_sectors',
      ),
    ),
    'fields' => array(
      'group_event_details' => 'ds_content',
      'group_event_details_first' => 'ds_content',
      'field_event_full_description' => 'ds_content',
      'field_event_who_should_attend' => 'ds_content',
      'comments' => 'ds_content',
      'group_event_details_second' => 'ds_content',
      'field_event_size' => 'ds_content',
      'field_event_needs' => 'ds_content',
      'field_event_type' => 'ds_content',
      'field_event_website_url' => 'ds_content',
      'field_event_rsvp_url' => 'ds_content',
      'field_event_program' => 'ds_content',
      'field_event_country' => 'ds_content',
      'field_event_related_regions' => 'ds_content',
      'field_event_related_topics' => 'ds_content',
      'field_event_related_sectors' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|event|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'listing';
  $ds_layout->layout = 'article';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'group_card_image',
        1 => 'group_card_content',
        2 => 'events_at_a_glance_entity_view_1',
        3 => 'title_field',
        4 => 'group_card_meta',
        5 => 'field_event_location',
        6 => 'field_event_image',
      ),
    ),
    'fields' => array(
      'group_card_image' => 'main_content',
      'group_card_content' => 'main_content',
      'events_at_a_glance_entity_view_1' => 'main_content',
      'title_field' => 'main_content',
      'group_card_meta' => 'main_content',
      'field_event_location' => 'main_content',
      'field_event_image' => 'main_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'card' => 'card',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'main_content' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|event|listing'] = $ds_layout;

  return $export;
}
