<?php
/**
 * @file
 * config_mailchimp.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function config_mailchimp_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_user_mailchimp'
  $field_instances['user-user-field_user_mailchimp'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'subscribe' => 0,
        'interest_groups' => array(
          9913 => array(
            'Drupal Cebu Group' => 0,
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mailchimp_lists',
        'settings' => array(
          'interest_groups' => array(),
          'show_interest_groups' => FALSE,
        ),
        'type' => 'mailchimp_lists_subscribe_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_mailchimp',
    'label' => 'Mailchimp',
    'required' => 0,
    'settings' => array(
      'interest_groups_title' => 'Interest Groups',
      'mergefields' => array(
        'EMAIL' => 'field_user_email',
        'FNAME' => 'field_user_first_name',
        'LNAME' => 'field_user_last_name',
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'show_interest_groups' => 0,
      'unsubscribe_on_delete' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 9,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Mailchimp');

  return $field_instances;
}
