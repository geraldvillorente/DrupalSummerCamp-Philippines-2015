<?php
/**
 * @file
 * content_session.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function content_session_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Beginner',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2532e5e7-d58b-42d3-a650-1ba3f3137bf0',
    'vocabulary_machine_name' => 'level',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'DevOps',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '461c7fca-b91f-4669-87f7-c3dc1e491f40',
    'vocabulary_machine_name' => 'type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Advanced',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '7cae4146-a419-44a2-a5fc-fda1f3928768',
    'vocabulary_machine_name' => 'level',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Day 2',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '803ab818-7a32-47b4-a8b4-9107ec4446a0',
    'vocabulary_machine_name' => 'day',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Intermediate',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '9857b671-0824-4450-a134-84ad2bbd4108',
    'vocabulary_machine_name' => 'level',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Business',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '9aba3494-07ec-4712-83d6-2f26b5c3659d',
    'vocabulary_machine_name' => 'type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Front End',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'a8ed3da0-5866-4828-b641-a54b7fabf821',
    'vocabulary_machine_name' => 'type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Back End',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'b00d3598-c7b8-4c3b-a75c-2706cd989f50',
    'vocabulary_machine_name' => 'type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Day 1',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fd7224aa-ff58-47a4-9b73-c6e2c2f2c13a',
    'vocabulary_machine_name' => 'day',
    'metatags' => array(),
  );
  return $terms;
}
