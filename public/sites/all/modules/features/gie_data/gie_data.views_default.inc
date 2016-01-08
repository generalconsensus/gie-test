<?php
/**
 * @file
 * gie_data.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gie_data_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'data_page_users';
  $view->description = 'This is the view for User related data on the /Data page';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Data Page Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Skills Count';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Assistance Offered (field_user_assistance) */
  $handler->display->display_options['relationships']['field_user_assistance_tid']['id'] = 'field_user_assistance_tid';
  $handler->display->display_options['relationships']['field_user_assistance_tid']['table'] = 'field_data_field_user_assistance';
  $handler->display->display_options['relationships']['field_user_assistance_tid']['field'] = 'field_user_assistance_tid';
  $handler->display->display_options['relationships']['field_user_assistance_tid']['required'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_user_assistance_tid';
  /* Field: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_user_assistance_tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Sort criterion: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  $handler->display->display_options['sorts']['tid']['relationship'] = 'field_user_assistance_tid';
  $handler->display->display_options['sorts']['tid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['tid']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: User Skills Count */
  $handler = $view->new_display('panel_pane', 'User Skills Count', 'user_skills');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Assistance Offered */
  $handler->display->display_options['fields']['field_assistance_members']['id'] = 'field_assistance_members';
  $handler->display->display_options['fields']['field_assistance_members']['table'] = 'field_data_field_assistance_members';
  $handler->display->display_options['fields']['field_assistance_members']['field'] = 'field_assistance_members';
  $handler->display->display_options['fields']['field_assistance_members']['relationship'] = 'field_user_assistance_tid';
  $handler->display->display_options['fields']['field_assistance_members']['label'] = '';
  $handler->display->display_options['fields']['field_assistance_members']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_assistance_members']['settings'] = array(
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
  $handler->display->display_options['fields']['field_assistance_members']['group_columns'] = array(
    'value' => 'value',
  );
  /* Field: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_user_assistance_tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;

  /* Display: User Connections */
  $handler = $view->new_display('panel_pane', 'User Connections', 'user_connections');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'User Connections';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: follow counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'follow';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: SUM(Flags: Flag counter) */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $export['data_page_users'] = $view;

  $view = new view();
  $view->name = 'data_page_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Data Page Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'view--card-view-4col';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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

  /* Display: Data Counts */
  $handler = $view->new_display('panel_pane', 'Data Counts', 'data_counts');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'data';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'persona' => 'persona',
  );

  /* Display: Data Tagline */
  $handler = $view->new_display('panel_pane', 'Data Tagline', 'data_tagline');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Country (field_term_country) */
  $handler->display->display_options['relationships']['field_term_country_tid']['id'] = 'field_term_country_tid';
  $handler->display->display_options['relationships']['field_term_country_tid']['table'] = 'field_data_field_term_country';
  $handler->display->display_options['relationships']['field_term_country_tid']['field'] = 'field_term_country_tid';
  /* Relationship: Content: Country (field_term_country) */
  $handler->display->display_options['relationships']['field_term_country_tid_1']['id'] = 'field_term_country_tid_1';
  $handler->display->display_options['relationships']['field_term_country_tid_1']['table'] = 'field_data_field_term_country';
  $handler->display->display_options['relationships']['field_term_country_tid_1']['field'] = 'field_term_country_tid';
  /* Relationship: Field: Sector (field_term_sector) */
  $handler->display->display_options['relationships']['field_term_sector_tid']['id'] = 'field_term_sector_tid';
  $handler->display->display_options['relationships']['field_term_sector_tid']['table'] = 'field_data_field_term_sector';
  $handler->display->display_options['relationships']['field_term_sector_tid']['field'] = 'field_term_sector_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Country Created In */
  $handler->display->display_options['fields']['field_innovation_created']['id'] = 'field_innovation_created';
  $handler->display->display_options['fields']['field_innovation_created']['table'] = 'field_data_field_innovation_created';
  $handler->display->display_options['fields']['field_innovation_created']['field'] = 'field_innovation_created';
  $handler->display->display_options['fields']['field_innovation_created']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_innovation_created']['label'] = '';
  $handler->display->display_options['fields']['field_innovation_created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_innovation_created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_innovation_created']['separator'] = ', ';
  /* Field: Content: Country Implemented In */
  $handler->display->display_options['fields']['field_innovation_implemented']['id'] = 'field_innovation_implemented';
  $handler->display->display_options['fields']['field_innovation_implemented']['table'] = 'field_data_field_innovation_implemented';
  $handler->display->display_options['fields']['field_innovation_implemented']['field'] = 'field_innovation_implemented';
  $handler->display->display_options['fields']['field_innovation_implemented']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_innovation_implemented']['label'] = '';
  $handler->display->display_options['fields']['field_innovation_implemented']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_innovation_implemented']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_innovation_implemented']['separator'] = ', ';
  /* Field: Field: Sector */
  $handler->display->display_options['fields']['field_term_sector']['id'] = 'field_term_sector';
  $handler->display->display_options['fields']['field_term_sector']['table'] = 'field_data_field_term_sector';
  $handler->display->display_options['fields']['field_term_sector']['field'] = 'field_term_sector';
  $handler->display->display_options['fields']['field_term_sector']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_term_sector']['label'] = '';
  $handler->display->display_options['fields']['field_term_sector']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_term_sector']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_sector']['separator'] = ', ';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pane pane--homepage-join-callout">
     <div class="pane__content">
           <h1><a href="/innovations">[nid] Innovations</a> created in [field_innovation_created] countries and implemented in [field_innovation_implemented] countries across <a href ="/sectors">[field_term_sector] sectors</a> and sub sectors.</h1>
     </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'innovation' => 'innovation',
  );

  /* Display: Data Content Connections */
  $handler = $view->new_display('panel_pane', 'Data Content Connections', 'content_connections');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Content Connections';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: favorite counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'favorite';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Innovation Needs */
  $handler = $view->new_display('panel_pane', 'Innovation Needs', 'innovation_needs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Innovator Needs';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Assistance Type (field_innovation_assistance) */
  $handler->display->display_options['relationships']['field_innovation_assistance_tid']['id'] = 'field_innovation_assistance_tid';
  $handler->display->display_options['relationships']['field_innovation_assistance_tid']['table'] = 'field_data_field_innovation_assistance';
  $handler->display->display_options['relationships']['field_innovation_assistance_tid']['field'] = 'field_innovation_assistance_tid';
  $handler->display->display_options['relationships']['field_innovation_assistance_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_innovation_assistance_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_innovation_assistance_tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Term ID */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  $handler->display->display_options['sorts']['tid']['relationship'] = 'field_innovation_assistance_tid';
  $handler->display->display_options['sorts']['tid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['tid']['order'] = 'DESC';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_innovation_assistance_tid';
  $export['data_page_views'] = $view;

  $view = new view();
  $view->name = 'ga';
  $view->description = 'This is the analytics view for the /data page.';
  $view->tag = 'default';
  $view->base_table = 'google_analytics';
  $view->human_name = 'Data Page Analytics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'stats card--center';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Session calculated metrics: Avg. Session Duration */
  $handler->display->display_options['fields']['avgSessionDuration']['id'] = 'avgSessionDuration';
  $handler->display->display_options['fields']['avgSessionDuration']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['avgSessionDuration']['field'] = 'avgSessionDuration';
  $handler->display->display_options['fields']['avgSessionDuration']['label'] = 'Average Session Time';
  $handler->display->display_options['fields']['avgSessionDuration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['avgSessionDuration']['date_format'] = 'custom';
  $handler->display->display_options['fields']['avgSessionDuration']['custom_date_format'] = 'i:s';
  $handler->display->display_options['fields']['avgSessionDuration']['second_date_format'] = 'html5_tools_iso8601';

  /* Display: GA Data Sessions */
  $handler = $view->new_display('panel_pane', 'GA Data Sessions', 'session_length');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<h3>Average Visit Length</h3>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Session calculated metrics: Avg. Session Duration */
  $handler->display->display_options['fields']['avgSessionDuration']['id'] = 'avgSessionDuration';
  $handler->display->display_options['fields']['avgSessionDuration']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['avgSessionDuration']['field'] = 'avgSessionDuration';
  $handler->display->display_options['fields']['avgSessionDuration']['label'] = '';
  $handler->display->display_options['fields']['avgSessionDuration']['element_type'] = 'h2';
  $handler->display->display_options['fields']['avgSessionDuration']['element_class'] = 'pane__title';
  $handler->display->display_options['fields']['avgSessionDuration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['avgSessionDuration']['date_format'] = 'custom';
  $handler->display->display_options['fields']['avgSessionDuration']['custom_date_format'] = 'i:s';
  $handler->display->display_options['fields']['avgSessionDuration']['second_date_format'] = 'html5_tools_iso8601';

  /* Display: GA Data Users */
  $handler = $view->new_display('panel_pane', 'GA Data Users', 'user_count');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<h3>Total Beta Visitors</h3>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User metrics: Users */
  $handler->display->display_options['fields']['users']['id'] = 'users';
  $handler->display->display_options['fields']['users']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['users']['field'] = 'users';
  $handler->display->display_options['fields']['users']['label'] = '';
  $handler->display->display_options['fields']['users']['element_type'] = 'h2';
  $handler->display->display_options['fields']['users']['element_class'] = 'pane__title';
  $handler->display->display_options['fields']['users']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['users']['precision'] = '0';

  /* Display: GA Returning Users */
  $handler = $view->new_display('panel_pane', 'GA Returning Users', 'return_user_traffic');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<h3>Returning User Traffic</h3>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Session metrics: Sessions */
  $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sessions']['precision'] = '0';
  $handler->display->display_options['fields']['sessions']['separator'] = '';
  /* Field: User calculated metrics: % New Sessions */
  $handler->display->display_options['fields']['percentNewSessions']['id'] = 'percentNewSessions';
  $handler->display->display_options['fields']['percentNewSessions']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['percentNewSessions']['field'] = 'percentNewSessions';
  $handler->display->display_options['fields']['percentNewSessions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['percentNewSessions']['precision'] = '0';
  $handler->display->display_options['fields']['percentNewSessions']['separator'] = '';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['element_type'] = 'h2';
  $handler->display->display_options['fields']['expression']['element_class'] = 'pane__title';
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['separator'] = '';
  $handler->display->display_options['fields']['expression']['suffix'] = '%';
  $handler->display->display_options['fields']['expression']['expression'] = '(([sessions]-([sessions]*([percentNewSessions]*.01))) / [sessions]) * 100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Countries */
  $handler = $view->new_display('panel_pane', 'Countries', 'country_visitors');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>Countries with Visitors</h1>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Geo network dimensions: Country / Territory */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['alter']['text'] = 'count([country])
';
  $handler->display->display_options['fields']['country']['element_type'] = 'h5';
  $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Geo network dimensions: Country / Territory */
  $handler->display->display_options['filters']['country']['id'] = 'country';
  $handler->display->display_options['filters']['country']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['country']['field'] = 'country';
  $handler->display->display_options['filters']['country']['operator'] = 'not';
  $handler->display->display_options['filters']['country']['value'] = '(not set)';
  $export['ga'] = $view;

  return $export;
}
