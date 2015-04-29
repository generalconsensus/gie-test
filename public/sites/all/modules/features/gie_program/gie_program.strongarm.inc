<?php
/**
 * @file
 * gie_program.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gie_program_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_program';
  $strongarm->value = 0;
  $export['comment_anonymous_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_program';
  $strongarm->value = 1;
  $export['comment_default_mode_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_program';
  $strongarm->value = '50';
  $export['comment_default_per_page_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_program';
  $strongarm->value = 1;
  $export['comment_form_location_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_program';
  $strongarm->value = '0';
  $export['comment_preview_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_program';
  $strongarm->value = '0';
  $export['comment_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_program';
  $strongarm->value = 1;
  $export['comment_subject_field_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__program';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'contact' => array(
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
      'listing' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_date' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'at_a_glance' => array(
        'custom_settings' => TRUE,
      ),
      'logo' => array(
        'custom_settings' => FALSE,
      ),
      'search_listing' => array(
        'custom_settings' => TRUE,
      ),
      'page_header' => array(
        'custom_settings' => TRUE,
      ),
      'details' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '5',
        ),
        'rabbit_hole' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'sharethis' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
        ),
        'program_counters_favorite_count' => array(
          'full' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'at_a_glance' => NULL,
          'search_listing' => NULL,
          'page_header' => NULL,
        ),
        'program_counters_innovation_count' => array(
          'full' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'at_a_glance' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'contact' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
        ),
        'program_counters_program_count' => array(
          'full' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'at_a_glance' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'contact' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
        ),
        'program_at_a_glance_favorites' => array(
          'at_a_glance' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'program_at_a_glance_innovation' => array(
          'at_a_glance' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gie_program_image_fid';
  $strongarm->value = '109';
  $export['gie_program_image_fid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_program';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_program';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_program';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_program';
  $strongarm->value = '0';
  $export['node_preview_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_program';
  $strongarm->value = 0;
  $export['node_submitted_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_program';
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
      'search_listing' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:program:default_selection';
  $strongarm->value = 0;
  $export['panelizer_node:program:default_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:program:page_manager_selection';
  $strongarm->value = 'node:program:default';
  $export['panelizer_node:program:page_manager_selection'] = $strongarm;

  return $export;
}
