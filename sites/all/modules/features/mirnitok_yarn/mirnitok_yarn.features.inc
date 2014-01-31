<?php
/**
 * @file
 * mirnitok_yarn.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mirnitok_yarn_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mirnitok_yarn_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mirnitok_yarn_node_info() {
  $items = array(
    'yarn_display' => array(
      'name' => t('Yarn display'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}