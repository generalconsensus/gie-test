<?php
/**
 * @file
 * gie_discussion.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_discussion_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_comment_content|comment|comment_node_discussion|default';
  $field_group->group_name = 'group_comment_content';
  $field_group->entity_type = 'comment';
  $field_group->bundle = 'comment_node_discussion';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Comment Content',
    'weight' => '1',
    'children' => array(
      0 => 'comment_body',
      1 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Comment Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'comment__content',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_comment_content|comment|comment_node_discussion|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Comment Content');

  return $field_groups;
}
