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

  // Exported menu link: main-menu_homepage:<front>
  $menu_links['main-menu_homepage:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Homepage',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_homepage:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_register:user/register
  $menu_links['main-menu_register:user/register'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_register:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
  );
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
  t('Homepage');
  t('Register');
  t('Venue');


  return $menu_links;
}
