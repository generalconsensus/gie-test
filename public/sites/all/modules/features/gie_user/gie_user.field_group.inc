<?php
/**
 * @file
 * gie_user.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_user_field_group_info() {
  $field_groups = array();

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
      1 => 'field_user_firstname',
      2 => 'field_user_lastname',
      3 => 'field_user_org',
      4 => 'field_user_summary',
      5 => 'field_user_title',
      6 => 'field_user_motto',
      7 => 'field_assistance_offered',
      8 => 'field_user_parent',
      9 => 'field_user_assistance',
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
  $field_groups['group_about|user|user|form'] = $field_group;

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
    'weight' => '3',
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
  $field_groups['group_account|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|user|user|listing';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Content',
    'weight' => '2',
    'children' => array(
      0 => 'field_user_company',
      1 => 'field_user_title',
      2 => 'user_full_name',
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
  $field_groups['group_card_content|user|user|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|user|user|spotlight';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'spotlight';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Content',
    'weight' => '2',
    'children' => array(
      0 => 'member_text',
      1 => 'user_full_name',
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
  $field_groups['group_card_content|user|user|spotlight'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_image|user|user|listing';
  $field_group->group_name = 'group_card_image';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_user_photo',
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
  $field_groups['group_card_image|user|user|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_image|user|user|spotlight';
  $field_group->group_name = 'group_card_image';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'spotlight';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Image',
    'weight' => '1',
    'children' => array(
      0 => 'field_user_photo',
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
  $field_groups['group_card_image|user|user|spotlight'] = $field_group;

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
    'weight' => '7',
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
  $field_groups['group_connect|user|user|form'] = $field_group;

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
    'weight' => '6',
    'children' => array(
      0 => 'field_user_education',
      1 => 'field_user_interests',
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
  $field_groups['group_interests|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_meta|user|user|full';
  $field_group->group_name = 'group_user_meta';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User Meta',
    'weight' => '4',
    'children' => array(
      0 => 'field_user_address',
      1 => 'field_user_type',
      2 => 'user_member_since',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'User Meta',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'user-header__meta',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_user_meta|user|user|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_notifications|user|user|form';
  $field_group->group_name = 'group_user_notifications';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notifications',
    'weight' => '8',
    'children' => array(
      0 => 'field_user_notifications',
      1 => 'field_user_mail_user_follow',
      2 => 'field_user_mail_follow_edit',
      3 => 'field_user_mail_follow_comment',
      4 => 'field_user_mail_content_follow',
      5 => 'field_user_mail_comment',
      6 => 'field_user_notify_test',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Notifications',
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
  $field_groups['group_user_notifications|user|user|form'] = $field_group;

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
    'weight' => '2',
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
  $field_groups['group_where|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Card Content');
  t('Card Image');
  t('Choose Your Account Details');
  t('Notifications');
  t('Tell Us About You');
  t('User Meta');
  t('What interests you about the Exchange?');
  t('Where are you from?');
  t('Where else can we connect with you?');

  return $field_groups;
}
