<?php
/**
 * @file
 * gie_innovation.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_innovation_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_author_inner|node|innovation|highlights';
  $field_group->group_name = 'group_card_author_inner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'highlights';
  $field_group->parent_name = 'group_card_author';
  $field_group->data = array(
    'label' => 'Card Author Inner',
    'weight' => '45',
    'children' => array(
      0 => 'field_innovation_poc',
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
  $field_groups['group_card_author_inner|node|innovation|highlights'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_author|node|innovation|highlights';
  $field_group->group_name = 'group_card_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'highlights';
  $field_group->parent_name = 'group_card_content';
  $field_group->data = array(
    'label' => 'Card Author',
    'weight' => '9',
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
  $field_groups['group_card_author|node|innovation|highlights'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|node|innovation|highlights';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'highlights';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Content',
    'weight' => '45',
    'children' => array(
      0 => 'title_field',
      1 => 'field_innovation_type',
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
  $field_groups['group_card_content|node|innovation|highlights'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|node|innovation|listing';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Content',
    'weight' => '2',
    'children' => array(
      0 => 'title_field',
      1 => 'field_innovation_desc',
      2 => 'group_card_counts',
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
  $field_groups['group_card_content|node|innovation|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|node|innovation|spotlight';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
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
  $field_groups['group_card_content|node|innovation|spotlight'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_counts|node|innovation|listing';
  $field_group->group_name = 'group_card_counts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'listing';
  $field_group->parent_name = 'group_card_content';
  $field_group->data = array(
    'label' => 'Card Counts',
    'weight' => '4',
    'children' => array(
      0 => 'innovation_listing_counts_evidence',
      1 => 'innovation_listing_counts_comments',
      2 => 'innovation_listing_counts_orgs',
      3 => 'innovation_listing_counts_favorites',
      4 => 'innovation_listing_counts_assistance',
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
  $field_groups['group_card_counts|node|innovation|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_image|node|innovation|listing';
  $field_group->group_name = 'group_card_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_innovation_image',
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
  $field_groups['group_card_image|node|innovation|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_image|node|innovation|spotlight';
  $field_group->group_name = 'group_card_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'spotlight';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Image',
    'weight' => '1',
    'children' => array(
      0 => 'field_innovation_image',
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
  $field_groups['group_card_image|node|innovation|spotlight'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_comment_content|comment|comment_node_innovation|default';
  $field_group->group_name = 'group_comment_content';
  $field_group->entity_type = 'comment';
  $field_group->bundle = 'comment_node_innovation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Comment Content',
    'weight' => '1',
    'children' => array(
      0 => 'comment_body',
      1 => 'field_innovation_comment_type',
      2 => 'post_date',
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
  $field_groups['group_comment_content|comment|comment_node_innovation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_five|node|innovation|form';
  $field_group->group_name = 'group_five';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step Five',
    'weight' => '4',
    'children' => array(
      0 => 'field_innovation_evidence',
      1 => 'field_innovation_news',
      2 => 'field_innovation_references',
      3 => 'field_innovation_resources',
      4 => 'field_innovation_testers',
      5 => 'field_innovation_evidence_avail',
      6 => 'field_innovation_non_references',
      7 => 'field_innovation_proof_evidence',
      8 => 'field_innovation_lives_impacted',
      9 => 'field_innovation_lives_saved',
      10 => 'field_innovation_potent_lives_im',
      11 => 'field_innovation_potent_lives_sa',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => 0,
    ),
  );
  $field_groups['group_five|node|innovation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_four|node|innovation|form';
  $field_group->group_name = 'group_four';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step Four',
    'weight' => '3',
    'children' => array(
      0 => 'field_innovation_funders',
      1 => 'field_innovation_cost_bene',
      2 => 'field_innovation_funding_goal',
      3 => 'field_innovation_raised',
      4 => 'field_innovation_cost_per_unit',
      5 => 'field_innovation_funding_type',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => 0,
    ),
  );
  $field_groups['group_four|node|innovation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_one|node|innovation|form';
  $field_group->group_name = 'group_one';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step One',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_innovation_created',
      2 => 'field_innovation_desc',
      3 => 'field_innovation_implemented',
      4 => 'field_innovation_poc',
      5 => 'field_innovation_stage',
      6 => 'field_innovation_type',
      7 => 'field_innovation_assistance',
      8 => 'field_term_sector',
      9 => 'field_term_topic',
      10 => 'field_term_region',
      11 => 'field_innovation_image',
      12 => 'field_innovation_address',
      13 => 'field_featured',
      14 => 'domain',
      15 => 'metatags',
      16 => 'path',
      17 => 'rabbit_hole',
      18 => 'redirect',
      19 => 'xmlsitemap',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => 0,
    ),
  );
  $field_groups['group_one|node|innovation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_three|node|innovation|form';
  $field_group->group_name = 'group_three';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step Three',
    'weight' => '2',
    'children' => array(
      0 => 'field_innovation_program',
      1 => 'field_innovation_team',
      2 => 'field_innovation_website',
      3 => 'field_innovation_related_org',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => 0,
    ),
  );
  $field_groups['group_three|node|innovation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_two|node|innovation|form';
  $field_group->group_name = 'group_two';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step Two',
    'weight' => '1',
    'children' => array(
      0 => 'field_innovation_assets',
      1 => 'field_innovation_impact',
      2 => 'field_innovation_steps',
      3 => 'field_innovation_works',
      4 => 'field_innovation_status_update',
      5 => 'field_innovation_value_prop',
      6 => 'field_innovation_target_results',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => 0,
    ),
  );
  $field_groups['group_two|node|innovation|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Card Author');
  t('Card Author Inner');
  t('Card Content');
  t('Card Counts');
  t('Card Image');
  t('Comment Content');
  t('Step Five');
  t('Step Four');
  t('Step One');
  t('Step Three');
  t('Step Two');

  return $field_groups;
}
