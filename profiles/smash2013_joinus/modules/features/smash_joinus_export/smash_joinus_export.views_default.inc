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
  $handler->display->display_options['title'] = 'All registrations';
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
  /* Relationship: Registration: Registration to Node */
  $handler->display->display_options['relationships']['registration_related_node']['id'] = 'registration_related_node';
  $handler->display->display_options['relationships']['registration_related_node']['table'] = 'registration';
  $handler->display->display_options['relationships']['registration_related_node']['field'] = 'registration_related_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'registration_related_node';
  $handler->display->display_options['fields']['title']['label'] = 'Position';
  /* Field: Registration: Full Name */
  $handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
  /* Field: Registration: Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['label'] = 'Mail';
  /* Field: Registration: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  /* Field: Registration: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_registration';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  /* Filter criterion: Content: Position Owners (field_position_owners) */
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
  /* Field: Registration: Full Name */
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
  /* Field: Registration: Do you have prior experience in this area? */
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
  /* Field: Registration: Current Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  /* Field: Registration: Dietary Requirements */
  $handler->display->display_options['fields']['field_dietary_requirements']['id'] = 'field_dietary_requirements';
  $handler->display->display_options['fields']['field_dietary_requirements']['table'] = 'field_data_field_dietary_requirements';
  $handler->display->display_options['fields']['field_dietary_requirements']['field'] = 'field_dietary_requirements';
  /* Field: Registration: Emergency Contact */
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
  /* Field: Registration: Which year(s) did you volunteer for SMASH! */
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
  /* Field: Registration: Are you available to help out on Set-Up Day, Friday 9th August, 2013? */
  $handler->display->display_options['fields']['field_setup_day']['id'] = 'field_setup_day';
  $handler->display->display_options['fields']['field_setup_day']['table'] = 'field_data_field_setup_day';
  $handler->display->display_options['fields']['field_setup_day']['field'] = 'field_setup_day';
  /* Field: Registration: List any Medical or Physical Conditions you have */
  $handler->display->display_options['fields']['field_conditions']['id'] = 'field_conditions';
  $handler->display->display_options['fields']['field_conditions']['table'] = 'field_data_field_conditions';
  $handler->display->display_options['fields']['field_conditions']['field'] = 'field_conditions';
  $handler->display->display_options['fields']['field_conditions']['hide_empty'] = TRUE;
  /* Field: Registration: Please describe why you would make an awesome volunteer for SMASH! */
  $handler->display->display_options['fields']['field_why_are_you_awesome']['id'] = 'field_why_are_you_awesome';
  $handler->display->display_options['fields']['field_why_are_you_awesome']['table'] = 'field_data_field_why_are_you_awesome';
  $handler->display->display_options['fields']['field_why_are_you_awesome']['field'] = 'field_why_are_you_awesome';
  /* Field: Registration: Portfolio */
  $handler->display->display_options['fields']['field_portfolio']['id'] = 'field_portfolio';
  $handler->display->display_options['fields']['field_portfolio']['table'] = 'field_data_field_portfolio';
  $handler->display->display_options['fields']['field_portfolio']['field'] = 'field_portfolio';
  $handler->display->display_options['fields']['field_portfolio']['click_sort_column'] = 'url';
  /* Field: Registration: Résumé */
  $handler->display->display_options['fields']['field_resume']['id'] = 'field_resume';
  $handler->display->display_options['fields']['field_resume']['table'] = 'field_data_field_resume';
  $handler->display->display_options['fields']['field_resume']['field'] = 'field_resume';
  $handler->display->display_options['fields']['field_resume']['click_sort_column'] = 'fid';
  /* Field: Registration: Please answer this to the best of your ability */
  $handler->display->display_options['fields']['field_preparation']['id'] = 'field_preparation';
  $handler->display->display_options['fields']['field_preparation']['table'] = 'field_data_field_preparation';
  $handler->display->display_options['fields']['field_preparation']['field'] = 'field_preparation';
  $handler->display->display_options['fields']['field_preparation']['hide_empty'] = TRUE;
  /* Field: Registration: Scenario: please answer in 50 words or less */
  $handler->display->display_options['fields']['field_scenario']['id'] = 'field_scenario';
  $handler->display->display_options['fields']['field_scenario']['table'] = 'field_data_field_scenario';
  $handler->display->display_options['fields']['field_scenario']['field'] = 'field_scenario';
  /* Field: Registration: Other Notes */
  $handler->display->display_options['fields']['field_other_notes']['id'] = 'field_other_notes';
  $handler->display->display_options['fields']['field_other_notes']['table'] = 'field_data_field_other_notes';
  $handler->display->display_options['fields']['field_other_notes']['field'] = 'field_other_notes';
  $handler->display->display_options['fields']['field_other_notes']['hide_empty'] = TRUE;
  /* Field: Registration: Anything else? */
  $handler->display->display_options['fields']['field_other']['id'] = 'field_other';
  $handler->display->display_options['fields']['field_other']['table'] = 'field_data_field_other';
  $handler->display->display_options['fields']['field_other']['field'] = 'field_other';
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['relationship'] = 'registration_related_node';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['title']['transform_dash'] = TRUE;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'registration-export';
  $export['registration_list'] = $view;

  return $export;
}
