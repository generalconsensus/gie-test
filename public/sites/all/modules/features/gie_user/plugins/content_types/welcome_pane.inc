<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Register Custom Welcome Text and Access Button'),
  'description' => t('Register Custom Text/Access Button'),
  'category' => t('general'),
  'edit form' => 'register_custom_text_access_admin_form',
  'render callback' => 'register_custom_text_access_render',
  'defaults' => array(
    'type' => ''
  ),
);

/**
 * The 'admin info' callback for the content type.
 */
function register_custom_text_access_admin_info($subtype, $conf) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = t('Register Custom Welcome Text and Access Button');
    return $block;
  }
}

/**
 * The 'Edit form' callback for the content type.
 */
function register_custom_text_access_admin_form($form) {

  $form['type'] = array(
    '#type' => 'hidden',
  );

  return $form;
}


/**
 * Run-time rendering of the body of the block (content type).
 */
function register_custom_text_access_render() {

  // Render block
  $block = new stdClass();

  global $base_url;
  $block->content = '&nbsp;<h1>Preview Limited Site.</h1>'. '<center><a class="button button--large button--orange" href="' . $base_url . '">Access as a Guest</a></center>';

  return $block;
}
