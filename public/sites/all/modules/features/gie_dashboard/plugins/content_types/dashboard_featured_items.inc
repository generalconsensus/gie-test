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

  $sector_matches = db_query("SELECT DISTINCT node.nid, NULL as flagged, NULL as featured  FROM node
      LEFT JOIN field_data_field_term_sector sector_1 ON node.nid = sector_1.entity_id AND (sector_1.entity_type = 'node' AND sector_1.deleted = '0')
      INNER JOIN taxonomy_term_data  ON sector_1.field_term_sector_tid = taxonomy_term_data.tid
      INNER JOIN field_data_field_term_sector sector_2 ON taxonomy_term_data.tid = sector_2.field_term_sector_tid AND (sector_2.entity_type = 'user' AND sector_2.deleted = '0')
      INNER JOIN users ON sector_2.entity_id = users.uid
      WHERE (( (users.uid = :uid ) )AND(( (node.status = '1') AND (node.type IN (:bundle)) ))) ORDER BY node.changed DESC LIMIT 3", array(
    ':uid' => $user->uid,
    ':bundle' => $bundle_nodes
  ))->fetchAll();

  $amount_to_replace = 6 - (count($sector_matches));

  $featured_innovations = db_query_range('SELECT DISTINCT node.nid, NULL as flagged, 1 as featured
    FROM field_data_field_featured
    INNER JOIN node on node.nid = field_data_field_featured.entity_id
    WHERE field_data_field_featured.bundle in (:bundle) AND field_featured_value = 1 ORDER BY node.changed DESC', 0, $amount_to_replace, array(
    ':bundle' => $bundle_nodes
  ))->fetchAll();


  if (!empty($featured_innovations)) {
    $payload += gie_dashboard_card_build($featured_innovations);
  }

  if (!empty($sector_matches)) {
    $payload += gie_dashboard_card_build($sector_matches, TRUE);
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
