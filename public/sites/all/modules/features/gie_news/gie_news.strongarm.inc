<?php
/**
 * @file
 * gie_news.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gie_news_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_news';
  $strongarm->value = 0;
  $export['comment_anonymous_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_news';
  $strongarm->value = 1;
  $export['comment_default_mode_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_news';
  $strongarm->value = '50';
  $export['comment_default_per_page_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_news';
  $strongarm->value = 1;
  $export['comment_form_location_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_news';
  $strongarm->value = '2';
  $export['comment_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_news';
  $strongarm->value = '0';
  $export['comment_preview_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_news';
  $strongarm->value = 1;
  $export['comment_subject_field_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__news';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'listing' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
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
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'highlights' => array(
        'custom_settings' => FALSE,
      ),
      'page_header' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_date' => array(
        'custom_settings' => FALSE,
      ),
      'data' => array(
        'custom_settings' => FALSE,
      ),
      'needs_list' => array(
        'custom_settings' => FALSE,
      ),
      'at_a_glance' => array(
        'custom_settings' => TRUE,
      ),
      'contact' => array(
        'custom_settings' => TRUE,
      ),
      'logo' => array(
        'custom_settings' => FALSE,
      ),
      'long_form_footer_logo' => array(
        'custom_settings' => FALSE,
      ),
      'details' => array(
        'custom_settings' => TRUE,
      ),
      'search_listing' => array(
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'microsite_content_slider' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '19',
        ),
        'path' => array(
          'weight' => '17',
        ),
        'rabbit_hole' => array(
          'weight' => '15',
        ),
        'xmlsitemap' => array(
          'weight' => '18',
        ),
        'domain' => array(
          'weight' => '16',
        ),
      ),
      'display' => array(
        'domain' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'listing' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'details' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'sharethis' => array(
          'default' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
          'details' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'news_at_a_glance_comments' => array(
          'details' => array(
            'weight' => '16',
            'visible' => TRUE,
          ),
          'contact' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'news_at_a_glance_favorites' => array(
          'details' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
          'contact' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'news_at_a_glance_amount' => array(
          'details' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'contact' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'news_at_a_glance_entity_view_1' => array(
          'details' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
          'contact' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'news_at_a_glance_related_org_card_event' => array(
          'details' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
          'contact' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
        'flag_favorite' => array(
          'details' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'flag_abuse_node' => array(
          'details' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'news_counters_comment_count' => array(
          'listing' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'news_counters_favorite_count' => array(
          'listing' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'news_counters_resource_comment_detail' => array(
          'listing' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'news_counters_resource_favorite_count_detail' => array(
          'listing' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_news';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_news';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_news';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_news';
  $strongarm->value = '0';
  $export['node_preview_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_news';
  $strongarm->value = 0;
  $export['node_submitted_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_news';
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
  $export['panelizer_defaults_node_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:news:page_manager_selection';
  $strongarm->value = 'node:news:default';
  $export['panelizer_node:news:page_manager_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_pattern';
  $strongarm->value = 'news/[node:title]';
  $export['pathauto_node_news_pattern'] = $strongarm;

  return $export;
}
