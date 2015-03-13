<?php
/**
 * @file
 * gie_innovation.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_innovation_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_innovation_stats|node|innovation|full';
  $field_group->group_name = 'group_innovation_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Innovation Stats',
    'weight' => '0',
    'children' => array(
      0 => 'field_innovation_cpu',
      1 => 'field_innovation_created',
      2 => 'field_innovation_implemented',
      3 => 'field_innovation_program',
      4 => 'field_innovation_stage',
      5 => 'field_innovation_type',
      6 => 'field_testing_phase',
      7 => 'field_innovation_funding_goal',
      8 => 'field_innovation_sector',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Innovation Stats',
      'instance_settings' => array(
        'classes' => 'group-innovation-stats field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_innovation_stats|node|innovation|full'] = $field_group;

  return $export;
}
