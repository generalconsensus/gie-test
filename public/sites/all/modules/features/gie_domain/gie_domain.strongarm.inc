<?php
/**
 * @file
 * gie_domain.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gie_domain_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_bootstrap_modules';
  $strongarm->value = array(
    0 => 'domain_conf',
  );
  $export['domain_bootstrap_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_classes';
  $strongarm->value = 'domain-[current-domain:machine_name]';
  $export['domain_classes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_cron_rule';
  $strongarm->value = 1;
  $export['domain_cron_rule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_debug';
  $strongarm->value = '0';
  $export['domain_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_default_source';
  $strongarm->value = '1';
  $export['domain_default_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_edit_on_primary';
  $strongarm->value = 1;
  $export['domain_edit_on_primary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_force_admin';
  $strongarm->value = '0';
  $export['domain_force_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_grant_all';
  $strongarm->value = 'user/*/track';
  $export['domain_grant_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_list_size';
  $strongarm->value = '25';
  $export['domain_list_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_action_card';
  $strongarm->value = array(
    'DOMAIN_ACTIVE' => 'DOMAIN_ACTIVE',
    'stage_gie_byf1_io' => 'stage_gie_byf1_io',
    'DOMAIN_ALL' => 0,
    'div_stage_gie_byf1_io' => 0,
  );
  $export['domain_node_action_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_article';
  $strongarm->value = array(
    'DOMAIN_ACTIVE' => 'DOMAIN_ACTIVE',
    'stage_gie_byf1_io' => 'stage_gie_byf1_io',
    'DOMAIN_ALL' => 0,
    'div_stage_gie_byf1_io' => 0,
  );
  $export['domain_node_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_discussion';
  $strongarm->value = array(
    'DOMAIN_ACTIVE' => 'DOMAIN_ACTIVE',
    'stage_gie_byf1_io' => 'stage_gie_byf1_io',
    'DOMAIN_ALL' => 0,
    'div_stage_gie_byf1_io' => 0,
  );
  $export['domain_node_discussion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_error_page';
  $strongarm->value = array(
    'DOMAIN_ACTIVE' => 'DOMAIN_ACTIVE',
    'stage_gie_byf1_io' => 'stage_gie_byf1_io',
    'DOMAIN_ALL' => 0,
    'div_stage_gie_byf1_io' => 0,
  );
  $export['domain_node_error_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_event';
  $strongarm->value = array(
    'DOMAIN_ACTIVE' => 'DOMAIN_ACTIVE',
    'stage_gie_byf1_io' => 'stage_gie_byf1_io',
    'DOMAIN_ALL' => 0,
    'div_stage_gie_byf1_io' => 0,
  );
  $export['domain_node_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_funding';
  $strongarm->value = array(
    'DOMAIN_ACTIVE' => 'DOMAIN_ACTIVE',
    'stage_gie_byf1_io' => 'stage_gie_byf1_io',
    'DOMAIN_ALL' => 0,
    'div_stage_gie_byf1_io' => 0,
  );
  $export['domain_node_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_homepage';
  $strongarm->value = array(
    'DOMAIN_ACTIVE' => 'DOMAIN_ACTIVE',
    'stage_gie_byf1_io' => 'stage_gie_byf1_io',
    'DOMAIN_ALL' => 0,
    'div_stage_gie_byf1_io' => 0,
  );
  $export['domain_node_homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_innovation';
  $strongarm->value = array(
    'DOMAIN_ACTIVE' => 'DOMAIN_ACTIVE',
    'stage_gie_byf1_io' => 'stage_gie_byf1_io',
    'DOMAIN_ALL' => 0,
    'div_stage_gie_byf1_io' => 0,
  );
  $export['domain_node_innovation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_long_form_page';
  $strongarm->value = array(
    'DOMAIN_ACTIVE' => 'DOMAIN_ACTIVE',
    'stage_gie_byf1_io' => 'stage_gie_byf1_io',
    'DOMAIN_ALL' => 0,
    'div_stage_gie_byf1_io' => 0,
  );
  $export['domain_node_long_form_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_microsite';
  $strongarm->value = array(
    'DOMAIN_ACTIVE' => 'DOMAIN_ACTIVE',
    'stage_gie_byf1_io' => 'stage_gie_byf1_io',
    'DOMAIN_ALL' => 0,
    'div_stage_gie_byf1_io' => 0,
  );
  $export['domain_node_microsite'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_microsite_page';
  $strongarm->value = array(
    'DOMAIN_ACTIVE' => 'DOMAIN_ACTIVE',
    'stage_gie_byf1_io' => 'stage_gie_byf1_io',
    'DOMAIN_ALL' => 0,
    'div_stage_gie_byf1_io' => 0,
  );
  $export['domain_node_microsite_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_needs';
  $strongarm->value = array(
    'DOMAIN_ACTIVE' => 'DOMAIN_ACTIVE',
    'stage_gie_byf1_io' => 'stage_gie_byf1_io',
    'DOMAIN_ALL' => 0,
    'div_stage_gie_byf1_io' => 0,
  );
  $export['domain_node_needs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_organization';
  $strongarm->value = array(
    'DOMAIN_ACTIVE' => 'DOMAIN_ACTIVE',
    'stage_gie_byf1_io' => 'stage_gie_byf1_io',
    'DOMAIN_ALL' => 0,
    'div_stage_gie_byf1_io' => 0,
  );
  $export['domain_node_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_page';
  $strongarm->value = array(
    'DOMAIN_ACTIVE' => 'DOMAIN_ACTIVE',
    'stage_gie_byf1_io' => 'stage_gie_byf1_io',
    'DOMAIN_ALL' => 0,
    'div_stage_gie_byf1_io' => 0,
  );
  $export['domain_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_persona';
  $strongarm->value = array(
    'DOMAIN_ACTIVE' => 'DOMAIN_ACTIVE',
    'stage_gie_byf1_io' => 'stage_gie_byf1_io',
    'DOMAIN_ALL' => 0,
    'div_stage_gie_byf1_io' => 0,
  );
  $export['domain_node_persona'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_program';
  $strongarm->value = array(
    'DOMAIN_ACTIVE' => 'DOMAIN_ACTIVE',
    'stage_gie_byf1_io' => 'stage_gie_byf1_io',
    'DOMAIN_ALL' => 0,
    'div_stage_gie_byf1_io' => 0,
  );
  $export['domain_node_program'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_resource';
  $strongarm->value = array(
    'DOMAIN_ACTIVE' => 'DOMAIN_ACTIVE',
    'stage_gie_byf1_io' => 'stage_gie_byf1_io',
    'DOMAIN_ALL' => 0,
    'div_stage_gie_byf1_io' => 0,
  );
  $export['domain_node_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_paths';
  $strongarm->value = 'node/%n
node/%n/edit
comment/reply/%n
node/add/book/parent/%n
book/export/html/%n
node/%n/outline';
  $export['domain_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_search';
  $strongarm->value = '0';
  $export['domain_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_select_format';
  $strongarm->value = '1';
  $export['domain_select_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_seo';
  $strongarm->value = '0';
  $export['domain_seo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_settings_behavior';
  $strongarm->value = '0';
  $export['domain_settings_behavior'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_settings_forms';
  $strongarm->value = '';
  $export['domain_settings_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_settings_form_visibility';
  $strongarm->value = '0';
  $export['domain_settings_form_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_sitename_override';
  $strongarm->value = 0;
  $export['domain_sitename_override'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_vertical_tab';
  $strongarm->value = '1';
  $export['domain_vertical_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_www';
  $strongarm->value = '0';
  $export['domain_www'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_xmlrpc_rule';
  $strongarm->value = 0;
  $export['domain_xmlrpc_rule'] = $strongarm;

  return $export;
}
