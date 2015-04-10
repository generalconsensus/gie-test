<?php
/**
 * @file
 * gie_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gie_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@default_node_index';
  $strongarm->value = -1;
  $export['facetapi:block_cache:search_api@default_node_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@default_node_index';
  $strongarm->value = 1;
  $export['facetapi_pretty_paths_searcher_search_api@default_node_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@default_node_index_options';
  $strongarm->value = array(
    'sort_path_segments' => 0,
    'base_path_provider' => 'default',
  );
  $export['facetapi_pretty_paths_searcher_search_api@default_node_index_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_facets_search_ids';
  $strongarm->value = array(
    'default_node_index' => array(
      'search_api_views:resources_listing:resource_listing' => 'search_api_views:resources_listing:resource_listing',
      'search_api_views:funding_opp_listing:funding_listing' => 'search_api_views:funding_opp_listing:funding_listing',
      'search_api_views:innovations_listing:resource_listing' => 'search_api_views:innovations_listing:resource_listing',
      'search_api_views:organization_listing:funding_listing' => 'search_api_views:organization_listing:funding_listing',
      'search_api_views:organization_listing:org_listing' => 'search_api_views:organization_listing:org_listing',
      'search_api_views:organization_listing:default' => 'search_api_views:organization_listing:default',
      'search_api_views:organization_listing:panel_pane_1' => 'search_api_views:organization_listing:panel_pane_1',
      'search_api_views:discussion_listing:default' => 'search_api_views:discussion_listing:default',
      'search_api_views:discussion_listing:panel_pane_1' => 'search_api_views:discussion_listing:panel_pane_1',
      'search_api_views:discussion_listing:discussion_listing' => 'search_api_views:discussion_listing:discussion_listing',
    ),
  );
  $export['search_api_facets_search_ids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_last_optimize';
  $strongarm->value = 1428689935;
  $export['search_api_solr_last_optimize'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_site_hash';
  $strongarm->value = '6kxw67';
  $export['search_api_solr_site_hash'] = $strongarm;

  return $export;
}
