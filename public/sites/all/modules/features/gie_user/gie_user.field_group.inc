<?php
/**
 * @file
 * gie_user.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_user_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about|user|user|form';
  $field_group->group_name = 'group_about';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tell Us About You',
    'weight' => '0',
    'children' => array(
      0 => 'field_user_company',
      1 => 'field_user_education',
      2 => 'field_user_firstname',
      3 => 'field_user_lastname',
      4 => 'field_user_summary',
      5 => 'field_user_title',
      6 => 'field_user_motto',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tell Us About You',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_about|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account|user|user|form';
  $field_group->group_name = 'group_account';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Choose Your Account Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_user_type',
      1 => 'field_user_photo',
      2 => 'account',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Choose Your Account Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_account|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_connect|user|user|form';
  $field_group->group_name = 'group_connect';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Where else can we connect with you?',
    'weight' => '4',
    'children' => array(
      0 => 'field_user_facebook',
      1 => 'field_user_linkedin',
      2 => 'field_user_twitter',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Where else can we connect with you?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_connect|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_interests|user|user|form';
  $field_group->group_name = 'group_interests';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'What interests you about the Exchange?',
    'weight' => '3',
    'children' => array(
      0 => 'field_user_interests',
      1 => 'field_user_org',
      2 => 'field_user_skills',
      3 => 'field_user_other_interests',
      4 => 'field_user_programs',
      5 => 'field_term_sector',
      6 => 'field_term_region',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'What interests you about the Exchange?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_interests|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_where|user|user|form';
  $field_group->group_name = 'group_where';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Where are you from?',
    'weight' => '1',
    'children' => array(
      0 => 'field_user_address',
      1 => 'timezone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Where are you from?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_where|user|user|form'] = $field_group;

  return $export;
}
