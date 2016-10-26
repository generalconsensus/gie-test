<?php
/**
 * @file
 * gie_long_form_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gie_long_form_content_field_group_info() {
  $field_groups = array();

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
  $field_groups['group_aside|paragraphs_item|long_form_aside|default'] = $field_group;

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
  $field_groups['group_card_item_2|paragraphs_item|long_form_callout_card|default'] = $field_group;

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
  $field_groups['group_card_item_3|paragraphs_item|long_form_callout_card|default'] = $field_group;

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
  $field_groups['group_card_item|paragraphs_item|long_form_callout_card|default'] = $field_group;

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
  $field_groups['group_card|paragraphs_item|long_form_callout_card|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|long_form_featured_content|default';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_featured_content';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'microsite_featured_content_entity_view_1',
      1 => 'group_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content|paragraphs_item|long_form_featured_content|default'] = $field_group;

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
  $field_groups['group_favorite|node|long_form_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footer_group|node|long_form_page|full';
  $field_group->group_name = 'group_footer_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'long_form_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_footer';
  $field_group->data = array(
    'label' => 'Pre-Footer Group',
    'weight' => '5',
    'children' => array(
      0 => 'group_longform_report_desc',
      1 => 'group_footer_partners',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Pre-Footer Group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-pre-footer-group field-group-div layout-constrain',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_footer_group|node|long_form_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footer_partners|node|long_form_page|full';
  $field_group->group_name = 'group_footer_partners';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'long_form_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_footer_group';
  $field_group->data = array(
    'label' => 'Footer Partners',
    'weight' => '7',
    'children' => array(
      0 => 'field_longform_partners',
      1 => 'long_form_powered_by',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Footer Partners',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-footer-partners',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_footer_partners|node|long_form_page|full'] = $field_group;

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
      1 => 'field_pdf_screenshot',
      2 => 'group_footer_group',
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
  $field_groups['group_footer|node|long_form_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footer|paragraphs_item|long_form_featured_content|default';
  $field_group->group_name = 'group_footer';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_featured_content';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Footer',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Footer',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-footer field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_footer|paragraphs_item|long_form_featured_content|default'] = $field_group;

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
  $field_groups['group_fullwidth_header|paragraphs_item|long_form_section_break_image|default'] = $field_group;

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
        'id' => '',
        'classes' => 'key-figure component layout-constrain',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_key_figure|paragraphs_item|long_form_key_figure|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_longform_report_desc|node|long_form_page|form';
  $field_group->group_name = 'group_longform_report_desc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'long_form_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Report Description',
    'weight' => '9',
    'children' => array(
      0 => 'field_learn_more_link',
      1 => 'field_longform_description',
      2 => 'field_longform_description_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Report Description',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-longform-report-desc field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_longform_report_desc|node|long_form_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_longform_report_desc|node|long_form_page|full';
  $field_group->group_name = 'group_longform_report_desc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'long_form_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_footer_group';
  $field_group->data = array(
    'label' => 'Report Description',
    'weight' => '6',
    'children' => array(
      0 => 'field_longform_description',
      1 => 'field_longform_description_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Report Description',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-footer-description',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_longform_report_desc|node|long_form_page|full'] = $field_group;

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
      0 => 'field_header_image',
      1 => 'field_long_form_subtitle',
      2 => 'field_longform_byline',
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
  $field_groups['group_page_header|node|long_form_page|full'] = $field_group;

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
  $field_groups['group_para_callout_1|paragraphs_item|long_form_callout_card|form'] = $field_group;

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
  $field_groups['group_para_callout_2|paragraphs_item|long_form_callout_card|form'] = $field_group;

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
  $field_groups['group_para_callout_3|paragraphs_item|long_form_callout_card|form'] = $field_group;

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
        'description' => 'Relate your long form report to an existing PDF report. Upload a screenshot and the report PDF. The screenshot you upload should serve as the visual representation of your report, for example an image of the 1st page of the report.',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pdf|node|long_form_page|form'] = $field_group;

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
  $field_groups['group_section_break|paragraphs_item|long_form_section_break_image|default'] = $field_group;

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
  $field_groups['group_section_header|paragraphs_item|long_form_section_header_image|default'] = $field_group;

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
  $field_groups['group_share_btn|node|long_form_page|full'] = $field_group;

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
  $field_groups['group_share|node|long_form_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_wrapper|paragraphs_item|long_form_enhanced_text|default';
  $field_group->group_name = 'group_text_wrapper';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_enhanced_text';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text Wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'group_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Text Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'layout-constrain',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_text_wrapper|paragraphs_item|long_form_enhanced_text|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|paragraphs_item|long_form_enhanced_text|default';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_enhanced_text';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_text_wrapper';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '6',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'long-form-enhanced-text__text-wrapper',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_text|paragraphs_item|long_form_enhanced_text|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|paragraphs_item|long_form_text|center_aligned';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_text';
  $field_group->mode = 'center_aligned';
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
        'classes' => 'text-block text-block--centered layout-constrain component',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_text|paragraphs_item|long_form_text|center_aligned'] = $field_group;

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
  $field_groups['group_text|paragraphs_item|long_form_text|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|paragraphs_item|long_form_text|left_aligned';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_text';
  $field_group->mode = 'left_aligned';
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
  $field_groups['group_text|paragraphs_item|long_form_text|left_aligned'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title|paragraphs_item|long_form_featured_content|default';
  $field_group->group_name = 'group_title';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'long_form_featured_content';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Title',
    'weight' => '0',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'para-featured-content-title',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_title|paragraphs_item|long_form_featured_content|default'] = $field_group;

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
  $field_groups['group_video|paragraphs_item|long_form_video|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Aside');
  t('Callout #1');
  t('Callout #2');
  t('Callout #3');
  t('Card');
  t('Card item');
  t('Card item 2');
  t('Card item 3');
  t('Content');
  t('Favorite');
  t('Footer');
  t('Footer Partners');
  t('Fullwidth Header');
  t('Key Figure');
  t('PDF');
  t('Page Header');
  t('Pre-Footer');
  t('Pre-Footer Group');
  t('Pullquote');
  t('Report Description');
  t('Section Break');
  t('Section header');
  t('ShareThis Button');
  t('Text');
  t('Text Wrapper');
  t('Title');
  t('Video');
  t('share');

  return $field_groups;
}
