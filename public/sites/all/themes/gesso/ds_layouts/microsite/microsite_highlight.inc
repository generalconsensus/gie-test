<?php
/**
 * @file
 * Display Suite microsite header layout configuration.
 */


function ds_microsite_highlight() {
  return array(
    'label' => t('Microsite Highlight'),
    'regions' => array(
      'main_content' => t('Content'),
    ),
  );
}
