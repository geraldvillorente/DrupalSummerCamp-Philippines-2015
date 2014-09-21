<?php
/**
 * @file
 * views_sessions.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function views_sessions_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'sessions';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Sessions';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_sessions-block',
      'hide_title' => 1,
      'title' => 'Day 1',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_sessions-block_1',
      'hide_title' => 1,
      'title' => 'Day 2',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Day 1');
  t('Day 2');
  t('Sessions');

  $export['sessions'] = $quicktabs;

  return $export;
}
