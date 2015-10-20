<?php
/**
 * @file
 * gie_s3.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gie_s3_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_default_scheme';
  $strongarm->value = 's3';
  $export['file_default_scheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_private_path';
  $strongarm->value = '';
  $export['file_private_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_public_path';
  $strongarm->value = 'sites/default/files';
  $export['file_public_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_public_schema';
  $strongarm->value = array(
    0 => 'public',
    1 => 's3',
  );
  $export['file_public_schema'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_awssdk2_access_key';
  $strongarm->value = 'AKIAJMHZDHNBALI6RMMQ';
  $export['s3fs_awssdk2_access_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_awssdk2_default_cache_config';
  $strongarm->value = '';
  $export['s3fs_awssdk2_default_cache_config'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_awssdk2_secret_key';
  $strongarm->value = 'PTCZuvHXjdzpVScJboIIWbPhEPTQWQD3M7pEJuay';
  $export['s3fs_awssdk2_secret_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_bucket';
  $strongarm->value = 'giexchange-dev';
  $export['s3fs_bucket'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_cache_control_header';
  $strongarm->value = '';
  $export['s3fs_cache_control_header'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_domain';
  $strongarm->value = '';
  $export['s3fs_domain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_hostname';
  $strongarm->value = '';
  $export['s3fs_hostname'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_ignore_cache';
  $strongarm->value = 0;
  $export['s3fs_ignore_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_no_rewrite_cssjs';
  $strongarm->value = 0;
  $export['s3fs_no_rewrite_cssjs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_presigned_urls';
  $strongarm->value = '';
  $export['s3fs_presigned_urls'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_region';
  $strongarm->value = 'us-east-1';
  $export['s3fs_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_root_folder';
  $strongarm->value = '';
  $export['s3fs_root_folder'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_saveas';
  $strongarm->value = '';
  $export['s3fs_saveas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_torrents';
  $strongarm->value = '';
  $export['s3fs_torrents'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_use_cname';
  $strongarm->value = 0;
  $export['s3fs_use_cname'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_use_customhost';
  $strongarm->value = 0;
  $export['s3fs_use_customhost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_use_https';
  $strongarm->value = 0;
  $export['s3fs_use_https'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_use_instance_profile';
  $strongarm->value = 0;
  $export['s3fs_use_instance_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_use_s3_for_private';
  $strongarm->value = 0;
  $export['s3fs_use_s3_for_private'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_use_s3_for_public';
  $strongarm->value = 0;
  $export['s3fs_use_s3_for_public'] = $strongarm;

  return $export;
}
