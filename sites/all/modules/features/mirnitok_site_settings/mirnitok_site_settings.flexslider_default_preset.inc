<?php
/**
 * @file
 * mirnitok_site_settings.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function mirnitok_site_settings_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'slider';
  $preset->title = 'slider';
  $preset->theme = 'classic';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'swing',
    'direction' => 'horizontal',
    'reverse' => 0,
    'smoothHeight' => 0,
    'startAt' => '0',
    'animationSpeed' => '600',
    'initDelay' => '0',
    'useCSS' => 1,
    'touch' => 1,
    'video' => 0,
    'keyboard' => 1,
    'multipleKeyboard' => 0,
    'mousewheel' => 0,
    'controlsContainer' => '.flex-control-nav-container',
    'sync' => '',
    'asNavFor' => '',
    'itemWidth' => '220',
    'itemMargin' => '10',
    'minItems' => '3',
    'maxItems' => '3',
    'move' => '0',
    'animation' => 'slide',
    'slideshow' => 1,
    'slideshowSpeed' => '4000',
    'directionNav' => 1,
    'controlNav' => '1',
    'prevText' => 'Назад',
    'nextText' => 'Далее',
    'pausePlay' => 0,
    'pauseText' => 'Пауза',
    'playText' => 'Старт',
    'randomize' => 0,
    'thumbCaptions' => 0,
    'thumbCaptionsBoth' => 0,
    'animationLoop' => 0,
    'pauseOnAction' => 1,
    'pauseOnHover' => 1,
    'manualControls' => '',
  );
  $export['slider'] = $preset;

  return $export;
}
