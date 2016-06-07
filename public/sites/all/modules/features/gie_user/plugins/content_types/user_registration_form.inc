<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('User Registration Form'),
  'description' => t('GIE User Registration Form'),
  'category' => t('gie_user'),
  'edit form' => 'user_registration_admin_form',
  'render callback' => 'user_registration_render',
  'defaults' => array(
    'type' => ''
  ),
);

/**
 * The 'admin info' callback for the content type.
 */
function user_registration_admin_info($subtype, $conf) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    return $block;
  }
}

/**
 * The 'Edit form' callback for the content type.
 */
function user_registration_admin_form($form) {

  $form['type'] = array(
    '#type' => 'hidden',
  );

  return $form;
}


/**
 * Run-time rendering of the body of the block (content type).
 */
function user_registration_render() {

  // Render block
  $block = new stdClass();

  $form = drupal_get_form('user_register_form');

  $lang = $form['field_user_firstname']['#language'];
  // Remove field descriptions
  unset($form['account']['name']['#description']);
  unset($form['account']['mail']['#description']);
  unset($form['account']['pass']['#description']);

  // Hide field labels
  $form['field_user_firstname'][$lang][0]['value']['#title_display'] = 'invisible';
  $form['field_user_lastname'][$lang][0]['value']['#title_display'] = 'invisible';
  $form['account']['name']['#title_display'] = 'invisible';
  $form['account']['mail']['#title_display'] = 'invisible';
  $form['account']['pass']['#title_display'] = 'invisible';

  // Set placeholder text for text inputs
  $form['field_user_firstname'][$lang][0]['value']['#attributes']['placeholder'] = t('First Name');
  $form['field_user_lastname'][$lang][0]['value']['#attributes']['placeholder'] = t('Last Name');
  $form['account']['name']['#attributes']['placeholder'] = t('Username');
  $form['account']['mail']['#attributes']['placeholder'] = t('Email Address');
  $form['account']['pass']['pass1']['#attributes']['placeholder'] = t('Password');

  // Set group labels to 'do not display'
  $form['#groups']['group_about']->format_settings['instance_settings']['show_label'] = 0;
  $form['#groups']['group_account']->format_settings['instance_settings']['show_label'] = 0;

  // hide User Notifications field
  $form['field_user_notifications']['#access'] = FALSE;

  // disable Confirm Password field
  $form['account']['pass']['#type'] = 'password';
  $form['account']['pass']['#title'] = 'Password';
  unset($form['account']['pass']['#size']);
  unset($form['account']['pass']['pass1']['#title']);
  unset($form['account']['pass']['pass1']['#size']);
  unset($form['account']['pass']['#size']);
  unset($form['account']['pass']['pass2']);

  // Unset fixed size for Password field
//  unset($form['account']['pass']['#size']);

  // Set terms and conditions text before submit button
  $form['actions']['submit']['#suffix'] = '<p>By creating an account, you agree to our <a href="/terms-use">terms and conditions</a>.</p>';

  $block->content = drupal_render($form);

  return $block;
}
