<?php
/**
 * @file
 * config_metatag.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_metatag_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
