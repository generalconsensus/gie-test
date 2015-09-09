<?php
/**
 * Implements hook_panels_layouts().
 */
function gesso_split_panels_layouts() {
  $items['split'] = array(
    'title' => t('Preface and two columns'),
    'category' => t('Responsive'),
    'icon' => 'split.png',
    'theme' => 'split',
    'admin css' => '../../../css/panels-admin/split.css',
    'regions' => array(
      'preface' => t('Preface'),
      'main' => t('First'),
      'sidebar' => t('Second'),
    ),
  );

  return $items;
}