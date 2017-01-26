<?php
/**
 * @file
 * gie_data.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gie_data_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'datalayer_add_page_meta';
  $strongarm->value = 1;
  $export['datalayer_add_page_meta'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'datalayer_global_entity_meta';
  $strongarm->value = array(
    'language' => 0,
    'tnid' => 0,
    'vid' => 0,
    'name' => 0,
    'uid' => 0,
    'created' => 0,
    'status' => 0,
  );
  $export['datalayer_global_entity_meta'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'datalayer_lib_helper';
  $strongarm->value = 1;
  $export['datalayer_lib_helper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'datalayer_output_terms';
  $strongarm->value = 1;
  $export['datalayer_output_terms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'datalayer_vocabs';
  $strongarm->value = array(
    'assistance_type' => 0,
    'comment_type' => 0,
    'company' => 0,
    'country' => 0,
    'digital_security' => 0,
    'effort_level' => 0,
    'eligibility_type' => 0,
    'event_needs' => 0,
    'event_size' => 0,
    'event_type' => 0,
    'expertise_type' => 0,
    'funding_type' => 0,
    'innovation_stage' => 0,
    'member_help' => 0,
    'background' => 0,
    'block_orientation' => 0,
    'microsite_header_options' => 0,
    'text_orientation' => 0,
    'needs_duration' => 0,
    'needs_status' => 0,
    'organization_role' => 0,
    'organization_type' => 0,
    'other_interest' => 0,
    'program_discussions' => 0,
    'region' => 0,
    'resource_type' => 0,
    'sector' => 0,
    'solution_type' => 0,
    'sustainable_development_goals' => 0,
    'tags' => 0,
    'team' => 0,
    'testing_phase' => 0,
    'topic' => 0,
    'user_skills' => 0,
    'user_type' => 0,
    'needs_type' => 0,
    'youthpower_issues' => 0,
  );
  $export['datalayer_vocabs'] = $strongarm;

  return $export;
}
