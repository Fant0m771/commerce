<?php
/**
 * @file
 * mirnitok_yarn.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mirnitok_yarn_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|yarn_display|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'yarn_display';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|yarn_display|default'] = $ds_fieldsetting;

  return $export;
}
