<?php
/**
 * @file
 * gie_funding.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gie_funding_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_funding';
  $strongarm->value = 0;
  $export['comment_anonymous_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_funding';
  $strongarm->value = 1;
  $export['comment_default_mode_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_funding';
  $strongarm->value = '50';
  $export['comment_default_per_page_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_funding';
  $strongarm->value = 1;
  $export['comment_form_location_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_funding';
  $strongarm->value = '2';
  $export['comment_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_funding';
  $strongarm->value = '0';
  $export['comment_preview_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_funding';
  $strongarm->value = 1;
  $export['comment_subject_field_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_comment__comment_node_funding';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'author' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'comment_author_entity_view_1' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_comment__comment_node_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__funding';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
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
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_date' => array(
        'custom_settings' => TRUE,
      ),
      'listing' => array(
        'custom_settings' => TRUE,
      ),
      'search_listing' => array(
        'custom_settings' => TRUE,
      ),
      'at_a_glance' => array(
        'custom_settings' => TRUE,
      ),
      'contact' => array(
        'custom_settings' => FALSE,
      ),
      'logo' => array(
        'custom_settings' => FALSE,
      ),
      'page_header' => array(
        'custom_settings' => FALSE,
      ),
      'details' => array(
        'custom_settings' => FALSE,
      ),
      'highlights' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '5',
        ),
        'rabbit_hole' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'sharethis' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'teaser_date' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'highlights' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
        ),
        'funding_fields_link_url' => array(
          'full' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'highlights' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
        'funding_fields_contact' => array(
          'full' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'highlights' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'funding_listing_counts_comments' => array(
          'listing' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'search_listing' => NULL,
          'at_a_glance' => NULL,
          'highlights' => NULL,
        ),
        'funding_listing_counts_favorites' => array(
          'listing' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'search_listing' => NULL,
          'at_a_glance' => NULL,
          'highlights' => NULL,
        ),
        'funding_counters_comment_count' => array(
          'listing' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'highlights' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
        ),
        'funding_counters_favorite_count' => array(
          'listing' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'highlights' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
        ),
        'funding_ops_counters_comments' => array(
          'at_a_glance' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'highlights' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
        'funding_ops_counters_favorites' => array(
          'at_a_glance' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'highlights' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
        ),
        'funding_ops_counters_amount' => array(
          'at_a_glance' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'highlights' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
        ),
        'funding_fields_deadline' => array(
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'highlights' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_funding';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_funding';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_funding';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_funding';
  $strongarm->value = '0';
  $export['node_preview_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_funding';
  $strongarm->value = 0;
  $export['node_submitted_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_comment_comment_node_funding';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(),
  );
  $export['panelizer_defaults_comment_comment_node_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_funding';
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
      'teaser' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser_date' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:funding:default_selection';
  $strongarm->value = 0;
  $export['panelizer_node:funding:default_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:funding:page_manager_selection';
  $strongarm->value = 'node:funding:default';
  $export['panelizer_node:funding:page_manager_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:funding:teaser_date_selection';
  $strongarm->value = 0;
  $export['panelizer_node:funding:teaser_date_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:funding:teaser_selection';
  $strongarm->value = 0;
  $export['panelizer_node:funding:teaser_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_funding_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'diff_standard' => 0,
    'token' => 0,
    'listing' => 0,
    'teaser_date' => 0,
    'contact' => 0,
    'revision' => 0,
  );
  $export['sharethis_funding_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_funding';
  $strongarm->value = array(
    0 => 'format',
  );
  $export['simplify_comments_funding'] = $strongarm;

  return $export;
}
