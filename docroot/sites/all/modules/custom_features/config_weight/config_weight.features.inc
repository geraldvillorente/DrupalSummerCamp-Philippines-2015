<?php
/**
 * @file
 * config_weight.features.inc
 */

/**
 * Implements hook_weight_features_default_settings().
 */
function config_weight_weight_features_default_settings() {
  $settings = array();

  $settings['session'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
