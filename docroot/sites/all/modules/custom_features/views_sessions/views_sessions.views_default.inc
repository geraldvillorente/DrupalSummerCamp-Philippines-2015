<?php
/**
 * @file
 * views_sessions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_sessions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sessions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_speaker_target_id']['id'] = 'field_speaker_target_id';
  $handler->display->display_options['relationships']['field_speaker_target_id']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['relationships']['field_speaker_target_id']['field'] = 'field_speaker_target_id';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'session_time',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speaker']['id'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['fields']['field_speaker']['field'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker']['label'] = 'By';
  $handler->display->display_options['fields']['field_speaker']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Level */
  $handler->display->display_options['fields']['field_level']['id'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['table'] = 'field_data_field_level';
  $handler->display->display_options['fields']['field_level']['field'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['label'] = '';
  $handler->display->display_options['fields']['field_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_level']['type'] = 'taxonomy_term_reference_plain';
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
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Day (field_day) */
  $handler->display->display_options['filters']['field_day_tid']['id'] = 'field_day_tid';
  $handler->display->display_options['filters']['field_day_tid']['table'] = 'field_data_field_day';
  $handler->display->display_options['filters']['field_day_tid']['field'] = 'field_day_tid';
  $handler->display->display_options['filters']['field_day_tid']['value'] = array(
    0 => '10',
  );
  $handler->display->display_options['filters']['field_day_tid']['expose']['operator_id'] = 'field_day_tid_op';
  $handler->display->display_options['filters']['field_day_tid']['expose']['label'] = 'Day (field_day)';
  $handler->display->display_options['filters']['field_day_tid']['expose']['operator'] = 'field_day_tid_op';
  $handler->display->display_options['filters']['field_day_tid']['expose']['identifier'] = 'field_day_tid';
  $handler->display->display_options['filters']['field_day_tid']['vocabulary'] = 'day';

  /* Display: Day 1 */
  $handler = $view->new_display('block', 'Day 1', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Day (field_day) */
  $handler->display->display_options['filters']['field_day_tid']['id'] = 'field_day_tid';
  $handler->display->display_options['filters']['field_day_tid']['table'] = 'field_data_field_day';
  $handler->display->display_options['filters']['field_day_tid']['field'] = 'field_day_tid';
  $handler->display->display_options['filters']['field_day_tid']['value'] = array(
    0 => '15',
  );
  $handler->display->display_options['filters']['field_day_tid']['expose']['operator_id'] = 'field_day_tid_op';
  $handler->display->display_options['filters']['field_day_tid']['expose']['label'] = 'Day (field_day)';
  $handler->display->display_options['filters']['field_day_tid']['expose']['operator'] = 'field_day_tid_op';
  $handler->display->display_options['filters']['field_day_tid']['expose']['identifier'] = 'field_day_tid';
  $handler->display->display_options['filters']['field_day_tid']['vocabulary'] = 'day';

  /* Display: Day 2 */
  $handler = $view->new_display('block', 'Day 2', 'block_1');
  $export['sessions'] = $view;

  return $export;
}
