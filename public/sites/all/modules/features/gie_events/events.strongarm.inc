<?php
/**
 * @file
 * events.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function events_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_event';
  $strongarm->value = 0;
  $export['comment_anonymous_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_event';
  $strongarm->value = 1;
  $export['comment_default_mode_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_event';
  $strongarm->value = '50';
  $export['comment_default_per_page_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_event';
  $strongarm->value = '2';
  $export['comment_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_event';
  $strongarm->value = 1;
  $export['comment_form_location_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_event';
  $strongarm->value = '0';
  $export['comment_preview_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_event';
  $strongarm->value = 1;
  $export['comment_subject_field_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_card_date';
  $strongarm->value = 'F m';
  $export['date_format_card_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_event_card';
  $strongarm->value = 'F d';
  $export['date_format_event_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short_month';
  $strongarm->value = 'M d Y';
  $export['date_format_short_month'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__event';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'listing' => array(
        'custom_settings' => TRUE,
      ),
      'at_a_glance' => array(
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
      'page_header' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_date' => array(
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
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'highlights' => array(
        'custom_settings' => FALSE,
      ),
      'needs_list' => array(
        'custom_settings' => FALSE,
      ),
      'spotlight' => array(
        'custom_settings' => TRUE,
      ),
      'data' => array(
        'custom_settings' => FALSE,
      ),
      'microsite_content_slider' => array(
        'custom_settings' => FALSE,
      ),
      'long_form_footer_logo' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '4',
        ),
        'rabbit_hole' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(
        'sharethis' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'spotlight' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
        ),
        'events_at_a_glance_comments' => array(
          'at_a_glance' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'spotlight' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
        ),
        'events_at_a_glance_favorites' => array(
          'at_a_glance' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '32',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'spotlight' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
        ),
        'events_at_a_glance_amount' => array(
          'at_a_glance' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '31',
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
          'spotlight' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
        ),
        'events_at_a_glance_entity_view_1' => array(
          'listing' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'spotlight' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
        ),
        'events_at_a_glance_event_attending_flag' => array(
          'full' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'search_listing' => NULL,
          'spotlight' => NULL,
        ),
        'events_at_a_glance_related_org_card_event' => array(
          'listing' => array(
            'weight' => '16',
            'visible' => FALSE,
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
            'weight' => '19',
            'visible' => FALSE,
          ),
          'spotlight' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
        ),
        'flag_abuse_node' => array(
          'listing' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'spotlight' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
        ),
        'domain' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'spotlight' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'flag_favorite' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'spotlight' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_event';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_event';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_event';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_event';
  $strongarm->value = '0';
  $export['node_preview_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_event';
  $strongarm->value = 0;
  $export['node_submitted_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_event';
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
      'search_listing' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:event:page_manager_selection';
  $strongarm->value = 'node:event:default';
  $export['panelizer_node:event:page_manager_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_event_pattern';
  $strongarm->value = 'events/[node:title]';
  $export['pathauto_node_event_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_event_needs_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_event_needs_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_event_size_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_event_size_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_event_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_event_type_pattern'] = $strongarm;

  return $export;
}
