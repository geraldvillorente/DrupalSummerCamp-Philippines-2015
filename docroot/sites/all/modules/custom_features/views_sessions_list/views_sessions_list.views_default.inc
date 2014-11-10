<?php
/**
 * @file
 * views_sessions_list.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_sessions_list_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sessions_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sessions list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Submitted Sessions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Speaker (field_speaker) */
  $handler->display->display_options['arguments']['field_speaker_target_id']['id'] = 'field_speaker_target_id';
  $handler->display->display_options['arguments']['field_speaker_target_id']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['arguments']['field_speaker_target_id']['field'] = 'field_speaker_target_id';
  $handler->display->display_options['arguments']['field_speaker_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_speaker_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_speaker_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_speaker_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_speaker_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_speaker_target_id']['summary_options']['items_per_page'] = '25';
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
    'session' => 'session',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['sessions_list'] = $view;

  return $export;
}
