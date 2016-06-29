<?php
/**
 * @file
 * gie_general.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gie_general_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_abuse_description'.
  $field_bases['field_abuse_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_abuse_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_abuse_type'.
  $field_bases['field_abuse_type'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_abuse_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Malicious or Rude' => 'Malicious or Rude',
        'Foul Language' => 'Foul Language',
        'Inappropriate Imagery' => 'Inappropriate Imagery',
        'Inaccurate or False Statements' => 'Inaccurate or False Statements',
        'Against Terms of Service' => 'Against Terms of Service',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_error_description'.
  $field_bases['field_error_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_error_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
