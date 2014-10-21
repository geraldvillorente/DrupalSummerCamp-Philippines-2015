<?php
/**
 * @file
 * config_responsive_menus.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_responsive_menus_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_css_selectors';
  $strongarm->value = '#main-menu';
  $export['responsive_menus_css_selectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_disable_mouse_events';
  $strongarm->value = array(
    1 => 0,
  );
  $export['responsive_menus_disable_mouse_events'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_ignore_admin';
  $strongarm->value = array(
    1 => '1',
  );
  $export['responsive_menus_ignore_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_close_size';
  $strongarm->value = '18px';
  $export['responsive_menus_mean_menu_close_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_close_txt';
  $strongarm->value = 'X';
  $export['responsive_menus_mean_menu_close_txt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_contract_txt';
  $strongarm->value = '-';
  $export['responsive_menus_mean_menu_contract_txt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_css_selectors';
  $strongarm->value = '#main-menu';
  $export['responsive_menus_mean_menu_css_selectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_expand_children';
  $strongarm->value = '1';
  $export['responsive_menus_mean_menu_expand_children'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_expand_txt';
  $strongarm->value = '+';
  $export['responsive_menus_mean_menu_expand_txt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_media_size';
  $strongarm->value = '480';
  $export['responsive_menus_mean_menu_media_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_position';
  $strongarm->value = 'right';
  $export['responsive_menus_mean_menu_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_remove_attrs';
  $strongarm->value = '1';
  $export['responsive_menus_mean_menu_remove_attrs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_show_children';
  $strongarm->value = '1';
  $export['responsive_menus_mean_menu_show_children'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_trigger_txt';
  $strongarm->value = '<span /><span /><span />';
  $export['responsive_menus_mean_menu_trigger_txt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_media_size';
  $strongarm->value = '768';
  $export['responsive_menus_media_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_no_jquery_update';
  $strongarm->value = array(
    1 => 0,
  );
  $export['responsive_menus_no_jquery_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_remove_attributes';
  $strongarm->value = array(
    1 => '1',
  );
  $export['responsive_menus_remove_attributes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_simple_absolute';
  $strongarm->value = array(
    1 => 0,
  );
  $export['responsive_menus_simple_absolute'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_simple_text';
  $strongarm->value = '☰';
  $export['responsive_menus_simple_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_style';
  $strongarm->value = 'responsive_menus_simple';
  $export['responsive_menus_style'] = $strongarm;

  return $export;
}
