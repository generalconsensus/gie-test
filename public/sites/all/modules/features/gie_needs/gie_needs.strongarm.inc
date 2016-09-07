<?php
/**
 * @file
 * gie_needs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gie_needs_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_needs';
  $strongarm->value = 0;
  $export['comment_anonymous_needs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_needs';
  $strongarm->value = 1;
  $export['comment_default_mode_needs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_needs';
  $strongarm->value = '50';
  $export['comment_default_per_page_needs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_needs';
  $strongarm->value = 1;
  $export['comment_form_location_needs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_needs';
  $strongarm->value = '2';
  $export['comment_needs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_needs';
  $strongarm->value = '0';
  $export['comment_preview_needs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_needs';
  $strongarm->value = 1;
  $export['comment_subject_field_needs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__needs';
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
        'custom_settings' => TRUE,
      ),
      'search_listing' => array(
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'needs_list' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '2',
        ),
        'rabbit_hole' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'content_author_entity_view_1' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'listing' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'page_header' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'details' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'needs_list' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'sharethis' => array(
          'default' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'details' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'needs_list' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
        ),
        'content_author_entity_poc_photo' => array(
          'listing' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'details' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'needs_list' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'needs_point_of_contact_needs_contact_button' => array(
          'page_header' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'details' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'needs_list' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
        ),
        'needs_point_of_contact_needs_profile_button' => array(
          'page_header' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'details' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'needs_list' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
        ),
        'wanted_counts_entity_view_1' => array(
          'listing' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
        ),
        'wanted_counts_comments' => array(
          'listing' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
        ),
        'flag_abuse_node' => array(
          'listing' => array(
            'weight' => '19',
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
        ),
        'wanted_counts_wanted_people_needed' => array(
          'listing' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
        ),
        'wanted_counts_wanted_funding_available' => array(
          'listing' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_listing' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__needs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_needs';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_needs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_needs';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_needs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_needs';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_needs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_needs';
  $strongarm->value = '0';
  $export['node_preview_needs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_needs';
  $strongarm->value = 0;
  $export['node_submitted_needs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_needs';
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
      'listing' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_needs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_needs_type';
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
    ),
  );
  $export['panelizer_defaults_taxonomy_term_needs_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:needs:page_manager_selection';
  $strongarm->value = 'node:needs:default';
  $export['panelizer_node:needs:page_manager_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:needs_type:page_manager_selection';
  $strongarm->value = 'taxonomy_term:needs_type:default';
  $export['panelizer_taxonomy_term:needs_type:page_manager_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:needs_type_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:34:"panelizer_taxonomy_term:needs_type";s:23:"allowed_layout_settings";a:18:{s:8:"flexible";b:1;s:8:"six_pack";b:1;s:18:"onecol_reset_clean";b:1;s:12:"onecol_clean";b:1;s:6:"myriad";b:1;s:14:"twocol_stacked";b:1;s:13:"twocol_bricks";b:1;s:6:"twocol";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:17:"threecol_33_34_33";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:17:"threecol_25_50_25";b:1;s:6:"onecol";b:1;s:13:"sidebar_right";b:1;s:12:"sidebar_left";b:1;s:7:"landing";b:1;s:4:"home";b:1;s:6:"detail";b:1;}s:10:"form_state";N;}';
  $export['panelizer_taxonomy_term:needs_type_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:needs_type_allowed_layouts_default';
  $strongarm->value = 0;
  $export['panelizer_taxonomy_term:needs_type_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:needs_type_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_taxonomy_term:needs_type_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:needs_type_default';
  $strongarm->value = array(
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'custom' => 'custom',
    'block' => 'block',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'flag_link' => 'flag_link',
    'menu_tree' => 'menu_tree',
    'pane' => 'pane',
    'panels_mini' => 'panels_mini',
    'views' => 'views',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_taxonomy_term:needs_type_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_needs_pattern';
  $strongarm->value = 'wanteds/[node:title]';
  $export['pathauto_node_needs_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_needs_duration_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_needs_duration_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_needs_status_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_needs_status_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_needs_type_pattern';
  $strongarm->value = 'wanteds/[term:name]';
  $export['pathauto_taxonomy_term_needs_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_taxonomy_term_action_needs_duration';
  $strongarm->value = '2';
  $export['rh_taxonomy_term_action_needs_duration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_taxonomy_term_action_needs_status';
  $strongarm->value = '2';
  $export['rh_taxonomy_term_action_needs_status'] = $strongarm;

  return $export;
}
