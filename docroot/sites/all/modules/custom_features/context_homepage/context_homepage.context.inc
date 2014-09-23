<?php
/**
 * @file
 * context_homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function context_homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'This is the site\'s homepage';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-proposals-block_1' => array(
          'module' => 'views',
          'delta' => 'proposals-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'drupalcebu2014_map-drupalcebu2014_map_text' => array(
          'module' => 'drupalcebu2014_map',
          'delta' => 'drupalcebu2014_map_text',
          'region' => 'map-region',
          'weight' => '-10',
        ),
        'views-sponsors-gold_block' => array(
          'module' => 'views',
          'delta' => 'sponsors-gold_block',
          'region' => 'grey-region',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('This is the site\'s homepage');
  $export['homepage'] = $context;

  return $export;
}
