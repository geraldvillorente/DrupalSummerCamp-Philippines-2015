<?php
/**
 * @file
 * views_registration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_registration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'registration';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Registration';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tickets & Registration';
  $handler->display->display_options['css_class'] = 'col-md-12 drupalcamp-speakers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-3 col-xs-12 col-sm-6 speaker-info';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Buy a ticket to DrupalCamp</h2>

<p>Props to our generous sponsors who made it possible for the tickets to be truly affordable.</p>

<p>Your ticket to the Camp allows you:</p>

<ul>
	<li>full access to the sessions from Saturday to Sunday</li>
	<li>saturday lunch</li>
	<li>morning and afternoon snacks</li>
	<li>free flowing coffee</li>
	<li>Saturday night drinks</li>
	<li>swags</li>
</ul>

<p>Cebu Tour on Sunday afternoon is not included in the DrupalCamp ticket. Details of the tour in partnership with the Cebu City government will be provided very soon.</p>

<h2>Ticket Prices</h2>

<h2>Early Bird (on or before Oct 31)</h2>

<table style="margin:0 auto; min-width:50%">
	<tbody>
		<tr>
			<td>Students (must present valid student ID)</td>
			<td style="width:150px">P 150.00</td>
		</tr>
		<tr>
			<td>Working Professionals</td>
			<td>P 250.00</td>
		</tr>
	</tbody>
</table>

<h2>Regular Rate (Nov 1-15)</h2>

<table style="margin:0 auto; min-width:50%">
	<tbody>
		<tr>
			<td>Students</td>
			<td style="width:150px">P 300.00</td>
		</tr>
		<tr>
			<td>Working Professionals</td>
			<td>P 500.00</td>
		</tr>
	</tbody>
</table>

<h2>How to Register</h2>

<p>Please go to the <a href="/user/register">Event Registration</a> tab and fill in the required information and sign up to attend.</p>

<h2>Payment Methods</h2>

<ul>
	<li>Deposit payment with the Bank of the Philippine Islands<br />
	Account Name: PrometSource Corporation<br />
	Account No. #1351-0043-94<br />
	Account Type: Checking<br />
	(pls email us a copy of your deposit slip to jinky@prometsource.com)<br />
	&nbsp;</li>
	<li>Pay at the office of Promet Source<br />
	7th flr Cebu IT Tower<br />
	Cebu Business Park, Cebu City<br />
	Tel No. 419-9786<br />
	&nbsp;</li>
	<li>Paypal Account (soon to be announced)<br />
	&nbsp;</li>
</ul>

<p>You can also pay during the event, but Regular Rates will be applied.</p>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<h2>Here are Some Drupallers Who Already Registered</h2>';
  $handler->display->display_options['header']['area_1']['format'] = 'full_html';
  /* Field: User: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'img-speaker';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'drupal-speakers',
    'image_link' => 'content',
  );
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_first_name']['id'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['field'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_last_name']['id'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['field'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_last_name']['alter']['text'] = '[field_user_first_name] [field_user_last_name]';
  $handler->display->display_options['fields']['field_user_last_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_user_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_last_name']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_user_last_name']['element_wrapper_class'] = 'speaker-drupalcamp-topic';
  $handler->display->display_options['fields']['field_user_last_name']['element_default_classes'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';

  /* Display: Registration */
  $handler = $view->new_display('page', 'Registration', 'page');
  $handler->display->display_options['path'] = 'registration';
  $export['registration'] = $view;

  return $export;
}
