<?php
/**
 * @file
 * Longform Background Video configuration.
 * - Needed in regular gesso theme for the system to recognize
 * - this layout in the admin UI.
 */

function ds_long_form_background_video() {
  return array(
    'label' => t('Longform Background Video'),
    'regions' => array(
      'main_content' => t('Content'),
    ),
  );
}