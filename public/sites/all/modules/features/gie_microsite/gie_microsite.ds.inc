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
  $ds_fieldsetting->id = 'paragraphs_item|long_form_50_50|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'long_form_50_50';
  $ds_fieldsetting->view_mode = 'default';
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
    'field_para_5050_orientation' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_background' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['paragraphs_item|long_form_50_50|default'] = $ds_fieldsetting;

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
  $ds_fieldsetting->id = 'paragraphs_item|long_form_header|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'long_form_header';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_para_header_subtitle' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'microsite-header__subtext',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_para_header_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'microsite-header__headline',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|long_form_header|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|microsite_callout_card|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'microsite_callout_card';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_para_callout_body_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'microsite-callout-card__card',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'microsite-callout-card__image',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_para_callout_body_2' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'microsite-callout-card__card',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'microsite-callout-card__image',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_para_callout_body_3' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'microsite-callout-card__card',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'microsite-callout-card__image',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|microsite_callout_card|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|microsite_highlight|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'microsite_highlight';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_para_highlight_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'microsite-highlight__text',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|microsite_highlight|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|microsite_news_slider|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'microsite_news_slider';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_para_slider_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['paragraphs_item|microsite_news_slider|default'] = $ds_fieldsetting;

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
  $ds_fieldsetting->id = 'paragraphs_item|microsite_text_callout|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'microsite_text_callout';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_para_callout_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['paragraphs_item|microsite_text_callout|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|microsite_text|center_aligned';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'microsite_text';
  $ds_fieldsetting->view_mode = 'center_aligned';
  $ds_fieldsetting->settings = array(
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
  $ds_layout->id = 'paragraphs_item|long_form_50_50|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_50_50';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'microsite_5050';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'group_text',
        1 => 'group_image',
        2 => 'field_para_5050_orientation',
        3 => 'field_background',
        4 => 'field_para_5050_text',
        5 => 'field_para_5050_image',
      ),
    ),
    'fields' => array(
      'group_text' => 'main_content',
      'group_image' => 'main_content',
      'field_para_5050_orientation' => 'main_content',
      'field_background' => 'main_content',
      'field_para_5050_text' => 'main_content',
      'field_para_5050_image' => 'main_content',
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
  $export['paragraphs_item|long_form_50_50|default'] = $ds_layout;

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
  $ds_layout->layout = 'microsite_header';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'group_text_wrapper',
        1 => 'field_para_header_image',
        2 => 'field_para_header_options',
        3 => 'field_para_header_subtitle',
        4 => 'field_para_header_title',
        5 => 'group_header_text',
      ),
    ),
    'fields' => array(
      'group_text_wrapper' => 'main_content',
      'field_para_header_image' => 'main_content',
      'field_para_header_options' => 'main_content',
      'field_para_header_subtitle' => 'main_content',
      'field_para_header_title' => 'main_content',
      'group_header_text' => 'main_content',
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
  $export['paragraphs_item|long_form_header|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|microsite_callout_card|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'microsite_callout_card';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'microsite_callout';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'field_para_callout_body_1',
        1 => 'field_para_callout_body_2',
        2 => 'field_para_callout_body_3',
      ),
    ),
    'fields' => array(
      'field_para_callout_body_1' => 'main_content',
      'field_para_callout_body_2' => 'main_content',
      'field_para_callout_body_3' => 'main_content',
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
  $export['paragraphs_item|microsite_callout_card|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|microsite_highlight|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'microsite_highlight';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'microsite_highlight';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'group_text_wrapper',
        1 => 'field_para_highlight_image',
        2 => 'field_para_highlight_text',
        3 => 'group_text',
      ),
    ),
    'fields' => array(
      'group_text_wrapper' => 'main_content',
      'field_para_highlight_image' => 'main_content',
      'field_para_highlight_text' => 'main_content',
      'group_text' => 'main_content',
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
  $export['paragraphs_item|microsite_highlight|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|microsite_news_slider|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'microsite_news_slider';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_header',
        1 => 'field_para_slider_title',
        2 => 'microsite_content_slider_microsite_content_slider',
        3 => 'group_slider',
      ),
    ),
    'fields' => array(
      'group_header' => 'ds_content',
      'field_para_slider_title' => 'ds_content',
      'microsite_content_slider_microsite_content_slider' => 'ds_content',
      'group_slider' => 'ds_content',
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
  $export['paragraphs_item|microsite_news_slider|default'] = $ds_layout;

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
  $ds_layout->id = 'paragraphs_item|microsite_text_callout|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'microsite_text_callout';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'microsite_text_callout';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'group_text',
        1 => 'field_para_callout_image',
        2 => 'field_background',
        3 => 'field_para_callout_text',
        4 => 'group_callout_text',
      ),
    ),
    'fields' => array(
      'group_text' => 'main_content',
      'field_para_callout_image' => 'main_content',
      'field_background' => 'main_content',
      'field_para_callout_text' => 'main_content',
      'group_callout_text' => 'main_content',
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
  $export['paragraphs_item|microsite_text_callout|default'] = $ds_layout;

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
        1 => 'field_background'
      ),
    ),
    'fields' => array(
      'field_paragraph_text' => 'main_content',
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
  $ds_view_mode->view_mode = 'microsite_content_slider';
  $ds_view_mode->label = 'Microsite Content Slider';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['microsite_content_slider'] = $ds_view_mode;

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
