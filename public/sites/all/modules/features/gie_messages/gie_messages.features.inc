<?php
/**
 * @file
 * gie_messages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_messages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function gie_messages_default_message_type() {
  $items = array();
  $items['comment_notify'] = entity_import('message_type', '{
    "name" : "comment_notify",
    "description" : "Comment notify",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "New comment on [message:field-node-ref:title]",
          "format" : "full_html"
        },
        {
          "value" : "\\u003Ca href=\\u0022[message:field-comment-ref:author:url]\\u0022\\u003E[message:field-comment-ref:author:name]\\u003C\\/a\\u003E left a comment on [message:field-node-ref:title]. See comment: [message:field-comment-ref:url]",
          "format" : "full_html"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['favorite_notify'] = entity_import('message_type', '{
    "name" : "favorite_notify",
    "description" : "Favorite notify",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "[message:field-user-ref:name] has favorited your\\u0026nbsp;[message:field-node-ref:content-type:name]",
          "format" : "filtered_html"
        },
        {
          "value" : "\\u003Ca href=\\u0022url]\\u0022\\u003E[message:field-user-ref:name]\\u003C\\/a\\u003E favorited\\u0026nbsp;[message:field-node-ref:title]. See\\u0026nbsp;[message:field-node-ref:content-type:name]:\\u0026nbsp;[message:field-node-ref:url]",
          "format" : "filtered_html"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
