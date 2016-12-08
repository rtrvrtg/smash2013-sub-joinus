<?php
/**
 * @file
 * smash_position_types.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function smash_position_types_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer crew registration'.
  $permissions['administer crew registration'] = array(
    'name' => 'administer crew registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer crew_simplified_ registration'.
  $permissions['administer crew_simplified_ registration'] = array(
    'name' => 'administer crew_simplified_ registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer exhibitors_and_sponsorship registration'.
  $permissions['administer exhibitors_and_sponsorship registration'] = array(
    'name' => 'administer exhibitors_and_sponsorship registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer guest_relations registration'.
  $permissions['administer guest_relations registration'] = array(
    'name' => 'administer guest_relations registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer it_ticketing_registration registration'.
  $permissions['administer it_ticketing_registration registration'] = array(
    'name' => 'administer it_ticketing_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer logistics registration'.
  $permissions['administer logistics registration'] = array(
    'name' => 'administer logistics registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer maid registration'.
  $permissions['administer maid registration'] = array(
    'name' => 'administer maid registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer marketing registration'.
  $permissions['administer marketing registration'] = array(
    'name' => 'administer marketing registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer marketing_visual_graphics registration'.
  $permissions['administer marketing_visual_graphics registration'] = array(
    'name' => 'administer marketing_visual_graphics registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer marketing_website_co_ordinator registration'.
  $permissions['administer marketing_website_co_ordinator registration'] = array(
    'name' => 'administer marketing_website_co_ordinator registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer mc registration'.
  $permissions['administer mc registration'] = array(
    'name' => 'administer mc registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own crew registration'.
  $permissions['administer own crew registration'] = array(
    'name' => 'administer own crew registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own crew_simplified_ registration'.
  $permissions['administer own crew_simplified_ registration'] = array(
    'name' => 'administer own crew_simplified_ registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own exhibitors_and_sponsorship registration'.
  $permissions['administer own exhibitors_and_sponsorship registration'] = array(
    'name' => 'administer own exhibitors_and_sponsorship registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own guest_relations registration'.
  $permissions['administer own guest_relations registration'] = array(
    'name' => 'administer own guest_relations registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own it_ticketing_registration registration'.
  $permissions['administer own it_ticketing_registration registration'] = array(
    'name' => 'administer own it_ticketing_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own logistics registration'.
  $permissions['administer own logistics registration'] = array(
    'name' => 'administer own logistics registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own maid registration'.
  $permissions['administer own maid registration'] = array(
    'name' => 'administer own maid registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own marketing registration'.
  $permissions['administer own marketing registration'] = array(
    'name' => 'administer own marketing registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own marketing_visual_graphics registration'.
  $permissions['administer own marketing_visual_graphics registration'] = array(
    'name' => 'administer own marketing_visual_graphics registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own marketing_website_co_ordinator registration'.
  $permissions['administer own marketing_website_co_ordinator registration'] = array(
    'name' => 'administer own marketing_website_co_ordinator registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own mc registration'.
  $permissions['administer own mc registration'] = array(
    'name' => 'administer own mc registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own programming_registration registration'.
  $permissions['administer own programming_registration registration'] = array(
    'name' => 'administer own programming_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own sponsorship_registration registration'.
  $permissions['administer own sponsorship_registration registration'] = array(
    'name' => 'administer own sponsorship_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own ticketing_positions registration'.
  $permissions['administer own ticketing_positions registration'] = array(
    'name' => 'administer own ticketing_positions registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer programming_registration registration'.
  $permissions['administer programming_registration registration'] = array(
    'name' => 'administer programming_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration'.
  $permissions['administer registration'] = array(
    'name' => 'administer registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration states'.
  $permissions['administer registration states'] = array(
    'name' => 'administer registration states',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration types'.
  $permissions['administer registration types'] = array(
    'name' => 'administer registration types',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer sponsorship_registration registration'.
  $permissions['administer sponsorship_registration registration'] = array(
    'name' => 'administer sponsorship_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer ticketing_positions registration'.
  $permissions['administer ticketing_positions registration'] = array(
    'name' => 'administer ticketing_positions registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create crew registration'.
  $permissions['create crew registration'] = array(
    'name' => 'create crew registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create crew registration other anonymous'.
  $permissions['create crew registration other anonymous'] = array(
    'name' => 'create crew registration other anonymous',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create crew registration other users'.
  $permissions['create crew registration other users'] = array(
    'name' => 'create crew registration other users',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create crew_simplified_ registration'.
  $permissions['create crew_simplified_ registration'] = array(
    'name' => 'create crew_simplified_ registration',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create crew_simplified_ registration other anonymous'.
  $permissions['create crew_simplified_ registration other anonymous'] = array(
    'name' => 'create crew_simplified_ registration other anonymous',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create crew_simplified_ registration other users'.
  $permissions['create crew_simplified_ registration other users'] = array(
    'name' => 'create crew_simplified_ registration other users',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create exhibitors_and_sponsorship registration'.
  $permissions['create exhibitors_and_sponsorship registration'] = array(
    'name' => 'create exhibitors_and_sponsorship registration',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create exhibitors_and_sponsorship registration other anonymous'.
  $permissions['create exhibitors_and_sponsorship registration other anonymous'] = array(
    'name' => 'create exhibitors_and_sponsorship registration other anonymous',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create exhibitors_and_sponsorship registration other users'.
  $permissions['create exhibitors_and_sponsorship registration other users'] = array(
    'name' => 'create exhibitors_and_sponsorship registration other users',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create guest_relations registration'.
  $permissions['create guest_relations registration'] = array(
    'name' => 'create guest_relations registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create guest_relations registration other anonymous'.
  $permissions['create guest_relations registration other anonymous'] = array(
    'name' => 'create guest_relations registration other anonymous',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create guest_relations registration other users'.
  $permissions['create guest_relations registration other users'] = array(
    'name' => 'create guest_relations registration other users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create it_ticketing_registration registration'.
  $permissions['create it_ticketing_registration registration'] = array(
    'name' => 'create it_ticketing_registration registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create it_ticketing_registration registration other anonymous'.
  $permissions['create it_ticketing_registration registration other anonymous'] = array(
    'name' => 'create it_ticketing_registration registration other anonymous',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create it_ticketing_registration registration other users'.
  $permissions['create it_ticketing_registration registration other users'] = array(
    'name' => 'create it_ticketing_registration registration other users',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create logistics registration'.
  $permissions['create logistics registration'] = array(
    'name' => 'create logistics registration',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create logistics registration other anonymous'.
  $permissions['create logistics registration other anonymous'] = array(
    'name' => 'create logistics registration other anonymous',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create logistics registration other users'.
  $permissions['create logistics registration other users'] = array(
    'name' => 'create logistics registration other users',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create maid registration'.
  $permissions['create maid registration'] = array(
    'name' => 'create maid registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create maid registration other anonymous'.
  $permissions['create maid registration other anonymous'] = array(
    'name' => 'create maid registration other anonymous',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create maid registration other users'.
  $permissions['create maid registration other users'] = array(
    'name' => 'create maid registration other users',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create marketing registration'.
  $permissions['create marketing registration'] = array(
    'name' => 'create marketing registration',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create marketing registration other anonymous'.
  $permissions['create marketing registration other anonymous'] = array(
    'name' => 'create marketing registration other anonymous',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create marketing registration other users'.
  $permissions['create marketing registration other users'] = array(
    'name' => 'create marketing registration other users',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create marketing_visual_graphics registration'.
  $permissions['create marketing_visual_graphics registration'] = array(
    'name' => 'create marketing_visual_graphics registration',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create marketing_visual_graphics registration other anonymous'.
  $permissions['create marketing_visual_graphics registration other anonymous'] = array(
    'name' => 'create marketing_visual_graphics registration other anonymous',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create marketing_visual_graphics registration other users'.
  $permissions['create marketing_visual_graphics registration other users'] = array(
    'name' => 'create marketing_visual_graphics registration other users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create marketing_website_co_ordinator registration'.
  $permissions['create marketing_website_co_ordinator registration'] = array(
    'name' => 'create marketing_website_co_ordinator registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create marketing_website_co_ordinator registration other anonymous'.
  $permissions['create marketing_website_co_ordinator registration other anonymous'] = array(
    'name' => 'create marketing_website_co_ordinator registration other anonymous',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create marketing_website_co_ordinator registration other users'.
  $permissions['create marketing_website_co_ordinator registration other users'] = array(
    'name' => 'create marketing_website_co_ordinator registration other users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create mc registration'.
  $permissions['create mc registration'] = array(
    'name' => 'create mc registration',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create mc registration other anonymous'.
  $permissions['create mc registration other anonymous'] = array(
    'name' => 'create mc registration other anonymous',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create mc registration other users'.
  $permissions['create mc registration other users'] = array(
    'name' => 'create mc registration other users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create programming_registration registration'.
  $permissions['create programming_registration registration'] = array(
    'name' => 'create programming_registration registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create programming_registration registration other anonymous'.
  $permissions['create programming_registration registration other anonymous'] = array(
    'name' => 'create programming_registration registration other anonymous',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create programming_registration registration other users'.
  $permissions['create programming_registration registration other users'] = array(
    'name' => 'create programming_registration registration other users',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create sponsorship_registration registration'.
  $permissions['create sponsorship_registration registration'] = array(
    'name' => 'create sponsorship_registration registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create sponsorship_registration registration other anonymous'.
  $permissions['create sponsorship_registration registration other anonymous'] = array(
    'name' => 'create sponsorship_registration registration other anonymous',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create sponsorship_registration registration other users'.
  $permissions['create sponsorship_registration registration other users'] = array(
    'name' => 'create sponsorship_registration registration other users',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create ticketing_positions registration'.
  $permissions['create ticketing_positions registration'] = array(
    'name' => 'create ticketing_positions registration',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create ticketing_positions registration other anonymous'.
  $permissions['create ticketing_positions registration other anonymous'] = array(
    'name' => 'create ticketing_positions registration other anonymous',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create ticketing_positions registration other users'.
  $permissions['create ticketing_positions registration other users'] = array(
    'name' => 'create ticketing_positions registration other users',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any crew registration'.
  $permissions['delete any crew registration'] = array(
    'name' => 'delete any crew registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any crew_simplified_ registration'.
  $permissions['delete any crew_simplified_ registration'] = array(
    'name' => 'delete any crew_simplified_ registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any exhibitors_and_sponsorship registration'.
  $permissions['delete any exhibitors_and_sponsorship registration'] = array(
    'name' => 'delete any exhibitors_and_sponsorship registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any guest_relations registration'.
  $permissions['delete any guest_relations registration'] = array(
    'name' => 'delete any guest_relations registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any it_ticketing_registration registration'.
  $permissions['delete any it_ticketing_registration registration'] = array(
    'name' => 'delete any it_ticketing_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any logistics registration'.
  $permissions['delete any logistics registration'] = array(
    'name' => 'delete any logistics registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any maid registration'.
  $permissions['delete any maid registration'] = array(
    'name' => 'delete any maid registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any marketing registration'.
  $permissions['delete any marketing registration'] = array(
    'name' => 'delete any marketing registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any marketing_visual_graphics registration'.
  $permissions['delete any marketing_visual_graphics registration'] = array(
    'name' => 'delete any marketing_visual_graphics registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any marketing_website_co_ordinator registration'.
  $permissions['delete any marketing_website_co_ordinator registration'] = array(
    'name' => 'delete any marketing_website_co_ordinator registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any mc registration'.
  $permissions['delete any mc registration'] = array(
    'name' => 'delete any mc registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any programming_registration registration'.
  $permissions['delete any programming_registration registration'] = array(
    'name' => 'delete any programming_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any sponsorship_registration registration'.
  $permissions['delete any sponsorship_registration registration'] = array(
    'name' => 'delete any sponsorship_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any ticketing_positions registration'.
  $permissions['delete any ticketing_positions registration'] = array(
    'name' => 'delete any ticketing_positions registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own crew registration'.
  $permissions['delete own crew registration'] = array(
    'name' => 'delete own crew registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own crew_simplified_ registration'.
  $permissions['delete own crew_simplified_ registration'] = array(
    'name' => 'delete own crew_simplified_ registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own exhibitors_and_sponsorship registration'.
  $permissions['delete own exhibitors_and_sponsorship registration'] = array(
    'name' => 'delete own exhibitors_and_sponsorship registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own guest_relations registration'.
  $permissions['delete own guest_relations registration'] = array(
    'name' => 'delete own guest_relations registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own it_ticketing_registration registration'.
  $permissions['delete own it_ticketing_registration registration'] = array(
    'name' => 'delete own it_ticketing_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own logistics registration'.
  $permissions['delete own logistics registration'] = array(
    'name' => 'delete own logistics registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own maid registration'.
  $permissions['delete own maid registration'] = array(
    'name' => 'delete own maid registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own marketing registration'.
  $permissions['delete own marketing registration'] = array(
    'name' => 'delete own marketing registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own marketing_visual_graphics registration'.
  $permissions['delete own marketing_visual_graphics registration'] = array(
    'name' => 'delete own marketing_visual_graphics registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own marketing_website_co_ordinator registration'.
  $permissions['delete own marketing_website_co_ordinator registration'] = array(
    'name' => 'delete own marketing_website_co_ordinator registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own mc registration'.
  $permissions['delete own mc registration'] = array(
    'name' => 'delete own mc registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own programming_registration registration'.
  $permissions['delete own programming_registration registration'] = array(
    'name' => 'delete own programming_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own sponsorship_registration registration'.
  $permissions['delete own sponsorship_registration registration'] = array(
    'name' => 'delete own sponsorship_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own ticketing_positions registration'.
  $permissions['delete own ticketing_positions registration'] = array(
    'name' => 'delete own ticketing_positions registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit crew registration state'.
  $permissions['edit crew registration state'] = array(
    'name' => 'edit crew registration state',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit crew_simplified_ registration state'.
  $permissions['edit crew_simplified_ registration state'] = array(
    'name' => 'edit crew_simplified_ registration state',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit exhibitors_and_sponsorship registration state'.
  $permissions['edit exhibitors_and_sponsorship registration state'] = array(
    'name' => 'edit exhibitors_and_sponsorship registration state',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit guest_relations registration state'.
  $permissions['edit guest_relations registration state'] = array(
    'name' => 'edit guest_relations registration state',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit it_ticketing_registration registration state'.
  $permissions['edit it_ticketing_registration registration state'] = array(
    'name' => 'edit it_ticketing_registration registration state',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit logistics registration state'.
  $permissions['edit logistics registration state'] = array(
    'name' => 'edit logistics registration state',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit maid registration state'.
  $permissions['edit maid registration state'] = array(
    'name' => 'edit maid registration state',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit marketing registration state'.
  $permissions['edit marketing registration state'] = array(
    'name' => 'edit marketing registration state',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit marketing_visual_graphics registration state'.
  $permissions['edit marketing_visual_graphics registration state'] = array(
    'name' => 'edit marketing_visual_graphics registration state',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit marketing_website_co_ordinator registration state'.
  $permissions['edit marketing_website_co_ordinator registration state'] = array(
    'name' => 'edit marketing_website_co_ordinator registration state',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit mc registration state'.
  $permissions['edit mc registration state'] = array(
    'name' => 'edit mc registration state',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit programming_registration registration state'.
  $permissions['edit programming_registration registration state'] = array(
    'name' => 'edit programming_registration registration state',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit sponsorship_registration registration state'.
  $permissions['edit sponsorship_registration registration state'] = array(
    'name' => 'edit sponsorship_registration registration state',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit ticketing_positions registration state'.
  $permissions['edit ticketing_positions registration state'] = array(
    'name' => 'edit ticketing_positions registration state',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any crew registration'.
  $permissions['update any crew registration'] = array(
    'name' => 'update any crew registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any crew_simplified_ registration'.
  $permissions['update any crew_simplified_ registration'] = array(
    'name' => 'update any crew_simplified_ registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any exhibitors_and_sponsorship registration'.
  $permissions['update any exhibitors_and_sponsorship registration'] = array(
    'name' => 'update any exhibitors_and_sponsorship registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any guest_relations registration'.
  $permissions['update any guest_relations registration'] = array(
    'name' => 'update any guest_relations registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any it_ticketing_registration registration'.
  $permissions['update any it_ticketing_registration registration'] = array(
    'name' => 'update any it_ticketing_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any logistics registration'.
  $permissions['update any logistics registration'] = array(
    'name' => 'update any logistics registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any maid registration'.
  $permissions['update any maid registration'] = array(
    'name' => 'update any maid registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any marketing registration'.
  $permissions['update any marketing registration'] = array(
    'name' => 'update any marketing registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any marketing_visual_graphics registration'.
  $permissions['update any marketing_visual_graphics registration'] = array(
    'name' => 'update any marketing_visual_graphics registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any marketing_website_co_ordinator registration'.
  $permissions['update any marketing_website_co_ordinator registration'] = array(
    'name' => 'update any marketing_website_co_ordinator registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any mc registration'.
  $permissions['update any mc registration'] = array(
    'name' => 'update any mc registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any programming_registration registration'.
  $permissions['update any programming_registration registration'] = array(
    'name' => 'update any programming_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any sponsorship_registration registration'.
  $permissions['update any sponsorship_registration registration'] = array(
    'name' => 'update any sponsorship_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any ticketing_positions registration'.
  $permissions['update any ticketing_positions registration'] = array(
    'name' => 'update any ticketing_positions registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own crew registration'.
  $permissions['update own crew registration'] = array(
    'name' => 'update own crew registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own crew_simplified_ registration'.
  $permissions['update own crew_simplified_ registration'] = array(
    'name' => 'update own crew_simplified_ registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own exhibitors_and_sponsorship registration'.
  $permissions['update own exhibitors_and_sponsorship registration'] = array(
    'name' => 'update own exhibitors_and_sponsorship registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own guest_relations registration'.
  $permissions['update own guest_relations registration'] = array(
    'name' => 'update own guest_relations registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own it_ticketing_registration registration'.
  $permissions['update own it_ticketing_registration registration'] = array(
    'name' => 'update own it_ticketing_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own logistics registration'.
  $permissions['update own logistics registration'] = array(
    'name' => 'update own logistics registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own maid registration'.
  $permissions['update own maid registration'] = array(
    'name' => 'update own maid registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own marketing registration'.
  $permissions['update own marketing registration'] = array(
    'name' => 'update own marketing registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own marketing_visual_graphics registration'.
  $permissions['update own marketing_visual_graphics registration'] = array(
    'name' => 'update own marketing_visual_graphics registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own marketing_website_co_ordinator registration'.
  $permissions['update own marketing_website_co_ordinator registration'] = array(
    'name' => 'update own marketing_website_co_ordinator registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own mc registration'.
  $permissions['update own mc registration'] = array(
    'name' => 'update own mc registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own programming_registration registration'.
  $permissions['update own programming_registration registration'] = array(
    'name' => 'update own programming_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own sponsorship_registration registration'.
  $permissions['update own sponsorship_registration registration'] = array(
    'name' => 'update own sponsorship_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own ticketing_positions registration'.
  $permissions['update own ticketing_positions registration'] = array(
    'name' => 'update own ticketing_positions registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view crew registration'.
  $permissions['view crew registration'] = array(
    'name' => 'view crew registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view crew_simplified_ registration'.
  $permissions['view crew_simplified_ registration'] = array(
    'name' => 'view crew_simplified_ registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view exhibitors_and_sponsorship registration'.
  $permissions['view exhibitors_and_sponsorship registration'] = array(
    'name' => 'view exhibitors_and_sponsorship registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view guest_relations registration'.
  $permissions['view guest_relations registration'] = array(
    'name' => 'view guest_relations registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view it_ticketing_registration registration'.
  $permissions['view it_ticketing_registration registration'] = array(
    'name' => 'view it_ticketing_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view logistics registration'.
  $permissions['view logistics registration'] = array(
    'name' => 'view logistics registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view maid registration'.
  $permissions['view maid registration'] = array(
    'name' => 'view maid registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view marketing registration'.
  $permissions['view marketing registration'] = array(
    'name' => 'view marketing registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view marketing_visual_graphics registration'.
  $permissions['view marketing_visual_graphics registration'] = array(
    'name' => 'view marketing_visual_graphics registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view marketing_website_co_ordinator registration'.
  $permissions['view marketing_website_co_ordinator registration'] = array(
    'name' => 'view marketing_website_co_ordinator registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view mc registration'.
  $permissions['view mc registration'] = array(
    'name' => 'view mc registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own crew registration'.
  $permissions['view own crew registration'] = array(
    'name' => 'view own crew registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own crew_simplified_ registration'.
  $permissions['view own crew_simplified_ registration'] = array(
    'name' => 'view own crew_simplified_ registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own exhibitors_and_sponsorship registration'.
  $permissions['view own exhibitors_and_sponsorship registration'] = array(
    'name' => 'view own exhibitors_and_sponsorship registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own guest_relations registration'.
  $permissions['view own guest_relations registration'] = array(
    'name' => 'view own guest_relations registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own it_ticketing_registration registration'.
  $permissions['view own it_ticketing_registration registration'] = array(
    'name' => 'view own it_ticketing_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own logistics registration'.
  $permissions['view own logistics registration'] = array(
    'name' => 'view own logistics registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own maid registration'.
  $permissions['view own maid registration'] = array(
    'name' => 'view own maid registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own marketing registration'.
  $permissions['view own marketing registration'] = array(
    'name' => 'view own marketing registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own marketing_visual_graphics registration'.
  $permissions['view own marketing_visual_graphics registration'] = array(
    'name' => 'view own marketing_visual_graphics registration',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own marketing_website_co_ordinator registration'.
  $permissions['view own marketing_website_co_ordinator registration'] = array(
    'name' => 'view own marketing_website_co_ordinator registration',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own mc registration'.
  $permissions['view own mc registration'] = array(
    'name' => 'view own mc registration',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own programming_registration registration'.
  $permissions['view own programming_registration registration'] = array(
    'name' => 'view own programming_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own sponsorship_registration registration'.
  $permissions['view own sponsorship_registration registration'] = array(
    'name' => 'view own sponsorship_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own ticketing_positions registration'.
  $permissions['view own ticketing_positions registration'] = array(
    'name' => 'view own ticketing_positions registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view programming_registration registration'.
  $permissions['view programming_registration registration'] = array(
    'name' => 'view programming_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view sponsorship_registration registration'.
  $permissions['view sponsorship_registration registration'] = array(
    'name' => 'view sponsorship_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view ticketing_positions registration'.
  $permissions['view ticketing_positions registration'] = array(
    'name' => 'view ticketing_positions registration',
    'roles' => array(
      'administrator' => 'administrator',
      'management' => 'management',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
