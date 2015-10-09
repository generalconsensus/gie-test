<?php
/**
 * @file
 * gie_groups.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_groups_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_microsite_footer|node|group|form';
  $field_group->group_name = 'group_microsite_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Footer',
    'weight' => '8',
    'children' => array(
      0 => 'field_group_footer_description',
      1 => 'field_group_footer_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-microsite-footer field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_microsite_footer|node|group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_microsite_partners|node|group|form';
  $field_group->group_name = 'group_microsite_partners';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Partners',
    'weight' => '6',
    'children' => array(
      0 => 'field_group_partners',
      1 => 'field_group_partners_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-microsite-partners field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_microsite_partners|node|group|form'] = $field_group;

  return $export;
}
