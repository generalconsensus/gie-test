<?php
/**
 * @file
 * gie_blog.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gie_blog_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_blog';
  $strongarm->value = 0;
  $export['comment_anonymous_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_blog';
  $strongarm->value = '1';
  $export['comment_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_blog';
  $strongarm->value = 1;
  $export['comment_default_mode_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_blog';
  $strongarm->value = '50';
  $export['comment_default_per_page_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_blog';
  $strongarm->value = 1;
  $export['comment_form_location_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_blog';
  $strongarm->value = '1';
  $export['comment_preview_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_blog';
  $strongarm->value = 1;
  $export['comment_subject_field_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__blog';
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
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '13',
        ),
        'path' => array(
          'weight' => '12',
        ),
        'rabbit_hole' => array(
          'weight' => '10',
        ),
        'xmlsitemap' => array(
          'weight' => '11',
        ),
      ),
      'display' => array(
        'domain' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'listing' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'at_a_glance' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'details' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'sharethis' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'listing' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'at_a_glance' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'details' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'blog_at_a_glance_comments' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'page_header' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'at_a_glance' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'details' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
        'blog_at_a_glance_favorites' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'page_header' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'at_a_glance' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'details' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'blog_at_a_glance_amount' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'page_header' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'details' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
        'blog_at_a_glance_entity_view_1' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'page_header' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'at_a_glance' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'details' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'blog_at_a_glance_related_org_card_event' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'page_header' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'at_a_glance' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'details' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_blog';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_blog';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_blog';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_blog';
  $strongarm->value = '0';
  $export['node_preview_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_blog';
  $strongarm->value = 0;
  $export['node_submitted_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_pattern';
  $strongarm->value = 'blog/[node:title]';
  $export['pathauto_node_blog_pattern'] = $strongarm;

  return $export;
}
