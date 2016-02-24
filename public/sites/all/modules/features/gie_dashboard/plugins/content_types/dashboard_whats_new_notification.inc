<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Dashboard Whats New Notification Center'),
  'description' => t('Dashboard Notification Center listing'),
  'category' => t('dashboard'),
  'edit form' => 'dashboard_whats_new_notification_admin_form',
  'render callback' => 'dashboard_whats_new_notification_render',
  'defaults' => array(
    'type' => ''
  ),
);

/**
 * The 'admin info' callback for the content type.
 */
function dashboard_whats_new_notification_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = t('Dashboard Whats New Notification Center');
    return $block;
  }
}

/**
 * The 'Edit form' callback for the content type.
 */
function dashboard_whats_new_notification_admin_form($form, &$form_state) {

  $form['type'] = array(
    '#type' => 'hidden',
  );

  return $form;
}

/**
 * Run-time rendering of the body of the block (content type).
 */
function dashboard_whats_new_notification_render($subtype, $conf, $panel_args, $context = NULL) {
  // Render block
  $block = new stdClass();
  $block->title = t('Notification Center:');

  // Create block content.
  $block->content = drupal_render(drupal_get_form('dashboard_whats_new_notification_form'));

  return $block;
}

/**
 * The 'admin info' callback for the content type.
 */
function dashboard_whats_new_notification_form($form, &$form_state) {

  $results = gie_dashboard_notification_center_list();
  if ($results) {

    $form['gie_dashboard_notification'] = array(
      '#type' => 'fieldset',
//      '#title' => t('Notification Center:'),
      '#weight' => 5,
      '#collapsible' => FALSE,
      '#collapsed' => TRUE,
    );

    foreach ($results as $key => $result) {
      if ($key == 'comments_on_your_content') {
        $form['gie_dashboard_notification'][$key] = array('#markup' => $result . ' People have commented on your content.</br>');
      }
      if ($key == 'people_follow_your_content') {
        $form['gie_dashboard_notification'][$key] = array('#markup' => $result . ' People follow your content.</br>');
      }
      elseif ($key == 'people_follow_you') {
        $form['gie_dashboard_notification'][$key] = array('#markup' => $result . ' People follow you.</br>');
      }
      elseif ($key == 'friend_content') {
        $form['gie_dashboard_notification'][$key] = array('#markup' => $result['name'] . ' created new content ' . l($result['title'], 'node/' . $result['nid']) . '.</br>');
      }
      elseif ($key == 'friend_followed_content') {
        $form['gie_dashboard_notification'][$key] = array('#markup' => $result['name'] . ' followed content ' . l($result['title'], 'node/' . $result['nid']) . '.</br>');
      }
      elseif ($key == 'friend_followed') {
        $form['gie_dashboard_notification'][$key] = array('#markup' => $result['original_friend'] . ' followed ' . $result['friend_of_friend'] . '.</br>');
      }
      elseif ($key == 'friend_comment') {
        $form['gie_dashboard_notification'][$key] = array('#markup' => $result['name'] . ' commented ' . $result['subject'] . ' on ' . l($result['title'], 'node/' . $result['nid']) . '.</br>');
      }
    }

    return $form;
  }
}