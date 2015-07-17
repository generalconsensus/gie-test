<?php
/**
 * @file
 * gie_general.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function gie_general_default_rules_configuration() {
  $items = array();
  $items['rules_new_comment_notify'] = entity_import('rules_config', '{ "rules_new_comment_notify" : {
      "LABEL" : "New comment notify",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert" : [] },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "comment:author:name" ],
            "value" : [ "comment:node:author:name" ]
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "comment:node:author:mail" ],
            "subject" : "New comment on \\u0027[comment:node:title]\\u0027",
            "message" : "[comment:author:name] has left a comment on \\u0027[comment:node:title]\\u0027. See comment: [comment:url]",
            "from" : [ "" ],
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
