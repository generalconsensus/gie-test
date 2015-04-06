<?php
/**
 * @file
 * gie_funding.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gie_funding_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'funding_fields';
  $view->description = 'Funding Ops fields for use in Panels';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Funding Fields';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Link URL */
  $handler->display->display_options['fields']['field_funding_link']['id'] = 'field_funding_link';
  $handler->display->display_options['fields']['field_funding_link']['table'] = 'field_data_field_funding_link';
  $handler->display->display_options['fields']['field_funding_link']['field'] = 'field_funding_link';
  $handler->display->display_options['fields']['field_funding_link']['label'] = '';
  $handler->display->display_options['fields']['field_funding_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funding_link']['settings'] = array(
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
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Link URL */
  $handler = $view->new_display('entity_view', 'Link URL', 'link_url');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link URL */
  $handler->display->display_options['fields']['field_funding_link']['id'] = 'field_funding_link';
  $handler->display->display_options['fields']['field_funding_link']['table'] = 'field_data_field_funding_link';
  $handler->display->display_options['fields']['field_funding_link']['field'] = 'field_funding_link';
  $handler->display->display_options['fields']['field_funding_link']['label'] = '';
  $handler->display->display_options['fields']['field_funding_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_funding_link']['alter']['text'] = '<a href="[field_funding_link]" title="Apply for Funding">Apply</a>';
  $handler->display->display_options['fields']['field_funding_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funding_link']['settings'] = array(
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
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'funding',
  );

  /* Display: Contact */
  $handler = $view->new_display('entity_view', 'Contact', 'contact');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Point of Contact */
  $handler->display->display_options['fields']['field_funding_poc']['id'] = 'field_funding_poc';
  $handler->display->display_options['fields']['field_funding_poc']['table'] = 'field_data_field_funding_poc';
  $handler->display->display_options['fields']['field_funding_poc']['field'] = 'field_funding_poc';
  $handler->display->display_options['fields']['field_funding_poc']['label'] = 'Contact';
  $handler->display->display_options['fields']['field_funding_poc']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_funding_poc']['alter']['text'] = '<a href="mailto:[field_funding_poc]">[field_funding_poc]</a>';
  $handler->display->display_options['fields']['field_funding_poc']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_funding_poc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funding_poc']['settings'] = array(
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Point of Contact (field_funding_poc) */
  $handler->display->display_options['filters']['field_funding_poc_value']['id'] = 'field_funding_poc_value';
  $handler->display->display_options['filters']['field_funding_poc_value']['table'] = 'field_data_field_funding_poc';
  $handler->display->display_options['filters']['field_funding_poc_value']['field'] = 'field_funding_poc_value';
  $handler->display->display_options['filters']['field_funding_poc_value']['operator'] = 'not empty';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'funding',
  );
  $export['funding_fields'] = $view;

  $view = new view();
  $view->name = 'funding_opp_listing';
  $view->description = 'Funding Listing Solr View';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Funding Opp Listing';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'listing';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'resource' => 'resource',
  );

  /* Display: Funding Opp */
  $handler = $view->new_display('panel_pane', 'Funding Opp', 'funding_listing');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'funding' => 'funding',
  );
  $export['funding_opp_listing'] = $view;

  return $export;
}
