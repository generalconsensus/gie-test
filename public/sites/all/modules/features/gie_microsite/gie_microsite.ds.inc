<?php
/**
 * @file
 * gie_microsite.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gie_microsite_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|long_form_50_50|left_image';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'long_form_50_50';
  $ds_fieldsetting->view_mode = 'left_image';
  $ds_fieldsetting->settings = array(
    'field_para_5050_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_para_5050_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['paragraphs_item|long_form_50_50|left_image'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|long_form_50_50|right_image';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'long_form_50_50';
  $ds_fieldsetting->view_mode = 'right_image';
  $ds_fieldsetting->settings = array(
    'field_para_5050_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_para_5050_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['paragraphs_item|long_form_50_50|right_image'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|microsite_callout_card|callout_1';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'microsite_callout_card';
  $ds_fieldsetting->view_mode = 'callout_1';
  $ds_fieldsetting->settings = array(
    'field_para_callout_body_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'microsite-callout-card__image',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|microsite_callout_card|callout_1'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|microsite_callout_card|callout_2';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'microsite_callout_card';
  $ds_fieldsetting->view_mode = 'callout_2';
  $ds_fieldsetting->settings = array(
    'field_para_callout_body_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'microsite-callout-card__image',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_para_callout_body_2' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'microsite-callout-card__image',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|microsite_callout_card|callout_2'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|microsite_callout_card|callout_3';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'microsite_callout_card';
  $ds_fieldsetting->view_mode = 'callout_3';
  $ds_fieldsetting->settings = array(
    'field_para_callout_body_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'microsite-callout-card__image',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_para_callout_body_2' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'microsite-callout-card__image',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_para_callout_body_3' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'microsite-callout-card__image',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|microsite_callout_card|callout_3'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|microsite_section_break_image|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'microsite_section_break_image';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'microsite_section_break_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['paragraphs_item|microsite_section_break_image|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|microsite_text|center_aligned';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'microsite_text';
  $ds_fieldsetting->view_mode = 'center_aligned';
  $ds_fieldsetting->settings = array(
    'field_para_text_orientation' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_paragraph_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_background' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['paragraphs_item|microsite_text|center_aligned'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|microsite_text|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'microsite_text';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_background' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_orientation' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['paragraphs_item|microsite_text|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|microsite_text|left_aligned';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'microsite_text';
  $ds_fieldsetting->view_mode = 'left_aligned';
  $ds_fieldsetting->settings = array(
    'field_paragraph_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['paragraphs_item|microsite_text|left_aligned'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function gie_microsite_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'microsite_header_image';
  $ds_field->label = 'Microsite Header Image';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '  <div class="microsite-header" style="background-image: url([paragraphs_item:field_para_header_image]);">
      <div class="microsite-header__text-wrapper">
        <div class="microsite-header__text">
			<div class="microsite-header__subtext">
				[paragraphs_item:field_para_header_subtitle]</div>

		 <div class="microsite-header__headline">
				[paragraphs_item:field_para_header_title]</div>
		</div>
	</div>
</div>',
      'format' => 'long_form_full',
    ),
    'use_token' => 1,
  );
  $export['microsite_header_image'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'microsite_section_break_image';
  $ds_field->label = 'Microsite Section Break Image';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => ' <div class="microsite-break" style="background-image: url([paragraphs_item:field_para_section_break_image]);">
      <div class="microsite-break__text-wrapper">
        <div class="microsite-break__text">
[paragraphs_item:field_para_section_break_title]        </div>
      </div>
    </div>',
      'format' => 'long_form_full',
    ),
    'use_token' => 1,
  );
  $export['microsite_section_break_image'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_microsite_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_50_50|left_image';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_50_50';
  $ds_layout->view_mode = 'left_image';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_container',
        1 => 'group_text',
        2 => 'group_image',
        3 => 'field_para_5050_text',
        4 => 'field_para_5050_image',
      ),
    ),
    'fields' => array(
      'group_container' => 'ds_content',
      'group_text' => 'ds_content',
      'group_image' => 'ds_content',
      'field_para_5050_text' => 'ds_content',
      'field_para_5050_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|long_form_50_50|left_image'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_50_50|right_image';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_50_50';
  $ds_layout->view_mode = 'right_image';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_container',
        1 => 'field_para_5050_text',
        2 => 'field_para_5050_image',
        3 => 'group_text',
        4 => 'group_image',
      ),
    ),
    'fields' => array(
      'group_container' => 'ds_content',
      'field_para_5050_text' => 'ds_content',
      'field_para_5050_image' => 'ds_content',
      'group_text' => 'ds_content',
      'group_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|long_form_50_50|right_image'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_featured_content|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_featured_content';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'microsite_featured_content_entity_view_1',
      ),
    ),
    'fields' => array(
      'microsite_featured_content_entity_view_1' => 'ds_content',
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
  $export['paragraphs_item|long_form_featured_content|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_header|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_header';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'microsite_header_image',
      ),
    ),
    'fields' => array(
      'microsite_header_image' => 'ds_content',
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
  $export['paragraphs_item|long_form_header|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|microsite_callout_card|callout_1';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'microsite_callout_card';
  $ds_layout->view_mode = 'callout_1';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_callout',
        1 => 'field_para_callout_body_1',
        2 => 'group_content',
        3 => 'group_card',
      ),
    ),
    'fields' => array(
      'group_callout' => 'ds_content',
      'field_para_callout_body_1' => 'ds_content',
      'group_content' => 'ds_content',
      'group_card' => 'ds_content',
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
  $export['paragraphs_item|microsite_callout_card|callout_1'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|microsite_callout_card|callout_2';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'microsite_callout_card';
  $ds_layout->view_mode = 'callout_2';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_callout_card',
        1 => 'field_para_callout_body_1',
        2 => 'field_para_callout_body_2',
        3 => 'group_card',
        4 => 'group_content',
        5 => 'group_content_2',
      ),
    ),
    'fields' => array(
      'group_callout_card' => 'ds_content',
      'field_para_callout_body_1' => 'ds_content',
      'field_para_callout_body_2' => 'ds_content',
      'group_card' => 'ds_content',
      'group_content' => 'ds_content',
      'group_content_2' => 'ds_content',
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
  $export['paragraphs_item|microsite_callout_card|callout_2'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|microsite_callout_card|callout_3';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'microsite_callout_card';
  $ds_layout->view_mode = 'callout_3';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_callout_card',
        1 => 'field_para_callout_body_1',
        2 => 'field_para_callout_body_2',
        3 => 'field_para_callout_body_3',
        4 => 'group_card',
        5 => 'group_content',
        6 => 'group_content_2',
        7 => 'group_content_3',
      ),
    ),
    'fields' => array(
      'group_callout_card' => 'ds_content',
      'field_para_callout_body_1' => 'ds_content',
      'field_para_callout_body_2' => 'ds_content',
      'field_para_callout_body_3' => 'ds_content',
      'group_card' => 'ds_content',
      'group_content' => 'ds_content',
      'group_content_2' => 'ds_content',
      'group_content_3' => 'ds_content',
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
  $export['paragraphs_item|microsite_callout_card|callout_3'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|microsite_section_break_image|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'microsite_section_break_image';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'microsite_section_break_image',
      ),
    ),
    'fields' => array(
      'microsite_section_break_image' => 'ds_content',
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
  $export['paragraphs_item|microsite_section_break_image|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|microsite_text|center_aligned';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'microsite_text';
  $ds_layout->view_mode = 'center_aligned';
  $ds_layout->layout = 'microsite_text';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'field_paragraph_text',
        1 => 'field_background',
        2 => 'field_para_text_orientation',
      ),
    ),
    'fields' => array(
      'field_paragraph_text' => 'main_content',
      'field_background' => 'main_content',
      'field_para_text_orientation' => 'main_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|microsite_text|center_aligned'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|microsite_text|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'microsite_text';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'microsite_text';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'field_paragraph_text',
        1 => 'field_orientation',
        2 => 'field_background',
      ),
    ),
    'fields' => array(
      'field_paragraph_text' => 'main_content',
      'field_orientation' => 'main_content',
      'field_background' => 'main_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|microsite_text|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|microsite_text|left_aligned';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'microsite_text';
  $ds_layout->view_mode = 'left_aligned';
  $ds_layout->layout = 'microsite_text';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'group_text',
        1 => 'field_paragraph_text',
      ),
    ),
    'fields' => array(
      'group_text' => 'main_content',
      'field_paragraph_text' => 'main_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|microsite_text|left_aligned'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function gie_microsite_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'callout_1';
  $ds_view_mode->label = 'Callout 1';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['callout_1'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'callout_2';
  $ds_view_mode->label = 'Callout 2';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['callout_2'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'callout_3';
  $ds_view_mode->label = 'Callout 3';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['callout_3'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'center_aligned';
  $ds_view_mode->label = 'Center Aligned';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['center_aligned'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'left_aligned';
  $ds_view_mode->label = 'Left Aligned';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['left_aligned'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'left_image';
  $ds_view_mode->label = 'Left Image';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['left_image'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'right_image';
  $ds_view_mode->label = 'Right Image';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['right_image'] = $ds_view_mode;

  return $export;
}
