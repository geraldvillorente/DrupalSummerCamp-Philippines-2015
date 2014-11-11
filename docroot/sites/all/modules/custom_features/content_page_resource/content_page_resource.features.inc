<?php
/**
 * @file
 * content_page_resource.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_page_resource_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_page_resource_node_info() {
  $items = array(
    'page_resource' => array(
      'name' => t('Page resource'),
      'base' => 'node_content',
      'description' => t('This is a page with attached files as resources.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
