<?php
/**
 * @file
 * smash_position_list.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function smash_position_list_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'departments';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Departments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: URL Slug */
  $handler->display->display_options['fields']['field_url_slug']['id'] = 'field_url_slug';
  $handler->display->display_options['fields']['field_url_slug']['table'] = 'field_data_field_url_slug';
  $handler->display->display_options['fields']['field_url_slug']['field'] = 'field_url_slug';
  $handler->display->display_options['fields']['field_url_slug']['label'] = '';
  $handler->display->display_options['fields']['field_url_slug']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_slug']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_url_slug']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_url_slug']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_slug']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_url_slug']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_url_slug']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'request/position-list/[field_url_slug]/none/nojs';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'department' => 'department',
  );

  /* Display: Context */
  $handler = $view->new_display('ctools_context', 'Context', 'ctools_context_1');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'fields';
  $export['departments'] = $view;

  $view = new view;
  $view->name = 'position_display';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Position Display';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['format'] = 'markdown';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Relationship: Registration Settings: Node to Registration Settings */
  $handler->display->display_options['relationships']['registration_settings_rel']['id'] = 'registration_settings_rel';
  $handler->display->display_options['relationships']['registration_settings_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['registration_settings_rel']['field'] = 'registration_settings_rel';
  $handler->display->display_options['relationships']['registration_settings_rel']['label'] = 'Registration Settings';
  $handler->display->display_options['relationships']['registration_settings_rel']['required'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_department_target_id']['id'] = 'field_department_target_id';
  $handler->display->display_options['relationships']['field_department_target_id']['table'] = 'field_data_field_department';
  $handler->display->display_options['relationships']['field_department_target_id']['field'] = 'field_department_target_id';
  $handler->display->display_options['relationships']['field_department_target_id']['label'] = 'Department';
  $handler->display->display_options['relationships']['field_department_target_id']['required'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Dept Slug */
  $handler->display->display_options['fields']['field_url_slug']['id'] = 'field_url_slug';
  $handler->display->display_options['fields']['field_url_slug']['table'] = 'field_data_field_url_slug';
  $handler->display->display_options['fields']['field_url_slug']['field'] = 'field_url_slug';
  $handler->display->display_options['fields']['field_url_slug']['relationship'] = 'field_department_target_id';
  $handler->display->display_options['fields']['field_url_slug']['ui_name'] = 'Dept Slug';
  $handler->display->display_options['fields']['field_url_slug']['label'] = '';
  $handler->display->display_options['fields']['field_url_slug']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_slug']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_url_slug']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_url_slug']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_slug']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_url_slug']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_url_slug']['field_api_classes'] = 0;
  /* Field: Pos Slug */
  $handler->display->display_options['fields']['field_url_slug_1']['id'] = 'field_url_slug_1';
  $handler->display->display_options['fields']['field_url_slug_1']['table'] = 'field_data_field_url_slug';
  $handler->display->display_options['fields']['field_url_slug_1']['field'] = 'field_url_slug';
  $handler->display->display_options['fields']['field_url_slug_1']['ui_name'] = 'Pos Slug';
  $handler->display->display_options['fields']['field_url_slug_1']['label'] = '';
  $handler->display->display_options['fields']['field_url_slug_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_slug_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_url_slug_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_url_slug_1']['field_api_classes'] = 0;
  /* Field: Apply Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Apply Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Apply »';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'register/[field_url_slug]/[field_url_slug_1]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Contextual filter: Content: URL Slug (field_url_slug) */
  $handler->display->display_options['arguments']['field_url_slug_value']['id'] = 'field_url_slug_value';
  $handler->display->display_options['arguments']['field_url_slug_value']['table'] = 'field_data_field_url_slug';
  $handler->display->display_options['arguments']['field_url_slug_value']['field'] = 'field_url_slug_value';
  $handler->display->display_options['arguments']['field_url_slug_value']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_url_slug_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_url_slug_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_url_slug_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_url_slug_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_url_slug_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_url_slug_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_url_slug_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_url_slug_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_url_slug_value']['break_phrase'] = 0;
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

  /* Display: Context */
  $handler = $view->new_display('ctools_context', 'Context', 'ctools_context_1');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'fields';
  $export['position_display'] = $view;

  $view = new view;
  $view->name = 'positions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Positions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['format'] = 'markdown';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_department_target_id']['id'] = 'field_department_target_id';
  $handler->display->display_options['relationships']['field_department_target_id']['table'] = 'field_data_field_department';
  $handler->display->display_options['relationships']['field_department_target_id']['field'] = 'field_department_target_id';
  $handler->display->display_options['relationships']['field_department_target_id']['label'] = 'Department';
  $handler->display->display_options['relationships']['field_department_target_id']['required'] = 1;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_department']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_department']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_department']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_department']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_department']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_department']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_department']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_department']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_department']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_department']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_department']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_department']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_department']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_department']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_department']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_department']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_department']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_department']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_department']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_department']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: URL Slug */
  $handler->display->display_options['fields']['field_url_slug']['id'] = 'field_url_slug';
  $handler->display->display_options['fields']['field_url_slug']['table'] = 'field_data_field_url_slug';
  $handler->display->display_options['fields']['field_url_slug']['field'] = 'field_url_slug';
  $handler->display->display_options['fields']['field_url_slug']['relationship'] = 'field_department_target_id';
  $handler->display->display_options['fields']['field_url_slug']['label'] = '';
  $handler->display->display_options['fields']['field_url_slug']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_slug']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_url_slug']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_url_slug']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_slug']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_url_slug']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_url_slug']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_url_slug']['field_api_classes'] = 0;
  /* Field: Content: URL Slug */
  $handler->display->display_options['fields']['field_url_slug_1']['id'] = 'field_url_slug_1';
  $handler->display->display_options['fields']['field_url_slug_1']['table'] = 'field_data_field_url_slug';
  $handler->display->display_options['fields']['field_url_slug_1']['field'] = 'field_url_slug';
  $handler->display->display_options['fields']['field_url_slug_1']['label'] = '';
  $handler->display->display_options['fields']['field_url_slug_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_slug_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_url_slug_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_url_slug_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_url_slug_1']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'request/position-list/[field_url_slug]/[field_url_slug_1]/nojs';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: URL Slug (field_url_slug) */
  $handler->display->display_options['arguments']['field_url_slug_value']['id'] = 'field_url_slug_value';
  $handler->display->display_options['arguments']['field_url_slug_value']['table'] = 'field_data_field_url_slug';
  $handler->display->display_options['arguments']['field_url_slug_value']['field'] = 'field_url_slug_value';
  $handler->display->display_options['arguments']['field_url_slug_value']['relationship'] = 'field_department_target_id';
  $handler->display->display_options['arguments']['field_url_slug_value']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_url_slug_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_url_slug_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_url_slug_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_url_slug_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_url_slug_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_url_slug_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_url_slug_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_url_slug_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_url_slug_value']['break_phrase'] = 0;
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

  /* Display: Context */
  $handler = $view->new_display('ctools_context', 'Context', 'ctools_context_1');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'fields';
  $export['positions'] = $view;

  return $export;
}
