<?php
/**
 * @file
 * context_sitewide.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function context_sitewide_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_venue:venue
  $menu_links['main-menu_venue:venue'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'venue',
    'router_path' => '',
    'link_title' => 'Venue',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_venue:venue',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Venue');


  return $menu_links;
}
