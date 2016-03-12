<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Dashboard Whats New Featured Items'),
  'description' => t('Featured Items'),
  'category' => t('dashboard'),
  'edit form' => 'dashboard_whats_new_featured_items_admin_form',
  'render callback' => 'dashboard_whats_new_featured_items_render',
  'defaults' => array(
    'type' => ''
  ),
);

/**
 * The 'admin info' callback for the content type.
 */
function dashboard_whats_new_featured_items_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = t('Dashboard Whats New Featured Items');
    return $block;
  }
}

/**
 * The 'Edit form' callback for the content type.
 */
function dashboard_whats_new_featured_items_admin_form($form, &$form_state) {

  $form['type'] = array(
    '#type' => 'hidden',
  );

  return $form;
}

function dashboard_whats_new_featured_items_generate_listing() {

  $featured_innovations = db_query('select node.nid from field_data_field_featured_innovation INNER JOIN node on node.nid = field_data_field_featured_innovation.entity_id WHERE field_featured_innovation_value = 1 LIMIT 1')->fetchField();

  if (!empty($featured_innovations) && is_numeric($featured_innovations)) {
    $entity = entity_view('node', array(node_load($featured_innovations)), 'listing');
    if (!empty($entity)) {
      $featured_innovations = render($entity);
    }
  }
  return $featured_innovations;
}

/**
 * Run-time rendering of the body of the block (content type).
 */
function dashboard_whats_new_featured_items_render($subtype, $conf, $panel_args, $context = NULL) {


  $featured_innovations = dashboard_whats_new_featured_items_generate_listing();

    if (!empty($featured_innovations)) {

      // Render block
      $block = new stdClass();

      $payload = array(
//        '#prefix' => '<h2 class="dashboard__title">Innovation Spotlight</h2><div class="dashboard__spotlights">',
//        '#suffix' => '</div>',
        '#markup' => $featured_innovations
      );

      $block->content = $payload;

      return $block;

    }

}
