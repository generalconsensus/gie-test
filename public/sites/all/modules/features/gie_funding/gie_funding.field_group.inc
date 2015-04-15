<?php
/**
 * @file
 * gie_funding.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_funding_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|node|funding|listing';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funding';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Content',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_funding_deadline',
      2 => 'field_funding_effort',
      3 => 'field_funding_eligibility',
      4 => 'field_funding_grant_award_value',
      5 => 'field_term_topic',
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
  $export['group_card_content|node|funding|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_counts|node|funding|listing';
  $field_group->group_name = 'group_card_counts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funding';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Counts',
    'weight' => '27',
    'children' => array(
      0 => 'funding_counters_comment_count',
      1 => 'funding_counters_favorite_count',
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
  $export['group_card_counts|node|funding|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding_stats_first|node|funding|full';
  $field_group->group_name = 'group_funding_stats_first';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funding';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_funding_stats';
  $field_group->data = array(
    'label' => 'Funding Stats First',
    'weight' => '1',
    'children' => array(
      0 => 'field_funding_eligibility_type',
      1 => 'field_funding_grant_award_value',
      2 => 'field_funding_poc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Funding Stats First',
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
  $export['group_funding_stats_first|node|funding|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding_stats_second|node|funding|full';
  $field_group->group_name = 'group_funding_stats_second';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funding';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_funding_stats';
  $field_group->data = array(
    'label' => 'Funding Stats Second',
    'weight' => '2',
    'children' => array(
      0 => 'field_funding_duration',
      1 => 'field_funding_effort',
      2 => 'field_term_sector',
      3 => 'field_term_region',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Funding Stats Second',
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
  $export['group_funding_stats_second|node|funding|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding_stats|node|funding|full';
  $field_group->group_name = 'group_funding_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funding';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Funding Stats',
    'weight' => '0',
    'children' => array(
      0 => 'group_funding_stats_first',
      1 => 'group_funding_stats_second',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Funding Stats',
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
  $export['group_funding_stats|node|funding|full'] = $field_group;

  return $export;
}
