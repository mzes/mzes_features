<?php
/**
 * @file
 * mzes_panels_displays.ds.inc
 */

/**
 * Implementation of hook_ds_field_settings_info().
 */
function mzes_panels_displays_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|profile|profile_reference';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'profile';
  $ds_fieldsetting->view_mode = 'profile_reference';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|profile|profile_reference'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implementation of hook_ds_layout_settings_info().
 */
function mzes_panels_displays_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|profile|profile_panel_detail';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'profile';
  $ds_layout->view_mode = 'profile_panel_detail';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_profile_research_interests',
        2 => 'group_profile_research_info',
        3 => 'field_profile_research',
        4 => 'field_profile_biography',
        5 => 'group_profile_bio',
        6 => 'field_profile_cv',
        7 => 'group_profile_cv',
        8 => 'field_profile_cv_attachment',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_profile_research_interests' => 'ds_content',
      'group_profile_research_info' => 'ds_content',
      'field_profile_research' => 'ds_content',
      'field_profile_biography' => 'ds_content',
      'group_profile_bio' => 'ds_content',
      'field_profile_cv' => 'ds_content',
      'group_profile_cv' => 'ds_content',
      'field_profile_cv_attachment' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|profile|profile_panel_detail'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|profile|profile_reference';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'profile';
  $ds_layout->view_mode = 'profile_reference';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'regions' => array(
      'left' => array(
        0 => 'field_profile_image',
      ),
      'right' => array(
        0 => 'field_profile_title_job',
        1 => 'title',
        2 => 'field_profile_email',
      ),
    ),
    'fields' => array(
      'field_profile_image' => 'left',
      'field_profile_title_job' => 'right',
      'title' => 'right',
      'field_profile_email' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|profile|profile_reference'] = $ds_layout;

  return $export;
}

/**
 * Implementation of hook_ds_view_modes_info().
 */
function mzes_panels_displays_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass;
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'profile_panel_detail';
  $ds_view_mode->label = 'Profile Panel Detail';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['profile_panel_detail'] = $ds_view_mode;

  $ds_view_mode = new stdClass;
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'profile_reference';
  $ds_view_mode->label = 'Profile Reference';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['profile_reference'] = $ds_view_mode;

  $ds_view_mode = new stdClass;
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'project_panel_detail';
  $ds_view_mode->label = 'Project Panel Detail';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['project_panel_detail'] = $ds_view_mode;

  return $export;
}
