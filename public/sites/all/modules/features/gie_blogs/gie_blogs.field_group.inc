<?php
/**
 * @file
 * gie_blogs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_blogs_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_contact|node|blogs|contact';
  $field_group->group_name = 'group_blog_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blogs';
  $field_group->mode = 'contact';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Point of Contact',
    'weight' => '0',
    'children' => array(
      0 => 'field_blogs_point_contact',
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
  $export['group_blog_contact|node|blogs|contact'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_glance|node|blogs|at_a_glance';
  $field_group->group_name = 'group_blog_glance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blogs';
  $field_group->mode = 'at_a_glance';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'At a Glance',
    'weight' => '0',
    'children' => array(
      0 => 'field_blogs_publish_date',
      1 => 'blogs_counters_resource_comment_detail',
      2 => 'blogs_counters_resource_favorite_count_detail',
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
  $export['group_blog_glance|node|blogs|at_a_glance'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_stats|node|blogs|details';
  $field_group->group_name = 'group_blog_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blogs';
  $field_group->mode = 'details';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_blogs_organization',
      1 => 'field_blogs_program',
      2 => 'field_term_sector',
      3 => 'field_term_topic',
      4 => 'field_term_country',
      5 => 'field_term_region',
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
  $export['group_blog_stats|node|blogs|details'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_author|node|blogs|listing';
  $field_group->group_name = 'group_card_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blogs';
  $field_group->mode = 'listing';
  $field_group->parent_name = 'group_card_content';
  $field_group->data = array(
    'label' => 'Card Author',
    'weight' => '23',
    'children' => array(
      0 => 'field_blogs_point_contact',
      1 => 'field_blogs_publish_date',
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
  $export['group_card_author|node|blogs|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|node|blogs|listing';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blogs';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Content',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_term_sector',
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
  $export['group_card_content|node|blogs|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_counts|node|blogs|listing';
  $field_group->group_name = 'group_card_counts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blogs';
  $field_group->mode = 'listing';
  $field_group->parent_name = 'group_card_content';
  $field_group->data = array(
    'label' => 'Card Counts',
    'weight' => '25',
    'children' => array(
      0 => 'blogs_counters_comment_count',
      1 => 'blogs_counters_favorite_count',
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
  $export['group_card_counts|node|blogs|listing'] = $field_group;

  return $export;
}
