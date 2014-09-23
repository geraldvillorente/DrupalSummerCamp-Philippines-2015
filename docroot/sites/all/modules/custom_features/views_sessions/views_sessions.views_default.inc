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
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_time' => 'field_time',
    'title' => 'title',
    'field_speaker' => 'title',
    'field_level' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speaker' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_level' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_time']['alter']['text'] = '<i class="fa fa-clock-o">
<span class="date-display-single">[field_time]</span>      ';
  $handler->display->display_options['fields']['field_time']['element_class'] = 'time';
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'time_am_pm',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'activity';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speaker']['id'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['fields']['field_speaker']['field'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker']['label'] = '';
  $handler->display->display_options['fields']['field_speaker']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_speaker']['alter']['text'] = '<p class="speaker">by [field_speaker]</p>';
  $handler->display->display_options['fields']['field_speaker']['element_type'] = '0';
  $handler->display->display_options['fields']['field_speaker']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_speaker']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_speaker']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Level */
  $handler->display->display_options['fields']['field_level']['id'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['table'] = 'field_data_field_level';
  $handler->display->display_options['fields']['field_level']['field'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['label'] = '';
  $handler->display->display_options['fields']['field_level']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_level']['alter']['text'] = '<p class="place">
<span class="category">[field_level]</span>
</p>';
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
  $handler = $view->new_display('block', 'Day 1', 'day_one');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="col-md-1"></div>
<div class="col-md-10">
<ul id="camp_session_list" class="nav nav-tabs">
 <li class="active">		
<a href="#day_one" role="tab" data-toggle="tab">
<span class="tab-title">DAY 01</span>
<span class="tab-left-first">NOV 14</span>
<span class="tab-left-second">SATURDAY</span>
</a>
</li>
<li class="">
<a href="#day_two" role="tab" data-toggle="tab">
<span class="tab-title">DAY 02</span>
<span class="tab-left-first">NOV 15</span>
<span class="tab-left-second">SUNDAY</span>
</a>
 </li>
 </ul>
</div>
';
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
    15 => '15',
  );
  $handler->display->display_options['filters']['field_day_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_day_tid']['vocabulary'] = 'day';

  /* Display: Day 2 */
  $handler = $view->new_display('block', 'Day 2', 'day_two');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
    0 => '10',
  );
  $handler->display->display_options['filters']['field_day_tid']['expose']['operator_id'] = 'field_day_tid_op';
  $handler->display->display_options['filters']['field_day_tid']['expose']['label'] = 'Day (field_day)';
  $handler->display->display_options['filters']['field_day_tid']['expose']['operator'] = 'field_day_tid_op';
  $handler->display->display_options['filters']['field_day_tid']['expose']['identifier'] = 'field_day_tid';
  $handler->display->display_options['filters']['field_day_tid']['vocabulary'] = 'day';
  $export['sessions'] = $view;

  return $export;
}
