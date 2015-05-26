<?php
/**
 * @file
 * gie_innovation.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_innovation_field_group_info() {
  $export = array();

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
  $export['group_card_content|node|innovation|listing'] = $field_group;

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
  $export['group_card_counts|node|innovation|listing'] = $field_group;

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
  $export['group_card_image|node|innovation|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_innovation_about|node|innovation|form';
  $field_group->group_name = 'group_innovation_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tell us about your innovation',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_innovation_desc',
      2 => 'field_innovation_address',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tell us about your innovation',
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
  $export['group_innovation_about|node|innovation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_innovation_details|node|innovation|form';
  $field_group->group_name = 'group_innovation_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tell us more about your innovation',
    'weight' => '4',
    'children' => array(
      0 => 'field_innovation_evidence',
      1 => 'field_innovation_impact',
      2 => 'field_innovation_news',
      3 => 'field_innovation_resources',
      4 => 'field_innovation_steps',
      5 => 'field_innovation_testers',
      6 => 'field_innovation_works',
      7 => 'field_innovation_evidence_avail',
      8 => 'field_innovation_status_update',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tell us more about your innovation',
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
  $export['group_innovation_details|node|innovation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_innovation_evidence|node|innovation|form';
  $field_group->group_name = 'group_innovation_evidence';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Do you have evidence or supporting documents for your innovation?',
    'weight' => '9',
    'children' => array(
      0 => 'field_innovation_proof_avail',
      1 => 'field_innovation_proof_evidence',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Do you have evidence or supporting documents for your innovation?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-innovation-evidence field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_innovation_evidence|node|innovation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_innovation_help|node|innovation|form';
  $field_group->group_name = 'group_innovation_help';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'How can the exchange help you with your innovation?',
    'weight' => '2',
    'children' => array(
      0 => 'field_innovation_poc',
      1 => 'field_innovation_assistance',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'How can the exchange help you with your innovation?',
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
  $export['group_innovation_help|node|innovation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_innovation_media|node|innovation|form';
  $field_group->group_name = 'group_innovation_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add photos and videos about your innovation',
    'weight' => '1',
    'children' => array(
      0 => 'field_innovation_assets',
      1 => 'field_innovation_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Add photos and videos about your innovation',
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
  $export['group_innovation_media|node|innovation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_innovation_references|node|innovation|form';
  $field_group->group_name = 'group_innovation_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Do you have references for your innovation available?',
    'weight' => '6',
    'children' => array(
      0 => 'field_innovation_references',
      1 => 'field_innovation_non_references',
      2 => 'field_innovation_ref_avail',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Do you have references for your innovation available?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-innovation-references field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_innovation_references|node|innovation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_innovation_stats_first|node|innovation|full';
  $field_group->group_name = 'group_innovation_stats_first';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_innovation_stats';
  $field_group->data = array(
    'label' => 'Innovation Stats First',
    'weight' => '45',
    'children' => array(
      0 => 'field_innovation_stage',
      1 => 'field_innovation_type',
      2 => 'field_innovation_funding_goal',
      3 => 'field_innovation_cost_per_unit',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Innovation Stats First',
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
  $export['group_innovation_stats_first|node|innovation|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_innovation_stats_second|node|innovation|full';
  $field_group->group_name = 'group_innovation_stats_second';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_innovation_stats';
  $field_group->data = array(
    'label' => 'Innovation Stats Second',
    'weight' => '46',
    'children' => array(
      0 => 'field_innovation_created',
      1 => 'field_innovation_implemented',
      2 => 'field_innovation_program',
      3 => 'field_term_sector',
      4 => 'field_term_topic',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Innovation Stats Second',
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
  $export['group_innovation_stats_second|node|innovation|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_innovation_stats|node|innovation|form';
  $field_group->group_name = 'group_innovation_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Provide some key stats about your innovation',
    'weight' => '3',
    'children' => array(
      0 => 'field_innovation_created',
      1 => 'field_innovation_implemented',
      2 => 'field_innovation_stage',
      3 => 'field_innovation_type',
      4 => 'field_innovation_cost_bene',
      5 => 'field_innovation_funding_goal',
      6 => 'field_innovation_raised',
      7 => 'field_innovation_cost_per_unit',
      8 => 'field_innovation_website',
      9 => 'field_term_sector',
      10 => 'field_term_topic',
      11 => 'field_term_region',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Provide some key stats about your innovation',
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
  $export['group_innovation_stats|node|innovation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_innovation_stats|node|innovation|full';
  $field_group->group_name = 'group_innovation_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Innovation Stats',
    'weight' => '0',
    'children' => array(
      0 => 'group_innovation_stats_first',
      1 => 'group_innovation_stats_second',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Innovation Stats',
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
  $export['group_innovation_stats|node|innovation|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_innovation_team|node|innovation|form';
  $field_group->group_name = 'group_innovation_team';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'innovation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tell us who your innovation team and funders',
    'weight' => '5',
    'children' => array(
      0 => 'field_innovation_funders',
      1 => 'field_innovation_program',
      2 => 'field_innovation_team',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tell us who your innovation team and funders',
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
  $export['group_innovation_team|node|innovation|form'] = $field_group;

  return $export;
}
