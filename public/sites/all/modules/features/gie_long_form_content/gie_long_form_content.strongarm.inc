<?php
/**
 * @file
 * gie_long_form_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gie_long_form_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_long_form_page';
  $strongarm->value = 0;
  $export['comment_anonymous_long_form_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_long_form_page';
  $strongarm->value = 1;
  $export['comment_default_mode_long_form_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_long_form_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_long_form_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_long_form_page';
  $strongarm->value = 1;
  $export['comment_form_location_long_form_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_long_form_page';
  $strongarm->value = '0';
  $export['comment_long_form_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_long_form_page';
  $strongarm->value = '1';
  $export['comment_preview_long_form_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_long_form_page';
  $strongarm->value = 1;
  $export['comment_subject_field_long_form_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__long_form_page';
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
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '6',
        ),
        'rabbit_hole' => array(
          'weight' => '5',
        ),
        'metatags' => array(
          'weight' => '13',
        ),
        'xmlsitemap' => array(
          'weight' => '12',
        ),
        'domain' => array(
          'weight' => '1',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'sharethis' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '22',
            'visible' => TRUE,
          ),
        ),
        'flag_favorite' => array(
          'full' => array(
            'weight' => '24',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__long_form_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__long_form_aside';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_full_width' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_left_align' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_right_align' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'view_mode_selector' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__long_form_aside'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__long_form_callout_card';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_full_width' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_editor_preview' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'view_mode_selector' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_left_align' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_right_align' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__long_form_callout_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__long_form_image';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_full_width' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_left_align' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_right_align' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_editor_preview' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'view_mode_selector' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'center_aligned' => array(
        'custom_settings' => FALSE,
      ),
      'left_aligned' => array(
        'custom_settings' => FALSE,
      ),
      'left_image' => array(
        'custom_settings' => FALSE,
      ),
      'right_image' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__long_form_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__long_form_key_figure';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => FALSE,
      ),
      'view_mode_selector' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_full_width' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_left_align' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_right_align' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__long_form_key_figure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__long_form_pullquote';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'view_mode_selector' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_full_width' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_left_align' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_right_align' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'center_aligned' => array(
        'custom_settings' => FALSE,
      ),
      'left_aligned' => array(
        'custom_settings' => FALSE,
      ),
      'left_image' => array(
        'custom_settings' => FALSE,
      ),
      'right_image' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__long_form_pullquote'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__long_form_section_break_image';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_full_width' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_editor_preview' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'view_mode_selector' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_left_align' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_right_align' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__long_form_section_break_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__long_form_section_header_image';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_full_width' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_editor_preview' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'view_mode_selector' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_left_align' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_right_align' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__long_form_section_header_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__long_form_text';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_editor_preview' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'view_mode_selector' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_full_width' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_left_align' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_right_align' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'center_aligned' => array(
        'custom_settings' => FALSE,
      ),
      'left_aligned' => array(
        'custom_settings' => FALSE,
      ),
      'left_image' => array(
        'custom_settings' => FALSE,
      ),
      'right_image' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__long_form_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__long_form_video';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_editor_preview' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'view_mode_selector' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_full_width' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_left_align' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_right_align' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__long_form_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_long_form_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_long_form_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_long_form_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_long_form_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_long_form_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_long_form_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_long_form_page';
  $strongarm->value = '1';
  $export['node_preview_long_form_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_long_form_page';
  $strongarm->value = 0;
  $export['node_submitted_long_form_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_long_form_page';
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
  $export['panelizer_defaults_node_long_form_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:long_form_page:page_manager_selection';
  $strongarm->value = 'node:long_form_page:default';
  $export['panelizer_node:long_form_page:page_manager_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:long_form_page_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:29:"panelizer_node:long_form_page";s:23:"allowed_layout_settings";a:21:{s:8:"flexible";b:1;s:12:"onecol_clean";b:1;s:18:"onecol_reset_clean";b:1;s:6:"myriad";b:1;s:8:"six_pack";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:17:"threecol_33_34_33";b:1;s:17:"threecol_25_50_25";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:14:"twocol_stacked";b:1;s:6:"onecol";b:1;s:13:"twocol_bricks";b:1;s:6:"twocol";b:1;s:6:"detail";b:1;s:13:"sidebar_right";b:1;s:12:"sidebar_left";b:1;s:5:"split";b:1;s:4:"home";b:1;s:7:"landing";b:1;s:4:"data";b:1;s:8:"longform";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:long_form_page_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:long_form_page_allowed_layouts_default';
  $strongarm->value = 0;
  $export['panelizer_node:long_form_page_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:long_form_page_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_node:long_form_page_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:long_form_page_default';
  $strongarm->value = array(
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'block' => 'block',
    'custom' => 'custom',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'flag_link' => 'flag_link',
    'menu_tree' => 'menu_tree',
    'pane' => 'pane',
    'panels_mini' => 'panels_mini',
    'views_panes' => 'views_panes',
    'views' => 'views',
    'other' => 'other',
  );
  $export['panelizer_node:long_form_page_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_long_form_page_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_long_form_page_pattern'] = $strongarm;

  return $export;
}
