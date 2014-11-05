<?php
/**
 * @file
 * config_environment_indicator.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function config_environment_indicator_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'development_server';
  $environment->name = 'Development server';
  $environment->regexurl = 'drupalcampcebu14.prometdev.com';
  $environment->settings = array(
    'color' => '#3b97d3',
    'text_color' => '#ffffff',
    'weight' => '0',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['development_server'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'live_server';
  $environment->name = 'Live server';
  $environment->regexurl = '2014.drupalcebu.org';
  $environment->settings = array(
    'color' => '#ffffff',
    'text_color' => '#000000',
    'weight' => '0',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['live_server'] = $environment;

  return $export;
}
