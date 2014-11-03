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
        'views-9a76aaa89a58bb2a020b1c0f25d3d82d' => array(
          'module' => 'views',
          'delta' => '9a76aaa89a58bb2a020b1c0f25d3d82d',
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
  $export['camp-store-cart-link'] = $context;

  return $export;
}
