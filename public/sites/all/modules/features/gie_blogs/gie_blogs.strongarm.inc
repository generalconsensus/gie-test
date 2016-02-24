<?php
/**
 * @file
 * gie_blogs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gie_blogs_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_blogs';
  $strongarm->value = 0;
  $export['comment_anonymous_blogs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_blogs';
  $strongarm->value = '2';
  $export['comment_blogs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_blogs';
  $strongarm->value = 1;
  $export['comment_default_mode_blogs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_blogs';
  $strongarm->value = '50';
  $export['comment_default_per_page_blogs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_blogs';
  $strongarm->value = 1;
  $export['comment_form_location_blogs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_blogs';
  $strongarm->value = '0';
  $export['comment_preview_blogs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_blogs';
  $strongarm->value = 1;
  $export['comment_subject_field_blogs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__blogs';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'listing' => array(
        'custom_settings' => TRUE,
      ),
      'page_header' => array(
        'custom_settings' => TRUE,
      ),
      'at_a_glance' => array(
        'custom_settings' => TRUE,
      ),
      'contact' => array(
        'custom_settings' => TRUE,
      ),
      'details' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'highlights' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_date' => array(
        'custom_settings' => FALSE,
      ),
      'data' => array(
        'custom_settings' => FALSE,
      ),
      'microsite_content_slider' => array(
        'custom_settings' => FALSE,
      ),
      'needs_list' => array(
        'custom_settings' => FALSE,
      ),
      'logo' => array(
        'custom_settings' => FALSE,
      ),
      'long_form_footer_logo' => array(
        'custom_settings' => FALSE,
      ),
      'search_listing' => array(
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'domain' => array(
          'weight' => '12',
        ),
        'metatags' => array(
          'weight' => '15',
        ),
        'path' => array(
          'weight' => '14',
        ),
        'rabbit_hole' => array(
          'weight' => '11',
        ),
        'xmlsitemap' => array(
          'weight' => '13',
        ),
      ),
      'display' => array(
        'domain' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'search_index' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'listing' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'details' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'sharethis' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'search_index' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'listing' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'details' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'blogs_counters_comment_count' => array(
          'at_a_glance' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'contact' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'details' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'blogs_counters_favorite_count' => array(
          'at_a_glance' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'contact' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'details' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
        ),
        'blogs_counters_resource_comment_detail' => array(
          'at_a_glance' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'details' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'blogs_counters_resource_favorite_count_detail' => array(
          'at_a_glance' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'details' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'flag_favorite' => array(
          'contact' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'flag_abuse_node' => array(
          'contact' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__blogs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_blogs';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_blogs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_blogs';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_blogs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_blogs';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_blogs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_blogs';
  $strongarm->value = '0';
  $export['node_preview_blogs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_blogs';
  $strongarm->value = 0;
  $export['node_submitted_blogs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_blogs';
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
      'teaser' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'listing' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'page_header' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'at_a_glance' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'contact' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'details' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'search_listing' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_blogs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:blogs:page_manager_selection';
  $strongarm->value = 'node:blogs:default';
  $export['panelizer_node:blogs:page_manager_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blogs_pattern';
  $strongarm->value = 'blogs/[node:title]';
  $export['pathauto_node_blogs_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_region_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_region_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_sector_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_sector_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_topic_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_topic_pattern'] = $strongarm;

  return $export;
}
