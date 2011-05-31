<?php
/**
 * @file
 * mzes_panels_displays.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function mzes_panels_displays_user_default_permissions() {
  $permissions = array();

  // Exported permission: admin_display_suite
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: admin_fields
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: admin_view_modes
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: administer custom content
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ctools_custom_content',
  );

  // Exported permission: administer mini panels
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: administer panel-nodes
  $permissions['administer panel-nodes'] = array(
    'name' => 'administer panel-nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: administer stylizer
  $permissions['administer stylizer'] = array(
    'name' => 'administer stylizer',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'stylizer',
  );

  // Exported permission: create mini panels
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: create panel content
  $permissions['create panel content'] = array(
    'name' => 'create panel content',
    'roles' => array(),
  );

  // Exported permission: create panel-nodes
  $permissions['create panel-nodes'] = array(
    'name' => 'create panel-nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: delete any panel content
  $permissions['delete any panel content'] = array(
    'name' => 'delete any panel content',
    'roles' => array(),
  );

  // Exported permission: delete any panel-nodes
  $permissions['delete any panel-nodes'] = array(
    'name' => 'delete any panel-nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: delete own panel content
  $permissions['delete own panel content'] = array(
    'name' => 'delete own panel content',
    'roles' => array(),
  );

  // Exported permission: delete own panel-nodes
  $permissions['delete own panel-nodes'] = array(
    'name' => 'delete own panel-nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: edit any panel content
  $permissions['edit any panel content'] = array(
    'name' => 'edit any panel content',
    'roles' => array(),
  );

  // Exported permission: edit any panel-nodes
  $permissions['edit any panel-nodes'] = array(
    'name' => 'edit any panel-nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: edit own panel content
  $permissions['edit own panel content'] = array(
    'name' => 'edit own panel content',
    'roles' => array(),
  );

  // Exported permission: edit own panel-nodes
  $permissions['edit own panel-nodes'] = array(
    'name' => 'edit own panel-nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: use text format ds_code
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(),
  );

  return $permissions;
}
