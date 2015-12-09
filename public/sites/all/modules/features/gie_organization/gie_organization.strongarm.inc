<?php
/**
 * @file
 * gie_organization.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gie_organization_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_organization';
  $strongarm->value = 0;
  $export['comment_anonymous_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_organization';
  $strongarm->value = 1;
  $export['comment_default_mode_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_organization';
  $strongarm->value = '50';
  $export['comment_default_per_page_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_organization';
  $strongarm->value = 1;
  $export['comment_form_location_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_organization';
  $strongarm->value = '0';
  $export['comment_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_organization';
  $strongarm->value = '0';
  $export['comment_preview_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_organization';
  $strongarm->value = 1;
  $export['comment_subject_field_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__organization';
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
      'listing' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_date' => array(
        'custom_settings' => FALSE,
      ),
      'contact' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_image' => array(
        'custom_settings' => TRUE,
      ),
      'at_a_glance' => array(
        'custom_settings' => TRUE,
      ),
      'logo' => array(
        'custom_settings' => TRUE,
      ),
      'search_listing' => array(
        'custom_settings' => TRUE,
      ),
      'page_header' => array(
        'custom_settings' => TRUE,
      ),
      'highlights' => array(
        'custom_settings' => FALSE,
      ),
      'needs_list' => array(
        'custom_settings' => FALSE,
      ),
      'details' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '1',
        ),
        'rabbit_hole' => array(
          'weight' => '0',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'sharethis' => array(
          'teaser' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'teaser_image' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'logo' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'organization_counters_favorite_count' => array(
          'listing' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'teaser_image' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'logo' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'organization_counters_innovation_count' => array(
          'listing' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'teaser_image' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'logo' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'organization_counters_member_count' => array(
          'listing' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'teaser_image' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'at_a_glance' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'logo' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'organization_at_a_glance_innovation_count' => array(
          'at_a_glance' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'logo' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'organization_at_a_glance_member_count' => array(
          'at_a_glance' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'contact' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
          'logo' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
        'organization_at_a_glance_entity_view_1' => array(
          'at_a_glance' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'logo' => NULL,
          'search_listing' => NULL,
          'page_header' => NULL,
        ),
        'organization_counters_partner_count' => array(
          'at_a_glance' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'contact' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'logo' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'organization_at_a_glance_partner_count' => array(
          'at_a_glance' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'contact' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'logo' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'search_listing' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'page_header' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'flag_favorite' => array(
          'default' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gie_organization_image_fid';
  $strongarm->value = '44';
  $export['gie_organization_image_fid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_organization';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_organization';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_organization';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_organization';
  $strongarm->value = '0';
  $export['node_preview_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_organization';
  $strongarm->value = 0;
  $export['node_submitted_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_comment_comment_node_organization';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(),
  );
  $export['panelizer_defaults_comment_comment_node_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_organization';
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
      'logo' => array(
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
  $export['panelizer_defaults_node_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:organization:default_selection';
  $strongarm->value = 0;
  $export['panelizer_node:organization:default_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:organization:page_manager_selection';
  $strongarm->value = 'node:organization:default';
  $export['panelizer_node:organization:page_manager_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:organization:teaser_selection';
  $strongarm->value = 0;
  $export['panelizer_node:organization:teaser_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_organization_options';
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
  $export['sharethis_organization_options'] = $strongarm;

  return $export;
}
