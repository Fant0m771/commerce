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

/**
 * Implements hook_ds_layout_settings_info().
 */
function mirnitok_yarn_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|yarn_display|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'yarn_display';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'comments',
        1 => 'product:field_yarn_image',
        2 => 'field_product_variations',
        3 => 'product:commerce_price',
        4 => 'body',
        5 => 'product:commerce_stock',
        6 => 'group_yarn_tabs',
        7 => 'field_product_yarn_brand',
        8 => 'product:field_yarn_color',
        9 => 'product:field_yarn_tone',
        10 => 'product:sku',
        11 => 'field_product_yarn_length',
        12 => 'group_yarn_conditions',
        13 => 'field_product_yarn_weight',
        14 => 'group_yarn_description',
        15 => 'group_yarn_comments',
      ),
    ),
    'fields' => array(
      'comments' => 'ds_content',
      'product:field_yarn_image' => 'ds_content',
      'field_product_variations' => 'ds_content',
      'product:commerce_price' => 'ds_content',
      'body' => 'ds_content',
      'product:commerce_stock' => 'ds_content',
      'group_yarn_tabs' => 'ds_content',
      'field_product_yarn_brand' => 'ds_content',
      'product:field_yarn_color' => 'ds_content',
      'product:field_yarn_tone' => 'ds_content',
      'product:sku' => 'ds_content',
      'field_product_yarn_length' => 'ds_content',
      'group_yarn_conditions' => 'ds_content',
      'field_product_yarn_weight' => 'ds_content',
      'group_yarn_description' => 'ds_content',
      'group_yarn_comments' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|yarn_display|default'] = $ds_layout;

  return $export;
}
