<?php
/**
 * @file
 * config_mailchimp.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function config_mailchimp_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_user_mailchimp'
  $field_bases['field_user_mailchimp'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_user_mailchimp',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'mailchimp_lists',
    'settings' => array(
      'double_opt_in' => 0,
      'mc_list_id' => '1be4349981',
      'send_welcome' => 0,
    ),
    'translatable' => 0,
    'type' => 'mailchimp_lists_subscription',
  );

  return $field_bases;
}
