<?php
/**
 * @file
 * gie_groups.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gie_groups_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'microsite';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'group' => 'group',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-messages' => array(
          'module' => 'blockify',
          'delta' => 'blockify-messages',
          'region' => 'preface',
          'weight' => '-10',
        ),
        'views-2d5a441f121661c9d440795219aa4605' => array(
          'module' => 'views',
          'delta' => '2d5a441f121661c9d440795219aa4605',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'views-ddf3dc04961fdc41e773b652e35516f5' => array(
          'module' => 'views',
          'delta' => 'ddf3dc04961fdc41e773b652e35516f5',
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
  );
  $context->condition_mode = 0;
  $export['microsite'] = $context;

  return $export;
}
