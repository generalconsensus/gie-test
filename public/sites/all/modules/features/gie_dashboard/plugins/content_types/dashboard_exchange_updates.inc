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

  $innovations = gie_homepage_sitewide_summary_generator('innovations');
  $funding = gie_homepage_sitewide_summary_generator('funding');
  $users = gie_homepage_sitewide_summary_generator('users');
  $orgs =gie_homepage_sitewide_summary_generator('orgs');

  $block->content = '<h2 class="pane__title">' . strtoupper(t('Exchange at a Glance')) . '</h2>
  <div class="view view--data-points">
<div class=" views-row">
<article about="/node/4040">
    <div class="data-point data-point--org"><a href="/organizations">' .$orgs . '<span>Organizations</span></a></div>
</article>
</div>

<div class=" views-row">
<article about="/node/30">
    <div class="data-point data-point--funding"><a href="/funding">' . $funding . '<span>Available</span></a></div>
</article>
</div>

<div class=" views-row">
<article about="/node/29">
    <div class="data-point data-point--user"><a href="/members">' . $users . '<span>Collaborators</span></a></div>
</article>
</div>

<div class=" views-row">
<article about="/node/28">
    <div class="data-point data-point--innovation"><a href="/innovations">' . $innovations . '<span>Innovations</span></a></div>
</article>
</div>
</div>';


  return $block;
}
