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
  $feeds_importer->id = 'csv_asset_importer';
  $feeds_importer->config = array(
    'name' => 'CSV Asset Importer',
    'description' => 'Import Assets',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
      'plugin_key' => 'AssetFeedsProcessor',
      'config' => array(
        'asset_type' => 'video',
        'expire' => '-1',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'field_asset_video_desc',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Video',
            'target' => 'field_asset_video_file:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Author',
            'target' => 'uid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'video',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_asset_importer'] = $feeds_importer;

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
            'source' => 'Related Organization',
            'target' => 'field_innovation_related_org:etid',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Funded By',
            'target' => 'field_innovation_funders:etid',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Published status',
            'target' => 'status',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'In the News Title',
            'target' => 'field_innovation_news:title',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'In the News URL',
            'target' => 'field_innovation_news:url',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Point of Contact',
            'target' => 'field_innovation_poc:etid',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Assistance',
            'target' => 'field_innovation_assistance',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Author',
            'target' => 'uid',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Program',
            'target' => 'field_innovation_program:etid',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'How it Works',
            'target' => 'field_innovation_works',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'Status Update',
            'target' => 'field_innovation_status_update',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'Current Users/Testers Include',
            'target' => 'field_innovation_testers',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'Topic',
            'target' => 'field_term_topic',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'Innovation Type',
            'target' => 'field_innovation_type',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'Video',
            'target' => 'field_innovation_assets:label',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'Funding Raised',
            'target' => 'field_innovation_raised',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'Innovation Stage',
            'target' => 'field_innovation_stage',
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
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_importer'] = $feeds_importer;

  return $export;
}
