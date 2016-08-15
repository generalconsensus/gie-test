<?php
/**
 * @file
 * gie_map.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gie_map_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'innovation_map_test';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Innovation Map Test';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 0,
    ),
    'node' => array(
      'innovation' => 'innovation',
      'action_card' => 0,
      'article' => 0,
      'page' => 0,
      'blogs' => 0,
      'discussion' => 0,
      'error_page' => 0,
      'event' => 0,
      'funding' => 0,
      'homepage' => 0,
      'long_form_page' => 0,
      'map' => 0,
      'microsite' => 0,
      'microsite_page' => 0,
      'needs' => 0,
      'news' => 0,
      'organization' => 0,
      'persona' => 0,
      'program' => 0,
      'resource' => 0,
    ),
    'node_only' => array(
      'node_changed' => 'node_changed',
    ),
  );
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'node';
  $handler->display->display_options['style_options']['data_source'] = 'field_address_geocoded';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['map'] = 'OSM Mapnik';
  $handler->display->display_options['style_options']['hide_empty'] = 1;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '13';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '3';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Mapping Data found';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Address Geocoded */
  $handler->display->display_options['fields']['field_address_geocoded']['id'] = 'field_address_geocoded';
  $handler->display->display_options['fields']['field_address_geocoded']['table'] = 'field_data_field_address_geocoded';
  $handler->display->display_options['fields']['field_address_geocoded']['field'] = 'field_address_geocoded';
  $handler->display->display_options['fields']['field_address_geocoded']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_address_geocoded']['settings'] = array(
    'data' => 'full',
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'innovation' => 'innovation',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    9 => 0,
  );
  /* Filter criterion: Domain Access: Available on current domain */
  $handler->display->display_options['filters']['current_all']['id'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['table'] = 'domain_access';
  $handler->display->display_options['filters']['current_all']['field'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['value'] = '1';
  /* Filter criterion: Content: Address Geocoded (field_address_geocoded:lat) */
  $handler->display->display_options['filters']['field_address_geocoded_lat']['id'] = 'field_address_geocoded_lat';
  $handler->display->display_options['filters']['field_address_geocoded_lat']['table'] = 'field_data_field_address_geocoded';
  $handler->display->display_options['filters']['field_address_geocoded_lat']['field'] = 'field_address_geocoded_lat';
  $handler->display->display_options['filters']['field_address_geocoded_lat']['operator'] = 'not empty';
  /* Filter criterion: Content: Address Geocoded (field_address_geocoded:lon) */
  $handler->display->display_options['filters']['field_address_geocoded_lon']['id'] = 'field_address_geocoded_lon';
  $handler->display->display_options['filters']['field_address_geocoded_lon']['table'] = 'field_data_field_address_geocoded';
  $handler->display->display_options['filters']['field_address_geocoded_lon']['field'] = 'field_address_geocoded_lon';
  $handler->display->display_options['filters']['field_address_geocoded_lon']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['field_language'] = '***DEFAULT_LANGUAGE***';
  $handler->display->display_options['path'] = 'innovation-map';
  $export['innovation_map_test'] = $view;

  return $export;
}
