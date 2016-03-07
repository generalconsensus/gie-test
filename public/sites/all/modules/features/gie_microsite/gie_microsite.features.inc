<?php
/**
 * @file
 * gie_microsite.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_microsite_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
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
 * Implements hook_views_api().
 */
function gie_microsite_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gie_microsite_node_info() {
  $items = array(
    'microsite' => array(
      'name' => t('Microsite'),
      'base' => 'node_content',
      'description' => t('This content type drives microsites. Do not create content with this unless you are creating a microsite. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'microsite_page' => array(
      'name' => t('Microsite Page'),
      'base' => 'node_content',
      'description' => t('This is used to create pages for the Microsite functionality. '),
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
function gie_microsite_paragraphs_info() {
  $items = array(
    'long_form_50_50' => array(
      'name' => 'Microsite 50 50',
      'bundle' => 'long_form_50_50',
      'locked' => '1',
    ),
    'long_form_featured_content' => array(
      'name' => 'Microsite Featured Content',
      'bundle' => 'long_form_featured_content',
      'locked' => '1',
    ),
    'long_form_header' => array(
      'name' => 'Microsite Header',
      'bundle' => 'long_form_header',
      'locked' => '1',
    ),
    'microsite_callout_card' => array(
      'name' => 'Microsite Callout Card',
      'bundle' => 'microsite_callout_card',
      'locked' => '1',
    ),
    'microsite_highlight' => array(
      'name' => 'Microsite Highlight',
      'bundle' => 'microsite_highlight',
      'locked' => '1',
    ),
    'microsite_news_slider' => array(
      'name' => 'Microsite News Slider',
      'bundle' => 'microsite_news_slider',
      'locked' => '1',
    ),
    'microsite_section_break_image' => array(
      'name' => 'Microsite Section Break Image',
      'bundle' => 'microsite_section_break_image',
      'locked' => '1',
    ),
    'microsite_text' => array(
      'name' => 'Microsite Text',
      'bundle' => 'microsite_text',
      'locked' => '1',
    ),
    'microsite_text_callout' => array(
      'name' => 'Microsite Text Callout',
      'bundle' => 'microsite_text_callout',
      'locked' => '1',
    ),
  );
  return $items;
}
