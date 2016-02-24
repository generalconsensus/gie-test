<?php
/**
 * @file
 * gie_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gie_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '10cdec2b-58db-45a1-adbf-358af301672f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-69fefc92-6cdf-4196-b2ef-c062f308fe72';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_delimiter' => '',
        'image_link' => '',
        'image_style' => '',
        'linked_field' => array(
          'advanced' => array(
            'class' => '',
            'rel' => '',
            'target' => '',
            'text' => '',
            'title' => '',
          ),
          'destination' => '',
          'linked' => 0,
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '69fefc92-6cdf-4196-b2ef-c062f308fe72';
    $display->content['new-69fefc92-6cdf-4196-b2ef-c062f308fe72'] = $pane;
    $display->panels['center'][0] = 'new-69fefc92-6cdf-4196-b2ef-c062f308fe72';
    $pane = new stdClass();
    $pane->pid = 'new-8f79b187-5d48-46fe-9cfb-ee426418bef4';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_byline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_delimiter' => '',
        'linked_field' => array(
          'advanced' => array(
            'class' => '',
            'rel' => '',
            'target' => '',
            'text' => '',
            'title' => '',
          ),
          'destination' => '',
          'linked' => 0,
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8f79b187-5d48-46fe-9cfb-ee426418bef4';
    $display->content['new-8f79b187-5d48-46fe-9cfb-ee426418bef4'] = $pane;
    $display->panels['center'][1] = 'new-8f79b187-5d48-46fe-9cfb-ee426418bef4';
    $pane = new stdClass();
    $pane->pid = 'new-6bdb8b5f-083f-4e2f-a6ef-3ea7e87270eb';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_delimiter' => '',
        'linked_field' => array(
          'advanced' => array(
            'class' => '',
            'rel' => '',
            'target' => '',
            'text' => '',
            'title' => '',
          ),
          'destination' => '',
          'linked' => 0,
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6bdb8b5f-083f-4e2f-a6ef-3ea7e87270eb';
    $display->content['new-6bdb8b5f-083f-4e2f-a6ef-3ea7e87270eb'] = $pane;
    $display->panels['center'][2] = 'new-6bdb8b5f-083f-4e2f-a6ef-3ea7e87270eb';
    $pane = new stdClass();
    $pane->pid = 'new-d8cde347-b567-499d-a2d2-6c5fc12b730f';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_source';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_delimiter' => '',
        'linked_field' => array(
          'advanced' => array(
            'class' => '',
            'rel' => '',
            'target' => '',
            'text' => '',
            'title' => '',
          ),
          'destination' => '',
          'linked' => 0,
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd8cde347-b567-499d-a2d2-6c5fc12b730f';
    $display->content['new-d8cde347-b567-499d-a2d2-6c5fc12b730f'] = $pane;
    $display->panels['center'][3] = 'new-d8cde347-b567-499d-a2d2-6c5fc12b730f';
    $pane = new stdClass();
    $pane->pid = 'new-1697f483-c474-400b-8df1-69a2ae9decc2';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_point_of_contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_delimiter' => '',
        'link' => FALSE,
        'linked_field' => array(
          'advanced' => array(
            'class' => '',
            'rel' => '',
            'target' => '',
            'text' => '',
            'title' => '',
          ),
          'destination' => '',
          'linked' => 0,
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1697f483-c474-400b-8df1-69a2ae9decc2';
    $display->content['new-1697f483-c474-400b-8df1-69a2ae9decc2'] = $pane;
    $display->panels['center'][4] = 'new-1697f483-c474-400b-8df1-69a2ae9decc2';
    $pane = new stdClass();
    $pane->pid = 'new-3d516107-3a20-4a1c-8121-7c59bf76d6ab';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_publish_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_delimiter' => '',
        'format_type' => 'long',
        'fromto' => 'both',
        'linked_field' => array(
          'advanced' => array(
            'class' => '',
            'rel' => '',
            'target' => '',
            'text' => '',
            'title' => '',
          ),
          'destination' => '',
          'linked' => 0,
        ),
        'multiple_from' => '',
        'multiple_number' => '',
        'multiple_to' => '',
        'show_remaining_days' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3d516107-3a20-4a1c-8121-7c59bf76d6ab';
    $display->content['new-3d516107-3a20-4a1c-8121-7c59bf76d6ab'] = $pane;
    $display->panels['center'][5] = 'new-3d516107-3a20-4a1c-8121-7c59bf76d6ab';
    $pane = new stdClass();
    $pane->pid = 'new-26740925-84a9-4d8b-bf63-704640d8ebed';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_organization';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_delimiter' => '',
        'link' => FALSE,
        'linked_field' => array(
          'advanced' => array(
            'class' => '',
            'rel' => '',
            'target' => '',
            'text' => '',
            'title' => '',
          ),
          'destination' => '',
          'linked' => 0,
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '26740925-84a9-4d8b-bf63-704640d8ebed';
    $display->content['new-26740925-84a9-4d8b-bf63-704640d8ebed'] = $pane;
    $display->panels['center'][6] = 'new-26740925-84a9-4d8b-bf63-704640d8ebed';
    $pane = new stdClass();
    $pane->pid = 'new-4e4c0eb1-0c15-4bb0-9eae-a88244f030c5';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_program';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_delimiter' => '',
        'link' => FALSE,
        'linked_field' => array(
          'advanced' => array(
            'class' => '',
            'rel' => '',
            'target' => '',
            'text' => '',
            'title' => '',
          ),
          'destination' => '',
          'linked' => 0,
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4e4c0eb1-0c15-4bb0-9eae-a88244f030c5';
    $display->content['new-4e4c0eb1-0c15-4bb0-9eae-a88244f030c5'] = $pane;
    $display->panels['center'][7] = 'new-4e4c0eb1-0c15-4bb0-9eae-a88244f030c5';
    $pane = new stdClass();
    $pane->pid = 'new-785fd845-10f4-4382-91e8-3106e48e5886';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_funding_op';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_delimiter' => '',
        'link' => FALSE,
        'linked_field' => array(
          'advanced' => array(
            'class' => '',
            'rel' => '',
            'target' => '',
            'text' => '',
            'title' => '',
          ),
          'destination' => '',
          'linked' => 0,
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '785fd845-10f4-4382-91e8-3106e48e5886';
    $display->content['new-785fd845-10f4-4382-91e8-3106e48e5886'] = $pane;
    $display->panels['center'][8] = 'new-785fd845-10f4-4382-91e8-3106e48e5886';
    $pane = new stdClass();
    $pane->pid = 'new-0d6225b1-09ec-4a72-83e6-71b68349a600';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_innovation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_delimiter' => '',
        'link' => FALSE,
        'linked_field' => array(
          'advanced' => array(
            'class' => '',
            'rel' => '',
            'target' => '',
            'text' => '',
            'title' => '',
          ),
          'destination' => '',
          'linked' => 0,
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0d6225b1-09ec-4a72-83e6-71b68349a600';
    $display->content['new-0d6225b1-09ec-4a72-83e6-71b68349a600'] = $pane;
    $display->panels['center'][9] = 'new-0d6225b1-09ec-4a72-83e6-71b68349a600';
    $pane = new stdClass();
    $pane->pid = 'new-ae44a06a-e822-45fd-bff0-4ef96d0264a7';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_topic';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_delimiter' => '',
        'linked_field' => array(
          'advanced' => array(
            'class' => '',
            'rel' => '',
            'target' => '',
            'text' => '',
            'title' => '',
          ),
          'destination' => '',
          'linked' => 0,
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ae44a06a-e822-45fd-bff0-4ef96d0264a7';
    $display->content['new-ae44a06a-e822-45fd-bff0-4ef96d0264a7'] = $pane;
    $display->panels['center'][10] = 'new-ae44a06a-e822-45fd-bff0-4ef96d0264a7';
    $pane = new stdClass();
    $pane->pid = 'new-5be53031-e4da-4cdf-8980-40588e230ffb';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_sector';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_delimiter' => '',
        'linked_field' => array(
          'advanced' => array(
            'class' => '',
            'rel' => '',
            'target' => '',
            'text' => '',
            'title' => '',
          ),
          'destination' => '',
          'linked' => 0,
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5be53031-e4da-4cdf-8980-40588e230ffb';
    $display->content['new-5be53031-e4da-4cdf-8980-40588e230ffb'] = $pane;
    $display->panels['center'][11] = 'new-5be53031-e4da-4cdf-8980-40588e230ffb';
    $pane = new stdClass();
    $pane->pid = 'new-2aefc357-e580-4e5e-969e-274097f2bbeb';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_region';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_delimiter' => '',
        'linked_field' => array(
          'advanced' => array(
            'class' => '',
            'rel' => '',
            'target' => '',
            'text' => '',
            'title' => '',
          ),
          'destination' => '',
          'linked' => 0,
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2aefc357-e580-4e5e-969e-274097f2bbeb';
    $display->content['new-2aefc357-e580-4e5e-969e-274097f2bbeb'] = $pane;
    $display->panels['center'][12] = 'new-2aefc357-e580-4e5e-969e-274097f2bbeb';
    $pane = new stdClass();
    $pane->pid = 'new-aec64683-5849-4201-aefd-0822c9c5acd8';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_country';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_delimiter' => '',
        'linked_field' => array(
          'advanced' => array(
            'class' => '',
            'rel' => '',
            'target' => '',
            'text' => '',
            'title' => '',
          ),
          'destination' => '',
          'linked' => 0,
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aec64683-5849-4201-aefd-0822c9c5acd8';
    $display->content['new-aec64683-5849-4201-aefd-0822c9c5acd8'] = $pane;
    $display->panels['center'][13] = 'new-aec64683-5849-4201-aefd-0822c9c5acd8';
    $pane = new stdClass();
    $pane->pid = 'new-e0a0fe1f-f41c-49ab-a11c-8ab46e9cd15a';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e0a0fe1f-f41c-49ab-a11c-8ab46e9cd15a';
    $display->content['new-e0a0fe1f-f41c-49ab-a11c-8ab46e9cd15a'] = $pane;
    $display->panels['center'][14] = 'new-e0a0fe1f-f41c-49ab-a11c-8ab46e9cd15a';
    $pane = new stdClass();
    $pane->pid = 'new-67b1997b-f88e-4e48-ad2d-7adff26f74b4';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '67b1997b-f88e-4e48-ad2d-7adff26f74b4';
    $display->content['new-67b1997b-f88e-4e48-ad2d-7adff26f74b4'] = $pane;
    $display->panels['center'][15] = 'new-67b1997b-f88e-4e48-ad2d-7adff26f74b4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-67b1997b-f88e-4e48-ad2d-7adff26f74b4';
  $panelizer->display = $display;
  $export['node:news:default'] = $panelizer;

  return $export;
}
