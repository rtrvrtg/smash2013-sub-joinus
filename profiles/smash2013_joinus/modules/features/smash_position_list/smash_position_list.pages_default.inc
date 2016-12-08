<?php
/**
 * @file
 * smash_position_list.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function smash_position_list_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'position_list';
  $page->task = 'page';
  $page->admin_title = 'Position List';
  $page->admin_description = '';
  $page->path = 'position-list/!department/!position';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'department' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
    'position' => array(
      'id' => 2,
      'identifier' => 'Node: ID 2',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_position_list_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'position_list';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Three column',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Join Us';
  $display->uuid = '3f5e4948-be32-4445-91e6-dc36f5356672';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_position_list_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d7e7c948-b437-42bf-89e4-0dd294d951c0';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '1. Check',
    'title' => '',
    'body' => '## 1. Check

See where we need help. All open positions are listed.',
    'format' => 'markdown',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-description',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd7e7c948-b437-42bf-89e4-0dd294d951c0';
  $display->content['new-d7e7c948-b437-42bf-89e4-0dd294d951c0'] = $pane;
  $display->panels['left'][0] = 'new-d7e7c948-b437-42bf-89e4-0dd294d951c0';
  $pane = new stdClass();
  $pane->pid = 'new-230be02e-d6a6-4fd3-a5bd-53e1e7133731';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'departments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'ctools_context_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '230be02e-d6a6-4fd3-a5bd-53e1e7133731';
  $display->content['new-230be02e-d6a6-4fd3-a5bd-53e1e7133731'] = $pane;
  $display->panels['left'][1] = 'new-230be02e-d6a6-4fd3-a5bd-53e1e7133731';
  $pane = new stdClass();
  $pane->pid = 'new-293a7c9f-0092-4169-ba68-fc2eccbf3c99';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '2. Choose',
    'title' => '',
    'body' => '## 2. Choose

Select the position where you\'d like to help out.',
    'format' => 'markdown',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-description',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '293a7c9f-0092-4169-ba68-fc2eccbf3c99';
  $display->content['new-293a7c9f-0092-4169-ba68-fc2eccbf3c99'] = $pane;
  $display->panels['middle'][0] = 'new-293a7c9f-0092-4169-ba68-fc2eccbf3c99';
  $pane = new stdClass();
  $pane->pid = 'new-855ee7f4-fef9-4e3f-a816-c6126766e1e6';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'positions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'ctools_context_1',
    'override_title' => 0,
    'override_title_text' => '',
    'context' => array(
      0 => '',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'ajax-result-pane-positions',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '855ee7f4-fef9-4e3f-a816-c6126766e1e6';
  $display->content['new-855ee7f4-fef9-4e3f-a816-c6126766e1e6'] = $pane;
  $display->panels['middle'][1] = 'new-855ee7f4-fef9-4e3f-a816-c6126766e1e6';
  $pane = new stdClass();
  $pane->pid = 'new-9aa32341-ddc9-47aa-8757-127ca04351a1';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '3. Apply',
    'title' => '',
    'body' => '## 3. Apply

Fill out the form, submit your details and we\'ll be in touch!',
    'format' => 'markdown',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-description',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9aa32341-ddc9-47aa-8757-127ca04351a1';
  $display->content['new-9aa32341-ddc9-47aa-8757-127ca04351a1'] = $pane;
  $display->panels['right'][0] = 'new-9aa32341-ddc9-47aa-8757-127ca04351a1';
  $pane = new stdClass();
  $pane->pid = 'new-b448bc31-5b06-4175-b87d-4e33c9ec8d5e';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'position_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '%2',
    'url' => '',
    'display' => 'ctools_context_1',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'ajax-result-pane-position-description',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b448bc31-5b06-4175-b87d-4e33c9ec8d5e';
  $display->content['new-b448bc31-5b06-4175-b87d-4e33c9ec8d5e'] = $pane;
  $display->panels['right'][1] = 'new-b448bc31-5b06-4175-b87d-4e33c9ec8d5e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-230be02e-d6a6-4fd3-a5bd-53e1e7133731';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['position_list'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'role_selector';
  $page->task = 'page';
  $page->admin_title = 'Role Selector';
  $page->admin_description = '';
  $page->path = 'select-role/!dept';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'dept' => array(
      'id' => 1,
      'identifier' => 'Dept String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_role_selector_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'role_selector';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b5aff8ed-c6af-41de-9cd9-852eef0dc932';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_role_selector_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d2e93beb-12ba-4387-a71e-11c3bed85c60';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Staff member enabled',
    'title' => '',
    'body' => '<a href="position-list"><h2>Become a Staff Member</h2><p>SMASH! Staff are the awesome volunteers who work on the preparation and planning for the convention. They come up with all the brilliant plans for the event.</p></a>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-description',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd2e93beb-12ba-4387-a71e-11c3bed85c60';
  $display->content['new-d2e93beb-12ba-4387-a71e-11c3bed85c60'] = $pane;
  $display->panels['left'][0] = 'new-d2e93beb-12ba-4387-a71e-11c3bed85c60';
  $pane = new stdClass();
  $pane->pid = 'new-3205f058-df47-40e0-8096-c7eaa124165b';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Crew member enabled',
    'title' => '',
    'body' => '<a href="/join-the-crew"><h2>Become a Crew Member</h2><p>SMASH! Crew applications are now open for SMASH! 2013!</p></a>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-description',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3205f058-df47-40e0-8096-c7eaa124165b';
  $display->content['new-3205f058-df47-40e0-8096-c7eaa124165b'] = $pane;
  $display->panels['right'][0] = 'new-3205f058-df47-40e0-8096-c7eaa124165b';
  $pane = new stdClass();
  $pane->pid = 'new-a2590f67-ac9c-451c-88ff-07af2879c6ca';
  $pane->panel = 'top';
  $pane->type = 'views';
  $pane->subtype = 'department_filter';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'ctools_context_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a2590f67-ac9c-451c-88ff-07af2879c6ca';
  $display->content['new-a2590f67-ac9c-451c-88ff-07af2879c6ca'] = $pane;
  $display->panels['top'][0] = 'new-a2590f67-ac9c-451c-88ff-07af2879c6ca';
  $pane = new stdClass();
  $pane->pid = 'new-ca01ffe5-264f-4a3e-85af-7092510314b0';
  $pane->panel = 'top';
  $pane->type = 'views';
  $pane->subtype = 'promoted_positions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 1,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
    'context' => array(
      0 => 'argument_string_1.raw',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ca01ffe5-264f-4a3e-85af-7092510314b0';
  $display->content['new-ca01ffe5-264f-4a3e-85af-7092510314b0'] = $pane;
  $display->panels['top'][1] = 'new-ca01ffe5-264f-4a3e-85af-7092510314b0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d2e93beb-12ba-4387-a71e-11c3bed85c60';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['role_selector'] = $page;

  return $pages;

}
