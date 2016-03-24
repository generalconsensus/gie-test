<?php
/**
 * @file
 * gie_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_news_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_author|node|news|listing';
  $field_group->group_name = 'group_card_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'listing';
  $field_group->parent_name = 'group_card_content';
  $field_group->data = array(
    'label' => 'Card Author',
    'weight' => '3',
    'children' => array(
      0 => 'field_news_point_of_contact',
      1 => 'field_news_publish_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card Author',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'card__author',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_card_author|node|news|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|node|news|listing';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Content',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_news_sector',
      2 => 'group_card_author',
      3 => 'group_card_counts',
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
  $export['group_card_content|node|news|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_counts|node|news|listing';
  $field_group->group_name = 'group_card_counts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'listing';
  $field_group->parent_name = 'group_card_content';
  $field_group->data = array(
    'label' => 'Card Counts',
    'weight' => '5',
    'children' => array(
      0 => 'news_counters_comment_count',
      1 => 'news_counters_favorite_count',
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
  $export['group_card_counts|node|news|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_contact|node|news|contact';
  $field_group->group_name = 'group_news_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'contact';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Point of Contact',
    'weight' => '0',
    'children' => array(
      0 => 'field_news_point_of_contact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Point of Contact',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_news_contact|node|news|contact'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_glance|node|news|at_a_glance';
  $field_group->group_name = 'group_news_glance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'at_a_glance';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'At a Glance',
    'weight' => '0',
    'children' => array(
      0 => 'field_news_publish_date',
      1 => 'field_news_source',
      2 => 'news_counters_resource_comment_detail',
      3 => 'news_counters_resource_favorite_count_detail',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'At a Glance',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_news_glance|node|news|at_a_glance'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_stats|node|news|details';
  $field_group->group_name = 'group_news_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'details';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_news_country',
      1 => 'field_news_organization',
      2 => 'field_news_program',
      3 => 'field_news_region',
      4 => 'field_news_sector',
      5 => 'field_news_topic',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'details',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_news_stats|node|news|details'] = $field_group;

  return $export;
}
