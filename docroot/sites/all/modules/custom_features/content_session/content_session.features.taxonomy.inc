<?php
/**
 * @file
 * content_session.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function content_session_taxonomy_default_vocabularies() {
  return array(
    'day' => array(
      'name' => 'Day',
      'machine_name' => 'day',
      'description' => 'Target Day of presentation',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'level' => array(
      'name' => 'Level',
      'machine_name' => 'level',
      'description' => 'Session Level',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'type' => array(
      'name' => 'Type',
      'machine_name' => 'type',
      'description' => 'Session Type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
