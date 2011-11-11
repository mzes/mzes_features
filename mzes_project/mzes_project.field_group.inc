<?php
/**
 * @file
 * mzes_project.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mzes_project_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_collaborators_prev|node|project|form';
  $field_group->group_name = 'group_project_collaborators_prev';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Previous Collaborators',
    'weight' => '8',
    'children' => array(
      0 => 'field_project_directors_previous',
      1 => 'field_project_researchers_prev',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_collaborators_prev|node|project|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_mzes_admin|node|project|form';
  $field_group->group_name = 'group_project_mzes_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'MZES Admin',
    'weight' => '14',
    'children' => array(
      0 => 'field_project_mzes_datart',
      1 => 'field_project_mzes_pro_num_altdb',
      2 => 'field_project_mzes_recno',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_mzes_admin|node|project|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_programs|node|project|form';
  $field_group->group_name = 'group_project_programs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Programs',
    'weight' => '9',
    'children' => array(
      0 => 'field_project_program',
      1 => 'field_project_program_prev',
      2 => 'field_project_program_section',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_programs|node|project|form'] = $field_group;

  return $export;
}
