<?php
/**
 * @file
 * mzes_panels_displays.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function mzes_panels_displays_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_bio|node|profile|profile_panel_detail';
  $field_group->group_name = 'group_profile_bio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'profile_panel_detail';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Biography',
    'weight' => '3',
    'children' => array(
      0 => 'field_profile_biography',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Biography',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_profile_bio|node|profile|profile_panel_detail'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_cv|node|profile|profile_panel_detail';
  $field_group->group_name = 'group_profile_cv';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'profile_panel_detail';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CV',
    'weight' => '4',
    'children' => array(
      0 => 'field_profile_cv',
      1 => 'field_profile_cv_attachment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'CV',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_profile_cv|node|profile|profile_panel_detail'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_research_info|node|profile|profile_panel_detail';
  $field_group->group_name = 'group_profile_research_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'profile_panel_detail';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Research',
    'weight' => '2',
    'children' => array(
      0 => 'field_profile_research',
      1 => 'field_profile_research_interests',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_profile_research_info|node|profile|profile_panel_detail'] = $field_group;

  return $export;
}
