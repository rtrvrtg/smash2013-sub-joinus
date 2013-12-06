<?php
/**
 * @file
 * smash_joinus_antispam.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function smash_joinus_antispam_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
