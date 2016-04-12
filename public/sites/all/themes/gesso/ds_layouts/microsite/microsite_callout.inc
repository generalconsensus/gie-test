<?php
/**
 * @file
 * Display Suite callout layout configuration.
 */

function ds_microsite_callout() {
  $test = 1;
  return array(
    'label' => t('Microsite Callout'),
    'regions' => array(
      'main_content' => t('Content'),
    ),
  );
}
