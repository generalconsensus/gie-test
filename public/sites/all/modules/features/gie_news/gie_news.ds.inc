<?php
/**
 * @file
 * gie_news.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gie_news_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|contact';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'contact';
  $ds_fieldsetting->settings = array(
    'field_news_publish_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'News Published',
        ),
      ),
    ),
  );
  $export['node|news|contact'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|details';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'details';
  $ds_fieldsetting->settings = array(
    'field_news_country' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Country',
        ),
      ),
    ),
    'field_news_organization' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Organization',
        ),
      ),
    ),
    'field_news_program' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Related Program',
        ),
      ),
    ),
    'field_news_region' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Region',
        ),
      ),
    ),
    'field_news_sector' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Sector',
        ),
      ),
    ),
    'field_news_topic' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Topic',
        ),
      ),
    ),
  );
  $export['node|news|details'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|at_a_glance';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'at_a_glance';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'news_counters_comment_count',
        1 => 'news_counters_favorite_count',
        2 => 'field_news_source',
      ),
    ),
    'fields' => array(
      'news_counters_comment_count' => 'ds_content',
      'news_counters_favorite_count' => 'ds_content',
      'field_news_source' => 'ds_content',
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
  $export['node|news|at_a_glance'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|contact';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'contact';
  $ds_layout->layout = 'slat';
  $ds_layout->settings = array(
    'regions' => array(
      'media' => array(
        0 => 'field_news_point_of_contact',
        1 => 'field_news_publish_date',
      ),
    ),
    'fields' => array(
      'field_news_point_of_contact' => 'media',
      'field_news_publish_date' => 'media',
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
  $export['node|news|contact'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|details';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'details';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_news_region',
        1 => 'field_news_country',
        2 => 'field_news_topic',
        3 => 'field_news_sector',
        4 => 'field_news_program',
        5 => 'field_news_organization',
      ),
    ),
    'fields' => array(
      'field_news_region' => 'ds_content',
      'field_news_country' => 'ds_content',
      'field_news_topic' => 'ds_content',
      'field_news_sector' => 'ds_content',
      'field_news_program' => 'ds_content',
      'field_news_organization' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|news|details'] = $ds_layout;

  return $export;
}
