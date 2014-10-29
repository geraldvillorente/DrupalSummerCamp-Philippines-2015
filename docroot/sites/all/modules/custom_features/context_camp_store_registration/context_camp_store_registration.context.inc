<?php
/**
 * @file
 * context_camp_store_registration.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function context_camp_store_registration_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'camp-store-registration';
  $context->description = '';
  $context->tag = 'Drupalcamp Store';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'registration' => 'registration',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-f57a465c8e6c29f82c77a667ed2ed9eb' => array(
          'module' => 'views',
          'delta' => 'f57a465c8e6c29f82c77a667ed2ed9eb',
          'region' => 'yellow-region',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Drupalcamp Store');
  $export['camp-store-registration'] = $context;

  return $export;
}
