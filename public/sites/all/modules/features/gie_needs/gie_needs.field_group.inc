<?php
/**
 * @file
 * gie_needs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_needs_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|needs|details';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'needs';
  $field_group->mode = 'details';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_needs_type',
      1 => 'field_needs_date_needed',
      2 => 'field_needs_related_organization',
      3 => 'field_needs_related_program',
      4 => 'field_term_sector',
      5 => 'field_term_topic',
      6 => 'field_term_region',
      7 => 'field_needs_paid',
      8 => 'field_needs_status',
      9 => 'field_needs_amount_money',
      10 => 'field_needs_amount_items',
      11 => 'field_needs_amount_people',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'stats',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_details|node|needs|details'] = $field_group;

  return $export;
}
