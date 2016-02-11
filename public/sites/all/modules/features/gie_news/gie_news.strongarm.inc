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
  $strongarm->value = '1';
  $export['comment_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_news';
  $strongarm->value = '1';
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
        'custom_settings' => FALSE,
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
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '15',
        ),
        'path' => array(
          'weight' => '13',
        ),
        'rabbit_hole' => array(
          'weight' => '12',
        ),
        'xmlsitemap' => array(
          'weight' => '14',
        ),
        'domain' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'domain' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'listing' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'contact' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'details' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'sharethis' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'listing' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'contact' => array(
            'weight' => '23',
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
        'news_at_a_glance_comments' => array(
          'details' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
        ),
        'news_at_a_glance_favorites' => array(
          'details' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
        ),
        'news_at_a_glance_amount' => array(
          'details' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'news_at_a_glance_entity_view_1' => array(
          'details' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
        'news_at_a_glance_related_org_card_event' => array(
          'details' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '17',
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
  $strongarm->name = 'pathauto_node_news_pattern';
  $strongarm->value = 'news/[node:title]';
  $export['pathauto_node_news_pattern'] = $strongarm;

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
