<?php
/**
 * @file
 * gie_innovation.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gie_innovation_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'funded_by';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Funded by';
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
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_innovation_funders_target_id']['id'] = 'field_innovation_funders_target_id';
  $handler->display->display_options['relationships']['field_innovation_funders_target_id']['table'] = 'field_data_field_innovation_funders';
  $handler->display->display_options['relationships']['field_innovation_funders_target_id']['field'] = 'field_innovation_funders_target_id';
  $handler->display->display_options['relationships']['field_innovation_funders_target_id']['required'] = TRUE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_org_logo']['id'] = 'field_org_logo';
  $handler->display->display_options['fields']['field_org_logo']['table'] = 'field_data_field_org_logo';
  $handler->display->display_options['fields']['field_org_logo']['field'] = 'field_org_logo';
  $handler->display->display_options['fields']['field_org_logo']['relationship'] = 'field_innovation_funders_target_id';
  $handler->display->display_options['fields']['field_org_logo']['label'] = '';
  $handler->display->display_options['fields']['field_org_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_logo']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_org_logo']['settings'] = array(
    'view_mode' => 'image_teaser',
    'links' => 0,
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_innovation_funders_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_innovation_funders_target_id';
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
  $handler->display->display_options['filters']['status']['relationship'] = 'field_innovation_funders_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['funded_by'] = $view;

  return $export;
}
