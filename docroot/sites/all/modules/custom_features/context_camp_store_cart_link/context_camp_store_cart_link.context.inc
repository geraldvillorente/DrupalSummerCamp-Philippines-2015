<?php
/**
 * @file
 * context_camp_store_cart_link.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function context_camp_store_cart_link_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'camp-store-cart-link';
  $context->description = '';
  $context->tag = 'Drupalcamp Store';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~cart' => '~cart',
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
        'views-9a76aaa89a58bb2a020b1c0f25d3d82d' => array(
          'module' => 'views',
          'delta' => '9a76aaa89a58bb2a020b1c0f25d3d82d',
          'region' => 'yellow-region',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Drupalcamp Store');
  $export['camp-store-cart-link'] = $context;

  return $export;
}
