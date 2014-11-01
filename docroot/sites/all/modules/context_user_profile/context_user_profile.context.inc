<?php
/**
 * @file
 * context_user_profile.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function context_user_profile_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user-profile';
  $context->description = 'This is for a user profile';
  $context->tag = 'user';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sessions_list-block' => array(
          'module' => 'views',
          'delta' => 'sessions_list-block',
          'region' => 'yellow-region',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This is for a user profile');
  t('user');
  $export['user-profile'] = $context;

  return $export;
}
