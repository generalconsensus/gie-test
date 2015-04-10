<?php
/**
 * @file
 * gie_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function gie_search_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "solr",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_combined" : { "status" : 0, "weight" : "0", "settings" : [] },
        "panelizer" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_funding_duration" : true,
              "field_funding_poc" : true,
              "body:value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_funding_duration" : true,
              "field_funding_poc" : true,
              "body:value" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_funding_duration" : true,
              "field_funding_poc" : true,
              "body:value" : true
            },
            "spaces" : "[^\\\\p{L}\\\\p{N}]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_funding_duration" : true,
              "field_funding_poc" : true,
              "body:value" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      },
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_discussion_program" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_funding_author" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "user" },
        "field_funding_deadline" : { "type" : "date" },
        "field_funding_duration" : { "type" : "text" },
        "field_funding_effort" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_funding_eligibility_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_funding_grant_award_value" : { "type" : "integer" },
        "field_funding_innovation_stage" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_funding_innovation_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_funding_organization" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_funding_poc" : { "type" : "text" },
        "field_funding_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_innovation_assistance" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_innovation_cost_bene" : { "type" : "integer" },
        "field_innovation_cost_per_unit" : { "type" : "integer" },
        "field_innovation_created" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_innovation_evidence_avail" : { "type" : "boolean" },
        "field_innovation_funders" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_innovation_funding_goal" : { "type" : "integer" },
        "field_innovation_implemented" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_innovation_program" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_innovation_raised" : { "type" : "integer" },
        "field_innovation_ref_avail" : { "type" : "boolean" },
        "field_innovation_stage" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_innovation_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_org_expertise" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_org_featured" : { "type" : "boolean" },
        "field_org_logo" : { "type" : "integer", "entity_type" : "asset" },
        "field_org_partners" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_org_poc" : { "type" : "integer", "entity_type" : "user" },
        "field_org_telephone" : { "type" : "text" },
        "field_org_text_email" : { "type" : "text" },
        "field_resource_assets" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "asset" },
        "field_resource_author" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "user" },
        "field_resource_date" : { "type" : "date" },
        "field_resource_org" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_resource_program" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_resource_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_term_country" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_term_region" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_term_sector" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_term_topic" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "title_field" : { "type" : "string" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function gie_search_default_search_api_server() {
  $items = array();
  $items['solr'] = entity_import('search_api_server', '{
    "name" : "Solr Server (Overridden)",
    "machine_name" : "solr",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : 8983,
      "path" : "\\/solr\\/drupal",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
