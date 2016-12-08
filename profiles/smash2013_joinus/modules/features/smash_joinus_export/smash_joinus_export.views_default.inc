<?php
/**
 * @file
 * smash_joinus_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function smash_joinus_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_registrations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'registration';
  $view->human_name = 'All registrations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Registrations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_url_slug' => 'field_url_slug',
    'field_department' => 'field_department',
    'title' => 'title',
    'field_full_name' => 'field_full_name',
    'anon_mail' => 'anon_mail',
    'url' => 'url',
    'created' => 'created',
    'updated' => 'updated',
    'state_edit' => 'state_edit',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_url_slug' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_department' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_full_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'anon_mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'updated' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state_edit' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'department_filter:ctools_context_2';
  /* Relationship: Registration: Registration to Node */
  $handler->display->display_options['relationships']['registration_related_node']['id'] = 'registration_related_node';
  $handler->display->display_options['relationships']['registration_related_node']['table'] = 'registration';
  $handler->display->display_options['relationships']['registration_related_node']['field'] = 'registration_related_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_department_target_id']['id'] = 'field_department_target_id';
  $handler->display->display_options['relationships']['field_department_target_id']['table'] = 'field_data_field_department';
  $handler->display->display_options['relationships']['field_department_target_id']['field'] = 'field_department_target_id';
  $handler->display->display_options['relationships']['field_department_target_id']['relationship'] = 'registration_related_node';
  /* Field: Department Slug */
  $handler->display->display_options['fields']['field_url_slug']['id'] = 'field_url_slug';
  $handler->display->display_options['fields']['field_url_slug']['table'] = 'field_data_field_url_slug';
  $handler->display->display_options['fields']['field_url_slug']['field'] = 'field_url_slug';
  $handler->display->display_options['fields']['field_url_slug']['relationship'] = 'field_department_target_id';
  $handler->display->display_options['fields']['field_url_slug']['ui_name'] = 'Department Slug';
  $handler->display->display_options['fields']['field_url_slug']['label'] = 'Department Slug';
  $handler->display->display_options['fields']['field_url_slug']['exclude'] = TRUE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['relationship'] = 'registration_related_node';
  $handler->display->display_options['fields']['field_department']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_department']['alter']['path'] = 'all-registrations/[field_url_slug]';
  $handler->display->display_options['fields']['field_department']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_department']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_department']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'registration_related_node';
  $handler->display->display_options['fields']['title']['label'] = 'Position';
  /* Field: Registration: First Name */
  $handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['label'] = 'Name';
  /* Field: Registration: Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['label'] = 'Mail';
  /* Field: Registration: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_registration';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['alter']['max_length'] = '13';
  $handler->display->display_options['fields']['url']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['url']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Registration: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Registration: Date updated */
  $handler->display->display_options['fields']['updated']['id'] = 'updated';
  $handler->display->display_options['fields']['updated']['table'] = 'registration';
  $handler->display->display_options['fields']['updated']['field'] = 'updated';
  $handler->display->display_options['fields']['updated']['date_format'] = 'custom';
  $handler->display->display_options['fields']['updated']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['updated']['second_date_format'] = 'long';
  /* Field: Registration: State form field */
  $handler->display->display_options['fields']['state_edit']['id'] = 'state_edit';
  $handler->display->display_options['fields']['state_edit']['table'] = 'registration';
  $handler->display->display_options['fields']['state_edit']['field'] = 'state_edit';
  $handler->display->display_options['fields']['state_edit']['label'] = 'Status';
  $handler->display->display_options['fields']['state_edit']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: URL Slug (field_url_slug) */
  $handler->display->display_options['arguments']['field_url_slug_value']['id'] = 'field_url_slug_value';
  $handler->display->display_options['arguments']['field_url_slug_value']['table'] = 'field_data_field_url_slug';
  $handler->display->display_options['arguments']['field_url_slug_value']['field'] = 'field_url_slug_value';
  $handler->display->display_options['arguments']['field_url_slug_value']['relationship'] = 'field_department_target_id';
  $handler->display->display_options['arguments']['field_url_slug_value']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_url_slug_value']['title'] = 'Registrations for %1';
  $handler->display->display_options['arguments']['field_url_slug_value']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_url_slug_value']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['field_url_slug_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_url_slug_value']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_url_slug_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_url_slug_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_url_slug_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_url_slug_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_url_slug_value']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['field_url_slug_value']['transform_dash'] = TRUE;
  $handler->display->display_options['arguments']['field_url_slug_value']['break_phrase'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Registration: State entity */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'registration';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['operator'] = 'not in';
  $handler->display->display_options['filters']['state']['value'] = array(
    'canceled' => 'canceled',
    'old' => 'old',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['state']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['state']['group_info']['label'] = 'State entity';
  $handler->display->display_options['filters']['state']['group_info']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['state']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['path'] = 'all-registrations';
  $export['all_registrations'] = $view;

  $view = new view();
  $view->name = 'positions_with_manifests';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Positions with Manifests';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
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
    'position' => 'position',
  );
  /* Filter criterion: Field: Email (field_position_owners) */
  $handler->display->display_options['filters']['field_position_owners_email']['id'] = 'field_position_owners_email';
  $handler->display->display_options['filters']['field_position_owners_email']['table'] = 'field_data_field_position_owners';
  $handler->display->display_options['filters']['field_position_owners_email']['field'] = 'field_position_owners_email';
  $handler->display->display_options['filters']['field_position_owners_email']['operator'] = 'not empty';

  /* Display: Rules */
  $handler = $view->new_display('views_rules', 'Rules', 'views_rules_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['rules_variables'] = array(
    'title' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'Content: Title',
      'name' => 'title',
    ),
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'node',
      'label' => 'Nid',
      'name' => 'nid',
    ),
  );
  $export['positions_with_manifests'] = $view;

  $view = new view();
  $view->name = 'registration_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'registration';
  $view->human_name = 'Registration List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Registration: Registration to Node */
  $handler->display->display_options['relationships']['registration_related_node']['id'] = 'registration_related_node';
  $handler->display->display_options['relationships']['registration_related_node']['table'] = 'registration';
  $handler->display->display_options['relationships']['registration_related_node']['field'] = 'registration_related_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'registration_related_node';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  /* Field: Registration: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_registration';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Registration: Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  /* Field: Registration: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Registration: First Name */
  $handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
  /* Field: Registration: Gender */
  $handler->display->display_options['fields']['field_gender']['id'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['table'] = 'field_data_field_gender';
  $handler->display->display_options['fields']['field_gender']['field'] = 'field_gender';
  /* Field: Registration: Position of Interest */
  $handler->display->display_options['fields']['field_position_of_interest']['id'] = 'field_position_of_interest';
  $handler->display->display_options['fields']['field_position_of_interest']['table'] = 'field_data_field_position_of_interest';
  $handler->display->display_options['fields']['field_position_of_interest']['field'] = 'field_position_of_interest';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_pos_interest_marketing']['id'] = 'field_pos_interest_marketing';
  $handler->display->display_options['fields']['field_pos_interest_marketing']['table'] = 'field_data_field_pos_interest_marketing';
  $handler->display->display_options['fields']['field_pos_interest_marketing']['field'] = 'field_pos_interest_marketing';
  $handler->display->display_options['fields']['field_pos_interest_marketing']['label'] = 'Position of Interest';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_pos_interest_ticketing']['id'] = 'field_pos_interest_ticketing';
  $handler->display->display_options['fields']['field_pos_interest_ticketing']['table'] = 'field_data_field_pos_interest_ticketing';
  $handler->display->display_options['fields']['field_pos_interest_ticketing']['field'] = 'field_pos_interest_ticketing';
  $handler->display->display_options['fields']['field_pos_interest_ticketing']['label'] = 'Position of Interest';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_pos_es']['id'] = 'field_pos_es';
  $handler->display->display_options['fields']['field_pos_es']['table'] = 'field_data_field_pos_es';
  $handler->display->display_options['fields']['field_pos_es']['field'] = 'field_pos_es';
  $handler->display->display_options['fields']['field_pos_es']['label'] = 'Position of Interest (E&S)';
  /* Field: Registration: Tell us about yourself */
  $handler->display->display_options['fields']['field_about_yourself']['id'] = 'field_about_yourself';
  $handler->display->display_options['fields']['field_about_yourself']['table'] = 'field_data_field_about_yourself';
  $handler->display->display_options['fields']['field_about_yourself']['field'] = 'field_about_yourself';
  /* Field: Registration: What do you want to help with? */
  $handler->display->display_options['fields']['field_want_to_help_with']['id'] = 'field_want_to_help_with';
  $handler->display->display_options['fields']['field_want_to_help_with']['table'] = 'field_data_field_want_to_help_with';
  $handler->display->display_options['fields']['field_want_to_help_with']['field'] = 'field_want_to_help_with';
  /* Field: Registration: How will you be able to help? */
  $handler->display->display_options['fields']['field_how_able_to_help']['id'] = 'field_how_able_to_help';
  $handler->display->display_options['fields']['field_how_able_to_help']['table'] = 'field_data_field_how_able_to_help';
  $handler->display->display_options['fields']['field_how_able_to_help']['field'] = 'field_how_able_to_help';
  /* Field: Registration: Please detail any skills and attributes you may bring to this role and the organisation. */
  $handler->display->display_options['fields']['field_prior_experience']['id'] = 'field_prior_experience';
  $handler->display->display_options['fields']['field_prior_experience']['table'] = 'field_data_field_prior_experience';
  $handler->display->display_options['fields']['field_prior_experience']['field'] = 'field_prior_experience';
  /* Field: Registration: Areas of Interest */
  $handler->display->display_options['fields']['field_areas_of_interest']['id'] = 'field_areas_of_interest';
  $handler->display->display_options['fields']['field_areas_of_interest']['table'] = 'field_data_field_areas_of_interest';
  $handler->display->display_options['fields']['field_areas_of_interest']['field'] = 'field_areas_of_interest';
  $handler->display->display_options['fields']['field_areas_of_interest']['delta_offset'] = '0';
  /* Field: Registration: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  /* Field: Registration: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  /* Field: Registration: Dietary Requirements */
  $handler->display->display_options['fields']['field_dietary_requirements']['id'] = 'field_dietary_requirements';
  $handler->display->display_options['fields']['field_dietary_requirements']['table'] = 'field_data_field_dietary_requirements';
  $handler->display->display_options['fields']['field_dietary_requirements']['field'] = 'field_dietary_requirements';
  /* Field: Registration: Emergency Contact Details: */
  $handler->display->display_options['fields']['field_emergency_contact']['id'] = 'field_emergency_contact';
  $handler->display->display_options['fields']['field_emergency_contact']['table'] = 'field_data_field_emergency_contact';
  $handler->display->display_options['fields']['field_emergency_contact']['field'] = 'field_emergency_contact';
  /* Field: Registration: Preferred Sections to Volunteer */
  $handler->display->display_options['fields']['field_preferred_sections']['id'] = 'field_preferred_sections';
  $handler->display->display_options['fields']['field_preferred_sections']['table'] = 'field_data_field_preferred_sections';
  $handler->display->display_options['fields']['field_preferred_sections']['field'] = 'field_preferred_sections';
  $handler->display->display_options['fields']['field_preferred_sections']['delta_offset'] = '0';
  /* Field: Registration: Preferred Breaks */
  $handler->display->display_options['fields']['field_preferred_breaks']['id'] = 'field_preferred_breaks';
  $handler->display->display_options['fields']['field_preferred_breaks']['table'] = 'field_data_field_preferred_breaks';
  $handler->display->display_options['fields']['field_preferred_breaks']['field'] = 'field_preferred_breaks';
  /* Field: Registration: Have you volunteered for SMASH! before? */
  $handler->display->display_options['fields']['field_smash_past_volunteer']['id'] = 'field_smash_past_volunteer';
  $handler->display->display_options['fields']['field_smash_past_volunteer']['table'] = 'field_data_field_smash_past_volunteer';
  $handler->display->display_options['fields']['field_smash_past_volunteer']['field'] = 'field_smash_past_volunteer';
  /* Field: Registration: Volunteer info */
  $handler->display->display_options['fields']['field_smash_years_volunteered']['id'] = 'field_smash_years_volunteered';
  $handler->display->display_options['fields']['field_smash_years_volunteered']['table'] = 'field_data_field_smash_years_volunteered';
  $handler->display->display_options['fields']['field_smash_years_volunteered']['field'] = 'field_smash_years_volunteered';
  $handler->display->display_options['fields']['field_smash_years_volunteered']['delta_offset'] = '0';
  /* Field: Registration: Have you volunteered for any other organisations? */
  $handler->display->display_options['fields']['field_other_orgs_volunteer']['id'] = 'field_other_orgs_volunteer';
  $handler->display->display_options['fields']['field_other_orgs_volunteer']['table'] = 'field_data_field_other_orgs_volunteer';
  $handler->display->display_options['fields']['field_other_orgs_volunteer']['field'] = 'field_other_orgs_volunteer';
  /* Field: Registration: We will be having two training sessions and it is important that you make every effort to attend both */
  $handler->display->display_options['fields']['field_training_sessions']['id'] = 'field_training_sessions';
  $handler->display->display_options['fields']['field_training_sessions']['table'] = 'field_data_field_training_sessions';
  $handler->display->display_options['fields']['field_training_sessions']['field'] = 'field_training_sessions';
  /* Field: Registration: Portfolio (URL) */
  $handler->display->display_options['fields']['field_portfolio']['id'] = 'field_portfolio';
  $handler->display->display_options['fields']['field_portfolio']['table'] = 'field_data_field_portfolio';
  $handler->display->display_options['fields']['field_portfolio']['field'] = 'field_portfolio';
  $handler->display->display_options['fields']['field_portfolio']['click_sort_column'] = 'url';
  /* Field: Registration: Résumé */
  $handler->display->display_options['fields']['field_resume']['id'] = 'field_resume';
  $handler->display->display_options['fields']['field_resume']['table'] = 'field_data_field_resume';
  $handler->display->display_options['fields']['field_resume']['field'] = 'field_resume';
  $handler->display->display_options['fields']['field_resume']['click_sort_column'] = 'fid';
  /* Field: Registration: Other Notes */
  $handler->display->display_options['fields']['field_other_notes']['id'] = 'field_other_notes';
  $handler->display->display_options['fields']['field_other_notes']['table'] = 'field_data_field_other_notes';
  $handler->display->display_options['fields']['field_other_notes']['field'] = 'field_other_notes';
  $handler->display->display_options['fields']['field_other_notes']['hide_empty'] = TRUE;
  /* Field: Registration: Anything else? */
  $handler->display->display_options['fields']['field_other']['id'] = 'field_other';
  $handler->display->display_options['fields']['field_other']['table'] = 'field_data_field_other';
  $handler->display->display_options['fields']['field_other']['field'] = 'field_other';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'registration_related_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'registration-export';
  $export['registration_list'] = $view;

  return $export;
}
