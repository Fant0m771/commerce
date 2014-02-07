<?php
/**
 * @file yarn_alters.theme.inc
 * TODO: Enter file description here.
 */


/**
 * Theme function to output wrapped field.
 */
function theme_yarn_alters_products($vars) {
  extract($vars);
  $output = '';
  if (isset($fields[$field_name])) {
    $output .= $fields[$field_name]->wrapper_prefix;
    $output .= $fields[$field_name]->content;
    $output .= $fields[$field_name]->wrapper_suffix;
  }
  return $output;
}