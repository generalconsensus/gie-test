<?php
/**
 * @file
 * gie_long_form_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_long_form_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gie_long_form_content_node_info() {
  $items = array(
    'long_form_page' => array(
      'name' => t('Long-form page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function gie_long_form_content_paragraphs_info() {
  $items = array(
    'long_form_aside' => array(
      'name' => 'Long Form Aside',
      'bundle' => 'long_form_aside',
      'locked' => '1',
    ),
    'long_form_image' => array(
      'name' => 'Long form image',
      'bundle' => 'long_form_image',
      'locked' => '1',
    ),
    'long_form_key_figure' => array(
      'name' => 'Long Form Key Figure',
      'bundle' => 'long_form_key_figure',
      'locked' => '1',
    ),
    'long_form_pullquote' => array(
      'name' => 'Long Form Pullquote',
      'bundle' => 'long_form_pullquote',
      'locked' => '1',
    ),
    'long_form_section_break_image' => array(
      'name' => 'Long Form Section Break Image',
      'bundle' => 'long_form_section_break_image',
      'locked' => '1',
    ),
    'long_form_text' => array(
      'name' => 'Long Form Text',
      'bundle' => 'long_form_text',
      'locked' => '1',
    ),
    'long_form_video' => array(
      'name' => 'Long Form Video',
      'bundle' => 'long_form_video',
      'locked' => '1',
    ),
  );
  return $items;
}

/**
 * Implements hook_themekey_features_rule_chain().
 */
function gie_long_form_content_themekey_features_rule_chain() {
if (!defined('THEMEKEY_PAGECACHE_UNSUPPORTED')) {
    define('THEMEKEY_PAGECACHE_UNSUPPORTED', 0);
    define('THEMEKEY_PAGECACHE_SUPPORTED', 1);
    define('THEMEKEY_PAGECACHE_TIMEBASED', 2);
  }
$rules = array(
  0 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'long_form_page',
      'theme' => 'gesso_longform',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'gie_long_form_content',
    ),
    'string' => '"node:type = long_form_page >>> gesso_longform"',
    'childs' => array(),
  ),
);

return $rules;
}
