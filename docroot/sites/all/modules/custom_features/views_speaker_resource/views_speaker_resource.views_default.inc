<?php
/**
 * @file
 * views_speaker_resource.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_speaker_resource_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'speaker_resource';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Speaker resource';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Speaker\'s space';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_body']['element_class'] = 'speaker-space-text';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_body']['element_default_classes'] = FALSE;
  /* Field: Content: Resources */
  $handler->display->display_options['fields']['field_resources']['id'] = 'field_resources';
  $handler->display->display_options['fields']['field_resources']['table'] = 'field_data_field_resources';
  $handler->display->display_options['fields']['field_resources']['field'] = 'field_resources';
  $handler->display->display_options['fields']['field_resources']['label'] = '';
  $handler->display->display_options['fields']['field_resources']['element_type'] = '0';
  $handler->display->display_options['fields']['field_resources']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resources']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_resources']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_resources']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_resources']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page_resource' => 'page_resource',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user/%/speaker-space';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Speaker\'s space';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['speaker_resource'] = $view;

  return $export;
}
