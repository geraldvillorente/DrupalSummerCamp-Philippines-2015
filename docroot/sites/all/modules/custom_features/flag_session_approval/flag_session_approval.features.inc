<?php
/**
 * @file
 * flag_session_approval.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function flag_session_approval_flag_default_flags() {
  $flags = array();
  // Exported flag: "Session Approval".
  $flags['session_approval'] = array(
    'entity_type' => 'node',
    'title' => 'Session Approval',
    'global' => 1,
    'types' => array(
      0 => 'session',
    ),
    'flag_short' => 'Approve Session',
    'flag_long' => 'This session will be included in the program.',
    'flag_message' => '<em>[node:title]</em> session has been approved.',
    'unflag_short' => 'Decline Session',
    'unflag_long' => 'This session will not be included in the program.',
    'unflag_message' => '<em>[node:title]</em> session has been declined.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'flag_session_approval',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
