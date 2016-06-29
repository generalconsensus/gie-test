<?php
/**
 * @file
 * gie_taxonomies.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_taxonomies_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|taxonomy_term|region|listing';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'region';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Content',
    'weight' => '1',
    'children' => array(
      0 => 'title',
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
  $field_groups['group_card_content|taxonomy_term|region|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|taxonomy_term|sector|listing';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'sector';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Content',
    'weight' => '1',
    'children' => array(
      0 => 'title',
      1 => 'group_card_counts',
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
  $field_groups['group_card_content|taxonomy_term|sector|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|taxonomy_term|topic|listing';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'topic';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Content',
    'weight' => '1',
    'children' => array(
      0 => 'title',
      1 => 'group_card_counts',
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
  $field_groups['group_card_content|taxonomy_term|topic|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_counts|taxonomy_term|region|listing';
  $field_group->group_name = 'group_card_counts';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'region';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Counts',
    'weight' => '2',
    'children' => array(
      0 => 'region_counts_funding_sum_field',
      1 => 'region_counts_innovation_count_field',
      2 => 'region_counts_entity_view_1',
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
  $field_groups['group_card_counts|taxonomy_term|region|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_counts|taxonomy_term|sector|listing';
  $field_group->group_name = 'group_card_counts';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'sector';
  $field_group->mode = 'listing';
  $field_group->parent_name = 'group_card_content';
  $field_group->data = array(
    'label' => 'Card Counts',
    'weight' => '1',
    'children' => array(
      0 => 'community_counts_funding_sum_field',
      1 => 'community_counts_innovation_count_field',
      2 => 'community_counts_entity_view_1',
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
  $field_groups['group_card_counts|taxonomy_term|sector|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_counts|taxonomy_term|topic|listing';
  $field_group->group_name = 'group_card_counts';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'topic';
  $field_group->mode = 'listing';
  $field_group->parent_name = 'group_card_content';
  $field_group->data = array(
    'label' => 'Card Counts',
    'weight' => '2',
    'children' => array(
      0 => 'topic_counts_topic_funding_sum_field',
      1 => 'topic_counts_topic_innovation_count_field',
      2 => 'topic_counts_topic_resource_count',
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
  $field_groups['group_card_counts|taxonomy_term|topic|listing'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Card Content');
  t('Card Counts');

  return $field_groups;
}
