<?php
/**
 * @file
 * gie_groups.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gie_groups_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_markup_blocks--views-2d5a441f121661c9d440795219aa4605';
  $strongarm->value = array(
    'block_wrapper' => 'div',
    'additional_block_classes' => 'block--microsite-description',
    'additional_block_attributes' => '',
    'enable_inner_div' => FALSE,
    'title_wrapper' => 'h2',
    'title_hide' => FALSE,
    'content_wrapper' => 'none',
    'block_html_id_as_class' => TRUE,
  );
  $export['clean_markup_blocks--views-2d5a441f121661c9d440795219aa4605'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_markup_blocks--views-ddf3dc04961fdc41e773b652e35516f5';
  $strongarm->value = array(
    'block_wrapper' => 'div',
    'additional_block_classes' => 'block--microsite-partners',
    'additional_block_attributes' => '',
    'enable_inner_div' => FALSE,
    'title_wrapper' => 'h2',
    'title_hide' => FALSE,
    'content_wrapper' => 'none',
    'block_html_id_as_class' => TRUE,
  );
  $export['clean_markup_blocks--views-ddf3dc04961fdc41e773b652e35516f5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_group';
  $strongarm->value = 0;
  $export['comment_anonymous_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_group';
  $strongarm->value = 1;
  $export['comment_default_mode_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_group';
  $strongarm->value = '50';
  $export['comment_default_per_page_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_group';
  $strongarm->value = 1;
  $export['comment_form_location_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_group';
  $strongarm->value = '0';
  $export['comment_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_group';
  $strongarm->value = '1';
  $export['comment_preview_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_group';
  $strongarm->value = 1;
  $export['comment_subject_field_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__group';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'highlights' => array(
        'custom_settings' => FALSE,
      ),
      'listing' => array(
        'custom_settings' => FALSE,
      ),
      'page_header' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_date' => array(
        'custom_settings' => FALSE,
      ),
      'needs_list' => array(
        'custom_settings' => FALSE,
      ),
      'at_a_glance' => array(
        'custom_settings' => FALSE,
      ),
      'contact' => array(
        'custom_settings' => FALSE,
      ),
      'logo' => array(
        'custom_settings' => FALSE,
      ),
      'details' => array(
        'custom_settings' => FALSE,
      ),
      'search_listing' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '3',
        ),
        'rabbit_hole' => array(
          'weight' => '1',
        ),
        'metatags' => array(
          'weight' => '10',
        ),
        'xmlsitemap' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(
        'sharethis' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_group';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_group';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_group';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_group';
  $strongarm->value = '1';
  $export['node_preview_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_group';
  $strongarm->value = 0;
  $export['node_submitted_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_group';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'substitute' => '',
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:group:page_manager_selection';
  $strongarm->value = 'node:group:default';
  $export['panelizer_node:group:page_manager_selection'] = $strongarm;

  return $export;
}
