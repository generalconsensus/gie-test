<?php
/**
 * @file
 * Display Suite microsite header layout configuration.
 */


function ds_microsite_header() {
  return array(
    'label' => t('Microsite Header'),
    'regions' => array(
      'main_content' => t('Content'),
    ),
  );
}
