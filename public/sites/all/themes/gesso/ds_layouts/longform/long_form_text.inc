<?php
/**
 * @file
 * Longform Text configuration.
 * - Needed in regular gesso theme for the system to recognize
 * - this layout in the admin UI.
 */

function ds_long_form_text() {
  return array(
    'label' => t('Longform Text'),
    'regions' => array(
      'main_content' => t('Content'),
    ),
  );
}
