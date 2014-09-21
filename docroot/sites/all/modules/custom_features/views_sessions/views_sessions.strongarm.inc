<?php
/**
 * @file
 * views_sessions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function views_sessions_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_session_time';
  $strongarm->value = 'h:i A';
  $export['date_format_session_time'] = $strongarm;

  return $export;
}
