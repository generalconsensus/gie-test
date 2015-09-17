<?php
/**
 * @file
 * gie_long_form_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_long_form_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_para_callout_1|paragraphs_item|long_form_callout_card|form';
  $field_group->group_name = 'group_para_callout_1';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_callout_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Callout #1',
    'weight' => '0',
    'children' => array(
      0 => 'field_para_callout_title_1',
      1 => 'field_para_callout_body_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Callout #1',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-para-callout-1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_para_callout_1|paragraphs_item|long_form_callout_card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_para_callout_2|paragraphs_item|long_form_callout_card|form';
  $field_group->group_name = 'group_para_callout_2';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_callout_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Callout #2',
    'weight' => '10',
    'children' => array(
      0 => 'field_para_callout_title_2',
      1 => 'field_para_callout_body_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-para-callout-2 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_para_callout_2|paragraphs_item|long_form_callout_card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_para_callout_3|paragraphs_item|long_form_callout_card|form';
  $field_group->group_name = 'group_para_callout_3';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_callout_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Callout #3',
    'weight' => '12',
    'children' => array(
      0 => 'field_para_callout_title_3',
      1 => 'field_para_callout_body_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-para-callout-3 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_para_callout_3|paragraphs_item|long_form_callout_card|form'] = $field_group;

  return $export;
}
