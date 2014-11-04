<?php
/**
 * @file
 * context_camp_store_cart_link.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function context_camp_store_cart_link_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
