<?php
/**
 * @file
 * gie_program.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_program_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|node|program|listing';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Content',
    'weight' => '5',
    'children' => array(
      0 => 'title_field',
      1 => 'field_program_desc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'card__content',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_card_content|node|program|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_counts|node|program|listing';
  $field_group->group_name = 'group_card_counts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Counts',
    'weight' => '6',
    'children' => array(
      0 => 'program_counters_program_count',
      1 => 'program_counters_innovation_count',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card Counts',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'card__counts',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_card_counts|node|program|listing'] = $field_group;

  return $export;
}
