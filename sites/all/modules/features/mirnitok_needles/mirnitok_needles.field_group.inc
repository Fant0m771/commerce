<?php
/**
 * @file
 * mirnitok_needles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mirnitok_needles_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_display_settings|node|needles_display|form';
  $field_group->group_name = 'group_display_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'needles_display';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Display settings',
    'weight' => '6',
    'children' => array(
      0 => 'field_product_sale_product',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Display settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-display-settings field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_display_settings|node|needles_display|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_needles_conditions|node|needles_display|default';
  $field_group->group_name = 'group_needles_conditions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'needles_display';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_needles_tabs';
  $field_group->data = array(
    'label' => 'Conditions',
    'weight' => '5',
    'children' => array(
      0 => 'field_needles_display_material',
      1 => 'field_needles_type',
      2 => 'product:sku',
      3 => 'product:field_needles_size',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-needles-conditions field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_needles_conditions|node|needles_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_needles_descriptions|node|needles_display|default';
  $field_group->group_name = 'group_needles_descriptions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'needles_display';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_needles_tabs';
  $field_group->data = array(
    'label' => 'Descriptions',
    'weight' => '6',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-needles-descriptions field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_needles_descriptions|node|needles_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_needles_tabs|node|needles_display|default';
  $field_group->group_name = 'group_needles_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'needles_display';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '6',
    'children' => array(
      0 => 'group_needles_conditions',
      1 => 'group_needles_descriptions',
      2 => 'group_needles_comments',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-needles-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_needles_tabs|node|needles_display|default'] = $field_group;

  return $export;
}
