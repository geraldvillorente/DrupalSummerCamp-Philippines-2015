<?php
/**
 * @file
 * config_user_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function config_user_profile_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about_food|user|user|form';
  $field_group->group_name = 'group_about_food';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About your food',
    'weight' => '2',
    'children' => array(
      0 => 'field_food_preference',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-about-food field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_about_food|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buy_tshirt|user|user|form';
  $field_group->group_name = 'group_buy_tshirt';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Want to buy the Drupalcamp Cebu tshirt?',
    'weight' => '3',
    'children' => array(
      0 => 'field_buy_tshirt',
      1 => 'field_tshirt_size',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Want to buy the Drupalcamp Cebu tshirt?',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-buy-tshirt field-group-fieldset',
        'description' => '1 t-shirt for PHP200 (on or before Oct 31)
1 t-shirt for PHP230 (After Oct 31)',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_buy_tshirt|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_personal_info|user|user|form';
  $field_group->group_name = 'group_user_personal_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_biography',
      1 => 'field_image',
      2 => 'field_user_company',
      3 => 'field_user_first_name',
      4 => 'field_user_last_name',
      5 => 'field_user_position',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-personal-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_personal_info|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_subscription|user|user|form';
  $field_group->group_name = 'group_user_subscription';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'MailChimp Subscription',
    'weight' => '4',
    'children' => array(
      0 => 'field_user_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-subscription field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_subscription|user|user|form'] = $field_group;

  return $export;
}
