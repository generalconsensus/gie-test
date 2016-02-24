<?php
/**
 * @file
 * gie_blogs.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gie_blogs_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blogs|contact';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blogs';
  $ds_fieldsetting->view_mode = 'contact';
  $ds_fieldsetting->settings = array(
    'field_blogs_publish_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Blog Published',
        ),
      ),
    ),
  );
  $export['node|blogs|contact'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blogs|details';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blogs';
  $ds_fieldsetting->view_mode = 'details';
  $ds_fieldsetting->settings = array(
    'field_blogs_organization' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Organization',
        ),
      ),
    ),
    'field_blogs_program' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Related Program',
        ),
      ),
    ),
    'field_blogs_topic' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Topics',
        ),
      ),
    ),
    'field_blogs_sector' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Sectors',
        ),
      ),
    ),
  );
  $export['node|blogs|details'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blogs|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blogs';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|blogs|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blogs|listing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blogs';
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
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_blogs_publish_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'card__author-date',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_blogs_sector' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Sectors',
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
  $export['node|blogs|listing'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_blogs_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blogs|at_a_glance';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blogs';
  $ds_layout->view_mode = 'at_a_glance';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'blogs_counters_comment_count',
        1 => 'blogs_counters_favorite_count',
      ),
    ),
    'fields' => array(
      'blogs_counters_comment_count' => 'ds_content',
      'blogs_counters_favorite_count' => 'ds_content',
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
  $export['node|blogs|at_a_glance'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blogs|contact';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blogs';
  $ds_layout->view_mode = 'contact';
  $ds_layout->layout = 'slat';
  $ds_layout->settings = array(
    'regions' => array(
      'media' => array(
        0 => 'field_blogs_point_contact',
        1 => 'field_blogs_publish_date',
      ),
    ),
    'fields' => array(
      'field_blogs_point_contact' => 'media',
      'field_blogs_publish_date' => 'media',
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
  $export['node|blogs|contact'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blogs|details';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blogs';
  $ds_layout->view_mode = 'details';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_blogs_region',
        1 => 'field_blogs_country',
        2 => 'field_blogs_topic',
        3 => 'field_blogs_sector',
        4 => 'field_blogs_organization',
        5 => 'field_blogs_program',
      ),
    ),
    'fields' => array(
      'field_blogs_region' => 'ds_content',
      'field_blogs_country' => 'ds_content',
      'field_blogs_topic' => 'ds_content',
      'field_blogs_sector' => 'ds_content',
      'field_blogs_organization' => 'ds_content',
      'field_blogs_program' => 'ds_content',
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
  $export['node|blogs|details'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blogs|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blogs';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_blogs_image',
        1 => 'field_blogs_description',
        2 => 'comments',
      ),
    ),
    'fields' => array(
      'field_blogs_image' => 'ds_content',
      'field_blogs_description' => 'ds_content',
      'comments' => 'ds_content',
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
  $export['node|blogs|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blogs|listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blogs';
  $ds_layout->view_mode = 'listing';
  $ds_layout->layout = 'article';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'group_card_content',
        1 => 'field_blogs_point_contact',
        2 => 'field_blogs_publish_date',
        3 => 'blogs_counters_comment_count',
        4 => 'blogs_counters_favorite_count',
        5 => 'title_field',
        6 => 'group_card_author',
        7 => 'field_blogs_sector',
        8 => 'group_card_counts',
      ),
    ),
    'fields' => array(
      'group_card_content' => 'main_content',
      'field_blogs_point_contact' => 'main_content',
      'field_blogs_publish_date' => 'main_content',
      'blogs_counters_comment_count' => 'main_content',
      'blogs_counters_favorite_count' => 'main_content',
      'title_field' => 'main_content',
      'group_card_author' => 'main_content',
      'field_blogs_sector' => 'main_content',
      'group_card_counts' => 'main_content',
    ),
    'classes' => array(),
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
  $export['node|blogs|listing'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blogs|search_listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blogs';
  $ds_layout->view_mode = 'search_listing';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'domain',
        1 => 'field_blogs_image',
        2 => 'field_blogs_description',
        3 => 'field_blogs_point_contact',
        4 => 'field_blogs_publish_date',
        5 => 'field_blogs_organization',
        6 => 'field_blogs_program',
        7 => 'field_blogs_topic',
        8 => 'field_blogs_sector',
        9 => 'field_blogs_region',
        10 => 'blogs_counters_resource_comment_detail',
        11 => 'sharethis',
        12 => 'blogs_counters_resource_favorite_count_detail',
        13 => 'blogs_counters_favorite_count',
        14 => 'blogs_counters_comment_count',
        15 => 'field_blogs_country',
      ),
    ),
    'fields' => array(
      'domain' => 'ds_content',
      'field_blogs_image' => 'ds_content',
      'field_blogs_description' => 'ds_content',
      'field_blogs_point_contact' => 'ds_content',
      'field_blogs_publish_date' => 'ds_content',
      'field_blogs_organization' => 'ds_content',
      'field_blogs_program' => 'ds_content',
      'field_blogs_topic' => 'ds_content',
      'field_blogs_sector' => 'ds_content',
      'field_blogs_region' => 'ds_content',
      'blogs_counters_resource_comment_detail' => 'ds_content',
      'sharethis' => 'ds_content',
      'blogs_counters_resource_favorite_count_detail' => 'ds_content',
      'blogs_counters_favorite_count' => 'ds_content',
      'blogs_counters_comment_count' => 'ds_content',
      'field_blogs_country' => 'ds_content',
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
  $export['node|blogs|search_listing'] = $ds_layout;

  return $export;
}
