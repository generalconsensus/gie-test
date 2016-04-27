<?php
/**
 * @file
 * gie_microsite.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_microsite_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_callout_text|paragraphs_item|microsite_text_callout|default';
  $field_group->group_name = 'group_callout_text';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_text_callout';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_text';
  $field_group->data = array(
    'label' => 'Callout Text',
    'weight' => '5',
    'children' => array(
      0 => 'field_para_callout_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Callout Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_callout_text|paragraphs_item|microsite_text_callout|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container|paragraphs_item|long_form_50_50|left_image';
  $field_group->group_name = 'group_container';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_50_50';
  $field_group->mode = 'left_image';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '0',
    'children' => array(
      0 => 'group_image',
      1 => 'group_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-50-50 microsite-50-50--reversed',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_container|paragraphs_item|long_form_50_50|left_image'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container|paragraphs_item|long_form_50_50|right_image';
  $field_group->group_name = 'group_container';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_50_50';
  $field_group->mode = 'right_image';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '0',
    'children' => array(
      0 => 'group_text',
      1 => 'group_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-50-50',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_container|paragraphs_item|long_form_50_50|right_image'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_text|paragraphs_item|long_form_header|default';
  $field_group->group_name = 'group_header_text';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_header';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_text_wrapper';
  $field_group->data = array(
    'label' => 'Header Text',
    'weight' => '6',
    'children' => array(
      0 => 'field_para_header_subtitle',
      1 => 'field_para_header_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Header Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-header__text',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_header_text|paragraphs_item|long_form_header|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|paragraphs_item|microsite_news_slider|default';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_news_slider';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header',
    'weight' => '0',
    'children' => array(
      0 => 'field_para_slider_title',
      1 => 'group_slider',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Header',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_header|paragraphs_item|microsite_news_slider|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|organization|microsite_content_slider';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'microsite_content_slider';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_org_logo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-content-slider__image',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image|node|organization|microsite_content_slider'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|paragraphs_item|long_form_50_50|default';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_50_50';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '1',
    'children' => array(
      0 => 'field_para_5050_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-50-50__image',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image|paragraphs_item|long_form_50_50|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|paragraphs_item|long_form_50_50|left_image';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_50_50';
  $field_group->mode = 'left_image';
  $field_group->parent_name = 'group_container';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '3',
    'children' => array(
      0 => 'field_para_5050_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-50-50__image',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image|paragraphs_item|long_form_50_50|left_image'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|paragraphs_item|long_form_50_50|right_image';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_50_50';
  $field_group->mode = 'right_image';
  $field_group->parent_name = 'group_container';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '8',
    'children' => array(
      0 => 'field_para_5050_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-50-50__image',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image|paragraphs_item|long_form_50_50|right_image'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_content|node|organization|microsite_content_slider';
  $field_group->group_name = 'group_right_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'microsite_content_slider';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_org_desc',
      1 => 'title',
      2 => 'node_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-content-slider__content',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_right_content|node|organization|microsite_content_slider'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slider|paragraphs_item|microsite_news_slider|default';
  $field_group->group_name = 'group_slider';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_news_slider';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_header';
  $field_group->data = array(
    'label' => 'Slider',
    'weight' => '2',
    'children' => array(
      0 => 'microsite_content_slider_microsite_content_slider',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Slider',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_slider|paragraphs_item|microsite_news_slider|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_wrapper|paragraphs_item|long_form_header|default';
  $field_group->group_name = 'group_text_wrapper';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_header';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_header_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Text Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-header__text-wrapper',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_text_wrapper|paragraphs_item|long_form_header|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_wrapper|paragraphs_item|microsite_highlight|default';
  $field_group->group_name = 'group_text_wrapper';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_highlight';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Text Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'layout-constrain',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_text_wrapper|paragraphs_item|microsite_highlight|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|paragraphs_item|long_form_50_50|default';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_50_50';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '0',
    'children' => array(
      0 => 'field_para_5050_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-50-50__text',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_text|paragraphs_item|long_form_50_50|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|paragraphs_item|long_form_50_50|left_image';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_50_50';
  $field_group->mode = 'left_image';
  $field_group->parent_name = 'group_container';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '2',
    'children' => array(
      0 => 'field_para_5050_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-50-50__text',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_text|paragraphs_item|long_form_50_50|left_image'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|paragraphs_item|long_form_50_50|right_image';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_50_50';
  $field_group->mode = 'right_image';
  $field_group->parent_name = 'group_container';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '7',
    'children' => array(
      0 => 'field_para_5050_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-50-50__text',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_text|paragraphs_item|long_form_50_50|right_image'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|paragraphs_item|microsite_highlight|default';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_highlight';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_text_wrapper';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '6',
    'children' => array(
      0 => 'field_para_highlight_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-highlight__text-wrapper',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_text|paragraphs_item|microsite_highlight|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|paragraphs_item|microsite_text_callout|default';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_text_callout';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '0',
    'children' => array(
      0 => 'group_callout_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-break__text-wrapper',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_text|paragraphs_item|microsite_text_callout|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|paragraphs_item|microsite_text|center_aligned';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_text';
  $field_group->mode = 'center_aligned';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '0',
    'children' => array(
      0 => 'field_paragraph_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-text layout-constrain microsite-text--centered ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_text|paragraphs_item|microsite_text|center_aligned'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|paragraphs_item|microsite_text|left_aligned';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_text';
  $field_group->mode = 'left_aligned';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '0',
    'children' => array(
      0 => 'field_paragraph_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-text layout-constrain',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_text|paragraphs_item|microsite_text|left_aligned'] = $field_group;

  return $export;
}
