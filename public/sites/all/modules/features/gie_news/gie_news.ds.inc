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
  $ds_fieldsetting->id = 'node|news|at_a_glance';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'at_a_glance';
  $ds_fieldsetting->settings = array(
    'field_news_publish_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'News Item Posted',
          'lb-el' => 'div',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field--at-a-glance',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field__item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_news_source' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Source',
          'lb-el' => 'div',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field--at-a-glance',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field__item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|news|at_a_glance'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|details';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'details';
  $ds_fieldsetting->settings = array(
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
    'field_news_sector' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Sectors',
        ),
      ),
    ),
    'field_news_topic' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Topics',
        ),
      ),
    ),
  );
  $export['node|news|details'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|news|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|listing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
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
    'field_news_point_of_contact' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_news_publish_date' => array(
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
    'field_news_sector' => array(
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
  $export['node|news|listing'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|search_listing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'search_listing';
  $ds_fieldsetting->settings = array(
    'field_news_publish_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'News Published',
        ),
      ),
    ),
  );
  $export['node|news|search_listing'] = $ds_fieldsetting;

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
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_news_glance',
        1 => 'news_counters_resource_comment_detail',
        2 => 'news_counters_resource_favorite_count_detail',
        3 => 'field_news_source',
        4 => 'field_news_publish_date',
      ),
    ),
    'fields' => array(
      'group_news_glance' => 'ds_content',
      'news_counters_resource_comment_detail' => 'ds_content',
      'news_counters_resource_favorite_count_detail' => 'ds_content',
      'field_news_source' => 'ds_content',
      'field_news_publish_date' => 'ds_content',
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
  $export['node|news|at_a_glance'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|contact';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'contact';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_news_contact',
        1 => 'field_news_point_of_contact',
      ),
    ),
    'fields' => array(
      'group_news_contact' => 'ds_content',
      'field_news_point_of_contact' => 'ds_content',
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
        0 => 'group_news_stats',
        1 => 'field_news_region',
        2 => 'field_news_country',
        3 => 'field_news_topic',
        4 => 'field_news_sector',
        5 => 'field_news_program',
        6 => 'field_news_organization',
      ),
    ),
    'fields' => array(
      'group_news_stats' => 'ds_content',
      'field_news_region' => 'ds_content',
      'field_news_country' => 'ds_content',
      'field_news_topic' => 'ds_content',
      'field_news_sector' => 'ds_content',
      'field_news_program' => 'ds_content',
      'field_news_organization' => 'ds_content',
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
  $export['node|news|details'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_news_image',
        1 => 'field_news_body',
        2 => 'comments',
      ),
    ),
    'fields' => array(
      'field_news_image' => 'ds_content',
      'field_news_body' => 'ds_content',
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
  $export['node|news|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'listing';
  $ds_layout->layout = 'article';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'group_card_content',
        1 => 'title_field',
        2 => 'group_card_author',
        3 => 'field_news_sector',
        4 => 'group_card_counts',
        5 => 'field_news_point_of_contact',
        6 => 'news_counters_comment_count',
        7 => 'field_news_publish_date',
        8 => 'news_counters_favorite_count',
      ),
    ),
    'fields' => array(
      'group_card_content' => 'main_content',
      'title_field' => 'main_content',
      'group_card_author' => 'main_content',
      'field_news_sector' => 'main_content',
      'group_card_counts' => 'main_content',
      'field_news_point_of_contact' => 'main_content',
      'news_counters_comment_count' => 'main_content',
      'field_news_publish_date' => 'main_content',
      'news_counters_favorite_count' => 'main_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'card' => 'card',
        'card--icons' => 'card--icons',
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
  $export['node|news|listing'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|search_listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'search_listing';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_news_source',
        2 => 'field_news_publish_date',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_news_source' => 'ds_content',
      'field_news_publish_date' => 'ds_content',
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
  $export['node|news|search_listing'] = $ds_layout;

  return $export;
}
