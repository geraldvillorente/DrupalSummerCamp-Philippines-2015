<?php
/**
 * @file
 * flag_hotel.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function flag_hotel_flag_default_flags() {
  $flags = array();
  // Exported flag: "Hotel".
  $flags['hotel'] = array(
    'entity_type' => 'user',
    'title' => 'Hotel',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Book now!',
    'flag_long' => 'I want to book a room in Tune Hotel, Cebu City',
    'flag_message' => '',
    'unflag_short' => 'I don\'t want to book a room in Tune Hotel, Cebu City',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'confirm',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'show_on_profile' => 0,
    'access_uid' => '',
    'flag_confirmation' => 'Confirm your room booking at TUNE Hotel',
    'unflag_confirmation' => 'Cancel your room booking at TUNE Hotel',
    'module' => 'flag_hotel',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
