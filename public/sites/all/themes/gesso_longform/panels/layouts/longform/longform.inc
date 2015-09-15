<?php
/**
 * Implements hook_panels_layouts().
 */
function gesso_longform_longform_panels_layouts() {
  $items['longform'] = array(
    'title' => t('Preface and right longform'),
    'category' => t('Responsive'),
    'icon' => 'longform.png',
    'theme' => 'longform',
    'admin css' => '../../../css/panels-admin/longform.css',
    'regions' => array(
      'preface' => t('Preface'),
      'main' => t('Main column'),
    ),
  );

  return $items;
}
