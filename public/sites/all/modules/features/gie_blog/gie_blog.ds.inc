<?php
/**
 * @file
 * gie_blog.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gie_blog_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog|contact';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog';
  $ds_fieldsetting->view_mode = 'contact';
  $ds_fieldsetting->settings = array(
    'field_blog_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_blog_publish_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Blog Published',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|blog|contact'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog|details';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog';
  $ds_fieldsetting->view_mode = 'details';
  $ds_fieldsetting->settings = array(
    'field_blog_related_organization' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Organization',
        ),
      ),
    ),
    'field_blog_related_region' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Region',
        ),
      ),
    ),
    'field_blog_related_sector' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Sector',
        ),
      ),
    ),
    'field_blog_related_topic' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Topic',
        ),
      ),
    ),
    'field_related_country' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Region',
        ),
      ),
    ),
  );
  $export['node|blog|details'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog|listing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog';
  $ds_fieldsetting->view_mode = 'listing';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_html5_tools_iso8601',
    ),
  );
  $export['node|blog|listing'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_blog_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|at_a_glance';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'at_a_glance';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_blog_glance',
        1 => 'blog_at_a_glance_favorites',
        2 => 'blog_at_a_glance_comments',
      ),
    ),
    'fields' => array(
      'group_blog_glance' => 'ds_content',
      'blog_at_a_glance_favorites' => 'ds_content',
      'blog_at_a_glance_comments' => 'ds_content',
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
  $export['node|blog|at_a_glance'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|contact';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'contact';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_blog_contact',
        1 => 'field_blog_author',
        2 => 'field_blog_publish_date',
      ),
    ),
    'fields' => array(
      'group_blog_contact' => 'ds_content',
      'field_blog_author' => 'ds_content',
      'field_blog_publish_date' => 'ds_content',
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
  $export['node|blog|contact'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|details';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'details';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_blog_stats',
        1 => 'field_blog_related_region',
        2 => 'field_related_country',
        3 => 'field_blog_related_topic',
        4 => 'field_blog_related_sector',
        5 => 'field_blog_related_program',
        6 => 'field_blog_related_organization',
      ),
    ),
    'fields' => array(
      'group_blog_stats' => 'ds_content',
      'field_blog_related_region' => 'ds_content',
      'field_related_country' => 'ds_content',
      'field_blog_related_topic' => 'ds_content',
      'field_blog_related_sector' => 'ds_content',
      'field_blog_related_program' => 'ds_content',
      'field_blog_related_organization' => 'ds_content',
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
  $export['node|blog|details'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'listing';
  $ds_layout->layout = 'article';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'post_date',
      ),
      'main_content' => array(
        1 => 'title_field',
        2 => 'field_blog_related_topic',
        3 => 'field_blog_description',
      ),
    ),
    'fields' => array(
      'post_date' => 'header',
      'title_field' => 'main_content',
      'field_blog_related_topic' => 'main_content',
      'field_blog_description' => 'main_content',
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
  $export['node|blog|listing'] = $ds_layout;

  return $export;
}
