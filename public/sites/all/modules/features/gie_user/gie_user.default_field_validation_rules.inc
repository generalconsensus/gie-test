<?php
/**
 * @file
 * gie_user.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function gie_user_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'User Facebook';
  $rule->name = 'user_facebook';
  $rule->field_name = 'field_user_facebook';
  $rule->col = 'value';
  $rule->entity_type = 'user';
  $rule->bundle = 'user';
  $rule->validator = 'field_validation_regex_validator';
  $rule->settings = array(
    'data' => '^.*facebook\\.com.*',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      6 => 0,
      7 => 0,
      4 => 0,
      3 => 0,
      5 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Facebook field must link to a Facebook page';
  $export['user_facebook'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'User LinkedIn';
  $rule->name = 'user_linkedin';
  $rule->field_name = 'field_user_linkedin';
  $rule->col = 'value';
  $rule->entity_type = 'user';
  $rule->bundle = 'user';
  $rule->validator = 'field_validation_regex_validator';
  $rule->settings = array(
    'data' => '^.*linkedin\\.com.*',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      6 => 0,
      7 => 0,
      4 => 0,
      3 => 0,
      5 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'LinkedIn field must link to a LinkedIn page';
  $export['user_linkedin'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'User Twitter';
  $rule->name = 'user_twitter';
  $rule->field_name = 'field_user_twitter';
  $rule->col = 'value';
  $rule->entity_type = 'user';
  $rule->bundle = 'user';
  $rule->validator = 'field_validation_regex_validator';
  $rule->settings = array(
    'data' => '^.*twitter\\.com.*',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      6 => 0,
      7 => 0,
      4 => 0,
      3 => 0,
      5 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Twitter field must link to a Twitter page';
  $export['user_twitter'] = $rule;

  return $export;
}
