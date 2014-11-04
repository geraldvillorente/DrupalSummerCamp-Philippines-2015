<?php
/**
 * @file
 * context_hotel.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function context_hotel_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recommended-accommodation';
  $context->description = 'Add blocks on the recommended-accommodation page';
  $context->tag = 'Hotel';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'recommended-accommodation' => 'recommended-accommodation',
        'cheap-accommodation' => 'cheap-accommodation',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'drupalcampcebu2014_helper-drupalcampcebu_hotel_booking' => array(
          'module' => 'drupalcampcebu2014_helper',
          'delta' => 'drupalcampcebu_hotel_booking',
          'region' => 'yellow-region',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add blocks on the recommended-accommodation page');
  t('Hotel');
  $export['recommended-accommodation'] = $context;

  return $export;
}
