<?php
/**
 * @file
 * content_product_uuid.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_product_uuid_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
