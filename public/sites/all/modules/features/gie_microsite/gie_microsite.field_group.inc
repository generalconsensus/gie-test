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
  $field_group->identifier = 'group_callout_card|paragraphs_item|microsite_callout_card|callout_2';
  $field_group->group_name = 'group_callout_card';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_callout_card';
  $field_group->mode = 'callout_2';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Callout Card',
    'weight' => '0',
    'children' => array(
      0 => 'group_card',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Callout Card',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-callout-card microsite-callout-card--2-cols',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_callout_card|paragraphs_item|microsite_callout_card|callout_2'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_callout_card|paragraphs_item|microsite_callout_card|callout_3';
  $field_group->group_name = 'group_callout_card';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_callout_card';
  $field_group->mode = 'callout_3';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Callout Card',
    'weight' => '0',
    'children' => array(
      0 => 'group_card',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Callout Card',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-callout-card microsite-callout-card--3-cols',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_callout_card|paragraphs_item|microsite_callout_card|callout_3'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_callout|paragraphs_item|microsite_callout_card|callout_1';
  $field_group->group_name = 'group_callout';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_callout_card';
  $field_group->mode = 'callout_1';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Callout Card',
    'weight' => '0',
    'children' => array(
      0 => 'group_card',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Callout Card',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-callout-card',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_callout|paragraphs_item|microsite_callout_card|callout_1'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card|paragraphs_item|microsite_callout_card|callout_1';
  $field_group->group_name = 'group_card';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_callout_card';
  $field_group->mode = 'callout_1';
  $field_group->parent_name = 'group_callout';
  $field_group->data = array(
    'label' => 'Card',
    'weight' => '10',
    'children' => array(
      0 => 'group_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-callout-card__inner layout-constrain',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_card|paragraphs_item|microsite_callout_card|callout_1'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card|paragraphs_item|microsite_callout_card|callout_2';
  $field_group->group_name = 'group_card';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_callout_card';
  $field_group->mode = 'callout_2';
  $field_group->parent_name = 'group_callout_card';
  $field_group->data = array(
    'label' => 'Card',
    'weight' => '10',
    'children' => array(
      0 => 'group_content',
      1 => 'group_content_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-card field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_card|paragraphs_item|microsite_callout_card|callout_2'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card|paragraphs_item|microsite_callout_card|callout_3';
  $field_group->group_name = 'group_card';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_callout_card';
  $field_group->mode = 'callout_3';
  $field_group->parent_name = 'group_callout_card';
  $field_group->data = array(
    'label' => 'Card',
    'weight' => '12',
    'children' => array(
      0 => 'group_content',
      1 => 'group_content_2',
      2 => 'group_content_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-callout-card__inner layout-constrain',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_card|paragraphs_item|microsite_callout_card|callout_3'] = $field_group;

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
      0 => 'group_text',
      1 => 'group_image',
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
  $field_group->identifier = 'group_content_2|paragraphs_item|microsite_callout_card|callout_2';
  $field_group->group_name = 'group_content_2';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_callout_card';
  $field_group->mode = 'callout_2';
  $field_group->parent_name = 'group_card';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '12',
    'children' => array(
      0 => 'field_para_callout_body_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-callout-card__card',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content_2|paragraphs_item|microsite_callout_card|callout_2'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_2|paragraphs_item|microsite_callout_card|callout_3';
  $field_group->group_name = 'group_content_2';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_callout_card';
  $field_group->mode = 'callout_3';
  $field_group->parent_name = 'group_card';
  $field_group->data = array(
    'label' => 'Content 2',
    'weight' => '14',
    'children' => array(
      0 => 'field_para_callout_body_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-callout-card__card',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content_2|paragraphs_item|microsite_callout_card|callout_3'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_3|paragraphs_item|microsite_callout_card|callout_3';
  $field_group->group_name = 'group_content_3';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_callout_card';
  $field_group->mode = 'callout_3';
  $field_group->parent_name = 'group_card';
  $field_group->data = array(
    'label' => 'Content 3',
    'weight' => '15',
    'children' => array(
      0 => 'field_para_callout_body_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content 3',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-callout-card__card',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content_3|paragraphs_item|microsite_callout_card|callout_3'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|microsite_callout_card|callout_1';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_callout_card';
  $field_group->mode = 'callout_1';
  $field_group->parent_name = 'group_card';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '9',
    'children' => array(
      0 => 'field_para_callout_body_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-callout-card__card',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content|paragraphs_item|microsite_callout_card|callout_1'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|microsite_callout_card|callout_2';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_callout_card';
  $field_group->mode = 'callout_2';
  $field_group->parent_name = 'group_card';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '11',
    'children' => array(
      0 => 'field_para_callout_body_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-callout-card__card',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content|paragraphs_item|microsite_callout_card|callout_2'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|microsite_callout_card|callout_3';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'microsite_callout_card';
  $field_group->mode = 'callout_3';
  $field_group->parent_name = 'group_card';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '13',
    'children' => array(
      0 => 'field_para_callout_body_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'microsite-callout-card__card',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content|paragraphs_item|microsite_callout_card|callout_3'] = $field_group;

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
      'formatter' => 'collapsible',
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