<?php
/**
 * @file
 * config_imce_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_imce_profiles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
