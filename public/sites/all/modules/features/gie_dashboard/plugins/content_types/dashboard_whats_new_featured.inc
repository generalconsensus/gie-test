<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Dashboard Whats New Innovation Spotlight'),
  'description' => t('Featured Innovation Spotlight'),
  'category' => t('dashboard'),
  'edit form' => 'dashboard_whats_new_featured_admin_form',
  'render callback' => 'dashboard_whats_new_featured_render',
  'defaults' => array(
    'type' => ''
  ),
);

/**
 * The 'admin info' callback for the content type.
 */
function dashboard_whats_new_featured_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = t('Dashboard Whats New Innovation Spotlight');
    return $block;
  }
}

/**
 * The 'Edit form' callback for the content type.
 */
function dashboard_whats_new_featured_admin_form($form, &$form_state) {

  $form['type'] = array(
    '#type' => 'hidden',
  );

  return $form;
}

/**
 * Run-time rendering of the body of the block (content type).
 */
function dashboard_whats_new_featured_render($subtype, $conf, $panel_args, $context = NULL) {
  // Render block
  $block = new stdClass();
  $block->title = t('Innovation Spotlight:');

  // Create block content.
  $results['featured'] = db_query('select node.nid from field_data_field_featured_innovation INNER JOIN node on node.nid = field_data_field_featured_innovation.entity_id WHERE field_featured_innovation_value = 1 LIMIT 1')->fetchField();

  if (!empty($results['featured']) && is_numeric($results['featured'])) {
    $block->content = render(entity_view('node', array(node_load($results['featured'])), 'listing'));
  }

  return $block;
}
