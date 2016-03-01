<?php
/**
 * @file
 * gie_dashboard.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gie_dashboard_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dashboard';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming';
  $handler->display->display_options['css_class'] = 'view--card-view-4col';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '300';
  $handler->display->display_options['cache']['results_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '300';
  $handler->display->display_options['cache']['output_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 'changed',
    ),
    'node' => array(
      'event' => 'event',
      'funding' => 'funding',
      'action_card' => 0,
      'article' => 0,
      'page' => 0,
      'discussion' => 0,
      'error_page' => 0,
      'homepage' => 0,
      'innovation' => 0,
      'long_form_page' => 0,
      'microsite' => 0,
      'microsite_page' => 0,
      'needs' => 0,
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
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'listing';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Deadlines (field_funding_deadline) */
  $handler->display->display_options['sorts']['field_funding_deadline_value']['id'] = 'field_funding_deadline_value';
  $handler->display->display_options['sorts']['field_funding_deadline_value']['table'] = 'field_data_field_funding_deadline';
  $handler->display->display_options['sorts']['field_funding_deadline_value']['field'] = 'field_funding_deadline_value';
  /* Sort criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Deadlines (field_funding_deadline) */
  $handler->display->display_options['filters']['field_funding_deadline_value']['id'] = 'field_funding_deadline_value';
  $handler->display->display_options['filters']['field_funding_deadline_value']['table'] = 'field_data_field_funding_deadline';
  $handler->display->display_options['filters']['field_funding_deadline_value']['field'] = 'field_funding_deadline_value';
  $handler->display->display_options['filters']['field_funding_deadline_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_funding_deadline_value']['group'] = 2;
  $handler->display->display_options['filters']['field_funding_deadline_value']['default_date'] = 'now';
  /* Filter criterion: Content: Event Date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';

  /* Display: Upcoming */
  $handler = $view->new_display('panel_pane', 'Upcoming', 'dashboard_up');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'event' => 'event',
    'funding' => 'funding',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Deadlines (field_funding_deadline) */
  $handler->display->display_options['filters']['field_funding_deadline_value']['id'] = 'field_funding_deadline_value';
  $handler->display->display_options['filters']['field_funding_deadline_value']['table'] = 'field_data_field_funding_deadline';
  $handler->display->display_options['filters']['field_funding_deadline_value']['field'] = 'field_funding_deadline_value';
  $handler->display->display_options['filters']['field_funding_deadline_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_funding_deadline_value']['group'] = 2;
  $handler->display->display_options['filters']['field_funding_deadline_value']['default_date'] = 'now';
  /* Filter criterion: Content: Event Date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';

  /* Display: Recommended Funding */
  $handler = $view->new_display('panel_pane', 'Recommended Funding', 'dashboard_reco');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recommended Funding';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '300';
  $handler->display->display_options['cache']['results_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '300';
  $handler->display->display_options['cache']['output_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 'changed',
    ),
    'node' => array(
      'funding' => 'funding',
      'action_card' => 0,
      'article' => 0,
      'page' => 0,
      'discussion' => 0,
      'error_page' => 0,
      'event' => 0,
      'homepage' => 0,
      'innovation' => 0,
      'long_form_page' => 0,
      'microsite' => 0,
      'microsite_page' => 0,
      'needs' => 0,
      'organization' => 0,
      'persona' => 0,
      'program' => 0,
      'resource' => 0,
    ),
    'node_only' => array(
      'node_changed' => 'node_changed',
    ),
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Funding Recommended for You';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2 class="dashboard__title">Funding Recommended for You</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no recommendations at this time. <a href="/user/!1/edit">Add Sectors of Interest to improve your recommendations by updating your profile.</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Sector (field_term_sector) */
  $handler->display->display_options['relationships']['field_term_sector_tid']['id'] = 'field_term_sector_tid';
  $handler->display->display_options['relationships']['field_term_sector_tid']['table'] = 'field_data_field_term_sector';
  $handler->display->display_options['relationships']['field_term_sector_tid']['field'] = 'field_term_sector_tid';
  $handler->display->display_options['relationships']['field_term_sector_tid']['required'] = TRUE;
  /* Relationship: Taxonomy term: User using Sector */
  $handler->display->display_options['relationships']['reverse_field_term_sector_user']['id'] = 'reverse_field_term_sector_user';
  $handler->display->display_options['relationships']['reverse_field_term_sector_user']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_term_sector_user']['field'] = 'reverse_field_term_sector_user';
  $handler->display->display_options['relationships']['reverse_field_term_sector_user']['relationship'] = 'field_term_sector_tid';
  $handler->display->display_options['relationships']['reverse_field_term_sector_user']['required'] = TRUE;
  /* Relationship: Taxonomy term: Content using Sector */
  $handler->display->display_options['relationships']['reverse_field_term_sector_node']['id'] = 'reverse_field_term_sector_node';
  $handler->display->display_options['relationships']['reverse_field_term_sector_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_term_sector_node']['field'] = 'reverse_field_term_sector_node';
  $handler->display->display_options['relationships']['reverse_field_term_sector_node']['relationship'] = 'field_term_sector_tid';
  $handler->display->display_options['relationships']['reverse_field_term_sector_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_term_sector_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Follow Content */
  $handler = $view->new_display('panel_pane', 'Follow Content', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Content You Follow';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '300';
  $handler->display->display_options['cache']['results_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '300';
  $handler->display->display_options['cache']['output_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 'changed',
    ),
    'node' => array(
      'funding' => 'funding',
      'innovation' => 'innovation',
      'resource' => 'resource',
      'action_card' => 0,
      'article' => 0,
      'page' => 0,
      'discussion' => 0,
      'error_page' => 0,
      'event' => 0,
      'homepage' => 0,
      'long_form_page' => 0,
      'microsite' => 0,
      'microsite_page' => 0,
      'needs' => 0,
      'organization' => 0,
      'persona' => 0,
      'program' => 0,
    ),
    'node_only' => array(
      'node_changed' => 'node_changed',
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You are not following any content. Browse <a href="/innovations">Innovations</a>, <a href="/resources">Resources</a>, and <a href="/funding">Funding Opportunities</a> on the Exchange. ';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: favorite */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'favorite';
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Flags: User uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'flagging';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'innovation' => 'innovation',
    'resource' => 'resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Attend Content */
  $handler = $view->new_display('panel_pane', 'Attend Content', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events You Are or Have Attended';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '300';
  $handler->display->display_options['cache']['results_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '300';
  $handler->display->display_options['cache']['output_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 'changed',
    ),
    'node' => array(
      'event' => 'event',
      'action_card' => 0,
      'article' => 0,
      'page' => 0,
      'discussion' => 0,
      'error_page' => 0,
      'funding' => 0,
      'homepage' => 0,
      'innovation' => 0,
      'long_form_page' => 0,
      'microsite' => 0,
      'microsite_page' => 0,
      'needs' => 0,
      'organization' => 0,
      'persona' => 0,
      'program' => 0,
      'resource' => 0,
    ),
    'node_only' => array(
      'node_changed' => 'node_changed',
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You are not attending any events. <a href="/events">Browse Events on the Exchange. </a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: attending */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'attending';
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Flags: User uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'flagging';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Dashboard Actions */
  $handler = $view->new_display('panel_pane', 'Dashboard Actions', 'dashboard_actions');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dashboard Actions';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view--homepage-cardflip';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'none',
      'context' => 'entity:asset_type.id',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Dashboard: Innovations Help Needed */
  $handler = $view->new_display('panel_pane', 'Dashboard: Innovations Help Needed', 'innovations_help');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'These Innovations need your help';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '300';
  $handler->display->display_options['cache']['results_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '300';
  $handler->display->display_options['cache']['output_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 'changed',
    ),
    'node' => array(
      'innovation' => 'innovation',
      'action_card' => 0,
      'article' => 0,
      'page' => 0,
      'discussion' => 0,
      'error_page' => 0,
      'event' => 0,
      'funding' => 0,
      'homepage' => 0,
      'long_form_page' => 0,
      'microsite' => 0,
      'microsite_page' => 0,
      'needs' => 0,
      'organization' => 0,
      'persona' => 0,
      'program' => 0,
      'resource' => 0,
    ),
    'node_only' => array(
      'node_changed' => 'node_changed',
    ),
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'These innovations were selected based on the areas you have offered assistance in your user profile. <a href="/user/!1/edit">Update your selections to improve these results!</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no innovations that need your help. <a href="/user/!1/edit">Update your profile with areas in which you can help users and organizations on the Exchange to get better results!</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Assistance Type (field_innovation_assistance) */
  $handler->display->display_options['relationships']['field_innovation_assistance_tid']['id'] = 'field_innovation_assistance_tid';
  $handler->display->display_options['relationships']['field_innovation_assistance_tid']['table'] = 'field_data_field_innovation_assistance';
  $handler->display->display_options['relationships']['field_innovation_assistance_tid']['field'] = 'field_innovation_assistance_tid';
  $handler->display->display_options['relationships']['field_innovation_assistance_tid']['required'] = TRUE;
  /* Relationship: Taxonomy term: User using Assistance Offered */
  $handler->display->display_options['relationships']['reverse_field_user_assistance_user']['id'] = 'reverse_field_user_assistance_user';
  $handler->display->display_options['relationships']['reverse_field_user_assistance_user']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_user_assistance_user']['field'] = 'reverse_field_user_assistance_user';
  $handler->display->display_options['relationships']['reverse_field_user_assistance_user']['relationship'] = 'field_innovation_assistance_tid';
  $handler->display->display_options['relationships']['reverse_field_user_assistance_user']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content revision: Updated date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_user_assistance_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Dashboard: Resources Improve */
  $handler = $view->new_display('panel_pane', 'Dashboard: Resources Improve', 'resource_assistance');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Help improve these resources';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '300';
  $handler->display->display_options['cache']['results_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '300';
  $handler->display->display_options['cache']['output_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 'changed',
    ),
    'node' => array(
      'resource' => 'resource',
      'action_card' => 0,
      'article' => 0,
      'page' => 0,
      'discussion' => 0,
      'error_page' => 0,
      'event' => 0,
      'funding' => 0,
      'homepage' => 0,
      'innovation' => 0,
      'long_form_page' => 0,
      'microsite' => 0,
      'microsite_page' => 0,
      'needs' => 0,
      'organization' => 0,
      'persona' => 0,
      'program' => 0,
    ),
    'node_only' => array(
      'node_changed' => 'node_changed',
    ),
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'These resources were selected based on the areas you have offered assistance in your user profile. <a href="/user/!1/edit">Update your selections to improve these results!</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no resources that need your help. <a href="/user/!1/edit">Update your profile with areas in which you can help users and organizations on the Exchange to get better results!</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Assistance Provided (field_resource_assistance) */
  $handler->display->display_options['relationships']['field_resource_assistance_tid']['id'] = 'field_resource_assistance_tid';
  $handler->display->display_options['relationships']['field_resource_assistance_tid']['table'] = 'field_data_field_resource_assistance';
  $handler->display->display_options['relationships']['field_resource_assistance_tid']['field'] = 'field_resource_assistance_tid';
  $handler->display->display_options['relationships']['field_resource_assistance_tid']['required'] = TRUE;
  /* Relationship: Taxonomy term: User using Assistance Offered */
  $handler->display->display_options['relationships']['reverse_field_user_assistance_user']['id'] = 'reverse_field_user_assistance_user';
  $handler->display->display_options['relationships']['reverse_field_user_assistance_user']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_user_assistance_user']['field'] = 'reverse_field_user_assistance_user';
  $handler->display->display_options['relationships']['reverse_field_user_assistance_user']['relationship'] = 'field_resource_assistance_tid';
  $handler->display->display_options['relationships']['reverse_field_user_assistance_user']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content revision: Updated date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_user_assistance_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Your Funding Opportunities */
  $handler = $view->new_display('panel_pane', 'Your Funding Opportunities', 'user_funding_opportunities');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Your Funding Opportunities';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_funding_type' => 'field_funding_type',
    'field_funding_grant_award_value' => 'field_funding_grant_award_value',
    'field_funding_deadline' => 'field_funding_deadline',
    'field_funding_link' => 'field_funding_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_grant_award_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_deadline' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Your Funding Opportunities';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2 class="dashboard__title">Your Funding Opportunities</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'View Your Complete Funding History';
  $handler->display->display_options['footer']['area']['content'] = '<a class="button button--highlight" href="/funding">View Your Complete Funding History</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['label'] = 'Funding Recommended for You';
  $handler->display->display_options['footer']['view']['empty'] = TRUE;
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'dashboard:dashboard_reco';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area_1']['id'] = 'area_1';
  $handler->display->display_options['footer']['area_1']['table'] = 'views';
  $handler->display->display_options['footer']['area_1']['field'] = 'area';
  $handler->display->display_options['footer']['area_1']['label'] = 'View all funding opportunities';
  $handler->display->display_options['footer']['area_1']['empty'] = TRUE;
  $handler->display->display_options['footer']['area_1']['content'] = '<a class="button button--highlight" href="/funding">View all funding opportunities</a>';
  $handler->display->display_options['footer']['area_1']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area_2']['id'] = 'area_2';
  $handler->display->display_options['footer']['area_2']['table'] = 'views';
  $handler->display->display_options['footer']['area_2']['field'] = 'area';
  $handler->display->display_options['footer']['area_2']['label'] = 'Funding Counts Chart';
  $handler->display->display_options['footer']['area_2']['empty'] = TRUE;
  $handler->display->display_options['footer']['area_2']['content'] = '<h2 class="dashboard__title">Number of Funding Opportunities by Country</h2>
<div data-ng-controller="FundingCountController">
<bar-chart></bar-chart>
</div>
<div class="dashboard__funding__chart__more__link"> 
<a class="button button--highlight" href="/data">View the GIX\'s Data</a>
</div>';
  $handler->display->display_options['footer']['area_2']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You don\'t have any Funding Opportunities, you can create your them <a class="button button--highlight" href="/node/add/funding">here</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Funding Type */
  $handler->display->display_options['fields']['field_funding_type']['id'] = 'field_funding_type';
  $handler->display->display_options['fields']['field_funding_type']['table'] = 'field_data_field_funding_type';
  $handler->display->display_options['fields']['field_funding_type']['field'] = 'field_funding_type';
  $handler->display->display_options['fields']['field_funding_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_funding_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_funding_type']['settings'] = array(
    'field_delimiter' => ', ',
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
  $handler->display->display_options['fields']['field_funding_type']['delta_offset'] = '0';
  /* Field: Content: Grant / Award Value */
  $handler->display->display_options['fields']['field_funding_grant_award_value']['id'] = 'field_funding_grant_award_value';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['table'] = 'field_data_field_funding_grant_award_value';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['field'] = 'field_funding_grant_award_value';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['label'] = 'Amount';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_grant_award_value']['empty'] = '-';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_funding_grant_award_value']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
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
  /* Field: Content: Deadlines */
  $handler->display->display_options['fields']['field_funding_deadline']['id'] = 'field_funding_deadline';
  $handler->display->display_options['fields']['field_funding_deadline']['table'] = 'field_data_field_funding_deadline';
  $handler->display->display_options['fields']['field_funding_deadline']['field'] = 'field_funding_deadline';
  $handler->display->display_options['fields']['field_funding_deadline']['label'] = 'Status';
  $handler->display->display_options['fields']['field_funding_deadline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_deadline']['settings'] = array(
    'format_type' => 'gie_general_slash_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
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
  /* Field: Content: Application URL */
  $handler->display->display_options['fields']['field_funding_link']['id'] = 'field_funding_link';
  $handler->display->display_options['fields']['field_funding_link']['table'] = 'field_data_field_funding_link';
  $handler->display->display_options['fields']['field_funding_link']['field'] = 'field_funding_link';
  $handler->display->display_options['fields']['field_funding_link']['label'] = '';
  $handler->display->display_options['fields']['field_funding_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_link']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'funding' => 'funding',
  );
  $handler->display->display_options['pane_title'] = 'Your Funding Opportunities';
  $export['dashboard'] = $view;

  $view = new view();
  $view->name = 'dashboard_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Dashboard Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'People You May Know';
  $handler->display->display_options['css_class'] = 'view--card-view-4col';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'listing';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no recommendations at this time. <a href="/user/!1/edit">Update your Affiliated Organizations on your profile to get better recommendations!</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_org_target_id']['id'] = 'field_user_org_target_id';
  $handler->display->display_options['relationships']['field_user_org_target_id']['table'] = 'field_data_field_user_org';
  $handler->display->display_options['relationships']['field_user_org_target_id']['field'] = 'field_user_org_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_user_org_user']['id'] = 'reverse_field_user_org_user';
  $handler->display->display_options['relationships']['reverse_field_user_org_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_user_org_user']['field'] = 'reverse_field_user_org_user';
  $handler->display->display_options['relationships']['reverse_field_user_org_user']['relationship'] = 'field_user_org_target_id';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Your Organizational Affiliations */
  $handler->display->display_options['fields']['field_user_org']['id'] = 'field_user_org';
  $handler->display->display_options['fields']['field_user_org']['table'] = 'field_data_field_user_org';
  $handler->display->display_options['fields']['field_user_org']['field'] = 'field_user_org';
  $handler->display->display_options['fields']['field_user_org']['settings'] = array(
    'link' => 0,
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
  );
  $handler->display->display_options['fields']['field_user_org']['delta_offset'] = '0';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_user_org_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '0';

  /* Display: You May Know */
  $handler = $view->new_display('panel_pane', 'You May Know', 'dashboard_users');
  $handler->display->display_options['argument_input'] = array(
    'field_user_org_target_id' => array(
      'type' => 'none',
      'context' => 'entity:user.field-user-org',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Your Organizational Affiliations (field_user_org)',
    ),
  );

  /* Display: People You Follow */
  $handler = $view->new_display('panel_pane', 'People You Follow', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'People You Follow';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You are not following anyone at this time. <a href="/members">Browse Members of the Exchange</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: follow */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'follow';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'field_user_org_target_id' => array(
      'type' => 'none',
      'context' => 'entity:user.field-user-org',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Your Organizational Affiliations (field_user_org)',
    ),
  );
  $export['dashboard_users'] = $view;

  return $export;
}
