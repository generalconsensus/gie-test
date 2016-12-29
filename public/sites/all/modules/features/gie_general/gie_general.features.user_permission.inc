<?php
/**
 * @file
 * gie_general.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gie_general_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Intern' => 'Intern',
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Intern' => 'Intern',
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access assets overview'.
  $permissions['access assets overview'] = array(
    'name' => 'access assets overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Intern' => 'Intern',
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access domain navigation'.
  $permissions['access domain navigation'] = array(
    'name' => 'access domain navigation',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain_nav',
  );

  // Exported permission: 'access domain settings form'.
  $permissions['access domain settings form'] = array(
    'name' => 'access domain settings form',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain_settings',
  );

  // Exported permission: 'access fieldable panels panes master list'.
  $permissions['access fieldable panels panes master list'] = array(
    'name' => 'access fieldable panels panes master list',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'access inactive domains'.
  $permissions['access inactive domains'] = array(
    'name' => 'access inactive domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'access linked field list'.
  $permissions['access linked field list'] = array(
    'name' => 'access linked field list',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'linked_field',
  );

  // Exported permission: 'access mailchimp signup pages'.
  $permissions['access mailchimp signup pages'] = array(
    'name' => 'access mailchimp signup pages',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp_signup',
  );

  // Exported permission: 'access memcache statistics'.
  $permissions['access memcache statistics'] = array(
    'name' => 'access memcache statistics',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'memcache_admin',
  );

  // Exported permission: 'access node_search search_api_page'.
  $permissions['access node_search search_api_page'] = array(
    'name' => 'access node_search search_api_page',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_api_page',
  );

  // Exported permission: 'access remote entities overview'.
  $permissions['access remote entities overview'] = array(
    'name' => 'access remote entities overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'remote_entity',
  );

  // Exported permission: 'access search_api_page'.
  $permissions['access search_api_page'] = array(
    'name' => 'access search_api_page',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'search_api_page',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access slab cachedump'.
  $permissions['access slab cachedump'] = array(
    'name' => 'access slab cachedump',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'memcache_admin',
  );

  // Exported permission: 'access the domain content page'.
  $permissions['access the domain content page'] = array(
    'name' => 'access the domain content page',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain_content',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add JS snippets for google analytics'.
  $permissions['add JS snippets for google analytics'] = array(
    'name' => 'add JS snippets for google analytics',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer angularjs'.
  $permissions['administer angularjs'] = array(
    'name' => 'administer angularjs',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'angularjs',
  );

  // Exported permission: 'administer asset types'.
  $permissions['administer asset types'] = array(
    'name' => 'administer asset types',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'administer assets'.
  $permissions['administer assets'] = array(
    'name' => 'administer assets',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'administer blockify'.
  $permissions['administer blockify'] = array(
    'name' => 'administer blockify',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'blockify',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer clean markup block settings'.
  $permissions['administer clean markup block settings'] = array(
    'name' => 'administer clean markup block settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'clean_markup_blocks',
  );

  // Exported permission: 'administer clean markup panel pane settings'.
  $permissions['administer clean markup panel pane settings'] = array(
    'name' => 'administer clean markup panel pane settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'clean_markup_panels',
  );

  // Exported permission: 'administer clean markup panel region settings'.
  $permissions['administer clean markup panel region settings'] = array(
    'name' => 'administer clean markup panel region settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'clean_markup_panels',
  );

  // Exported permission: 'administer clients connections'.
  $permissions['administer clients connections'] = array(
    'name' => 'administer clients connections',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'clients',
  );

  // Exported permission: 'administer clients resources'.
  $permissions['administer clients resources'] = array(
    'name' => 'administer clients resources',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'clients',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer dependencies'.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: 'administer domains'.
  $permissions['administer domains'] = array(
    'name' => 'administer domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'administer fastly'.
  $permissions['administer fastly'] = array(
    'name' => 'administer fastly',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'fastly',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldable panels panes'.
  $permissions['administer fieldable panels panes'] = array(
    'name' => 'administer fieldable panels panes',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer fields'.
  $permissions['administer fields'] = array(
    'name' => 'administer fields',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'field',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer honeypot'.
  $permissions['administer honeypot'] = array(
    'name' => 'administer honeypot',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer login destination settings'.
  $permissions['administer login destination settings'] = array(
    'name' => 'administer login destination settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'login_destination',
  );

  // Exported permission: 'administer mailchimp'.
  $permissions['administer mailchimp'] = array(
    'name' => 'administer mailchimp',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp',
  );

  // Exported permission: 'administer mailchimp signup entities'.
  $permissions['administer mailchimp signup entities'] = array(
    'name' => 'administer mailchimp signup entities',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp_signup',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu positions'.
  $permissions['administer menu positions'] = array(
    'name' => 'administer menu positions',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'menu_position',
  );

  // Exported permission: 'administer menus per domain'.
  $permissions['administer menus per domain'] = array(
    'name' => 'administer menus per domain',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain_menu_access',
  );

  // Exported permission: 'administer message types'.
  $permissions['administer message types'] = array(
    'name' => 'administer message types',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'message',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer modernizr'.
  $permissions['administer modernizr'] = array(
    'name' => 'administer modernizr',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'modernizr',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer multistep'.
  $permissions['administer multistep'] = array(
    'name' => 'administer multistep',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'multistep',
  );

  // Exported permission: 'administer new relic insights'.
  $permissions['administer new relic insights'] = array(
    'name' => 'administer new relic insights',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'new_relic_insights',
  );

  // Exported permission: 'administer new relic rpm'.
  $permissions['administer new relic rpm'] = array(
    'name' => 'administer new relic rpm',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'new_relic_rpm',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer pane settings'.
  $permissions['administer pane settings'] = array(
    'name' => 'administer pane settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'pane',
  );

  // Exported permission: 'administer panelizer'.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_funding defaults'.
  $permissions['administer panelizer comment comment_node_funding defaults'] = array(
    'name' => 'administer panelizer comment comment_node_funding defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_resource defaults'.
  $permissions['administer panelizer comment comment_node_resource defaults'] = array(
    'name' => 'administer panelizer comment comment_node_resource defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blogs content'.
  $permissions['administer panelizer node blogs content'] = array(
    'name' => 'administer panelizer node blogs content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blogs context'.
  $permissions['administer panelizer node blogs context'] = array(
    'name' => 'administer panelizer node blogs context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blogs defaults'.
  $permissions['administer panelizer node blogs defaults'] = array(
    'name' => 'administer panelizer node blogs defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blogs layout'.
  $permissions['administer panelizer node blogs layout'] = array(
    'name' => 'administer panelizer node blogs layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blogs overview'.
  $permissions['administer panelizer node blogs overview'] = array(
    'name' => 'administer panelizer node blogs overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blogs settings'.
  $permissions['administer panelizer node blogs settings'] = array(
    'name' => 'administer panelizer node blogs settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node discussion content'.
  $permissions['administer panelizer node discussion content'] = array(
    'name' => 'administer panelizer node discussion content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node discussion context'.
  $permissions['administer panelizer node discussion context'] = array(
    'name' => 'administer panelizer node discussion context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node discussion defaults'.
  $permissions['administer panelizer node discussion defaults'] = array(
    'name' => 'administer panelizer node discussion defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node discussion layout'.
  $permissions['administer panelizer node discussion layout'] = array(
    'name' => 'administer panelizer node discussion layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node discussion overview'.
  $permissions['administer panelizer node discussion overview'] = array(
    'name' => 'administer panelizer node discussion overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node discussion settings'.
  $permissions['administer panelizer node discussion settings'] = array(
    'name' => 'administer panelizer node discussion settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node error_page content'.
  $permissions['administer panelizer node error_page content'] = array(
    'name' => 'administer panelizer node error_page content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node error_page context'.
  $permissions['administer panelizer node error_page context'] = array(
    'name' => 'administer panelizer node error_page context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node error_page defaults'.
  $permissions['administer panelizer node error_page defaults'] = array(
    'name' => 'administer panelizer node error_page defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node error_page layout'.
  $permissions['administer panelizer node error_page layout'] = array(
    'name' => 'administer panelizer node error_page layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node error_page overview'.
  $permissions['administer panelizer node error_page overview'] = array(
    'name' => 'administer panelizer node error_page overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node error_page settings'.
  $permissions['administer panelizer node error_page settings'] = array(
    'name' => 'administer panelizer node error_page settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event content'.
  $permissions['administer panelizer node event content'] = array(
    'name' => 'administer panelizer node event content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event context'.
  $permissions['administer panelizer node event context'] = array(
    'name' => 'administer panelizer node event context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event defaults'.
  $permissions['administer panelizer node event defaults'] = array(
    'name' => 'administer panelizer node event defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event layout'.
  $permissions['administer panelizer node event layout'] = array(
    'name' => 'administer panelizer node event layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event overview'.
  $permissions['administer panelizer node event overview'] = array(
    'name' => 'administer panelizer node event overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event settings'.
  $permissions['administer panelizer node event settings'] = array(
    'name' => 'administer panelizer node event settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node funding content'.
  $permissions['administer panelizer node funding content'] = array(
    'name' => 'administer panelizer node funding content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node funding context'.
  $permissions['administer panelizer node funding context'] = array(
    'name' => 'administer panelizer node funding context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node funding defaults'.
  $permissions['administer panelizer node funding defaults'] = array(
    'name' => 'administer panelizer node funding defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node funding layout'.
  $permissions['administer panelizer node funding layout'] = array(
    'name' => 'administer panelizer node funding layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node funding overview'.
  $permissions['administer panelizer node funding overview'] = array(
    'name' => 'administer panelizer node funding overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node funding settings'.
  $permissions['administer panelizer node funding settings'] = array(
    'name' => 'administer panelizer node funding settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node innovation content'.
  $permissions['administer panelizer node innovation content'] = array(
    'name' => 'administer panelizer node innovation content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node innovation context'.
  $permissions['administer panelizer node innovation context'] = array(
    'name' => 'administer panelizer node innovation context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node innovation defaults'.
  $permissions['administer panelizer node innovation defaults'] = array(
    'name' => 'administer panelizer node innovation defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node innovation layout'.
  $permissions['administer panelizer node innovation layout'] = array(
    'name' => 'administer panelizer node innovation layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node innovation overview'.
  $permissions['administer panelizer node innovation overview'] = array(
    'name' => 'administer panelizer node innovation overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node innovation settings'.
  $permissions['administer panelizer node innovation settings'] = array(
    'name' => 'administer panelizer node innovation settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node long_form_page content'.
  $permissions['administer panelizer node long_form_page content'] = array(
    'name' => 'administer panelizer node long_form_page content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node long_form_page context'.
  $permissions['administer panelizer node long_form_page context'] = array(
    'name' => 'administer panelizer node long_form_page context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node long_form_page defaults'.
  $permissions['administer panelizer node long_form_page defaults'] = array(
    'name' => 'administer panelizer node long_form_page defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node long_form_page layout'.
  $permissions['administer panelizer node long_form_page layout'] = array(
    'name' => 'administer panelizer node long_form_page layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node long_form_page overview'.
  $permissions['administer panelizer node long_form_page overview'] = array(
    'name' => 'administer panelizer node long_form_page overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node long_form_page settings'.
  $permissions['administer panelizer node long_form_page settings'] = array(
    'name' => 'administer panelizer node long_form_page settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node microsite_page content'.
  $permissions['administer panelizer node microsite_page content'] = array(
    'name' => 'administer panelizer node microsite_page content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node microsite_page context'.
  $permissions['administer panelizer node microsite_page context'] = array(
    'name' => 'administer panelizer node microsite_page context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node microsite_page defaults'.
  $permissions['administer panelizer node microsite_page defaults'] = array(
    'name' => 'administer panelizer node microsite_page defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node microsite_page layout'.
  $permissions['administer panelizer node microsite_page layout'] = array(
    'name' => 'administer panelizer node microsite_page layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node microsite_page overview'.
  $permissions['administer panelizer node microsite_page overview'] = array(
    'name' => 'administer panelizer node microsite_page overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node microsite_page settings'.
  $permissions['administer panelizer node microsite_page settings'] = array(
    'name' => 'administer panelizer node microsite_page settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node needs content'.
  $permissions['administer panelizer node needs content'] = array(
    'name' => 'administer panelizer node needs content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node needs context'.
  $permissions['administer panelizer node needs context'] = array(
    'name' => 'administer panelizer node needs context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node needs defaults'.
  $permissions['administer panelizer node needs defaults'] = array(
    'name' => 'administer panelizer node needs defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node needs layout'.
  $permissions['administer panelizer node needs layout'] = array(
    'name' => 'administer panelizer node needs layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node needs overview'.
  $permissions['administer panelizer node needs overview'] = array(
    'name' => 'administer panelizer node needs overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node needs settings'.
  $permissions['administer panelizer node needs settings'] = array(
    'name' => 'administer panelizer node needs settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news content'.
  $permissions['administer panelizer node news content'] = array(
    'name' => 'administer panelizer node news content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news context'.
  $permissions['administer panelizer node news context'] = array(
    'name' => 'administer panelizer node news context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news defaults'.
  $permissions['administer panelizer node news defaults'] = array(
    'name' => 'administer panelizer node news defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news layout'.
  $permissions['administer panelizer node news layout'] = array(
    'name' => 'administer panelizer node news layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news overview'.
  $permissions['administer panelizer node news overview'] = array(
    'name' => 'administer panelizer node news overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news settings'.
  $permissions['administer panelizer node news settings'] = array(
    'name' => 'administer panelizer node news settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page choice'.
  $permissions['administer panelizer node page choice'] = array(
    'name' => 'administer panelizer node page choice',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page content'.
  $permissions['administer panelizer node page content'] = array(
    'name' => 'administer panelizer node page content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page context'.
  $permissions['administer panelizer node page context'] = array(
    'name' => 'administer panelizer node page context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page defaults'.
  $permissions['administer panelizer node page defaults'] = array(
    'name' => 'administer panelizer node page defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page layout'.
  $permissions['administer panelizer node page layout'] = array(
    'name' => 'administer panelizer node page layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page overview'.
  $permissions['administer panelizer node page overview'] = array(
    'name' => 'administer panelizer node page overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page settings'.
  $permissions['administer panelizer node page settings'] = array(
    'name' => 'administer panelizer node page settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node program content'.
  $permissions['administer panelizer node program content'] = array(
    'name' => 'administer panelizer node program content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node program context'.
  $permissions['administer panelizer node program context'] = array(
    'name' => 'administer panelizer node program context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node program defaults'.
  $permissions['administer panelizer node program defaults'] = array(
    'name' => 'administer panelizer node program defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node program layout'.
  $permissions['administer panelizer node program layout'] = array(
    'name' => 'administer panelizer node program layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node program overview'.
  $permissions['administer panelizer node program overview'] = array(
    'name' => 'administer panelizer node program overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node program settings'.
  $permissions['administer panelizer node program settings'] = array(
    'name' => 'administer panelizer node program settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node resource content'.
  $permissions['administer panelizer node resource content'] = array(
    'name' => 'administer panelizer node resource content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node resource context'.
  $permissions['administer panelizer node resource context'] = array(
    'name' => 'administer panelizer node resource context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node resource defaults'.
  $permissions['administer panelizer node resource defaults'] = array(
    'name' => 'administer panelizer node resource defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node resource layout'.
  $permissions['administer panelizer node resource layout'] = array(
    'name' => 'administer panelizer node resource layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node resource overview'.
  $permissions['administer panelizer node resource overview'] = array(
    'name' => 'administer panelizer node resource overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node resource settings'.
  $permissions['administer panelizer node resource settings'] = array(
    'name' => 'administer panelizer node resource settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term digital_security defaults'.
  $permissions['administer panelizer taxonomy_term digital_security defaults'] = array(
    'name' => 'administer panelizer taxonomy_term digital_security defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term effort_level defaults'.
  $permissions['administer panelizer taxonomy_term effort_level defaults'] = array(
    'name' => 'administer panelizer taxonomy_term effort_level defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term needs_type content'.
  $permissions['administer panelizer taxonomy_term needs_type content'] = array(
    'name' => 'administer panelizer taxonomy_term needs_type content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term needs_type context'.
  $permissions['administer panelizer taxonomy_term needs_type context'] = array(
    'name' => 'administer panelizer taxonomy_term needs_type context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term needs_type defaults'.
  $permissions['administer panelizer taxonomy_term needs_type defaults'] = array(
    'name' => 'administer panelizer taxonomy_term needs_type defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term needs_type layout'.
  $permissions['administer panelizer taxonomy_term needs_type layout'] = array(
    'name' => 'administer panelizer taxonomy_term needs_type layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term needs_type overview'.
  $permissions['administer panelizer taxonomy_term needs_type overview'] = array(
    'name' => 'administer panelizer taxonomy_term needs_type overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term needs_type settings'.
  $permissions['administer panelizer taxonomy_term needs_type settings'] = array(
    'name' => 'administer panelizer taxonomy_term needs_type settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term program_discussions content'.
  $permissions['administer panelizer taxonomy_term program_discussions content'] = array(
    'name' => 'administer panelizer taxonomy_term program_discussions content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term program_discussions context'.
  $permissions['administer panelizer taxonomy_term program_discussions context'] = array(
    'name' => 'administer panelizer taxonomy_term program_discussions context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term program_discussions defaults'.
  $permissions['administer panelizer taxonomy_term program_discussions defaults'] = array(
    'name' => 'administer panelizer taxonomy_term program_discussions defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term program_discussions layout'.
  $permissions['administer panelizer taxonomy_term program_discussions layout'] = array(
    'name' => 'administer panelizer taxonomy_term program_discussions layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term program_discussions overview'.
  $permissions['administer panelizer taxonomy_term program_discussions overview'] = array(
    'name' => 'administer panelizer taxonomy_term program_discussions overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term program_discussions settings'.
  $permissions['administer panelizer taxonomy_term program_discussions settings'] = array(
    'name' => 'administer panelizer taxonomy_term program_discussions settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term region content'.
  $permissions['administer panelizer taxonomy_term region content'] = array(
    'name' => 'administer panelizer taxonomy_term region content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term region context'.
  $permissions['administer panelizer taxonomy_term region context'] = array(
    'name' => 'administer panelizer taxonomy_term region context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term region defaults'.
  $permissions['administer panelizer taxonomy_term region defaults'] = array(
    'name' => 'administer panelizer taxonomy_term region defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term region layout'.
  $permissions['administer panelizer taxonomy_term region layout'] = array(
    'name' => 'administer panelizer taxonomy_term region layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term region overview'.
  $permissions['administer panelizer taxonomy_term region overview'] = array(
    'name' => 'administer panelizer taxonomy_term region overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term region settings'.
  $permissions['administer panelizer taxonomy_term region settings'] = array(
    'name' => 'administer panelizer taxonomy_term region settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term resource_type defaults'.
  $permissions['administer panelizer taxonomy_term resource_type defaults'] = array(
    'name' => 'administer panelizer taxonomy_term resource_type defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term sector content'.
  $permissions['administer panelizer taxonomy_term sector content'] = array(
    'name' => 'administer panelizer taxonomy_term sector content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term sector context'.
  $permissions['administer panelizer taxonomy_term sector context'] = array(
    'name' => 'administer panelizer taxonomy_term sector context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term sector defaults'.
  $permissions['administer panelizer taxonomy_term sector defaults'] = array(
    'name' => 'administer panelizer taxonomy_term sector defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term sector layout'.
  $permissions['administer panelizer taxonomy_term sector layout'] = array(
    'name' => 'administer panelizer taxonomy_term sector layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term sector overview'.
  $permissions['administer panelizer taxonomy_term sector overview'] = array(
    'name' => 'administer panelizer taxonomy_term sector overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term sector settings'.
  $permissions['administer panelizer taxonomy_term sector settings'] = array(
    'name' => 'administer panelizer taxonomy_term sector settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term sustainable_development_goals content'.
  $permissions['administer panelizer taxonomy_term sustainable_development_goals content'] = array(
    'name' => 'administer panelizer taxonomy_term sustainable_development_goals content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term sustainable_development_goals context'.
  $permissions['administer panelizer taxonomy_term sustainable_development_goals context'] = array(
    'name' => 'administer panelizer taxonomy_term sustainable_development_goals context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term sustainable_development_goals defaults'.
  $permissions['administer panelizer taxonomy_term sustainable_development_goals defaults'] = array(
    'name' => 'administer panelizer taxonomy_term sustainable_development_goals defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term sustainable_development_goals layout'.
  $permissions['administer panelizer taxonomy_term sustainable_development_goals layout'] = array(
    'name' => 'administer panelizer taxonomy_term sustainable_development_goals layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term sustainable_development_goals overview'.
  $permissions['administer panelizer taxonomy_term sustainable_development_goals overview'] = array(
    'name' => 'administer panelizer taxonomy_term sustainable_development_goals overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term sustainable_development_goals settings'.
  $permissions['administer panelizer taxonomy_term sustainable_development_goals settings'] = array(
    'name' => 'administer panelizer taxonomy_term sustainable_development_goals settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term topic content'.
  $permissions['administer panelizer taxonomy_term topic content'] = array(
    'name' => 'administer panelizer taxonomy_term topic content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term topic context'.
  $permissions['administer panelizer taxonomy_term topic context'] = array(
    'name' => 'administer panelizer taxonomy_term topic context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term topic defaults'.
  $permissions['administer panelizer taxonomy_term topic defaults'] = array(
    'name' => 'administer panelizer taxonomy_term topic defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term topic layout'.
  $permissions['administer panelizer taxonomy_term topic layout'] = array(
    'name' => 'administer panelizer taxonomy_term topic layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term topic overview'.
  $permissions['administer panelizer taxonomy_term topic overview'] = array(
    'name' => 'administer panelizer taxonomy_term topic overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term topic settings'.
  $permissions['administer panelizer taxonomy_term topic settings'] = array(
    'name' => 'administer panelizer taxonomy_term topic settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term youthpower_issues content'.
  $permissions['administer panelizer taxonomy_term youthpower_issues content'] = array(
    'name' => 'administer panelizer taxonomy_term youthpower_issues content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term youthpower_issues context'.
  $permissions['administer panelizer taxonomy_term youthpower_issues context'] = array(
    'name' => 'administer panelizer taxonomy_term youthpower_issues context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term youthpower_issues defaults'.
  $permissions['administer panelizer taxonomy_term youthpower_issues defaults'] = array(
    'name' => 'administer panelizer taxonomy_term youthpower_issues defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term youthpower_issues layout'.
  $permissions['administer panelizer taxonomy_term youthpower_issues layout'] = array(
    'name' => 'administer panelizer taxonomy_term youthpower_issues layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term youthpower_issues overview'.
  $permissions['administer panelizer taxonomy_term youthpower_issues overview'] = array(
    'name' => 'administer panelizer taxonomy_term youthpower_issues overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term youthpower_issues settings'.
  $permissions['administer panelizer taxonomy_term youthpower_issues settings'] = array(
    'name' => 'administer panelizer taxonomy_term youthpower_issues settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user content'.
  $permissions['administer panelizer user user content'] = array(
    'name' => 'administer panelizer user user content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user context'.
  $permissions['administer panelizer user user context'] = array(
    'name' => 'administer panelizer user user context',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user defaults'.
  $permissions['administer panelizer user user defaults'] = array(
    'name' => 'administer panelizer user user defaults',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user layout'.
  $permissions['administer panelizer user user layout'] = array(
    'name' => 'administer panelizer user user layout',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user overview'.
  $permissions['administer panelizer user user overview'] = array(
    'name' => 'administer panelizer user user overview',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user settings'.
  $permissions['administer panelizer user user settings'] = array(
    'name' => 'administer panelizer user user settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panes'.
  $permissions['administer panes'] = array(
    'name' => 'administer panes',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'pane',
  );

  // Exported permission: 'administer paragraphs bundles'.
  $permissions['administer paragraphs bundles'] = array(
    'name' => 'administer paragraphs bundles',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'paragraphs',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer quicktabs'.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'quicktabs',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer reroute email'.
  $permissions['administer reroute email'] = array(
    'name' => 'administer reroute email',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'reroute_email',
  );

  // Exported permission: 'administer rh_node'.
  $permissions['administer rh_node'] = array(
    'name' => 'administer rh_node',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'administer rh_taxonomy'.
  $permissions['administer rh_taxonomy'] = array(
    'name' => 'administer rh_taxonomy',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'administer sharethis'.
  $permissions['administer sharethis'] = array(
    'name' => 'administer sharethis',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'sharethis',
  );

  // Exported permission: 'administer simplify'.
  $permissions['administer simplify'] = array(
    'name' => 'administer simplify',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'simplify',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer social profile data'.
  $permissions['administer social profile data'] = array(
    'name' => 'administer social profile data',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'lr_social_profile_data',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer super login'.
  $permissions['administer super login'] = array(
    'name' => 'administer super login',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'super_login',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer tb_megamenu'.
  $permissions['administer tb_megamenu'] = array(
    'name' => 'administer tb_megamenu',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'tb_megamenu',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer userregistration'.
  $permissions['administer userregistration'] = array(
    'name' => 'administer userregistration',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'lr_social_login',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer video presets'.
  $permissions['administer video presets'] = array(
    'name' => 'administer video presets',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'advanced migration information'.
  $permissions['advanced migration information'] = array(
    'name' => 'advanced migration information',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'migrate',
  );

  // Exported permission: 'assign domain editors'.
  $permissions['assign domain editors'] = array(
    'name' => 'assign domain editors',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'ban IP address ranges'.
  $permissions['ban IP address ranges'] = array(
    'name' => 'ban IP address ranges',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'ip_ranges',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass access in place editing'.
  $permissions['bypass access in place editing'] = array(
    'name' => 'bypass access in place editing',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'bypass conversion video'.
  $permissions['bypass conversion video'] = array(
    'name' => 'bypass conversion video',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: 'bypass honeypot protection'.
  $permissions['bypass honeypot protection'] = array(
    'name' => 'bypass honeypot protection',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'bypass maxlength'.
  $permissions['bypass maxlength'] = array(
    'name' => 'bypass maxlength',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'maxlength',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rh_node'.
  $permissions['bypass rh_node'] = array(
    'name' => 'bypass rh_node',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'bypass rh_taxonomy'.
  $permissions['bypass rh_taxonomy'] = array(
    'name' => 'bypass rh_taxonomy',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear csv_asset_importer feeds'.
  $permissions['clear csv_asset_importer feeds'] = array(
    'name' => 'clear csv_asset_importer feeds',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'convert on submission'.
  $permissions['convert on submission'] = array(
    'name' => 'convert on submission',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: 'create action_card content on assigned domains'.
  $permissions['create action_card content on assigned domains'] = array(
    'name' => 'create action_card content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create article content on assigned domains'.
  $permissions['create article content on assigned domains'] = array(
    'name' => 'create article content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create asset with type document'.
  $permissions['create asset with type document'] = array(
    'name' => 'create asset with type document',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'create asset with type image'.
  $permissions['create asset with type image'] = array(
    'name' => 'create asset with type image',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'create asset with type video'.
  $permissions['create asset with type video'] = array(
    'name' => 'create asset with type video',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'create blogs content on assigned domains'.
  $permissions['create blogs content on assigned domains'] = array(
    'name' => 'create blogs content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create discussion content'.
  $permissions['create discussion content'] = array(
    'name' => 'create discussion content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create discussion content on assigned domains'.
  $permissions['create discussion content on assigned domains'] = array(
    'name' => 'create discussion content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create error_page content'.
  $permissions['create error_page content'] = array(
    'name' => 'create error_page content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create error_page content on assigned domains'.
  $permissions['create error_page content on assigned domains'] = array(
    'name' => 'create error_page content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event content on assigned domains'.
  $permissions['create event content on assigned domains'] = array(
    'name' => 'create event content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create fieldable fieldable_panels_pane'.
  $permissions['create fieldable fieldable_panels_pane'] = array(
    'name' => 'create fieldable fieldable_panels_pane',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create funding content'.
  $permissions['create funding content'] = array(
    'name' => 'create funding content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create funding content on assigned domains'.
  $permissions['create funding content on assigned domains'] = array(
    'name' => 'create funding content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create homepage content on assigned domains'.
  $permissions['create homepage content on assigned domains'] = array(
    'name' => 'create homepage content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create innovation content'.
  $permissions['create innovation content'] = array(
    'name' => 'create innovation content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create innovation content on assigned domains'.
  $permissions['create innovation content on assigned domains'] = array(
    'name' => 'create innovation content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create long_form_page content'.
  $permissions['create long_form_page content'] = array(
    'name' => 'create long_form_page content',
    'roles' => array(
      'Intern' => 'Intern',
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create long_form_page content on assigned domains'.
  $permissions['create long_form_page content on assigned domains'] = array(
    'name' => 'create long_form_page content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create messages'.
  $permissions['create messages'] = array(
    'name' => 'create messages',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'message',
  );

  // Exported permission: 'create microsite content'.
  $permissions['create microsite content'] = array(
    'name' => 'create microsite content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create microsite content on assigned domains'.
  $permissions['create microsite content on assigned domains'] = array(
    'name' => 'create microsite content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create microsite_page content'.
  $permissions['create microsite_page content'] = array(
    'name' => 'create microsite_page content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create microsite_page content on assigned domains'.
  $permissions['create microsite_page content on assigned domains'] = array(
    'name' => 'create microsite_page content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'create needs content'.
  $permissions['create needs content'] = array(
    'name' => 'create needs content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create needs content on assigned domains'.
  $permissions['create needs content on assigned domains'] = array(
    'name' => 'create needs content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create new relic rpm deployments'.
  $permissions['create new relic rpm deployments'] = array(
    'name' => 'create new relic rpm deployments',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'new_relic_rpm',
  );

  // Exported permission: 'create news content on assigned domains'.
  $permissions['create news content on assigned domains'] = array(
    'name' => 'create news content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create organization content on assigned domains'.
  $permissions['create organization content on assigned domains'] = array(
    'name' => 'create organization content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Intern' => 'Intern',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content on assigned domains'.
  $permissions['create page content on assigned domains'] = array(
    'name' => 'create page content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create persona content on assigned domains'.
  $permissions['create persona content on assigned domains'] = array(
    'name' => 'create persona content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create program content'.
  $permissions['create program content'] = array(
    'name' => 'create program content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create program content on assigned domains'.
  $permissions['create program content on assigned domains'] = array(
    'name' => 'create program content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create resource content'.
  $permissions['create resource content'] = array(
    'name' => 'create resource content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create resource content on assigned domains'.
  $permissions['create resource content on assigned domains'] = array(
    'name' => 'create resource content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'delete action_card content on assigned domains'.
  $permissions['delete action_card content on assigned domains'] = array(
    'name' => 'delete action_card content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any discussion content'.
  $permissions['delete any discussion content'] = array(
    'name' => 'delete any discussion content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any error_page content'.
  $permissions['delete any error_page content'] = array(
    'name' => 'delete any error_page content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any funding content'.
  $permissions['delete any funding content'] = array(
    'name' => 'delete any funding content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any innovation content'.
  $permissions['delete any innovation content'] = array(
    'name' => 'delete any innovation content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any long_form_page content'.
  $permissions['delete any long_form_page content'] = array(
    'name' => 'delete any long_form_page content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any microsite content'.
  $permissions['delete any microsite content'] = array(
    'name' => 'delete any microsite content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any microsite_page content'.
  $permissions['delete any microsite_page content'] = array(
    'name' => 'delete any microsite_page content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any needs content'.
  $permissions['delete any needs content'] = array(
    'name' => 'delete any needs content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any program content'.
  $permissions['delete any program content'] = array(
    'name' => 'delete any program content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any resource content'.
  $permissions['delete any resource content'] = array(
    'name' => 'delete any resource content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete article content on assigned domains'.
  $permissions['delete article content on assigned domains'] = array(
    'name' => 'delete article content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete asset with type document'.
  $permissions['delete asset with type document'] = array(
    'name' => 'delete asset with type document',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'delete asset with type image'.
  $permissions['delete asset with type image'] = array(
    'name' => 'delete asset with type image',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'delete asset with type video'.
  $permissions['delete asset with type video'] = array(
    'name' => 'delete asset with type video',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'delete blogs content on assigned domains'.
  $permissions['delete blogs content on assigned domains'] = array(
    'name' => 'delete blogs content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete discussion content on assigned domains'.
  $permissions['delete discussion content on assigned domains'] = array(
    'name' => 'delete discussion content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete domain content'.
  $permissions['delete domain content'] = array(
    'name' => 'delete domain content',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete error_page content on assigned domains'.
  $permissions['delete error_page content on assigned domains'] = array(
    'name' => 'delete error_page content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete event content on assigned domains'.
  $permissions['delete event content on assigned domains'] = array(
    'name' => 'delete event content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete fieldable fieldable_panels_pane'.
  $permissions['delete fieldable fieldable_panels_pane'] = array(
    'name' => 'delete fieldable fieldable_panels_pane',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete funding content on assigned domains'.
  $permissions['delete funding content on assigned domains'] = array(
    'name' => 'delete funding content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete homepage content on assigned domains'.
  $permissions['delete homepage content on assigned domains'] = array(
    'name' => 'delete homepage content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete innovation content on assigned domains'.
  $permissions['delete innovation content on assigned domains'] = array(
    'name' => 'delete innovation content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete long_form_page content on assigned domains'.
  $permissions['delete long_form_page content on assigned domains'] = array(
    'name' => 'delete long_form_page content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete microsite content on assigned domains'.
  $permissions['delete microsite content on assigned domains'] = array(
    'name' => 'delete microsite content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete microsite_page content on assigned domains'.
  $permissions['delete microsite_page content on assigned domains'] = array(
    'name' => 'delete microsite_page content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete needs content on assigned domains'.
  $permissions['delete needs content on assigned domains'] = array(
    'name' => 'delete needs content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete news content on assigned domains'.
  $permissions['delete news content on assigned domains'] = array(
    'name' => 'delete news content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete organization content on assigned domains'.
  $permissions['delete organization content on assigned domains'] = array(
    'name' => 'delete organization content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own discussion content'.
  $permissions['delete own discussion content'] = array(
    'name' => 'delete own discussion content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own error_page content'.
  $permissions['delete own error_page content'] = array(
    'name' => 'delete own error_page content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own funding content'.
  $permissions['delete own funding content'] = array(
    'name' => 'delete own funding content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own innovation content'.
  $permissions['delete own innovation content'] = array(
    'name' => 'delete own innovation content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own long_form_page content'.
  $permissions['delete own long_form_page content'] = array(
    'name' => 'delete own long_form_page content',
    'roles' => array(
      'Intern' => 'Intern',
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own microsite content'.
  $permissions['delete own microsite content'] = array(
    'name' => 'delete own microsite content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own microsite_page content'.
  $permissions['delete own microsite_page content'] = array(
    'name' => 'delete own microsite_page content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own needs content'.
  $permissions['delete own needs content'] = array(
    'name' => 'delete own needs content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Intern' => 'Intern',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own program content'.
  $permissions['delete own program content'] = array(
    'name' => 'delete own program content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own resource content'.
  $permissions['delete own resource content'] = array(
    'name' => 'delete own resource content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete page content on assigned domains'.
  $permissions['delete page content on assigned domains'] = array(
    'name' => 'delete page content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete persona content on assigned domains'.
  $permissions['delete persona content on assigned domains'] = array(
    'name' => 'delete persona content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete program content on assigned domains'.
  $permissions['delete program content on assigned domains'] = array(
    'name' => 'delete program content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete resource content on assigned domains'.
  $permissions['delete resource content on assigned domains'] = array(
    'name' => 'delete resource content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in assistance_type'.
  $permissions['delete terms in assistance_type'] = array(
    'name' => 'delete terms in assistance_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in background'.
  $permissions['delete terms in background'] = array(
    'name' => 'delete terms in background',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in block_orientation'.
  $permissions['delete terms in block_orientation'] = array(
    'name' => 'delete terms in block_orientation',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in comment_type'.
  $permissions['delete terms in comment_type'] = array(
    'name' => 'delete terms in comment_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in company'.
  $permissions['delete terms in company'] = array(
    'name' => 'delete terms in company',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in country'.
  $permissions['delete terms in country'] = array(
    'name' => 'delete terms in country',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in digital_security'.
  $permissions['delete terms in digital_security'] = array(
    'name' => 'delete terms in digital_security',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in effort_level'.
  $permissions['delete terms in effort_level'] = array(
    'name' => 'delete terms in effort_level',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in eligibility_type'.
  $permissions['delete terms in eligibility_type'] = array(
    'name' => 'delete terms in eligibility_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in event_needs'.
  $permissions['delete terms in event_needs'] = array(
    'name' => 'delete terms in event_needs',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in event_size'.
  $permissions['delete terms in event_size'] = array(
    'name' => 'delete terms in event_size',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in event_type'.
  $permissions['delete terms in event_type'] = array(
    'name' => 'delete terms in event_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in expertise_type'.
  $permissions['delete terms in expertise_type'] = array(
    'name' => 'delete terms in expertise_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in funding_type'.
  $permissions['delete terms in funding_type'] = array(
    'name' => 'delete terms in funding_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in innovation_stage'.
  $permissions['delete terms in innovation_stage'] = array(
    'name' => 'delete terms in innovation_stage',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in member_help'.
  $permissions['delete terms in member_help'] = array(
    'name' => 'delete terms in member_help',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in microsite_header_options'.
  $permissions['delete terms in microsite_header_options'] = array(
    'name' => 'delete terms in microsite_header_options',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in needs_duration'.
  $permissions['delete terms in needs_duration'] = array(
    'name' => 'delete terms in needs_duration',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in needs_status'.
  $permissions['delete terms in needs_status'] = array(
    'name' => 'delete terms in needs_status',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in needs_type'.
  $permissions['delete terms in needs_type'] = array(
    'name' => 'delete terms in needs_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in organization_role'.
  $permissions['delete terms in organization_role'] = array(
    'name' => 'delete terms in organization_role',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in organization_type'.
  $permissions['delete terms in organization_type'] = array(
    'name' => 'delete terms in organization_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in other_interest'.
  $permissions['delete terms in other_interest'] = array(
    'name' => 'delete terms in other_interest',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in program_discussions'.
  $permissions['delete terms in program_discussions'] = array(
    'name' => 'delete terms in program_discussions',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in region'.
  $permissions['delete terms in region'] = array(
    'name' => 'delete terms in region',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in resource_type'.
  $permissions['delete terms in resource_type'] = array(
    'name' => 'delete terms in resource_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in sector'.
  $permissions['delete terms in sector'] = array(
    'name' => 'delete terms in sector',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in solution_type'.
  $permissions['delete terms in solution_type'] = array(
    'name' => 'delete terms in solution_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in sustainable_development_goals'.
  $permissions['delete terms in sustainable_development_goals'] = array(
    'name' => 'delete terms in sustainable_development_goals',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in team'.
  $permissions['delete terms in team'] = array(
    'name' => 'delete terms in team',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in testing_phase'.
  $permissions['delete terms in testing_phase'] = array(
    'name' => 'delete terms in testing_phase',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in text_orientation'.
  $permissions['delete terms in text_orientation'] = array(
    'name' => 'delete terms in text_orientation',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in topic'.
  $permissions['delete terms in topic'] = array(
    'name' => 'delete terms in topic',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in user_skills'.
  $permissions['delete terms in user_skills'] = array(
    'name' => 'delete terms in user_skills',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in user_type'.
  $permissions['delete terms in user_type'] = array(
    'name' => 'delete terms in user_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in youthpower_issues'.
  $permissions['delete terms in youthpower_issues'] = array(
    'name' => 'delete terms in youthpower_issues',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any discussion content'.
  $permissions['edit any discussion content'] = array(
    'name' => 'edit any discussion content',
    'roles' => array(
      'Intern' => 'Intern',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any error_page content'.
  $permissions['edit any error_page content'] = array(
    'name' => 'edit any error_page content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'Intern' => 'Intern',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any funding content'.
  $permissions['edit any funding content'] = array(
    'name' => 'edit any funding content',
    'roles' => array(
      'Intern' => 'Intern',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any innovation content'.
  $permissions['edit any innovation content'] = array(
    'name' => 'edit any innovation content',
    'roles' => array(
      'Intern' => 'Intern',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any long_form_page content'.
  $permissions['edit any long_form_page content'] = array(
    'name' => 'edit any long_form_page content',
    'roles' => array(
      'Intern' => 'Intern',
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any microsite content'.
  $permissions['edit any microsite content'] = array(
    'name' => 'edit any microsite content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any microsite_page content'.
  $permissions['edit any microsite_page content'] = array(
    'name' => 'edit any microsite_page content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any needs content'.
  $permissions['edit any needs content'] = array(
    'name' => 'edit any needs content',
    'roles' => array(
      'Intern' => 'Intern',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Intern' => 'Intern',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any program content'.
  $permissions['edit any program content'] = array(
    'name' => 'edit any program content',
    'roles' => array(
      'Intern' => 'Intern',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any resource content'.
  $permissions['edit any resource content'] = array(
    'name' => 'edit any resource content',
    'roles' => array(
      'Intern' => 'Intern',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit asset with type document'.
  $permissions['edit asset with type document'] = array(
    'name' => 'edit asset with type document',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'edit asset with type image'.
  $permissions['edit asset with type image'] = array(
    'name' => 'edit asset with type image',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'edit asset with type video'.
  $permissions['edit asset with type video'] = array(
    'name' => 'edit asset with type video',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'edit domain content'.
  $permissions['edit domain content'] = array(
    'name' => 'edit domain content',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'edit fieldable fieldable_panels_pane'.
  $permissions['edit fieldable fieldable_panels_pane'] = array(
    'name' => 'edit fieldable fieldable_panels_pane',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own discussion content'.
  $permissions['edit own discussion content'] = array(
    'name' => 'edit own discussion content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own error_page content'.
  $permissions['edit own error_page content'] = array(
    'name' => 'edit own error_page content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own funding content'.
  $permissions['edit own funding content'] = array(
    'name' => 'edit own funding content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own innovation content'.
  $permissions['edit own innovation content'] = array(
    'name' => 'edit own innovation content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own long_form_page content'.
  $permissions['edit own long_form_page content'] = array(
    'name' => 'edit own long_form_page content',
    'roles' => array(
      'Intern' => 'Intern',
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own microsite content'.
  $permissions['edit own microsite content'] = array(
    'name' => 'edit own microsite content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own microsite_page content'.
  $permissions['edit own microsite_page content'] = array(
    'name' => 'edit own microsite_page content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own needs content'.
  $permissions['edit own needs content'] = array(
    'name' => 'edit own needs content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own program content'.
  $permissions['edit own program content'] = array(
    'name' => 'edit own program content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own resource content'.
  $permissions['edit own resource content'] = array(
    'name' => 'edit own resource content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in assistance_type'.
  $permissions['edit terms in assistance_type'] = array(
    'name' => 'edit terms in assistance_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in background'.
  $permissions['edit terms in background'] = array(
    'name' => 'edit terms in background',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in block_orientation'.
  $permissions['edit terms in block_orientation'] = array(
    'name' => 'edit terms in block_orientation',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in comment_type'.
  $permissions['edit terms in comment_type'] = array(
    'name' => 'edit terms in comment_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in company'.
  $permissions['edit terms in company'] = array(
    'name' => 'edit terms in company',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in country'.
  $permissions['edit terms in country'] = array(
    'name' => 'edit terms in country',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in digital_security'.
  $permissions['edit terms in digital_security'] = array(
    'name' => 'edit terms in digital_security',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in effort_level'.
  $permissions['edit terms in effort_level'] = array(
    'name' => 'edit terms in effort_level',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in eligibility_type'.
  $permissions['edit terms in eligibility_type'] = array(
    'name' => 'edit terms in eligibility_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in event_needs'.
  $permissions['edit terms in event_needs'] = array(
    'name' => 'edit terms in event_needs',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in event_size'.
  $permissions['edit terms in event_size'] = array(
    'name' => 'edit terms in event_size',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in event_type'.
  $permissions['edit terms in event_type'] = array(
    'name' => 'edit terms in event_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in expertise_type'.
  $permissions['edit terms in expertise_type'] = array(
    'name' => 'edit terms in expertise_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in funding_type'.
  $permissions['edit terms in funding_type'] = array(
    'name' => 'edit terms in funding_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in innovation_stage'.
  $permissions['edit terms in innovation_stage'] = array(
    'name' => 'edit terms in innovation_stage',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in member_help'.
  $permissions['edit terms in member_help'] = array(
    'name' => 'edit terms in member_help',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in microsite_header_options'.
  $permissions['edit terms in microsite_header_options'] = array(
    'name' => 'edit terms in microsite_header_options',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in needs_duration'.
  $permissions['edit terms in needs_duration'] = array(
    'name' => 'edit terms in needs_duration',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in needs_status'.
  $permissions['edit terms in needs_status'] = array(
    'name' => 'edit terms in needs_status',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in needs_type'.
  $permissions['edit terms in needs_type'] = array(
    'name' => 'edit terms in needs_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in organization_role'.
  $permissions['edit terms in organization_role'] = array(
    'name' => 'edit terms in organization_role',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in organization_type'.
  $permissions['edit terms in organization_type'] = array(
    'name' => 'edit terms in organization_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in other_interest'.
  $permissions['edit terms in other_interest'] = array(
    'name' => 'edit terms in other_interest',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in resource_type'.
  $permissions['edit terms in resource_type'] = array(
    'name' => 'edit terms in resource_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in solution_type'.
  $permissions['edit terms in solution_type'] = array(
    'name' => 'edit terms in solution_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in sustainable_development_goals'.
  $permissions['edit terms in sustainable_development_goals'] = array(
    'name' => 'edit terms in sustainable_development_goals',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in team'.
  $permissions['edit terms in team'] = array(
    'name' => 'edit terms in team',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in testing_phase'.
  $permissions['edit terms in testing_phase'] = array(
    'name' => 'edit terms in testing_phase',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in text_orientation'.
  $permissions['edit terms in text_orientation'] = array(
    'name' => 'edit terms in text_orientation',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in user_skills'.
  $permissions['edit terms in user_skills'] = array(
    'name' => 'edit terms in user_skills',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in user_type'.
  $permissions['edit terms in user_type'] = array(
    'name' => 'edit terms in user_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in youthpower_issues'.
  $permissions['edit terms in youthpower_issues'] = array(
    'name' => 'edit terms in youthpower_issues',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'entityconnect add button'.
  $permissions['entityconnect add button'] = array(
    'name' => 'entityconnect add button',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'entityconnect',
  );

  // Exported permission: 'entityconnect edit button'.
  $permissions['entityconnect edit button'] = array(
    'name' => 'entityconnect edit button',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'entityconnect',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'flag abuse_comment'.
  $permissions['flag abuse_comment'] = array(
    'name' => 'flag abuse_comment',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag abuse_node'.
  $permissions['flag abuse_node'] = array(
    'name' => 'flag abuse_node',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag abuse_user'.
  $permissions['flag abuse_user'] = array(
    'name' => 'flag abuse_user',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag abuse_whitelist_comment'.
  $permissions['flag abuse_whitelist_comment'] = array(
    'name' => 'flag abuse_whitelist_comment',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag abuse_whitelist_node'.
  $permissions['flag abuse_whitelist_node'] = array(
    'name' => 'flag abuse_whitelist_node',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag abuse_whitelist_user'.
  $permissions['flag abuse_whitelist_user'] = array(
    'name' => 'flag abuse_whitelist_user',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag favorite'.
  $permissions['flag favorite'] = array(
    'name' => 'flag favorite',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag follow'.
  $permissions['flag follow'] = array(
    'name' => 'flag follow',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag follow_taxonomy'.
  $permissions['flag follow_taxonomy'] = array(
    'name' => 'flag follow_taxonomy',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag gie_node_spam'.
  $permissions['flag gie_node_spam'] = array(
    'name' => 'flag gie_node_spam',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag gie_user_whitelist'.
  $permissions['flag gie_user_whitelist'] = array(
    'name' => 'flag gie_user_whitelist',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import csv_asset_importer feeds'.
  $permissions['import csv_asset_importer feeds'] = array(
    'name' => 'import csv_asset_importer feeds',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'migration information'.
  $permissions['migration information'] = array(
    'name' => 'migration information',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'migrate',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'override player dimensions'.
  $permissions['override player dimensions'] = array(
    'name' => 'override player dimensions',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: 'php redirect rh_node'.
  $permissions['php redirect rh_node'] = array(
    'name' => 'php redirect rh_node',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'php redirect rh_taxonomy'.
  $permissions['php redirect rh_taxonomy'] = array(
    'name' => 'php redirect rh_taxonomy',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'publish from assigned domain'.
  $permissions['publish from assigned domain'] = array(
    'name' => 'publish from assigned domain',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'publish from default domain'.
  $permissions['publish from default domain'] = array(
    'name' => 'publish from default domain',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'publish to any assigned domain'.
  $permissions['publish to any assigned domain'] = array(
    'name' => 'publish to any assigned domain',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 're convert video'.
  $permissions['re convert video'] = array(
    'name' => 're convert video',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: 're-attempt remote save of remote entities'.
  $permissions['re-attempt remote save of remote entities'] = array(
    'name' => 're-attempt remote save of remote entities',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'remote_entity',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'review content for all domains'.
  $permissions['review content for all domains'] = array(
    'name' => 'review content for all domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain_content',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'send arbitrary files'.
  $permissions['send arbitrary files'] = array(
    'name' => 'send arbitrary files',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'set domain access'.
  $permissions['set domain access'] = array(
    'name' => 'set domain access',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'show format selection for comment'.
  $permissions['show format selection for comment'] = array(
    'name' => 'show format selection for comment',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for field_collection_item'.
  $permissions['show format selection for field_collection_item'] = array(
    'name' => 'show format selection for field_collection_item',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for fieldable_panels_pane'.
  $permissions['show format selection for fieldable_panels_pane'] = array(
    'name' => 'show format selection for fieldable_panels_pane',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for flagging'.
  $permissions['show format selection for flagging'] = array(
    'name' => 'show format selection for flagging',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for message'.
  $permissions['show format selection for message'] = array(
    'name' => 'show format selection for message',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for message_type'.
  $permissions['show format selection for message_type'] = array(
    'name' => 'show format selection for message_type',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for message_type_category'.
  $permissions['show format selection for message_type_category'] = array(
    'name' => 'show format selection for message_type_category',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'Intern' => 'Intern',
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for paragraphs_item'.
  $permissions['show format selection for paragraphs_item'] = array(
    'name' => 'show format selection for paragraphs_item',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'tamper csv_asset_importer'.
  $permissions['tamper csv_asset_importer'] = array(
    'name' => 'tamper csv_asset_importer',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'toggle multistep'.
  $permissions['toggle multistep'] = array(
    'name' => 'toggle multistep',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'multistep',
  );

  // Exported permission: 'unflag abuse_comment'.
  $permissions['unflag abuse_comment'] = array(
    'name' => 'unflag abuse_comment',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag abuse_node'.
  $permissions['unflag abuse_node'] = array(
    'name' => 'unflag abuse_node',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag abuse_user'.
  $permissions['unflag abuse_user'] = array(
    'name' => 'unflag abuse_user',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag abuse_whitelist_comment'.
  $permissions['unflag abuse_whitelist_comment'] = array(
    'name' => 'unflag abuse_whitelist_comment',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag abuse_whitelist_node'.
  $permissions['unflag abuse_whitelist_node'] = array(
    'name' => 'unflag abuse_whitelist_node',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag abuse_whitelist_user'.
  $permissions['unflag abuse_whitelist_user'] = array(
    'name' => 'unflag abuse_whitelist_user',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag favorite'.
  $permissions['unflag favorite'] = array(
    'name' => 'unflag favorite',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag follow'.
  $permissions['unflag follow'] = array(
    'name' => 'unflag follow',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag follow_taxonomy'.
  $permissions['unflag follow_taxonomy'] = array(
    'name' => 'unflag follow_taxonomy',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag gie_node_spam'.
  $permissions['unflag gie_node_spam'] = array(
    'name' => 'unflag gie_node_spam',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag gie_user_whitelist'.
  $permissions['unflag gie_user_whitelist'] = array(
    'name' => 'unflag gie_user_whitelist',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unlock csv_asset_importer feeds'.
  $permissions['unlock csv_asset_importer feeds'] = array(
    'name' => 'unlock csv_asset_importer feeds',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'update action_card content on assigned domains'.
  $permissions['update action_card content on assigned domains'] = array(
    'name' => 'update action_card content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update article content on assigned domains'.
  $permissions['update article content on assigned domains'] = array(
    'name' => 'update article content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update blogs content on assigned domains'.
  $permissions['update blogs content on assigned domains'] = array(
    'name' => 'update blogs content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update discussion content on assigned domains'.
  $permissions['update discussion content on assigned domains'] = array(
    'name' => 'update discussion content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update error_page content on assigned domains'.
  $permissions['update error_page content on assigned domains'] = array(
    'name' => 'update error_page content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update event content on assigned domains'.
  $permissions['update event content on assigned domains'] = array(
    'name' => 'update event content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update funding content on assigned domains'.
  $permissions['update funding content on assigned domains'] = array(
    'name' => 'update funding content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update homepage content on assigned domains'.
  $permissions['update homepage content on assigned domains'] = array(
    'name' => 'update homepage content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update innovation content on assigned domains'.
  $permissions['update innovation content on assigned domains'] = array(
    'name' => 'update innovation content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update long_form_page content on assigned domains'.
  $permissions['update long_form_page content on assigned domains'] = array(
    'name' => 'update long_form_page content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update microsite content on assigned domains'.
  $permissions['update microsite content on assigned domains'] = array(
    'name' => 'update microsite content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update microsite_page content on assigned domains'.
  $permissions['update microsite_page content on assigned domains'] = array(
    'name' => 'update microsite_page content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update needs content on assigned domains'.
  $permissions['update needs content on assigned domains'] = array(
    'name' => 'update needs content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update news content on assigned domains'.
  $permissions['update news content on assigned domains'] = array(
    'name' => 'update news content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update organization content on assigned domains'.
  $permissions['update organization content on assigned domains'] = array(
    'name' => 'update organization content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update page content on assigned domains'.
  $permissions['update page content on assigned domains'] = array(
    'name' => 'update page content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update persona content on assigned domains'.
  $permissions['update persona content on assigned domains'] = array(
    'name' => 'update persona content on assigned domains',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update program content on assigned domains'.
  $permissions['update program content on assigned domains'] = array(
    'name' => 'update program content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update resource content on assigned domains'.
  $permissions['update resource content on assigned domains'] = array(
    'name' => 'update resource content on assigned domains',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use default thumb'.
  $permissions['use default thumb'] = array(
    'name' => 'use default thumb',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'video',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format comments_filtered'.
  $permissions['use text format comments_filtered'] = array(
    'name' => 'use text format comments_filtered',
    'roles' => array(
      'Location Manager' => 'Location Manager',
      'Program Community Manager' => 'Program Community Manager',
      'Sector Manager' => 'Sector Manager',
      'Superadmin' => 'Superadmin',
      'Topic Manager' => 'Topic Manager',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Intern' => 'Intern',
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view hidden fields'.
  $permissions['view hidden fields'] = array(
    'name' => 'view hidden fields',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'simplify',
  );

  // Exported permission: 'view new relic rpm reports'.
  $permissions['view new relic rpm reports'] = array(
    'name' => 'view new relic rpm reports',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'new_relic_rpm',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Intern' => 'Intern',
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view unpublished domain content'.
  $permissions['view unpublished domain content'] = array(
    'name' => 'view unpublished domain content',
    'roles' => array(
      'Microsite Administrator' => 'Microsite Administrator',
      'Superadmin' => 'Superadmin',
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  return $permissions;
}
