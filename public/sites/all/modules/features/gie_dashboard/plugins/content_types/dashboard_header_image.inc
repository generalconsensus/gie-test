<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Dashboard Whats New Custom Header Image'),
  'description' => t('Featured Custom Header Image'),
  'category' => t('dashboard'),
  'edit form' => 'dashboard_whats_new_header_image_admin_form',
  'render callback' => 'dashboard_whats_new_header_image_render',
  'defaults' => array(
    'type' => ''
  ),
);

/**
 * The 'admin info' callback for the content type.
 */
function dashboard_whats_new_header_image_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = t('Dashboard Whats New Custom Header Image');
    return $block;
  }
}

/**
 * The 'Edit form' callback for the content type.
 */
function dashboard_whats_new_header_image_admin_form($form, &$form_state) {

  $form['type'] = array(
    '#type' => 'hidden',
  );

  return $form;
}

/**
 * Run-time rendering of the body of the block (content type).
 */
function dashboard_whats_new_header_image_render($subtype, $conf, $panel_args, $context = NULL) {
  // Render block
  $block = new stdClass();

  global $user;
  $profile_uri = db_query('SELECT file_managed.uri FROM field_data_field_user_photo INNER JOIN file_managed ON file_managed.fid = field_data_field_user_photo.field_user_photo_fid WHERE field_data_field_user_photo.entity_id = :uid', array(':uid' => $user->uid))->fetchField();

  if (!empty($profile_uri)) {
    $image = image_style_url('thumbnail', $profile_uri);
  }

  $output = '<div class="dashboard__header_image">
    <div class="profile-thumb__image--rounded">
        <p><img typeof="foaf:Image" width="100" height="100" alt="" src="' . (!empty($image) ? $image : '') . '"></p>
    </div>
<div class="dashboard__action_items"></div>
    <p>
        <a class="button button--highlight" href="/user/' . $user->uid . '/edit">Update your profile</a>
        <a class="button button--highlight" href="/user">View your profile</a>
        <a class="button button--highlight" href="/user/' . $user->uid . '/edit">Email Preferences</a>
    </p>
  </div>
</div>';

  $block->content = $output;
  return $block;
}
