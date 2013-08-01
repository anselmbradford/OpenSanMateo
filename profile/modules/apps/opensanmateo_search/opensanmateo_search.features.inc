<?php
/**
 * @file
 * opensanmateo_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opensanmateo_search_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function opensanmateo_search_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function opensanmateo_search_default_search_api_index() {
  $items = array();
  $items['san_mateo_content_index'] = entity_import('search_api_index', '{
    "name" : "San Mateo Content Index",
    "machine_name" : "san_mateo_content_index",
    "description" : null,
    "server" : "san_mateo_solr_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "type" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "url" : { "type" : "uri" },
        "field_release_date" : { "type" : "date" },
        "search_api_language" : { "type" : "string" },
        "search_api_aggregation_1" : { "type" : "text" },
        "search_api_aggregation_3" : { "type" : "text" },
        "search_api_aggregation_2" : { "type" : "text" },
        "search_api_aggregation_4" : { "type" : "string" },
        "search_api_aggregation_5" : { "type" : "string" },
        "search_api_aggregation_6" : { "type" : "string" },
        "search_api_aggregation_7" : { "type" : "string" },
        "search_api_site_hash" : { "type" : "uri" },
        "search_api_site_id" : { "type" : "string" },
        "body:value" : { "type" : "text" },
        "field_address:locality" : { "type" : "text" },
        "field_location_address:field_address:locality" : { "type" : "list\\u003Ctext\\u003E" }
      },
      "data_alter_callbacks" : {
        "site_index" : { "status" : 1, "weight" : "-50", "settings" : [] },
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "search_api_aggregation_1" : {
                "name" : "Aggregated Teaser",
                "type" : "fulltext",
                "fields" : [ "field_summary" ],
                "description" : "A Fulltext aggregation of the following fields: Summary."
              },
              "search_api_aggregation_3" : {
                "name" : "Aggregated Author",
                "type" : "fulltext",
                "fields" : [ "author", "field_photo_author", "field_document_author" ],
                "description" : "A Fulltext aggregation of the following fields: Author, author, Author."
              },
              "search_api_aggregation_2" : {
                "name" : "Aggregated Thumbnail",
                "type" : "fulltext",
                "fields" : [ "field_thumbnail_image:file", "field_editors_choice_thumbnail:file" ],
                "description" : "A Fulltext aggregation of the following fields: Thumbnail Image \\u00bb The image file., Thumbnail \\u00bb The image file.."
              },
              "search_api_aggregation_4" : {
                "name" : "Aggregated State",
                "type" : "first",
                "fields" : [
                  "field_address:administrative_area",
                  "field_location_address:field_address:administrative_area"
                ],
                "description" : "A First aggregation of the following fields: Address \\u00bb Administrative area (i.e. State \\/ Province), Address \\u00bb Address \\u00bb Administrative area (i.e. State \\/ Province)."
              },
              "search_api_aggregation_5" : {
                "name" : "Aggregated Postal",
                "type" : "fulltext",
                "fields" : [
                  "field_address:postal_code",
                  "field_location_address:field_address:postal_code"
                ],
                "description" : "A Fulltext aggregation of the following fields: Address \\u00bb Postal code, Address \\u00bb Address \\u00bb Postal code."
              },
              "search_api_aggregation_6" : {
                "name" : "Aggregated Thoroughfare",
                "type" : "first",
                "fields" : [
                  "field_address:thoroughfare",
                  "field_location_address:field_address:thoroughfare"
                ],
                "description" : "A First aggregation of the following fields: Address \\u00bb Thoroughfare (i.e. Street address), Address \\u00bb Address \\u00bb Thoroughfare (i.e. Street address)."
              },
              "search_api_aggregation_7" : {
                "name" : "City",
                "type" : "first",
                "fields" : [
                  "field_address:locality",
                  "field_location_address:field_address:locality"
                ],
                "description" : "A First aggregation of the following fields: Address \\u00bb Locality (i.e. City), Address \\u00bb Address \\u00bb Locality (i.e. City)."
              }
            }
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['san_mateo_quick_search_index'] = entity_import('search_api_index', '{
    "name" : "San Mateo Quick Search Index",
    "machine_name" : "san_mateo_quick_search_index",
    "description" : null,
    "server" : "san_mateo_solr_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "title" : { "type" : "string" },
        "url" : { "type" : "uri" },
        "field_quick_search" : { "type" : "list\\u003Ctext\\u003E", "boost" : "21.0" },
        "search_api_language" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "site_index" : { "status" : 0, "weight" : "-50", "settings" : [] },
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "field_quick_search" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "field_quick_search" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "field_quick_search" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "field_quick_search" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
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
function opensanmateo_search_default_search_api_server() {
  $items = array();
  $items['san_mateo_solr_server'] = entity_import('search_api_server', '{
    "name" : "San Mateo Solr Server",
    "machine_name" : "san_mateo_solr_server",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "scheme" : "http",
      "host" : "solrdev.p2devcloud.com",
      "port" : "8080",
      "path" : "\\/solr-sanmateo.p2devcloud.com",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 1,
      "highlight_data" : 0,
      "http_method" : "POST"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}