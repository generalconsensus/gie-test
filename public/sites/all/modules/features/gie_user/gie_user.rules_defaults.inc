<?php
/**
 * @file
 * gie_user.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function gie_user_default_rules_configuration() {
  $items = array();
  $items['rules_redirect_user_edit'] = entity_import('rules_config', '{ "rules_redirect_user_edit" : {
      "LABEL" : "Redirect user edit",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [] },
      "DO" : [ { "redirect" : { "url" : "[account:url]", "force" : "0" } } ]
    }
  }');
  return $items;
}
