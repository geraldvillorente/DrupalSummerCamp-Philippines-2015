<?php
/**
 * @file
 * content_sponsor.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function content_sponsor_taxonomy_default_vocabularies() {
  return array(
    'sponsor_type' => array(
      'name' => 'Sponsor type',
      'machine_name' => 'sponsor_type',
      'description' => 'Types of sponsors or level.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
