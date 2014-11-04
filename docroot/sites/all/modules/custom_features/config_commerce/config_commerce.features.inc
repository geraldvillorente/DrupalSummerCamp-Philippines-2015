<?php
/**
 * @file
 * config_commerce.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function config_commerce_commerce_product_default_types() {
  $items = array(
    'ticket' => array(
      'type' => 'ticket',
      'name' => 'Ticket',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
    'tshirt' => array(
      'type' => 'tshirt',
      'name' => 'Tshirt',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function config_commerce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
