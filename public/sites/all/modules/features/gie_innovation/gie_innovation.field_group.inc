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
  $field_group->identifier = 'group_card_content|node|innovation|listing';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Content',
    'weight' => '1',
    'children' => array(
      0 => 'title_field',
      1 => 'field_innovation_desc',
      2 => 'group_card_counts',
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
  $export['group_card_content|node|innovation|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_counts|node|innovation|listing';
  $field_group->group_name = 'group_card_counts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'listing';
  $field_group->parent_name = 'group_card_content';
  $field_group->data = array(
    'label' => 'Card Counts',
    'weight' => '4',
    'children' => array(
      0 => 'innovation_listing_counts_evidence',
      1 => 'innovation_listing_counts_comments',
      2 => 'innovation_listing_counts_orgs',
      3 => 'innovation_listing_counts_favorites',
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
  $export['group_card_counts|node|innovation|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_innovation_stats_first|node|innovation|full';
  $field_group->group_name = 'group_innovation_stats_first';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_innovation_stats';
  $field_group->data = array(
    'label' => 'Innovation Stats First',
    'weight' => '45',
    'children' => array(
      0 => 'field_innovation_stage',
      1 => 'field_innovation_type',
      2 => 'field_testing_phase',
      3 => 'field_innovation_funding_goal',
      4 => 'field_innovation_cost_per_unit',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Innovation Stats First',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'stats__first',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_innovation_stats_first|node|innovation|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_innovation_stats_second|node|innovation|full';
  $field_group->group_name = 'group_innovation_stats_second';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_innovation_stats';
  $field_group->data = array(
    'label' => 'Innovation Stats Second',
    'weight' => '46',
    'children' => array(
      0 => 'field_innovation_created',
      1 => 'field_innovation_implemented',
      2 => 'field_innovation_program',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Innovation Stats Second',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'stats__second',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_innovation_stats_second|node|innovation|full'] = $field_group;

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
      0 => 'group_innovation_stats_first',
      1 => 'group_innovation_stats_second',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Innovation Stats',
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
  $export['group_innovation_stats|node|innovation|full'] = $field_group;

  return $export;
}
