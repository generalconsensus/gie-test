<?php
/**
 * @file
 * gie_long_form_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gie_long_form_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'long_form';
  $context->description = 'Context for long form pages';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'long_form_page' => 'long_form_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'blockify-blockify-messages' => array(
          'module' => 'blockify',
          'delta' => 'blockify-messages',
          'region' => 'preface',
          'weight' => '-10',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footerbar',
          'weight' => '-10',
        ),
        'pane-about_the_exchange' => array(
          'module' => 'pane',
          'delta' => 'about_the_exchange',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'views-partners-partners' => array(
          'module' => 'views',
          'delta' => 'partners-partners',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'menu-menu-sub-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-sub-footer-menu',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'footer',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for long form pages');
  $export['long_form'] = $context;

  return $export;
}
