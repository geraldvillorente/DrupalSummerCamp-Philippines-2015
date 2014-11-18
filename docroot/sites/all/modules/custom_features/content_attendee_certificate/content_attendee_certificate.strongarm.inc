<?php
/**
 * @file
 * content_attendee_certificate.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function content_attendee_certificate_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__attendee_certificate';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__attendee_certificate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_attendee_certificate';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_attendee_certificate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_attendee_certificate';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_attendee_certificate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_attendee_certificate';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_attendee_certificate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_attendee_certificate';
  $strongarm->value = '1';
  $export['node_preview_attendee_certificate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_attendee_certificate';
  $strongarm->value = 0;
  $export['node_submitted_attendee_certificate'] = $strongarm;

  return $export;
}
