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

//  // Render block
//  $block = new stdClass();
//
//  global $user;
//  if (!empty($_GET['updates']) && $_GET['updates'] == 'last-visit' && !empty($user) && $user->uid > 0) {
//    // Customize the data for showing everything since the last login
//
//    $now = strtotime('now');
//    $last_access = db_query("select login from {users} where uid = :uid", array(':uid' => $user->uid))->fetchField();
//    $organizations = db_query("SELECT COUNT(nid) from {node} WHERE type = 'organization' AND changed between :start AND :end", array(
//      ':start' => $last_access,
//      ':end' => $now
//    ))->fetchField();
//    $award_available = db_query("SELECT sum(field_funding_grant_award_value_value) from {field_data_field_funding_grant_award_value} inner join node on node.nid = field_data_field_funding_grant_award_value.entity_id where changed between :start AND :end", array(
//      ':start' => $last_access,
//      ':end' => $now
//    ))->fetchField();
//    $collaborators = db_query("SELECT COUNT(uid) from {users} WHERE created between :start AND :end", array(
//      ':start' => $last_access,
//      ':end' => $now
//    ))->fetchField();
//    $innovations = db_query("SELECT COUNT(nid) from {node} where type = 'innovation' AND changed between :start AND :end", array(
//      ':start' => $last_access,
//      ':end' => $now
//    ))->fetchField();
//  }
//  else {
//    $first_day_last_month = strtotime('first day of last month');
//    $last_day_last_month = strtotime('last day of last month');
//    // Customize the data for showing everything since last month
//    $organizations = db_query("SELECT COUNT(nid) from {node} WHERE type = 'organization' AND changed between :start AND :end", array(
//      ':start' => $first_day_last_month,
//      ':end' => $last_day_last_month
//    ))->fetchField();
//    $award_available = db_query("SELECT sum(field_funding_grant_award_value_value) from {field_data_field_funding_grant_award_value} inner join node on node.nid = field_data_field_funding_grant_award_value.entity_id where changed between :start AND :end", array(
//      ':start' => $first_day_last_month,
//      ':end' => $last_day_last_month
//    ))->fetchField();
//    $collaborators = db_query("SELECT COUNT(uid) from {users} WHERE created between :start AND :end", array(
//      ':start' => $first_day_last_month,
//      ':end' => $last_day_last_month
//    ))->fetchField();
//    $innovations = db_query("SELECT COUNT(nid) from {node} where type = 'innovations' AND changed between :start AND :end", array(
//      ':start' => $first_day_last_month,
//      ':end' => $last_day_last_month
//    ))->fetchField();
//
//
//  }
//  if (!empty($award_available)) {
//    if ($award_available > 1000000000) {
//      $award_available = round(($award_available / 1000000000), 1) . 'B';
//    }
//    else {
//      if ($award_available > 1000000) {
//        $award_available = round(($award_available / 1000000), 1) . 'M';
//      }
//      else {
//        if ($award_available > 1000) {
//          $award_available = round(($award_available / 1000), 1) . 'T';
//        }
//      }
//    }
//    $form_state['award_available'] = '<div class="dashboard__data data-point"><a href="/funding">$' . $award_available . ' <span>Available</span></a></div>';
//  }
//  else {
//    $form_state['award_available'] = '<div class="dashboard__data data-point"><a href="/funding">N/A <span>Available</span></a></div>';
//  }
//
//  $form_state['organizations'] = !empty($organizations) ? '<div class="dashboard__data data-point"><a href="/organizations">' . $organizations . ' <span>Organizations</span></a></div>' : '<div class="data-point"><a href="/organizations">N/A <span>Organizations</span></a></div>';
//  $form_state['collaborators'] = !empty($collaborators) ? '<div class="dashboard__data data-point"><a href="/members">' . $collaborators . ' <span>Collaborators</span></a></div>' : '<div class="data-point"><a href="/members">N/A <span>Collaborators</span></a></div>';
//  $form_state['innovations'] = !empty($organizations) ? '<div class="dashboard__data data-point"><a href="/innovations">' . $innovations . ' <span>Innovations</span></a></div>' : '<div class="data-point"><a href="/innovations">N/A <span>Innovations</span></a></div>';
//
//
//  $form = drupal_build_form('gie_dashboard_exchange_updates_form', $form_state);
//  $block->content = $form;
//  return $block;

  // Render block
  $block = new stdClass();

  $view = views_get_view('data_page_views');

  $block->content = '<h2 class="dashboard__title">' . strtoupper(t('Exchange Data')) . '</h2>' . $view->render('data_counts');

  return $block;
}

