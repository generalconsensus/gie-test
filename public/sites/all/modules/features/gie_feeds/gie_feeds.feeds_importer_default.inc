<?php
/**
 * @file
 * gie_feeds.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function gie_feeds_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_importer';
  $feeds_importer->config = array(
    'name' => 'CSV Importer',
    'description' => 'Import content from CSV file',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Sector',
            'target' => 'field_term_sector',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          2 => array(
            'source' => 'Website',
            'target' => 'field_innovation_website:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Short Description',
            'target' => 'field_innovation_desc',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Cost Per Unit',
            'target' => 'field_innovation_cost_per_unit',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Region',
            'target' => 'field_term_region',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          6 => array(
            'source' => 'Country Implemented In',
            'target' => 'field_innovation_implemented',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          7 => array(
            'source' => 'Country Created In',
            'target' => 'field_innovation_created',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          8 => array(
            'source' => 'Featured Image',
            'target' => 'field_innovation_image',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Funded By',
            'target' => 'field_innovation_funders:etid',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Published status',
            'target' => 'status',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'In the News Title',
            'target' => 'field_innovation_news:title',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'In the News URL',
            'target' => 'field_innovation_news:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'innovation',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_importer'] = $feeds_importer;

  return $export;
}
