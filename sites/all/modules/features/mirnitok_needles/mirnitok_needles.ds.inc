<?php
/**
 * @file
 * mirnitok_needles.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mirnitok_needles_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|needles_display|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'needles_display';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '18',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|needles_display|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mirnitok_needles_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|needles_display|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'needles_display';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'product:field_needles_image',
        1 => 'field_needles_product_variations',
        2 => 'field_needles_display_material',
        3 => 'product:field_needles_size',
        4 => 'product:commerce_price',
        5 => 'field_needles_type',
        6 => 'product:sku',
        7 => 'group_needles_conditions',
        8 => 'product:commerce_stock',
        9 => 'group_needles_tabs',
        10 => 'group_needles_descriptions',
        11 => 'group_needles_comments',
        12 => 'body',
        13 => 'comments',
      ),
    ),
    'fields' => array(
      'product:field_needles_image' => 'ds_content',
      'field_needles_product_variations' => 'ds_content',
      'field_needles_display_material' => 'ds_content',
      'product:field_needles_size' => 'ds_content',
      'product:commerce_price' => 'ds_content',
      'field_needles_type' => 'ds_content',
      'product:sku' => 'ds_content',
      'group_needles_conditions' => 'ds_content',
      'product:commerce_stock' => 'ds_content',
      'group_needles_tabs' => 'ds_content',
      'group_needles_descriptions' => 'ds_content',
      'group_needles_comments' => 'ds_content',
      'body' => 'ds_content',
      'comments' => 'ds_content',
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
  $export['node|needles_display|default'] = $ds_layout;

  return $export;
}
