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
  // Exported menu link: main-menu_speakers:speakers
  $menu_links['main-menu_speakers:speakers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'speakers',
    'router_path' => 'speakers',
    'link_title' => 'Speakers',
    'options' => array(
      'identifier' => 'main-menu_speakers:speakers',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
  );
  // Exported menu link: main-menu_sponsors:sponsors
  $menu_links['main-menu_sponsors:sponsors'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sponsors',
    'router_path' => 'sponsors',
    'link_title' => 'Sponsors',
    'options' => array(
      'attributes' => array(
        'title' => 'The esteemed sponsors that made this event possible.',
      ),
      'identifier' => 'main-menu_sponsors:sponsors',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Register');
  t('Speakers');
  t('Sponsors');


  return $menu_links;
}
