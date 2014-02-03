<?php
/**
 * @file
 * mirnitok_yarn.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mirnitok_yarn_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_display_settings|node|yarn_display|form';
  $field_group->group_name = 'group_display_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'yarn_display';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Display settings',
    'weight' => '12',
    'children' => array(
      0 => 'field_product_sale_product',
      1 => 'field_display_image_fid',
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
  $export['group_display_settings|node|yarn_display|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_yarn_conditions|node|yarn_display|default';
  $field_group->group_name = 'group_yarn_conditions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'yarn_display';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_yarn_tabs';
  $field_group->data = array(
    'label' => 'Conditions',
    'weight' => '11',
    'children' => array(
      0 => 'field_product_yarn_brand',
      1 => 'field_product_yarn_length',
      2 => 'field_product_yarn_weight',
      3 => 'product:sku',
      4 => 'product:field_yarn_color',
      5 => 'product:field_yarn_tone',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-yarn-conditions field-group-tab',
        'id' => '',
      ),
    ),
  );
  $export['group_yarn_conditions|node|yarn_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_yarn_description|node|yarn_display|default';
  $field_group->group_name = 'group_yarn_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'yarn_display';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_yarn_tabs';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '13',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-yarn-description field-group-tab',
        'id' => '',
      ),
    ),
  );
  $export['group_yarn_description|node|yarn_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_yarn_tabs|node|yarn_display|default';
  $field_group->group_name = 'group_yarn_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'yarn_display';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '5',
    'children' => array(
      0 => 'group_yarn_conditions',
      1 => 'group_yarn_description',
      2 => 'group_yarn_comments',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-yarn-tabs field-group-tabs',
      ),
    ),
  );
  $export['group_yarn_tabs|node|yarn_display|default'] = $field_group;

  return $export;
}
