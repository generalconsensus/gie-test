<?php
/**
 * @file
 * gie_needs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gie_needs_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'needs_listing';
  $view->description = 'This view is for the Needs Landing page and the Needs Listing page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Needs Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: InDemand Landing */
  $handler = $view->new_display('panel_pane', 'InDemand Landing', 'exchange_indemand_landing');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view--homepage-cardflip';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_action_image']['id'] = 'field_action_image';
  $handler->display->display_options['fields']['field_action_image']['table'] = 'field_data_field_action_image';
  $handler->display->display_options['fields']['field_action_image']['field'] = 'field_action_image';
  $handler->display->display_options['fields']['field_action_image']['label'] = '';
  $handler->display->display_options['fields']['field_action_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_action_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_action_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_action_image']['settings'] = array(
    'image_style' => '',
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
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_action_description']['id'] = 'field_action_description';
  $handler->display->display_options['fields']['field_action_description']['table'] = 'field_data_field_action_description';
  $handler->display->display_options['fields']['field_action_description']['field'] = 'field_action_description';
  $handler->display->display_options['fields']['field_action_description']['label'] = '';
  $handler->display->display_options['fields']['field_action_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_action_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_action_description']['settings'] = array(
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
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_action_link']['id'] = 'field_action_link';
  $handler->display->display_options['fields']['field_action_link']['table'] = 'field_data_field_action_link';
  $handler->display->display_options['fields']['field_action_link']['field'] = 'field_action_link';
  $handler->display->display_options['fields']['field_action_link']['label'] = '';
  $handler->display->display_options['fields']['field_action_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_action_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_action_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_action_link']['settings'] = array(
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="cardflip">
  <div class="cardflip__card">
    <div class="cardflip__a">
      <div class="cardflip__title">[title]</div>
      <div class="cardflip__image">[field_action_image]</div>
    </div>
    <div class="cardflip__b">
      <div class="cardflip__title">[title]</div>
      <div class="cardflip__description">[field_action_description]</div>
      <div class="cardflip__link">[field_action_link]</div>
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'action_card' => 'action_card',
  );
  $export['needs_listing'] = $view;

  $view = new view();
  $view->name = 'needs_listing_pages';
  $view->description = 'This view is for the Needs Listing Pages, tied to the Needs Type taxonomy pages.';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Needs Listing Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'needs_listings');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'listing';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Node: Type of Need */
  $handler->display->display_options['relationships']['field_needs_type']['id'] = 'field_needs_type';
  $handler->display->display_options['relationships']['field_needs_type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['relationships']['field_needs_type']['field'] = 'field_needs_type';
  /* Relationship: Taxonomy term: Vocabulary */
  $handler->display->display_options['relationships']['vocabulary']['id'] = 'vocabulary';
  $handler->display->display_options['relationships']['vocabulary']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['relationships']['vocabulary']['field'] = 'vocabulary';
  $handler->display->display_options['relationships']['vocabulary']['relationship'] = 'field_needs_type';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Type of Need */
  $handler->display->display_options['arguments']['field_needs_type']['id'] = 'field_needs_type';
  $handler->display->display_options['arguments']['field_needs_type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['arguments']['field_needs_type']['field'] = 'field_needs_type';
  $handler->display->display_options['arguments']['field_needs_type']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_needs_type']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_needs_type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_needs_type']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_needs_type']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'needs' => 'needs',
  );
  $export['needs_listing_pages'] = $view;

  return $export;
}
