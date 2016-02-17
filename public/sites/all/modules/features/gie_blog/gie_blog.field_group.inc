<?php
/**
 * @file
 * gie_blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_blog_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_contact|node|blog|contact';
  $field_group->group_name = 'group_blog_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'contact';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Point of Contact',
    'weight' => '0',
    'children' => array(
      0 => 'field_blog_author',
      1 => 'field_blog_publish_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Point of Contact',
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
  $export['group_blog_contact|node|blog|contact'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_stats|node|blog|details';
  $field_group->group_name = 'group_blog_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'details';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_blog_related_organization',
      1 => 'field_blog_related_program',
      2 => 'field_blog_related_region',
      3 => 'field_blog_related_sector',
      4 => 'field_blog_related_topic',
      5 => 'field_related_country',
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
  $export['group_blog_stats|node|blog|details'] = $field_group;

  return $export;
}
