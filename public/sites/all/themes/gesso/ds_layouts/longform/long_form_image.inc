<?php
/**
 * @file
 * Longform Image configuration.
 * - Needed in regular gesso theme for the system to recognize
 * - this layout in the admin UI.
 */

function ds_long_form_image() {
  return array(
    'label' => t('Longform Image'),
    'regions' => array(
      'main_content' => t('Content'),
    ),
  );
}
