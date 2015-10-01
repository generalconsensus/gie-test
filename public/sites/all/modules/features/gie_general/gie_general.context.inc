<?php
/**
 * @file
 * gie_general.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gie_general_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'default' => array(
      'values' => array(
        'context_condition_default' => 'context_condition_default',
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
          'weight' => '-10',
        ),
        'blockify-blockify-site-name' => array(
          'module' => 'blockify',
          'delta' => 'blockify-site-name',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'tb_megamenu-main-menu' => array(
          'module' => 'tb_megamenu',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-9',
        ),
        'search_api_page-node_search' => array(
          'module' => 'search_api_page',
          'delta' => 'node_search',
          'region' => 'navigation',
          'weight' => '-7',
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
          'weight' => '-18',
        ),
        'views-partners-partners' => array(
          'module' => 'views',
          'delta' => 'partners-partners',
          'region' => 'footer',
          'weight' => '-17',
        ),
        'menu-menu-sub-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-sub-footer-menu',
          'region' => 'footer',
          'weight' => '-16',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'welcome_page';
  $context->description = 'This is the welcome page context. ';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user/register' => 'user/register',
        'welcome' => 'welcome',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-site-name' => array(
          'module' => 'blockify',
          'delta' => 'blockify-site-name',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'gie_homepage-welcome_login' => array(
          'module' => 'gie_homepage',
          'delta' => 'welcome_login',
          'region' => 'navigation',
          'weight' => '-8',
        ),
        'blockify-blockify-messages' => array(
          'module' => 'blockify',
          'delta' => 'blockify-messages',
          'region' => 'preface',
          'weight' => '-10',
        ),
        'pane-welcome_footer' => array(
          'module' => 'pane',
          'delta' => 'welcome_footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'menu-menu-sub-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-sub-footer-menu',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('This is the welcome page context. ');
  $export['welcome_page'] = $context;

  return $export;
}
