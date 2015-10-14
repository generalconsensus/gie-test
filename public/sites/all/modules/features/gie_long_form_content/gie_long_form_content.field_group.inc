<?php
/**
 * @file
 * gie_long_form_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_long_form_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aside|paragraphs_item|long_form_aside|default';
  $field_group->group_name = 'group_aside';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_aside';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Aside',
    'weight' => '0',
    'children' => array(
      0 => 'field_paragraph_aside_text',
      1 => 'field_paragraphs_aside_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Aside',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'aside layout-constrain component',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_aside|paragraphs_item|long_form_aside|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_item_2|paragraphs_item|long_form_callout_card|default';
  $field_group->group_name = 'group_card_item_2';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_callout_card';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_card';
  $field_group->data = array(
    'label' => 'Card item 2',
    'weight' => '16',
    'children' => array(
      0 => 'field_para_callout_body_2',
      1 => 'field_para_callout_title_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card item 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'card__item',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_card_item_2|paragraphs_item|long_form_callout_card|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_item_3|paragraphs_item|long_form_callout_card|default';
  $field_group->group_name = 'group_card_item_3';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_callout_card';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_card';
  $field_group->data = array(
    'label' => 'Card item 3',
    'weight' => '17',
    'children' => array(
      0 => 'field_para_callout_body_3',
      1 => 'field_para_callout_title_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card item 3',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'card__item',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_card_item_3|paragraphs_item|long_form_callout_card|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_item|paragraphs_item|long_form_callout_card|default';
  $field_group->group_name = 'group_card_item';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_callout_card';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_card';
  $field_group->data = array(
    'label' => 'Card item',
    'weight' => '15',
    'children' => array(
      0 => 'field_para_callout_body_1',
      1 => 'field_para_callout_title_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card item',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'card__item',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_card_item|paragraphs_item|long_form_callout_card|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card|paragraphs_item|long_form_callout_card|default';
  $field_group->group_name = 'group_card';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_callout_card';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card',
    'weight' => '0',
    'children' => array(
      0 => 'group_card_item',
      1 => 'group_card_item_2',
      2 => 'group_card_item_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'card component layout-constrain',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_card|paragraphs_item|long_form_callout_card|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_favorite|node|long_form_page|full';
  $field_group->group_name = 'group_favorite';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'long_form_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_share';
  $field_group->data = array(
    'label' => 'Favorite',
    'weight' => '23',
    'children' => array(
      0 => 'flag_favorite',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Favorite',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'share-block__icon share-block__icon--fav',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_favorite|node|long_form_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footer|node|long_form_page|full';
  $field_group->group_name = 'group_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'long_form_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pre-Footer',
    'weight' => '4',
    'children' => array(
      0 => 'field_learn_more_link',
      1 => 'field_longform_description',
      2 => 'field_partner_logos',
      3 => 'field_pdf_screenshot',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Pre-Footer',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'pre-footer component',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_footer|node|long_form_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fullwidth_header|paragraphs_item|long_form_section_break_image|default';
  $field_group->group_name = 'group_fullwidth_header';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_section_break_image';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fullwidth Header',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Fullwidth Header',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'fullwidth-header component',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fullwidth_header|paragraphs_item|long_form_section_break_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|paragraphs_item|long_form_image|default';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_image';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_paragraphs_caption',
      1 => 'field_paragraphs_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'image component',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image|paragraphs_item|long_form_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_key_figure|paragraphs_item|long_form_key_figure|default';
  $field_group->group_name = 'group_key_figure';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_key_figure';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Key Figure',
    'weight' => '0',
    'children' => array(
      0 => 'field_para_key_fig_explanation',
      1 => 'field_paragraph_key_figure',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Key Figure',
      'instance_settings' => array(
        'classes' => 'key-figure component',
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_key_figure|paragraphs_item|long_form_key_figure|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_header|node|long_form_page|full';
  $field_group->group_name = 'group_page_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'long_form_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page Header',
    'weight' => '1',
    'children' => array(
      0 => 'field_long_form_subtitle',
      1 => 'field_longform_byline',
      2 => 'field_header_image',
      3 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Page Header',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'page-header component',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_page_header|node|long_form_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_para_callout_1|paragraphs_item|long_form_callout_card|form';
  $field_group->group_name = 'group_para_callout_1';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_callout_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Callout #1',
    'weight' => '0',
    'children' => array(
      0 => 'field_para_callout_title_1',
      1 => 'field_para_callout_body_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Callout #1',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-para-callout-1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_para_callout_1|paragraphs_item|long_form_callout_card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_para_callout_2|paragraphs_item|long_form_callout_card|form';
  $field_group->group_name = 'group_para_callout_2';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_callout_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Callout #2',
    'weight' => '10',
    'children' => array(
      0 => 'field_para_callout_title_2',
      1 => 'field_para_callout_body_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-para-callout-2 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_para_callout_2|paragraphs_item|long_form_callout_card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_para_callout_3|paragraphs_item|long_form_callout_card|form';
  $field_group->group_name = 'group_para_callout_3';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_callout_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Callout #3',
    'weight' => '12',
    'children' => array(
      0 => 'field_para_callout_title_3',
      1 => 'field_para_callout_body_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-para-callout-3 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_para_callout_3|paragraphs_item|long_form_callout_card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pdf|node|long_form_page|form';
  $field_group->group_name = 'group_pdf';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'long_form_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'PDF',
    'weight' => '8',
    'children' => array(
      0 => 'field_pdf_file',
      1 => 'field_pdf_screenshot',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'PDF',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-pdf field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pdf|node|long_form_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pullquote|paragraphs_item|long_form_pullquote|default';
  $field_group->group_name = 'group_pullquote';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_pullquote';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pullquote',
    'weight' => '0',
    'children' => array(
      0 => 'field_para_pullquote_author',
      1 => 'field_paragraph_pullquote',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Pullquote',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'pullquote component layout-constrain',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pullquote|paragraphs_item|long_form_pullquote|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_break|paragraphs_item|long_form_section_break_image|default';
  $field_group->group_name = 'group_section_break';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_section_break_image';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section Break',
    'weight' => '0',
    'children' => array(
      0 => 'field_para_section_break_title',
      1 => 'field_para_section_brk_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Section Break',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'section-break component',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_section_break|paragraphs_item|long_form_section_break_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_header|paragraphs_item|long_form_section_header_image|default';
  $field_group->group_name = 'group_section_header';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_section_header_image';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section header',
    'weight' => '0',
    'children' => array(
      0 => 'field_para_sctn_head_image',
      1 => 'field_para_sctn_head_sctn_title',
      2 => 'field_para_sctn_head_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Section header',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'section-header component',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_section_header|paragraphs_item|long_form_section_header_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_share_btn|node|long_form_page|full';
  $field_group->group_name = 'group_share_btn';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'long_form_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_share';
  $field_group->data = array(
    'label' => 'ShareThis Button',
    'weight' => '21',
    'children' => array(
      0 => 'sharethis',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'ShareThis Button',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'share-block__icon share-block__icon--share ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_share_btn|node|long_form_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_share|node|long_form_page|full';
  $field_group->group_name = 'group_share';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'long_form_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'share',
    'weight' => '0',
    'children' => array(
      0 => 'print_button',
      1 => 'group_favorite',
      2 => 'group_share_btn',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'share',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'share-block component',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_share|node|long_form_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|paragraphs_item|long_form_text|default';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_text';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '0',
    'children' => array(
      0 => 'field_paragraph_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'text-block layout-constrain component',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_text|paragraphs_item|long_form_text|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|paragraphs_item|long_form_video|default';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '0',
    'children' => array(
      0 => 'field_paragraphs_caption',
      1 => 'field_paragraphs_video',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Video',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'video component',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_video|paragraphs_item|long_form_video|default'] = $field_group;

  return $export;
}
