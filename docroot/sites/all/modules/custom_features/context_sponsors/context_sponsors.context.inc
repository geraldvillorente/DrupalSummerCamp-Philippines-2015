<?php
/**
 * @file
 * context_sponsors.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function context_sponsors_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sponsors';
  $context->description = 'This is for the sponsors layout.';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sponsors' => 'sponsors',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'views-sponsors-gold_block_2' => array(
          'module' => 'views',
          'delta' => 'sponsors-gold_block_2',
          'region' => 'grey-region',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This is for the sponsors layout.');
  $export['sponsors'] = $context;

  return $export;
}
