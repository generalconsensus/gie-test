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
  global $user;
  $bundle_nodes = array('innovation', 'resource', 'funding', 'event');
  $payload = array();

  $featured_innovations = db_query('SELECT DISTINCT node.nid from field_data_field_featured
    INNER JOIN node on node.nid = field_data_field_featured.entity_id
    WHERE field_data_field_featured.bundle in (:bundle) AND field_featured_value = 1 ORDER BY node.changed DESC LIMIT 3', array(
    ':bundle' => $bundle_nodes
  ))->fetchCol();

  $sector_matches = db_query("SELECT DISTINCT node.nid  FROM node
      LEFT JOIN field_data_field_term_sector sector_1 ON node.nid = sector_1.entity_id AND (sector_1.entity_type = 'node' AND sector_1.deleted = '0')
      INNER JOIN taxonomy_term_data  ON sector_1.field_term_sector_tid = taxonomy_term_data.tid
      INNER JOIN field_data_field_term_sector sector_2 ON taxonomy_term_data.tid = sector_2.field_term_sector_tid AND (sector_2.entity_type = 'user' AND sector_2.deleted = '0')
      INNER JOIN users ON sector_2.entity_id = users.uid
      WHERE (( (users.uid = :uid ) )AND(( (node.status = '1') AND (node.type IN (:bundle)) ))) ORDER BY node.changed DESC LIMIT 3", array(
    ':uid' => $user->uid,
    ':bundle' => $bundle_nodes
  ))->fetchCol();

  if (!empty($featured_innovations) && is_array($featured_innovations)) {
    $inc = 0;
    foreach ($featured_innovations as $key => $innovation_match) {
      $entity = entity_view('node', array(node_load($innovation_match)), 'listing');
      if (!empty($entity)) {
        $payload[$key + $inc] = render($entity);
      }
      $inc += 1;
    }
  }

  if (!empty($sector_matches) && is_array($sector_matches)) {
    $inc = 0;
    foreach ($sector_matches as $key => $sector_match) {
      $inc += 1;
      $entity = entity_view('node', array(node_load($sector_match)), 'listing');
      if (!empty($entity)) {
        $payload[$key + $inc] = render($entity);
      }
    }
  }

  ksort($payload);
  return $payload;
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
      '#theme' => 'item_list',
      '#items' => $featured_innovations,
      '#type' => 'ul',
      '#attributes' => array('class' => 'list-class'),
    );

    $block->content = $payload;

    return $block;

  }

}
