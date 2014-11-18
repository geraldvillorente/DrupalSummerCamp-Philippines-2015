<?php
/**
 * @file
 * content_attendee_certificate.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_attendee_certificate_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_attendee_certificate_node_info() {
  $items = array(
    'attendee_certificate' => array(
      'name' => t('Attendee certificate'),
      'base' => 'node_content',
      'description' => t('This is the certificate of attendance of Drupalcamp Cebu attendees.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
