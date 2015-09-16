<?php
/**
 * @file
 * gie_long_form_content.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gie_long_form_content_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'asset|video|long_form_asset';
  $ds_fieldsetting->entity_type = 'asset';
  $ds_fieldsetting->bundle = 'video';
  $ds_fieldsetting->view_mode = 'long_form_asset';
  $ds_fieldsetting->settings = array(
    'field_asset_video_file' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['asset|video|long_form_asset'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|long_form_page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'long_form_page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_long_form_block' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|long_form_page|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|long_form_aside|paragraphs_full_width';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'long_form_aside';
  $ds_fieldsetting->view_mode = 'paragraphs_full_width';
  $ds_fieldsetting->settings = array(
    'field_paragraph_aside_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_paragraphs_aside_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['paragraphs_item|long_form_aside|paragraphs_full_width'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|long_form_aside|paragraphs_left_align';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'long_form_aside';
  $ds_fieldsetting->view_mode = 'paragraphs_left_align';
  $ds_fieldsetting->settings = array(
    'field_paragraph_aside_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_paragraphs_aside_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['paragraphs_item|long_form_aside|paragraphs_left_align'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|long_form_aside|paragraphs_right_align';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'long_form_aside';
  $ds_fieldsetting->view_mode = 'paragraphs_right_align';
  $ds_fieldsetting->settings = array(
    'field_paragraph_aside_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_paragraphs_aside_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['paragraphs_item|long_form_aside|paragraphs_right_align'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|long_form_image|paragraphs_full_width';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'long_form_image';
  $ds_fieldsetting->view_mode = 'paragraphs_full_width';
  $ds_fieldsetting->settings = array(
    'field_paragraphs_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_paragraphs_caption' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['paragraphs_item|long_form_image|paragraphs_full_width'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|long_form_image|paragraphs_left_align';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'long_form_image';
  $ds_fieldsetting->view_mode = 'paragraphs_left_align';
  $ds_fieldsetting->settings = array(
    'field_paragraphs_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_paragraphs_caption' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['paragraphs_item|long_form_image|paragraphs_left_align'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|long_form_image|paragraphs_right_align';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'long_form_image';
  $ds_fieldsetting->view_mode = 'paragraphs_right_align';
  $ds_fieldsetting->settings = array(
    'field_paragraphs_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_paragraphs_caption' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['paragraphs_item|long_form_image|paragraphs_right_align'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|long_form_pullquote|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'long_form_pullquote';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_para_pullquote_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_paragraph_pullquote' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['paragraphs_item|long_form_pullquote|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|long_form_section_header_image|paragraphs_full_width';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'long_form_section_header_image';
  $ds_fieldsetting->view_mode = 'paragraphs_full_width';
  $ds_fieldsetting->settings = array(
    'field_para_sctn_head_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['paragraphs_item|long_form_section_header_image|paragraphs_full_width'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|long_form_text|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'long_form_text';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_paragraph_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['paragraphs_item|long_form_text|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|long_form_video|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'long_form_video';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_paragraphs_caption' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_paragraphs_video' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['paragraphs_item|long_form_video|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_long_form_content_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'asset|video|long_form_asset';
  $ds_layout->entity_type = 'asset';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'long_form_asset';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_asset_video_file',
      ),
    ),
    'fields' => array(
      'field_asset_video_file' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['asset|video|long_form_asset'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|long_form_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'long_form_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_long_form_block',
        2 => 'sharethis',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_long_form_block' => 'ds_content',
      'sharethis' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|long_form_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|long_form_page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'long_form_page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_long_form_block',
      ),
    ),
    'fields' => array(
      'field_long_form_block' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|long_form_page|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_aside|paragraphs_full_width';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_aside';
  $ds_layout->view_mode = 'paragraphs_full_width';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_aside_title',
        1 => 'field_paragraph_aside_text',
      ),
    ),
    'fields' => array(
      'field_paragraphs_aside_title' => 'ds_content',
      'field_paragraph_aside_text' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|long_form_aside|paragraphs_full_width'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_aside|paragraphs_left_align';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_aside';
  $ds_layout->view_mode = 'paragraphs_left_align';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_aside_title',
        1 => 'field_paragraph_aside_text',
      ),
    ),
    'fields' => array(
      'field_paragraphs_aside_title' => 'ds_content',
      'field_paragraph_aside_text' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|long_form_aside|paragraphs_left_align'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_aside|paragraphs_right_align';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_aside';
  $ds_layout->view_mode = 'paragraphs_right_align';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_aside_title',
        1 => 'field_paragraph_aside_text',
      ),
    ),
    'fields' => array(
      'field_paragraphs_aside_title' => 'ds_content',
      'field_paragraph_aside_text' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|long_form_aside|paragraphs_right_align'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_callout_card|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_callout_card';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_para_callout_title_1',
        1 => 'field_para_callout_body_1',
        2 => 'field_para_callout_title_2',
        3 => 'field_para_callout_body_2',
        4 => 'field_para_callout_title_3',
        5 => 'field_para_callout_body_3',
      ),
    ),
    'fields' => array(
      'field_para_callout_title_1' => 'ds_content',
      'field_para_callout_body_1' => 'ds_content',
      'field_para_callout_title_2' => 'ds_content',
      'field_para_callout_body_2' => 'ds_content',
      'field_para_callout_title_3' => 'ds_content',
      'field_para_callout_body_3' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|long_form_callout_card|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_callout_card|form';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_callout_card';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_para_callout_1',
        1 => 'field_para_callout_title_1',
        2 => 'field_para_callout_body_1',
        3 => 'field_para_callout_title_2',
        4 => 'field_para_callout_body_2',
        5 => 'group_para_callout_2',
        6 => 'field_para_callout_title_3',
        7 => 'field_para_callout_body_3',
        8 => 'group_para_callout_3',
      ),
      'hidden' => array(
        9 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_para_callout_1' => 'ds_content',
      'field_para_callout_title_1' => 'ds_content',
      'field_para_callout_body_1' => 'ds_content',
      'field_para_callout_title_2' => 'ds_content',
      'field_para_callout_body_2' => 'ds_content',
      'group_para_callout_2' => 'ds_content',
      'field_para_callout_title_3' => 'ds_content',
      'field_para_callout_body_3' => 'ds_content',
      'group_para_callout_3' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|long_form_callout_card|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_image|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_image';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_image',
        1 => 'field_paragraphs_caption',
        2 => 'field_paragraphs_view',
      ),
    ),
    'fields' => array(
      'field_paragraphs_image' => 'ds_content',
      'field_paragraphs_caption' => 'ds_content',
      'field_paragraphs_view' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|long_form_image|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_image|paragraphs_full_width';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_image';
  $ds_layout->view_mode = 'paragraphs_full_width';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_image',
        1 => 'field_paragraphs_caption',
      ),
    ),
    'fields' => array(
      'field_paragraphs_image' => 'ds_content',
      'field_paragraphs_caption' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|long_form_image|paragraphs_full_width'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_image|paragraphs_left_align';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_image';
  $ds_layout->view_mode = 'paragraphs_left_align';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_image',
        1 => 'field_paragraphs_caption',
      ),
    ),
    'fields' => array(
      'field_paragraphs_image' => 'ds_content',
      'field_paragraphs_caption' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|long_form_image|paragraphs_left_align'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_image|paragraphs_right_align';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_image';
  $ds_layout->view_mode = 'paragraphs_right_align';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_image',
        1 => 'field_paragraphs_caption',
      ),
    ),
    'fields' => array(
      'field_paragraphs_image' => 'ds_content',
      'field_paragraphs_caption' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|long_form_image|paragraphs_right_align'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_pullquote|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_pullquote';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraph_pullquote',
        1 => 'field_para_pullquote_author',
      ),
    ),
    'fields' => array(
      'field_paragraph_pullquote' => 'ds_content',
      'field_para_pullquote_author' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|long_form_pullquote|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_section_break_image|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_section_break_image';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_para_section_break_title',
        1 => 'field_para_section_break_image',
      ),
    ),
    'fields' => array(
      'field_para_section_break_title' => 'ds_content',
      'field_para_section_break_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|long_form_section_break_image|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_section_break_image|paragraphs_full_width';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_section_break_image';
  $ds_layout->view_mode = 'paragraphs_full_width';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_para_section_break_title',
        1 => 'field_para_section_break_image',
      ),
    ),
    'fields' => array(
      'field_para_section_break_title' => 'ds_content',
      'field_para_section_break_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|long_form_section_break_image|paragraphs_full_width'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_section_header_image|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_section_header_image';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_para_sctn_head_sctn_title',
        1 => 'field_para_sctn_head_title',
        2 => 'field_para_sctn_head_image',
      ),
    ),
    'fields' => array(
      'field_para_sctn_head_sctn_title' => 'ds_content',
      'field_para_sctn_head_title' => 'ds_content',
      'field_para_sctn_head_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|long_form_section_header_image|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_section_header_image|form';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_section_header_image';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_para_sctn_head_sctn_title',
        1 => 'field_para_sctn_head_title',
        2 => 'field_para_sctn_head_image',
      ),
    ),
    'fields' => array(
      'field_para_sctn_head_sctn_title' => 'ds_content',
      'field_para_sctn_head_title' => 'ds_content',
      'field_para_sctn_head_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|long_form_section_header_image|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_section_header_image|paragraphs_full_width';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_section_header_image';
  $ds_layout->view_mode = 'paragraphs_full_width';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_para_sctn_head_sctn_title',
        1 => 'field_para_sctn_head_title',
        2 => 'field_para_sctn_head_image',
      ),
    ),
    'fields' => array(
      'field_para_sctn_head_sctn_title' => 'ds_content',
      'field_para_sctn_head_title' => 'ds_content',
      'field_para_sctn_head_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|long_form_section_header_image|paragraphs_full_width'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_text|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_text';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraph_text',
      ),
    ),
    'fields' => array(
      'field_paragraph_text' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|long_form_text|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_text|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_text';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraph_text',
      ),
    ),
    'fields' => array(
      'field_paragraph_text' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|long_form_text|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_video|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_video';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_video',
        1 => 'field_paragraphs_caption',
      ),
    ),
    'fields' => array(
      'field_paragraphs_video' => 'ds_content',
      'field_paragraphs_caption' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|long_form_video|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function gie_long_form_content_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'long_form_asset';
  $ds_view_mode->label = 'Long-form asset';
  $ds_view_mode->entities = array(
    'asset' => 'asset',
  );
  $export['long_form_asset'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'long_form_section_header_image';
  $ds_view_mode->label = 'Long Form Section Header Image';
  $ds_view_mode->entities = array(
    'asset' => 'asset',
  );
  $export['long_form_section_header_image'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'paragraphs_full_width';
  $ds_view_mode->label = 'Paragraphs full width';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['paragraphs_full_width'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'paragraphs_left_align';
  $ds_view_mode->label = 'Paragraphs left align';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['paragraphs_left_align'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'paragraphs_right_align';
  $ds_view_mode->label = 'Paragraphs right align';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['paragraphs_right_align'] = $ds_view_mode;

  return $export;
}
