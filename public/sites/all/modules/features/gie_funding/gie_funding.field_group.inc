<?php
/**
 * @file
 * gie_funding.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_funding_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_author_inner|node|funding|highlights';
  $field_group->group_name = 'group_card_author_inner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funding';
  $field_group->mode = 'highlights';
  $field_group->parent_name = 'group_card_author';
  $field_group->data = array(
    'label' => 'Card Author Inner',
    'weight' => '32',
    'children' => array(
      0 => 'field_funding_author',
      1 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card Author Inner',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'card__author-inner',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_card_author_inner|node|funding|highlights'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_author|node|funding|highlights';
  $field_group->group_name = 'group_card_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funding';
  $field_group->mode = 'highlights';
  $field_group->parent_name = 'group_card_content';
  $field_group->data = array(
    'label' => 'Card Author',
    'weight' => '17',
    'children' => array(
      0 => 'group_card_author_inner',
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
  $field_groups['group_card_author|node|funding|highlights'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|node|funding|highlights';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funding';
  $field_group->mode = 'highlights';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Content',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_funding_type',
      2 => 'group_card_author',
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
  $field_groups['group_card_content|node|funding|highlights'] = $field_group;

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
    'weight' => '2',
    'children' => array(
      0 => 'title_field',
      1 => 'field_funding_deadline',
      2 => 'field_funding_effort',
      3 => 'field_funding_eligibility_type',
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
  $field_groups['group_card_content|node|funding|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|node|funding|spotlight';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funding';
  $field_group->mode = 'spotlight';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Content',
    'weight' => '2',
    'children' => array(
      0 => 'title_field',
      1 => 'content_type',
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
  $field_groups['group_card_content|node|funding|spotlight'] = $field_group;

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
    'weight' => '3',
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
  $field_groups['group_card_counts|node|funding|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_image|node|funding|spotlight';
  $field_group->group_name = 'group_card_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funding';
  $field_group->mode = 'spotlight';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Image',
    'weight' => '1',
    'children' => array(
      0 => 'field_funding_image',
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
  $field_groups['group_card_image|node|funding|spotlight'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_comment_content|comment|comment_node_funding|default';
  $field_group->group_name = 'group_comment_content';
  $field_group->entity_type = 'comment';
  $field_group->bundle = 'comment_node_funding';
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
  $field_groups['group_comment_content|comment|comment_node_funding|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding_about|node|funding|form';
  $field_group->group_name = 'group_funding_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funding';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About Your Opportunity',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_funding_deadline',
      2 => 'field_funding_desc',
      3 => 'field_funding_type',
      4 => 'field_funding_eligibility_type',
      5 => 'field_funding_grant_award_value',
      6 => 'field_term_sector',
      7 => 'field_term_region',
      8 => 'field_term_country',
      9 => 'field_funding_link',
      10 => 'field_funding_image',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'label' => 'About Your Opportunity',
      'instance_settings' => array(
        'description' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_funding_about|node|funding|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding_details|node|funding|form';
  $field_group->group_name = 'group_funding_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funding';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Key funding opportunity details',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-funding-details field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_funding_details|node|funding|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding_for_applicants|node|funding|form';
  $field_group->group_name = 'group_funding_for_applicants';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funding';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'For Applicants',
    'weight' => '2',
    'children' => array(
      0 => 'field_funding_effort',
      1 => 'field_funding_eligibility',
      2 => 'field_funding_guidance',
      3 => 'field_funding_innovation_stage',
      4 => 'field_funding_innovation_type',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'label' => 'For Applicants',
      'instance_settings' => array(
        'description' => '',
      ),
    ),
  );
  $field_groups['group_funding_for_applicants|node|funding|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding_info|node|funding|form';
  $field_group->group_name = 'group_funding_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funding';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_funding_author',
      1 => 'field_funding_duration',
      2 => 'field_funding_organization',
      3 => 'field_term_topic',
      4 => 'field_funding_poc',
      5 => 'field_related_programs',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'label' => 'Additional Information',
      'instance_settings' => array(
        'description' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_funding_info|node|funding|form'] = $field_group;

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
  $field_groups['group_funding_stats_first|node|funding|full'] = $field_group;

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
  $field_groups['group_funding_stats_second|node|funding|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding_stats|node|funding|form';
  $field_group->group_name = 'group_funding_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funding';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Provide some stats about your funding opportunity',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-funding-stats field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_funding_stats|node|funding|form'] = $field_group;

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
  $field_groups['group_funding_stats|node|funding|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('About Your Opportunity');
  t('Additional Information');
  t('Card Author');
  t('Card Author Inner');
  t('Card Content');
  t('Card Counts');
  t('Card Image');
  t('Comment Content');
  t('For Applicants');
  t('Funding Stats');
  t('Funding Stats First');
  t('Funding Stats Second');
  t('Key funding opportunity details');
  t('Provide some stats about your funding opportunity');

  return $field_groups;
}
