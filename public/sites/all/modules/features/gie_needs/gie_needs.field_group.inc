<?php
/**
 * @file
 * gie_needs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_needs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_meta|node|needs|listing';
  $field_group->group_name = 'group_card_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'needs';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Meta',
    'weight' => '1',
    'children' => array(
      0 => 'field_needs_location',
      1 => 'field_needs_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card Meta',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'card__meta',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_card_meta|node|needs|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_counts|node|needs|listing';
  $field_group->group_name = 'group_counts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'needs';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Counts',
    'weight' => '6',
    'children' => array(
      0 => 'wanted_counts_entity_view_1',
      1 => 'wanted_counts_comments',
      2 => 'wanted_counts_wanted_people_needed',
      3 => 'wanted_counts_wanted_funding_available',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Counts',
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
  $field_groups['group_counts|node|needs|listing'] = $field_group;

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
      0 => 'field_needs_amount_items',
      1 => 'field_needs_amount_money',
      2 => 'field_needs_amount_people',
      3 => 'field_needs_date_needed',
      4 => 'field_needs_location',
      5 => 'field_needs_paid',
      6 => 'field_needs_related_organization',
      7 => 'field_needs_related_program',
      8 => 'field_needs_status',
      9 => 'field_needs_type',
      10 => 'field_term_region',
      11 => 'field_term_sector',
      12 => 'field_term_topic',
      13 => 'needs_point_of_contact_needs_contact_button',
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
  $field_groups['group_details|node|needs|details'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Card Meta');
  t('Counts');
  t('Details');

  return $field_groups;
}
