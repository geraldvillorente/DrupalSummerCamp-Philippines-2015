<?php
/**
 * @file
 * content_sponsor.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function content_sponsor_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Accommodation partner',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '3efe4d0b-6d53-4822-8745-7350bdd054a2',
    'vocabulary_machine_name' => 'sponsor_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Saturday night sponsor',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '5b38173d-9eea-47cf-ae35-9e9109d272ed',
    'vocabulary_machine_name' => 'sponsor_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Newspaper partner',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => '5ff2ac72-f632-45b7-810e-9bb3636fc6cb',
    'vocabulary_machine_name' => 'sponsor_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Community partner',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => '600b021f-cf9f-40bc-9396-36d046011037',
    'vocabulary_machine_name' => 'sponsor_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Lunch sponsor',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '7d6da305-5b92-4192-8122-1f731c898944',
    'vocabulary_machine_name' => 'sponsor_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Coffee sponsor',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '8314afcd-d6cd-437e-9b03-63994bdf5274',
    'vocabulary_machine_name' => 'sponsor_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Silver',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'a8f99331-88fc-45e9-9e72-828066ef2674',
    'vocabulary_machine_name' => 'sponsor_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Bronze',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'ae86b1db-9685-4001-9a79-b661c1711edd',
    'vocabulary_machine_name' => 'sponsor_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Gold',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cf2082c6-00a7-413c-b04b-3b7dc7ba0947',
    'vocabulary_machine_name' => 'sponsor_type',
    'metatags' => array(),
  );
  return $terms;
}
