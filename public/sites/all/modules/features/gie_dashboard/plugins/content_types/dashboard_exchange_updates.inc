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
function dashboard_whats_new_exchange_updates_admin_info($subtype, $conf, $contexts) {
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
function dashboard_whats_new_exchange_updates_admin_form($form, &$form_state) {

  $form['type'] = array(
    '#type' => 'hidden',
  );

  return $form;
}


/**
 * Run-time rendering of the body of the block (content type).
 */
function dashboard_whats_new_exchange_updates_render($subtype, $conf, $panel_args, $context = NULL) {

  // Render block
  $block = new stdClass();

  $view = views_get_view('data_page_views');

  $block->content = '<h2 class="pane__title">' . strtoupper(t('Exchange at a Glance')) . '</h2>' . $view->render('data_counts');

  return $block;
}
