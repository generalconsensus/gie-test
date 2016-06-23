<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Dashboard Whats New Exchange Updates'),
  'description' => t('Exchange Updates'),
  'category' => t('dashboard'),
  'edit form' => 'dashboard_whats_new_exchange_updates_admin_form',
  'render callback' => 'dashboard_whats_new_exchange_updates_render',
  'defaults' => array(
    'type' => ''
  ),
);

/**
 * The 'admin info' callback for the content type.
 */
function dashboard_whats_new_exchange_updates_admin_info($subtype, $conf) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = t('Dashboard Whats New Exchange Updates');
    return $block;
  }
}

/**
 * The 'Edit form' callback for the content type.
 */
function dashboard_whats_new_exchange_updates_admin_form($form) {

  $form['type'] = array(
    '#type' => 'hidden',
  );

  return $form;
}


/**
 * Run-time rendering of the body of the block (content type).
 */
function dashboard_whats_new_exchange_updates_render() {

  // Render block
  $block = new stdClass();

  $orgs = db_query('select count(nid) from node where type = :organization and status = :status', array(':organization' => 'organization', ':status' => 1))->fetchField();
//  $collaborators = db_query('select count(nid) from node where type = :organization', array(':organization' => 'organization'))->fetchCol();
  $innovations = db_query('select count(nid) from node where type = :innovation and status = :status', array(':innovation' => 'innovation', ':status' => 1))->fetchField();
//  $money = db_query('select sum(field_data_field_funding_grant_award_value.field_funding_grant_award_value_value) from node
//inner join field_data_field_funding_grant_award_value on field_data_field_funding_grant_award_value.entity_id = node.nid
//where type = :funding and field_data_field_funding_grant_award_value.field_funding_grant_award_value_value > 0 and node.status = :status', array(':funding' => 'funding', ':status' => 1))->fetchCol();



  $test = 1;
  $block->content = '<h2 class="pane__title">' . strtoupper(t('Exchange at a Glance')) . '</h2>
   <div class="view view--data-page-views view--id-data_page_views view--display-id-data_counts view--data-points view--dom-id- view-data-page-views view-id-data_page_views view-display-id-data_counts view-dom-id-">

  <div class="views-row views-row-1 views-row-even">
<article class="node contextual-links-region node--persona node--data view-mode-data " about="/node/4040" typeof="sioc:Item foaf:Document" role="article">

  <div class="data-point data-point--org"><a href="/organizations">' .$orgs  . '<span>Organizations</span></a></div>
  </article>
  </div>

  <div class="views-row views-row-2 views-row-odd">
<article class="node contextual-links-region node--persona node--data view-mode-data " about="/node/30" typeof="sioc:Item foaf:Document" role="article">

  <div class="data-point data-point--funding"><a href="/funding">$178.9M <span>Available</span></a></div>
  </article>
  </div>

  <div class="views-row views-row-3 views-row-even">
<article class="node contextual-links-region node--persona node--data view-mode-data " about="/node/29" typeof="sioc:Item foaf:Document" role="article">

  <div class="data-point data-point--user"><a href="/members">8554 <span>Collaborators</span></a></div>
  </article>
  </div>

  <div class="views-row views-row-4 views-row-odd views-row-last">
<article class="node contextual-links-region node--persona node--data view-mode-data " about="/node/28" typeof="sioc:Item foaf:Document" role="article">

  <div class="data-point data-point--innovation"><a href="/innovations">' . $innovations . '<span>Innovations</span></a></div>
  </article>
  </div>

</div>';


  return $block;
}
