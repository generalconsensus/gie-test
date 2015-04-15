<?php
/**
 * @file
 * gie_homepage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gie_homepage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'The Exchange Connects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'listing';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_homepage_personas_node']['id'] = 'reverse_field_homepage_personas_node';
  $handler->display->display_options['relationships']['reverse_field_homepage_personas_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_homepage_personas_node']['field'] = 'reverse_field_homepage_personas_node';
  $handler->display->display_options['relationships']['reverse_field_homepage_personas_node']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_homepage_personas_target_id';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
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
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Personas */
  $handler = $view->new_display('panel_pane', 'Personas', 'personas_pane');

  /* Display: Action cards */
  $handler = $view->new_display('panel_pane', 'Action cards', 'action_card_panes');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Find your place on the Exchange';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_homepage_action_cards_node']['id'] = 'reverse_field_homepage_action_cards_node';
  $handler->display->display_options['relationships']['reverse_field_homepage_action_cards_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_homepage_action_cards_node']['field'] = 'reverse_field_homepage_action_cards_node';
  $handler->display->display_options['relationships']['reverse_field_homepage_action_cards_node']['required'] = TRUE;

  /* Display: Staff Picks */
  $handler = $view->new_display('panel_pane', 'Staff Picks', 'staff_picks_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>Staff Picks</h1>
<a href="innovations">View All Innovations</a>
<a href="node/add/innovation" class="button">Add Innovation</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_homepage_staff_picks_node']['id'] = 'reverse_field_homepage_staff_picks_node';
  $handler->display->display_options['relationships']['reverse_field_homepage_staff_picks_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_homepage_staff_picks_node']['field'] = 'reverse_field_homepage_staff_picks_node';
  $handler->display->display_options['relationships']['reverse_field_homepage_staff_picks_node']['required'] = TRUE;

  /* Display: Funding */
  $handler = $view->new_display('panel_pane', 'Funding', 'funding_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>Funding Opportunities</h1>
<a href="funding">View All Funding</a>
<a href="node/add/funding" class="button">Add Funding</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Deadlines (field_funding_deadline) */
  $handler->display->display_options['sorts']['field_funding_deadline_value']['id'] = 'field_funding_deadline_value';
  $handler->display->display_options['sorts']['field_funding_deadline_value']['table'] = 'field_data_field_funding_deadline';
  $handler->display->display_options['sorts']['field_funding_deadline_value']['field'] = 'field_funding_deadline_value';
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
    'funding' => 'funding',
  );
  /* Filter criterion: Content: Deadlines (field_funding_deadline) */
  $handler->display->display_options['filters']['field_funding_deadline_value']['id'] = 'field_funding_deadline_value';
  $handler->display->display_options['filters']['field_funding_deadline_value']['table'] = 'field_data_field_funding_deadline';
  $handler->display->display_options['filters']['field_funding_deadline_value']['field'] = 'field_funding_deadline_value';
  $handler->display->display_options['filters']['field_funding_deadline_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_funding_deadline_value']['default_date'] = 'now';
  $export['homepage_views'] = $view;

  return $export;
}
