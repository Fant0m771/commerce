<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

function yarn_preprocess_html(&$variables) {
  //drupal_add_css(path_to_theme() . '/pixelmatrix-uniform/default/css/uniform.default.min.css');
  //drupal_add_js(path_to_theme() . '/pixelmatrix-uniform/jquery.uniform.min.js');
  drupal_add_js(path_to_theme() . "/js/script.js", array('scope' => 'footer'));

  /*
  drupal_add_js("jQuery(document).ready(function () {
                 jQuery('select, input').not('.ajax-processed, input#filter_yarn, input#edit-submit, .form-submit').uniform();
    });", 'inline');
  */
}

/**
 * Override or insert variables into the node template.
 */
function yarn_preprocess_node(&$variables) {
  if ($variables['view_mode'] == 'full' && node_is_page($variables['node'])) {
    $variables['classes_array'][] = 'node-full';
  }
}
