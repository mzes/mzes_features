<?php
/**
 * @file
 * mzes_biblio.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mzes_biblio_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
