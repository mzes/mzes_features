<?php
/**
 * @file
 * mzes_project.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function mzes_project_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_programs|node|project|form';
  $field_group->group_name = 'group_project_programs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_associated_content';
  $field_group->data = array(
    'label' => 'Research Programs',
    'weight' => '4',
    'children' => array(
      0 => 'field_project_program_section',
      1 => 'field_project_program',
      2 => 'field_project_program_prev',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Research Programs',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_project_programs|node|project|form'] = $field_group;

  return $export;
}
