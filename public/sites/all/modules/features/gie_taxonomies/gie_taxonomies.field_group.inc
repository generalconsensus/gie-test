<?php
/**
 * @file
 * gie_taxonomies.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_taxonomies_field_group_info() {
  $export = array();

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
    'weight' => '7',
    'children' => array(
      0 => 'description_field',
      1 => 'name_field',
      2 => 'more_link',
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
  $export['group_card_content|taxonomy_term|sector|listing'] = $field_group;

  return $export;
}
