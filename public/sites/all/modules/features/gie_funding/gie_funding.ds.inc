<?php
/**
 * @file
 * gie_funding.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gie_funding_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'comment|comment_node_funding|default';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_funding';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
  );
  $export['comment|comment_node_funding|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|funding|at_a_glance';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'funding';
  $ds_fieldsetting->view_mode = 'at_a_glance';
  $ds_fieldsetting->settings = array(
    'field_funding_grant_award_value' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Award Amount',
          'lb-el' => 'span',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'view--at-a-glance',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|funding|at_a_glance'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|funding|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'funding';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_funding_eligibility' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_funding_guidance' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|funding|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|funding|highlights';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'funding';
  $ds_fieldsetting->view_mode = 'highlights';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'ds_post_date_gie_general_slash_no_time',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'card__author-date',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
        'field_delimiter' => '',
        'linked_field' => array(
          'linked' => 0,
          'destination' => '',
          'advanced' => array(
            'title' => '',
            'target' => '',
            'class' => '',
            'rel' => '',
            'text' => '',
          ),
        ),
      ),
    ),
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'card__title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_funding_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_funding_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => 'card__type',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|funding|highlights'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|funding|listing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'funding';
  $ds_fieldsetting->view_mode = 'listing';
  $ds_fieldsetting->settings = array(
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'card__primary-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_funding_deadline' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Due by',
          'lb-el' => 'div',
          'lb-cl' => 'card__list-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'card__list',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_funding_effort' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Time to Apply',
          'lb-el' => 'div',
          'lb-cl' => 'card__list-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'card__list',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_funding_eligibility_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Eligibility',
          'lb-el' => 'div',
          'lb-cl' => 'card__list-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'card__list',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_funding_grant_award_value' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'card__number',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_term_topic' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Topics',
          'lb-el' => 'div',
          'lb-cl' => 'card__list-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'card__list',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_funding_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'card__image',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|funding|listing'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|funding|search_listing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'funding';
  $ds_fieldsetting->view_mode = 'search_listing';
  $ds_fieldsetting->settings = array(
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|funding|search_listing'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|funding|spotlight';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'funding';
  $ds_fieldsetting->view_mode = 'spotlight';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'h2',
          'fis-cl' => 'card__type',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
        'field_delimiter' => '',
        'linked_field' => array(
          'linked' => 0,
          'destination' => '',
          'advanced' => array(
            'title' => '',
            'target' => '',
            'class' => '',
            'rel' => '',
            'text' => '',
          ),
        ),
      ),
    ),
    'dashboard_spotlight_card_entity_classification' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
        ),
        'field_delimiter' => '',
        'linked_field' => array(
          'linked' => 0,
          'destination' => '',
          'advanced' => array(
            'title' => '',
            'target' => '',
            'class' => '',
            'rel' => '',
            'text' => '',
          ),
        ),
      ),
    ),
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h5',
          'fi-cl' => 'card_title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_funding_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['node|funding|spotlight'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|funding|teaser_date';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'funding';
  $ds_fieldsetting->view_mode = 'teaser_date';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_gie_general_slash_no_time',
    ),
  );
  $export['node|funding|teaser_date'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_funding_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_funding|default';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_funding';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'slat';
  $ds_layout->settings = array(
    'regions' => array(
      'media' => array(
        0 => 'comment_author_entity_view_1',
      ),
      'main_content' => array(
        1 => 'group_comment_content',
        2 => 'post_date',
        3 => 'comment_body',
        4 => 'links',
      ),
    ),
    'fields' => array(
      'comment_author_entity_view_1' => 'media',
      'group_comment_content' => 'main_content',
      'post_date' => 'main_content',
      'comment_body' => 'main_content',
      'links' => 'main_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'media' => 'div',
      'main_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['comment|comment_node_funding|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_funding|form';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_funding';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'author',
        1 => 'comment_body',
      ),
      'hidden' => array(
        2 => 'subject_field',
        3 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'author' => 'ds_content',
      'comment_body' => 'ds_content',
      'subject_field' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['comment|comment_node_funding|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|funding|at_a_glance';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'funding';
  $ds_layout->view_mode = 'at_a_glance';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'funding_ops_counters_favorites',
        1 => 'funding_ops_counters_comments',
        2 => 'funding_ops_counters_amount',
      ),
    ),
    'fields' => array(
      'funding_ops_counters_favorites' => 'ds_content',
      'funding_ops_counters_comments' => 'ds_content',
      'funding_ops_counters_amount' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|funding|at_a_glance'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|funding|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'funding';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_funding_stats',
        1 => 'field_funding_eligibility',
        2 => 'group_funding_stats_first',
        3 => 'field_funding_guidance',
        4 => 'group_funding_stats_second',
        5 => 'comments',
        6 => 'field_funding_poc',
        7 => 'field_funding_grant_award_value',
        8 => 'field_funding_eligibility_type',
        9 => 'field_term_region',
        10 => 'field_term_sector',
        11 => 'field_funding_duration',
        12 => 'field_funding_effort',
      ),
    ),
    'fields' => array(
      'group_funding_stats' => 'ds_content',
      'field_funding_eligibility' => 'ds_content',
      'group_funding_stats_first' => 'ds_content',
      'field_funding_guidance' => 'ds_content',
      'group_funding_stats_second' => 'ds_content',
      'comments' => 'ds_content',
      'field_funding_poc' => 'ds_content',
      'field_funding_grant_award_value' => 'ds_content',
      'field_funding_eligibility_type' => 'ds_content',
      'field_term_region' => 'ds_content',
      'field_term_sector' => 'ds_content',
      'field_funding_duration' => 'ds_content',
      'field_funding_effort' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|funding|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|funding|highlights';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'funding';
  $ds_layout->view_mode = 'highlights';
  $ds_layout->layout = 'article';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'group_card_content',
        1 => 'field_funding_author',
        2 => 'post_date',
        3 => 'field_funding_type',
        4 => 'title_field',
        5 => 'group_card_author',
        6 => 'group_card_author_inner',
      ),
    ),
    'fields' => array(
      'group_card_content' => 'main_content',
      'field_funding_author' => 'main_content',
      'post_date' => 'main_content',
      'field_funding_type' => 'main_content',
      'title_field' => 'main_content',
      'group_card_author' => 'main_content',
      'group_card_author_inner' => 'main_content',
    ),
    'limit' => array(
      'field_funding_type' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'card' => 'card',
        'card--background' => 'card--background',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'main_content' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|funding|highlights'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|funding|listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'funding';
  $ds_layout->view_mode = 'listing';
  $ds_layout->layout = 'article';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'field_funding_grant_award_value',
        1 => 'title_field',
        2 => 'field_funding_image',
        3 => 'field_funding_deadline',
        4 => 'group_card_content',
        5 => 'group_card_counts',
        6 => 'field_funding_eligibility_type',
        7 => 'field_funding_effort',
        8 => 'field_term_topic',
        9 => 'funding_counters_comment_count',
        10 => 'funding_counters_favorite_count',
      ),
    ),
    'fields' => array(
      'field_funding_grant_award_value' => 'main_content',
      'title_field' => 'main_content',
      'field_funding_image' => 'main_content',
      'field_funding_deadline' => 'main_content',
      'group_card_content' => 'main_content',
      'group_card_counts' => 'main_content',
      'field_funding_eligibility_type' => 'main_content',
      'field_funding_effort' => 'main_content',
      'field_term_topic' => 'main_content',
      'funding_counters_comment_count' => 'main_content',
      'funding_counters_favorite_count' => 'main_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'card' => 'card',
        'card--icons' => 'card--icons',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'main_content' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|funding|listing'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|funding|search_listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'funding';
  $ds_layout->view_mode = 'search_listing';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_funding_desc',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_funding_desc' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|funding|search_listing'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|funding|spotlight';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'funding';
  $ds_layout->view_mode = 'spotlight';
  $ds_layout->layout = 'article';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'content_type',
        1 => 'dashboard_spotlight_card_entity_classification',
        2 => 'title_field',
        3 => 'group_card_image',
        4 => 'group_card_content',
        5 => 'flag_favorite',
        6 => 'field_funding_image',
      ),
    ),
    'fields' => array(
      'content_type' => 'main_content',
      'dashboard_spotlight_card_entity_classification' => 'main_content',
      'title_field' => 'main_content',
      'group_card_image' => 'main_content',
      'group_card_content' => 'main_content',
      'flag_favorite' => 'main_content',
      'field_funding_image' => 'main_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'card' => 'card',
        'card--spotlight' => 'card--spotlight',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'main_content' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|funding|spotlight'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|funding|teaser_date';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'funding';
  $ds_layout->view_mode = 'teaser_date';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'post_date',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'post_date' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|funding|teaser_date'] = $ds_layout;

  return $export;
}
