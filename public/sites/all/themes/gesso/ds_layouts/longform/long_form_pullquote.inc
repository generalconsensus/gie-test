<?php
/**
 * @file
 * Longform Pullquote configuration.
 * - Needed in regular gesso theme for the system to recognize
 * - this layout in the admin UI.
 */

function ds_long_form_pullquote() {
  return array(
    'label' => t('Longform Pullquote'),
    'regions' => array(
      'main_content' => t('Content'),
    ),
  );
}
