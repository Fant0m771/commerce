<?php
/**
 * @file
 * mirnitok_commerce.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mirnitok_commerce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mirnitok_commerce_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mirnitok_commerce_node_info() {
  $items = array(
    'store' => array(
      'name' => t('Store'),
      'base' => 'node_content',
      'description' => t('Existing store addresses'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
