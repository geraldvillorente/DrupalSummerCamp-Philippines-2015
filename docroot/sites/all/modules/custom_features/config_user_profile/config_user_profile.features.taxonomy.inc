<?php
/**
 * @file
 * config_user_profile.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function config_user_profile_taxonomy_default_vocabularies() {
  return array(
    'food_preference' => array(
      'name' => 'Food preference',
      'machine_name' => 'food_preference',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
