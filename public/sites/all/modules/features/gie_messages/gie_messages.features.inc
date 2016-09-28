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
          "value" : "\\u003Cp\\u003EDear [message:user],\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-comment-ref:author:url]\\u0022\\u003E[message:field-comment-ref:author:name]\\u003C\\/a\\u003E just commented on [message:field-node-ref:title]:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cdiv\\u003E[message:field-comment-ref:body]\\u003C\\/div\\u003E\\r\\n\\r\\n\\u003Cp\\u003EGo reply to [message:field-comment-ref:author:name]\\u0027s comment \\u003Ca href=\\u0022[message:field-comment-ref:url]\\u0022\\u003Ehere\\u003C\\/a\\u003E!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIs your user profile complete? The Exchange alerts you to new funding opportunities, innovations, events and more that match your profile and interests. Click \\u003Ca href=\\u0022[message:user:url]\\u0022\\u003Ehere\\u003C\\/a\\u003E to complete your profile.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ECheck out \\u003Ca href=\\u0022[site:url]dashboard\\u0022\\u003Eyour dashboard\\u003C\\/a\\u003E to view the latest content on the Exchange tailored to you!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ESincerely,\\u003Cbr \\/\\u003E\\r\\nThe Exchange Team\\u003Cbr \\/\\u003E\\r\\ninfo@globalinnovationexchange.com\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html"
        },
        {
          "value" : "\\u003Cp\\u003E[message:field-comment-ref:author:name] commented on [message:field-node-ref:title]: [message:field-comment-ref:url]\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['comment_reply_notify'] = entity_import('message_type', '{
    "name" : "comment_reply_notify",
    "description" : "Comment reply notify",
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
          "value" : "[message:field-comment-ref:author:name]\\u0026nbsp;replied to your comment on [message:field-node-ref:title]",
          "format" : "full_html"
        },
        {
          "value" : "\\u003Cp\\u003EDear [message:user],\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-comment-ref:author:url]\\u0022\\u003E[message:field-comment-ref:author:name]\\u003C\\/a\\u003E replied to your comment on [message:field-node-ref:title]:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cdiv\\u003E[message:field-comment-ref:body]\\u003C\\/div\\u003E\\r\\n\\r\\n\\u003Cp\\u003EGo reply to [message:field-comment-ref:author:name]\\u0027s comment \\u003Ca href=\\u0022[message:field-comment-ref:url]\\u0022\\u003Ehere\\u003C\\/a\\u003E!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIs your user profile complete? The Exchange alerts you to new funding opportunities, innovations, events and more that match your profile and interests. Click \\u003Ca href=\\u0022[message:user:url]\\u0022\\u003Ehere\\u003C\\/a\\u003E to complete your profile.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ECheck out \\u003Ca href=\\u0022[site:url]dashboard\\u0022\\u003Eyour dashboard\\u003C\\/a\\u003E to view the latest content on the Exchange tailored to you!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ESincerely,\\u003Cbr \\/\\u003E\\r\\nThe Exchange Team\\u003Cbr \\/\\u003E\\r\\ninfo@globalinnovationexchange.com\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html"
        },
        {
          "value" : "[message:field-comment-ref:author:name] replied to your comment on [message:field-node-ref:title]: [message:field-comment-ref:url]",
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
          "format" : "full_html"
        },
        {
          "value" : "\\u003Cp\\u003EDear [message:user],\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-user-ref:url]\\u0022\\u003E[message:field-user-ref:name]\\u003C\\/a\\u003E is now following [message:field-node-ref:title].\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EConnect with [message:field-user-ref:name] by viewing [message:field-user-ref:name]\\u2019s Profile or sending [message:field-user-ref:name] a note!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIs your user profile complete? The Exchange alerts you to new funding opportunities, innovations, events and more that match your profile and interests. Click \\u003Ca href=\\u0022[message:user:url]\\u0022\\u003Ehere\\u003C\\/a\\u003E to complete your profile.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ECheck out your \\u003Ca href=\\u0022[site:url]dashboard\\u0022\\u003Edashboard\\u003C\\/a\\u003E to view the latest content on the Exchange tailored to you!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ESincerely,\\u003Cbr \\/\\u003E\\r\\nThe Exchange Team\\u003Cbr \\/\\u003E\\r\\ninfo@globalinnovationexchange.com\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html"
        },
        {
          "value" : "\\u003Cp\\u003E[message:field-user-ref:name] favorited [message:field-node-ref:title]: [message:field-node-ref:url]\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['follow_user_notify'] = entity_import('message_type', '{
    "name" : "follow_user_notify",
    "description" : "Follow: User Notify",
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
          "value" : "[message:field-user-ref:name] is now following you.",
          "format" : "full_html"
        },
        {
          "value" : "\\u003Cp\\u003EDear [message:user],\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-user-ref:url]\\u0022\\u003E[message:field-user-ref:name]\\u003C\\/a\\u003E is now following you on the Global Innovation Exchange!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EGo view\\u0026nbsp;[message:field-user-ref:name]\\u0027s profile, send\\u0026nbsp;[message:field-user-ref:name] a note, or follow\\u0026nbsp;[message:field-user-ref:name] back!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIs your user profile complete? The Exchange alerts you to new funding opportunities, innovations, events and more that match your profile and interests. Click \\u003Ca href=\\u0022[message:user:url]\\u0022\\u003Ehere\\u003C\\/a\\u003E to complete your profile.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ECheck out \\u003Ca href=\\u0022[site:url]dashboard\\u0022\\u003Eyour dashboard\\u003C\\/a\\u003E to view the latest content on the Exchange tailored to you!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ESincerely,\\u003Cbr \\/\\u003E\\r\\nThe Exchange Team\\u003Cbr \\/\\u003E\\r\\ninfo@globalinnovationexchange.com\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html"
        },
        {
          "value" : "\\u003Cp\\u003E[message:field-user-ref:name] followed you. Follow them back: [message:field-user-ref:url]\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['funding_recommendation'] = entity_import('message_type', '{
    "name" : "funding_recommendation",
    "description" : "Funding recommendation",
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
          "value" : "You have a new funding recommendation! Based on your preferences, we think you might be interested in \\u0022[message:field-node-ref:title-field]\\u0022. View here: [message:field-node-ref:url]",
          "format" : "filtered_html"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['innovation_recommendation'] = entity_import('message_type', '{
    "name" : "innovation_recommendation",
    "description" : "Innovation recommendation",
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
          "value" : "You have a new innovation recommendation! Based on your preferences, we think you might be interested in \\u0022[message:field-node-ref:title-field]\\u0022. View here: [message:field-node-ref:url]",
          "format" : "filtered_html"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['microsite_admin_recommended'] = entity_import('message_type', '{
    "name" : "microsite_admin_recommended",
    "description" : "Microsite Admin recommended",
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
          "value" : "[message:field-domain-text]: [message:field-node-ref:author] recommended new content",
          "format" : "filtered_html"
        },
        {
          "value" : "[message:field-node-ref:author] has recommended a new [message:field-node-ref:content-type] for [message:field-domain-text]: [message:field-node-ref:url]",
          "format" : "filtered_html"
        },
        {
          "value" : "[message:field-node-ref:author] has recommended a new [message:field-node-ref:content-type] for [message:field-domain-text]: [message:field-node-ref:url]",
          "format" : "filtered_html"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['microsite_new_content'] = entity_import('message_type', '{
    "name" : "microsite_new_content",
    "description" : "Microsite New Content",
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
          "value" : "[message:field-domain-text]:\\u0026nbsp;[message:field-node-ref:author] posted new content",
          "format" : "filtered_html"
        },
        {
          "value" : "[message:field-domain-text]:\\u0026nbsp;[message:field-node-ref:author] has posted a new\\u0026nbsp;[message:field-node-ref:content-type]:\\u0026nbsp;[message:field-node-ref:url]",
          "format" : "filtered_html"
        },
        {
          "value" : "[message:field-domain-text]:\\u0026nbsp;[message:field-node-ref:author] has posted a new\\u0026nbsp;[message:field-node-ref:content-type]:\\u0026nbsp;[message:field-node-ref:url]",
          "format" : "filtered_html"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node_update_notify'] = entity_import('message_type', '{
    "name" : "node_update_notify",
    "description" : "Node update notify",
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
          "value" : "[message:field-node-ref:title] has been updated",
          "format" : "full_html"
        },
        {
          "value" : "\\u003Cp\\u003E[message:field-node-ref:title] has been updated:\\u0026nbsp;[message:field-node-ref:url]\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html"
        },
        {
          "value" : "\\u003Cp\\u003E[message:field-node-ref:title] has been updated: [message:field-node-ref:url]\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['user_follow_create'] = entity_import('message_type', '{
    "name" : "user_follow_create",
    "description" : "User follow create",
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
          "value" : "[message:field-node-ref:author] posted new content",
          "format" : "filtered_html"
        },
        {
          "value" : "[message:field-node-ref:author] has posted a new\\u0026nbsp;[message:field-node-ref:content-type]:\\u0026nbsp;[message:field-node-ref:url]",
          "format" : "filtered_html"
        },
        {
          "value" : "[message:field-node-ref:author] has posted a new\\u0026nbsp;[message:field-node-ref:content-type]:\\u0026nbsp;[message:field-node-ref:url]",
          "format" : "filtered_html"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
