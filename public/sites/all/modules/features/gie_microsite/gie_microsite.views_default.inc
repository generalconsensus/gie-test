<?php
/**
 * @file
 * gie_microsite.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gie_microsite_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'microsite_featured_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Microsite Featured Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'layout-grid layout-grid--cols-4 layout-grid--microsite-featured';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="view__footer">
        <div class="microsite-link-bar">
          <a href="innovations">View All Projects</a>
        </div>
      </div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_para_featured_content_paragraphs_item']['id'] = 'reverse_field_para_featured_content_paragraphs_item';
  $handler->display->display_options['relationships']['reverse_field_para_featured_content_paragraphs_item']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_para_featured_content_paragraphs_item']['field'] = 'reverse_field_para_featured_content_paragraphs_item';
  $handler->display->display_options['relationships']['reverse_field_para_featured_content_paragraphs_item']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_innovation_image']['id'] = 'field_innovation_image';
  $handler->display->display_options['fields']['field_innovation_image']['table'] = 'field_data_field_innovation_image';
  $handler->display->display_options['fields']['field_innovation_image']['field'] = 'field_innovation_image';
  $handler->display->display_options['fields']['field_innovation_image']['label'] = '';
  $handler->display->display_options['fields']['field_innovation_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_innovation_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_innovation_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_innovation_image']['settings'] = array(
    'image_style' => 'card__500x300_',
    'image_link' => '',
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
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '
       <div class="layout-grid__row">
          <div class="layout-grid__column">
            <div class="microsite-featured">
              <div class="microsite-featured__image">
                [field_innovation_image]
              </div>
              <div class="microsite-featured__text">
                <div class="microsite-featured__headline">[title]</div>
                <div class="microsite-featured__subtitle"></div>
                <a href="[path]" class="microsite-featured__link">View Innovation</a>
          </div>
            </div>
          </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Paragraphs item: Paragraphs item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'paragraphs_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['relationship'] = 'reverse_field_para_featured_content_paragraphs_item';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'paragraphs_item';
  $handler->display->display_options['bundles'] = array(
    0 => 'long_form_featured_content',
  );
  $export['microsite_featured_content'] = $view;

  return $export;
}
