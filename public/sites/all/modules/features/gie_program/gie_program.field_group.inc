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
  $field_group->identifier = 'group_card_content|node|program|spotlight';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'spotlight';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Content',
    'weight' => '2',
    'children' => array(
      0 => 'title_field',
      1 => 'flag_favorite',
      2 => 'content_type',
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
  $export['group_card_content|node|program|spotlight'] = $field_group;

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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_image|node|program|spotlight';
  $field_group->group_name = 'group_card_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'spotlight';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Image',
    'weight' => '1',
    'children' => array(
      0 => 'field_program_logo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card Image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'card__image',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_card_image|node|program|spotlight'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_addtl_info|node|program|form';
  $field_group->group_name = 'group_program_addtl_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_funding_type',
      1 => 'field_program_budget',
      2 => 'field_program_end',
      3 => 'field_program_objectives',
      4 => 'field_program_problem',
      5 => 'field_program_start',
      6 => 'field_program_status',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Additional Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-program-addtl-info field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_program_addtl_info|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_focus|node|program|form';
  $field_group->group_name = 'group_program_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Focus and Affiliations',
    'weight' => '3',
    'children' => array(
      0 => 'field_term_country',
      1 => 'field_term_region',
      2 => 'field_term_sector',
      3 => 'field_term_topic',
      4 => 'field_program_parent_org',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Focus and Affiliations',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-program-focus field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_program_focus|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_glance|node|program|form';
  $field_group->group_name = 'group_program_glance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'At a Glance',
    'weight' => '1',
    'children' => array(
      0 => 'field_program_link',
      1 => 'field_program_partners',
      2 => 'field_program_poc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'At a Glance',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-program-glance field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_program_glance|node|program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_info|node|program|form';
  $field_group->group_name = 'group_program_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Information',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_program_address',
      2 => 'field_program_desc',
      3 => 'field_program_logo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'General Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-program-info field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_program_info|node|program|form'] = $field_group;

  return $export;
}
