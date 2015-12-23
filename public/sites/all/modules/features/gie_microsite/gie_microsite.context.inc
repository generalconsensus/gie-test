<?php
/**
 * @file
 * gie_microsite.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gie_microsite_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'microsite';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        2 => 2,
      ),
    ),
    'path' => array(
      'values' => array(
        '~user/register' => '~user/register',
        '~welcome' => '~welcome',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'header',
          'weight' => '-80',
        ),
        'views-microsite_logo-microsite_logo' => array(
          'module' => 'views',
          'delta' => 'microsite_logo-microsite_logo',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'menu-menu-microsite-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-microsite-menu',
          'region' => 'navigation',
          'weight' => '-9',
        ),
        'views-023d63e471c859444525b3bb3e763d26' => array(
          'module' => 'views',
          'delta' => '023d63e471c859444525b3bb3e763d26',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'views-7df76bd48e25676960e4717bcce1e6a5' => array(
          'module' => 'views',
          'delta' => '7df76bd48e25676960e4717bcce1e6a5',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'menu-menu-sub-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-sub-footer-menu',
          'region' => 'footer',
          'weight' => '-8',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'section--microsite section-wanteds',
    ),
  );
  $context->condition_mode = 1;
  $export['microsite'] = $context;

  return $export;
}
