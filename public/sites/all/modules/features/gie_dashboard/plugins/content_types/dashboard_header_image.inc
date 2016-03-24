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
    $image = image_style_url('dashboard_profile_image', $profile_uri);
  }

  $output = '<div class="dashboard-header">
    <div class="dashboard-header__profile-image profile-thumb__image-rounded">
      <img typeof="foaf:Image" width="150" height="150" alt="" src="' . (!empty($image) ? $image : '') . '">
    </div>
    <div class="dashboard-header__text">
      <h2 class ="dashboard-header__title">Your Exchange Dashboard</h2>
      <h3 class="dashboard-header__welcome">WELCOME ' . strtoupper($user->name) . '</h3>
    </div>
    <div class="dashboard-header__actions">
      <a class="button button--highlight button--update-profile" href="/user/' . $user->uid . '/edit">Update your profile</a>
      <a class="button button--highlight button--view-profile" href="/user">View your profile</a>
      <a class="button button--highlight button--email" href="/user/' . $user->uid . '/edit">Email Preferences</a>
  </div>
</div>';

  $block->content = $output;
  return $block;
}
