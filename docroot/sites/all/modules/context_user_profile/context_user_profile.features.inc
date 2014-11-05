<?php
/**
 * @file
 * context_user_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function context_user_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
