<?php
/**
 * @file
 * config_responsive_menus.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_responsive_menus_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
