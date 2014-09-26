<?php
/**
 * @file
 * flag_partner.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function flag_partner_flag_default_flags() {
  $flags = array();
  // Exported flag: "Partner".
  $flags['partner'] = array(
    'entity_type' => 'node',
    'title' => 'Partner',
    'global' => 0,
    'types' => array(
      0 => 'sponsor',
    ),
    'flag_short' => 'Flag as Partner',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unflag as Partner',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'flag_partner',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
