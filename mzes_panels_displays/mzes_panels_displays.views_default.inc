<?php
/**
 * @file
 * mzes_panels_displays.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function mzes_panels_displays_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'profiles_panels';
  $view->description = 'Displays of profile content.';
  $view->tag = 'content';
  $view->base_table = 'node';
  $view->human_name = 'Profiles Panels';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Staff Directory';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_profile_last_name' => 'field_profile_last_name',
    'field_profile_first_name' => 'field_profile_first_name',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_project_directors_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_profile_last_name]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Fields: Last Name (field_profile_last_name) - value */
  $handler->display->display_options['sorts']['field_profile_last_name_value']['id'] = 'field_profile_last_name_value';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['field'] = 'field_profile_last_name_value';
  /* Filter criterion: Fields: Staff Member (field_profile_staff) */
  $handler->display->display_options['filters']['field_profile_staff_value']['id'] = 'field_profile_staff_value';
  $handler->display->display_options['filters']['field_profile_staff_value']['table'] = 'field_data_field_profile_staff';
  $handler->display->display_options['filters']['field_profile_staff_value']['field'] = 'field_profile_staff_value';
  $handler->display->display_options['filters']['field_profile_staff_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );

  /* Display: Staff Directory */
  $handler = $view->new_display('panel_pane', 'Staff Directory', 'staff_directory_pane');
  $handler->display->display_options['display_description'] = 'Panel display of a list of staff members';

  /* Display: Alphabetical Index */
  $handler = $view->new_display('attachment', 'Alphabetical Index', 'staff_directory_alpha_index');
  $handler->display->display_options['display_description'] = 'Provides an A-Z index for staff directory page.';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Fields: Last Name (field_profile_last_name) - value */
  $handler->display->display_options['arguments']['field_profile_last_name_value']['id'] = 'field_profile_last_name_value';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['field'] = 'field_profile_last_name_value';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_profile_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['summary_options']['inline'] = '1';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['summary_options']['separator'] = ' | ';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_profile_last_name_value']['glossary'] = 1;
  $handler->display->display_options['arguments']['field_profile_last_name_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_profile_last_name_value']['break_phrase'] = 0;
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'staff_directory_page' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = 0;
  $translatables['profiles_panels'] = array(
    t('Master'),
    t('Staff Directory'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('[field_profile_last_name]'),
    t('Panel display of a list of staff members'),
    t('View panes'),
    t('Alphabetical Index'),
    t('Provides an A-Z index for staff directory page.'),
    t('All'),
  );
  $export['profiles_panels'] = $view;

  $view = new view;
  $view->name = 'projects_panels';
  $view->description = 'Displays of project content.';
  $view->tag = 'content';
  $view->base_table = 'node';
  $view->human_name = 'Projects Panels';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projects';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'field_project_research_areas';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* Field: Content: Research Areas */
  $handler->display->display_options['fields']['field_project_research_areas']['id'] = 'field_project_research_areas';
  $handler->display->display_options['fields']['field_project_research_areas']['table'] = 'field_data_field_project_research_areas';
  $handler->display->display_options['fields']['field_project_research_areas']['field'] = 'field_project_research_areas';
  $handler->display->display_options['fields']['field_project_research_areas']['label'] = '';
  $handler->display->display_options['fields']['field_project_research_areas']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_research_areas']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_research_areas']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['click_sort_column'] = 'tid';
  $handler->display->display_options['fields']['field_project_research_areas']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_project_research_areas']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_research_areas']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;

  /* Display: Projects list */
  $handler = $view->new_display('panel_pane', 'Projects list', 'projects_panel');
  $handler->display->display_options['display_description'] = 'Displays a list of projects as a panel pane.';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  /* Filter criterion: Fields: Status (field_project_status) */
  $handler->display->display_options['filters']['field_project_status_value']['id'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['table'] = 'field_data_field_project_status';
  $handler->display->display_options['filters']['field_project_status_value']['field'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['value'] = array(
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_project_status_value']['group'] = 0;
  $handler->display->display_options['filters']['field_project_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_status_value']['expose']['operator_id'] = 'field_project_status_value_op';
  $handler->display->display_options['filters']['field_project_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_project_status_value']['expose']['operator'] = 'field_project_status_value_op';
  $handler->display->display_options['filters']['field_project_status_value']['expose']['identifier'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['expose']['reduce'] = 1;
  /* Filter criterion: Fields: Department (field_project_department) - tid */
  $handler->display->display_options['filters']['field_project_department_tid']['id'] = 'field_project_department_tid';
  $handler->display->display_options['filters']['field_project_department_tid']['table'] = 'field_data_field_project_department';
  $handler->display->display_options['filters']['field_project_department_tid']['field'] = 'field_project_department_tid';
  $handler->display->display_options['filters']['field_project_department_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_project_department_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_project_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_department_tid']['expose']['operator_id'] = 'field_project_department_tid_op';
  $handler->display->display_options['filters']['field_project_department_tid']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_project_department_tid']['expose']['operator'] = 'field_project_department_tid_op';
  $handler->display->display_options['filters']['field_project_department_tid']['expose']['identifier'] = 'field_project_department_tid';
  $handler->display->display_options['filters']['field_project_department_tid']['expose']['multiple'] = 1;
  /* Filter criterion: Fields: Geographical Areas (field_project_geo_areas) - tid */
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['id'] = 'field_project_geo_areas_tid';
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['table'] = 'field_data_field_project_geo_areas';
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['field'] = 'field_project_geo_areas_tid';
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['expose']['operator_id'] = 'field_project_geo_areas_tid_op';
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['expose']['label'] = 'Geogr. Areas';
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['expose']['operator'] = 'field_project_geo_areas_tid_op';
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['expose']['identifier'] = 'field_project_geo_areas_tid';
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['expose']['multiple'] = 1;
  /* Filter criterion: Fields: Research Areas (field_project_research_areas) - tid */
  $handler->display->display_options['filters']['field_project_research_areas_tid']['id'] = 'field_project_research_areas_tid';
  $handler->display->display_options['filters']['field_project_research_areas_tid']['table'] = 'field_data_field_project_research_areas';
  $handler->display->display_options['filters']['field_project_research_areas_tid']['field'] = 'field_project_research_areas_tid';
  $handler->display->display_options['filters']['field_project_research_areas_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_project_research_areas_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_project_research_areas_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_research_areas_tid']['expose']['operator_id'] = 'field_project_research_areas_tid_op';
  $handler->display->display_options['filters']['field_project_research_areas_tid']['expose']['label'] = 'Research Areas';
  $handler->display->display_options['filters']['field_project_research_areas_tid']['expose']['operator'] = 'field_project_research_areas_tid_op';
  $handler->display->display_options['filters']['field_project_research_areas_tid']['expose']['identifier'] = 'field_project_research_areas_tid';
  $handler->display->display_options['filters']['field_project_research_areas_tid']['expose']['multiple'] = 1;
  /* Filter criterion: Fields: Topics (field_project_topics) - tid */
  $handler->display->display_options['filters']['field_project_topics_tid']['id'] = 'field_project_topics_tid';
  $handler->display->display_options['filters']['field_project_topics_tid']['table'] = 'field_data_field_project_topics';
  $handler->display->display_options['filters']['field_project_topics_tid']['field'] = 'field_project_topics_tid';
  $handler->display->display_options['filters']['field_project_topics_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_project_topics_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_project_topics_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_topics_tid']['expose']['operator_id'] = 'field_project_topics_tid_op';
  $handler->display->display_options['filters']['field_project_topics_tid']['expose']['label'] = 'Topics';
  $handler->display->display_options['filters']['field_project_topics_tid']['expose']['operator'] = 'field_project_topics_tid_op';
  $handler->display->display_options['filters']['field_project_topics_tid']['expose']['identifier'] = 'field_project_topics_tid';
  $handler->display->display_options['filters']['field_project_topics_tid']['expose']['multiple'] = 1;

  /* Display: Current Directors */
  $handler = $view->new_display('panel_pane', 'Current Directors', 'project_current_directors_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Directors';
  $handler->display->display_options['display_description'] = 'List of current directors as a pane display.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['relationship'] = 'field_project_directors_nid';
  $handler->display->display_options['row_options']['view_mode'] = 'profile_reference';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Fields: Current Directors (field_project_directors) - nid */
  $handler->display->display_options['relationships']['field_project_directors_nid']['id'] = 'field_project_directors_nid';
  $handler->display->display_options['relationships']['field_project_directors_nid']['table'] = 'field_data_field_project_directors';
  $handler->display->display_options['relationships']['field_project_directors_nid']['field'] = 'field_project_directors_nid';
  $handler->display->display_options['relationships']['field_project_directors_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_project_directors_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_profile_image']['id'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['table'] = 'field_data_field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['field'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['relationship'] = 'field_project_directors_nid';
  $handler->display->display_options['fields']['field_profile_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_profile_image']['field_api_classes'] = 0;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_profile_title_job']['id'] = 'field_profile_title_job';
  $handler->display->display_options['fields']['field_profile_title_job']['table'] = 'field_data_field_profile_title_job';
  $handler->display->display_options['fields']['field_profile_title_job']['field'] = 'field_profile_title_job';
  $handler->display->display_options['fields']['field_profile_title_job']['relationship'] = 'field_project_directors_nid';
  $handler->display->display_options['fields']['field_profile_title_job']['label'] = '';
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_title_job']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_title_job']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_project_directors_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: eMail */
  $handler->display->display_options['fields']['field_profile_email']['id'] = 'field_profile_email';
  $handler->display->display_options['fields']['field_profile_email']['table'] = 'field_data_field_profile_email';
  $handler->display->display_options['fields']['field_profile_email']['field'] = 'field_profile_email';
  $handler->display->display_options['fields']['field_profile_email']['relationship'] = 'field_project_directors_nid';
  $handler->display->display_options['fields']['field_profile_email']['label'] = '';
  $handler->display->display_options['fields']['field_profile_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['click_sort_column'] = 'email';
  $handler->display->display_options['fields']['field_profile_email']['type'] = 'email_default';
  $handler->display->display_options['fields']['field_profile_email']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['relationship'] = 'field_project_directors_nid';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Previous Directors */
  $handler = $view->new_display('panel_pane', 'Previous Directors', 'project_previous_directors_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Previous Directors';
  $handler->display->display_options['display_description'] = 'List of previous directors as a pane display.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Fields: Previous Directors (field_project_directors_previous) - nid */
  $handler->display->display_options['relationships']['field_project_directors_previous_nid']['id'] = 'field_project_directors_previous_nid';
  $handler->display->display_options['relationships']['field_project_directors_previous_nid']['table'] = 'field_data_field_project_directors_previous';
  $handler->display->display_options['relationships']['field_project_directors_previous_nid']['field'] = 'field_project_directors_previous_nid';
  $handler->display->display_options['relationships']['field_project_directors_previous_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_project_directors_previous_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_profile_image']['id'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['table'] = 'field_data_field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['field'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['relationship'] = 'field_project_directors_previous_nid';
  $handler->display->display_options['fields']['field_profile_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_profile_image']['field_api_classes'] = 0;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_profile_title_job']['id'] = 'field_profile_title_job';
  $handler->display->display_options['fields']['field_profile_title_job']['table'] = 'field_data_field_profile_title_job';
  $handler->display->display_options['fields']['field_profile_title_job']['field'] = 'field_profile_title_job';
  $handler->display->display_options['fields']['field_profile_title_job']['relationship'] = 'field_project_directors_previous_nid';
  $handler->display->display_options['fields']['field_profile_title_job']['label'] = '';
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_title_job']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_title_job']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_project_directors_previous_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: eMail */
  $handler->display->display_options['fields']['field_profile_email']['id'] = 'field_profile_email';
  $handler->display->display_options['fields']['field_profile_email']['table'] = 'field_data_field_profile_email';
  $handler->display->display_options['fields']['field_profile_email']['field'] = 'field_profile_email';
  $handler->display->display_options['fields']['field_profile_email']['relationship'] = 'field_project_directors_previous_nid';
  $handler->display->display_options['fields']['field_profile_email']['label'] = '';
  $handler->display->display_options['fields']['field_profile_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['click_sort_column'] = 'email';
  $handler->display->display_options['fields']['field_profile_email']['type'] = 'email_default';
  $handler->display->display_options['fields']['field_profile_email']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['relationship'] = 'field_project_directors_previous_nid';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Current Researchers */
  $handler = $view->new_display('panel_pane', 'Current Researchers', 'project_current_researchers_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Researchers';
  $handler->display->display_options['display_description'] = 'List of current researchers as a pane display.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['regions'] = array(
    'field_profile_image' => 'left',
    'title' => 'right',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Fields: Current Researchers (field_project_researchers) - nid */
  $handler->display->display_options['relationships']['field_project_researchers_nid']['id'] = 'field_project_researchers_nid';
  $handler->display->display_options['relationships']['field_project_researchers_nid']['table'] = 'field_data_field_project_researchers';
  $handler->display->display_options['relationships']['field_project_researchers_nid']['field'] = 'field_project_researchers_nid';
  $handler->display->display_options['relationships']['field_project_researchers_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_project_researchers_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_profile_image']['id'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['table'] = 'field_data_field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['field'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['relationship'] = 'field_project_researchers_nid';
  $handler->display->display_options['fields']['field_profile_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_profile_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_project_researchers_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['relationship'] = 'field_project_researchers_nid';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Previous Researchers */
  $handler = $view->new_display('panel_pane', 'Previous Researchers', 'project_previous_researchers_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Previous Researchers';
  $handler->display->display_options['display_description'] = 'List of previous researchers as a pane display.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Fields: Previous Researchers (field_project_researchers_prev) - nid */
  $handler->display->display_options['relationships']['field_project_researchers_prev_nid']['id'] = 'field_project_researchers_prev_nid';
  $handler->display->display_options['relationships']['field_project_researchers_prev_nid']['table'] = 'field_data_field_project_researchers_prev';
  $handler->display->display_options['relationships']['field_project_researchers_prev_nid']['field'] = 'field_project_researchers_prev_nid';
  $handler->display->display_options['relationships']['field_project_researchers_prev_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_project_researchers_prev_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_profile_image']['id'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['table'] = 'field_data_field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['field'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['relationship'] = 'field_project_researchers_prev_nid';
  $handler->display->display_options['fields']['field_profile_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_profile_image']['field_api_classes'] = 0;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_profile_title_job']['id'] = 'field_profile_title_job';
  $handler->display->display_options['fields']['field_profile_title_job']['table'] = 'field_data_field_profile_title_job';
  $handler->display->display_options['fields']['field_profile_title_job']['field'] = 'field_profile_title_job';
  $handler->display->display_options['fields']['field_profile_title_job']['relationship'] = 'field_project_researchers_prev_nid';
  $handler->display->display_options['fields']['field_profile_title_job']['label'] = '';
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_title_job']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_title_job']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_title_job']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_project_researchers_prev_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: eMail */
  $handler->display->display_options['fields']['field_profile_email']['id'] = 'field_profile_email';
  $handler->display->display_options['fields']['field_profile_email']['table'] = 'field_data_field_profile_email';
  $handler->display->display_options['fields']['field_profile_email']['field'] = 'field_profile_email';
  $handler->display->display_options['fields']['field_profile_email']['relationship'] = 'field_project_researchers_prev_nid';
  $handler->display->display_options['fields']['field_profile_email']['label'] = '';
  $handler->display->display_options['fields']['field_profile_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_email']['click_sort_column'] = 'email';
  $handler->display->display_options['fields']['field_profile_email']['type'] = 'email_default';
  $handler->display->display_options['fields']['field_profile_email']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['relationship'] = 'field_project_researchers_prev_nid';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Project Publications */
  $handler = $view->new_display('panel_pane', 'Project Publications', 'project_publications_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['display_description'] = 'List of project related publications as a pane display.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Fields: Publications (field_project_publications) - nid */
  $handler->display->display_options['relationships']['field_project_publications_nid']['id'] = 'field_project_publications_nid';
  $handler->display->display_options['relationships']['field_project_publications_nid']['table'] = 'field_data_field_project_publications';
  $handler->display->display_options['relationships']['field_project_publications_nid']['field'] = 'field_project_publications_nid';
  $handler->display->display_options['relationships']['field_project_publications_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_project_publications_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Biblio: Biblio Citation */
  $handler->display->display_options['fields']['citation']['id'] = 'citation';
  $handler->display->display_options['fields']['citation']['table'] = 'biblio';
  $handler->display->display_options['fields']['citation']['field'] = 'citation';
  $handler->display->display_options['fields']['citation']['relationship'] = 'field_project_publications_nid';
  $handler->display->display_options['fields']['citation']['label'] = '';
  $handler->display->display_options['fields']['citation']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['external'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['citation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['citation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['citation']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['citation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['citation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['citation']['empty_zero'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['relationship'] = 'field_project_publications_nid';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['projects_panels'] = array(
    t('Master'),
    t('Projects'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Projects list'),
    t('Displays a list of projects as a panel pane.'),
    t('Status'),
    t('Department'),
    t('Geogr. Areas'),
    t('Research Areas'),
    t('Topics'),
    t('View panes'),
    t('Current Directors'),
    t('Directors'),
    t('List of current directors as a pane display.'),
    t('field_project_directors'),
    t('All'),
    t('Previous Directors'),
    t('List of previous directors as a pane display.'),
    t('field_project_directors_previous'),
    t('Current Researchers'),
    t('Researchers'),
    t('List of current researchers as a pane display.'),
    t('field_project_researchers'),
    t('Previous Researchers'),
    t('List of previous researchers as a pane display.'),
    t('field_project_researchers_prev'),
    t('Project Publications'),
    t('Publications'),
    t('List of project related publications as a pane display.'),
    t('field_project_publications'),
  );
  $export['projects_panels'] = $view;

  $view = new view;
  $view->name = 'publications_panes';
  $view->description = 'Displays of publications content using panels.';
  $view->tag = 'content, panels';
  $view->base_table = 'node';
  $view->human_name = 'Publications Panels';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'name';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* Field: Biblio: Biblio Citation */
  $handler->display->display_options['fields']['citation']['id'] = 'citation';
  $handler->display->display_options['fields']['citation']['table'] = 'biblio';
  $handler->display->display_options['fields']['citation']['field'] = 'citation';
  $handler->display->display_options['fields']['citation']['label'] = '';
  $handler->display->display_options['fields']['citation']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['external'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['citation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['citation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['citation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['citation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['citation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['citation']['empty_zero'] = 0;
  /* Field: Biblio: Type of Publication */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'biblio_types';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  /* Sort criterion: Biblio: Year of Publication */
  $handler->display->display_options['sorts']['biblio_year']['id'] = 'biblio_year';
  $handler->display->display_options['sorts']['biblio_year']['table'] = 'biblio';
  $handler->display->display_options['sorts']['biblio_year']['field'] = 'biblio_year';
  $handler->display->display_options['sorts']['biblio_year']['order'] = 'DESC';
  /* Sort criterion: Biblio: Date Published */
  $handler->display->display_options['sorts']['biblio_date']['id'] = 'biblio_date';
  $handler->display->display_options['sorts']['biblio_date']['table'] = 'biblio';
  $handler->display->display_options['sorts']['biblio_date']['field'] = 'biblio_date';
  $handler->display->display_options['sorts']['biblio_date']['order'] = 'DESC';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['granularity'] = 'minute';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created_1']['id'] = 'created_1';
  $handler->display->display_options['sorts']['created_1']['table'] = 'node';
  $handler->display->display_options['sorts']['created_1']['field'] = 'created';
  $handler->display->display_options['sorts']['created_1']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created_1']['granularity'] = 'minute';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'biblio' => 'biblio',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;

  /* Display: Publications of author */
  $handler = $view->new_display('panel_pane', 'Publications of author', 'publications_of_author_pane');
  $handler->display->display_options['display_description'] = 'Panel pane display of publications filtered by authorID';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Biblio: Author ID */
  $handler->display->display_options['arguments']['cid']['id'] = 'cid';
  $handler->display->display_options['arguments']['cid']['table'] = 'biblio_contributor';
  $handler->display->display_options['arguments']['cid']['field'] = 'cid';
  $handler->display->display_options['arguments']['cid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['cid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['cid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['cid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['cid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['cid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['cid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['cid']['add_table'] = 0;
  $handler->display->display_options['arguments']['cid']['require_value'] = 0;
  $handler->display->display_options['arguments']['cid']['reduce_duplicates'] = 0;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'cid' => array(
      'type' => 'context',
      'context' => 'entity:node.field-profile-biblio-author-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Biblio: Author ID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Publications of user */
  $handler = $view->new_display('panel_pane', 'Publications of user', 'publications_of_user_pane');
  $handler->display->display_options['display_description'] = 'Panel pane display of publications filtered by userID';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Biblio: Drupal UserID */
  $handler->display->display_options['arguments']['drupal_uid']['id'] = 'drupal_uid';
  $handler->display->display_options['arguments']['drupal_uid']['table'] = 'biblio_contributor_data';
  $handler->display->display_options['arguments']['drupal_uid']['field'] = 'drupal_uid';
  $handler->display->display_options['arguments']['drupal_uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['drupal_uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['drupal_uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['drupal_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['drupal_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['drupal_uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['drupal_uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['drupal_uid']['not'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'drupal_uid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Biblio: Drupal UserID',
    ),
  );

  /* Display: Publications List by Year */
  $handler = $view->new_display('panel_pane', 'Publications List by Year', 'publications_by_year_pane');
  $handler->display->display_options['display_description'] = 'Displays a list of publications as a panels pane grouped by year..';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'biblio_year';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Biblio: Year of Publication */
  $handler->display->display_options['fields']['biblio_year']['id'] = 'biblio_year';
  $handler->display->display_options['fields']['biblio_year']['table'] = 'biblio';
  $handler->display->display_options['fields']['biblio_year']['field'] = 'biblio_year';
  $handler->display->display_options['fields']['biblio_year']['label'] = '';
  $handler->display->display_options['fields']['biblio_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['biblio_year']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['external'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['biblio_year']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['biblio_year']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['html'] = 0;
  $handler->display->display_options['fields']['biblio_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['biblio_year']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['biblio_year']['hide_empty'] = 0;
  $handler->display->display_options['fields']['biblio_year']['empty_zero'] = 0;
  $handler->display->display_options['fields']['biblio_year']['biblio_label'] = 0;
  /* Field: Biblio: Biblio Citation */
  $handler->display->display_options['fields']['citation']['id'] = 'citation';
  $handler->display->display_options['fields']['citation']['table'] = 'biblio';
  $handler->display->display_options['fields']['citation']['field'] = 'citation';
  $handler->display->display_options['fields']['citation']['label'] = '';
  $handler->display->display_options['fields']['citation']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['external'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['citation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['citation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['citation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['citation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['citation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['citation']['empty_zero'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'biblio' => 'biblio',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 0;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['multiple'] = FALSE;
  /* Filter criterion: Biblio: Type of Publication */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'biblio_types';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 0;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = 0;
  /* Filter criterion: Biblio: Year of Publication */
  $handler->display->display_options['filters']['biblio_year']['id'] = 'biblio_year';
  $handler->display->display_options['filters']['biblio_year']['table'] = 'biblio';
  $handler->display->display_options['filters']['biblio_year']['field'] = 'biblio_year';
  $handler->display->display_options['filters']['biblio_year']['group'] = 0;
  $handler->display->display_options['filters']['biblio_year']['exposed'] = TRUE;
  $handler->display->display_options['filters']['biblio_year']['expose']['operator_id'] = 'biblio_year_op';
  $handler->display->display_options['filters']['biblio_year']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['biblio_year']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['biblio_year']['expose']['operator'] = 'biblio_year_op';
  $handler->display->display_options['filters']['biblio_year']['expose']['identifier'] = 'biblio_year';
  $handler->display->display_options['filters']['biblio_year']['expose']['multiple'] = FALSE;
  /* Filter criterion: Fields: Department (field_biblio_department) - tid */
  $handler->display->display_options['filters']['field_biblio_department_tid']['id'] = 'field_biblio_department_tid';
  $handler->display->display_options['filters']['field_biblio_department_tid']['table'] = 'field_data_field_biblio_department';
  $handler->display->display_options['filters']['field_biblio_department_tid']['field'] = 'field_biblio_department_tid';
  $handler->display->display_options['filters']['field_biblio_department_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_biblio_department_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_biblio_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biblio_department_tid']['expose']['operator_id'] = 'field_biblio_department_tid_op';
  $handler->display->display_options['filters']['field_biblio_department_tid']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_biblio_department_tid']['expose']['operator'] = 'field_biblio_department_tid_op';
  $handler->display->display_options['filters']['field_biblio_department_tid']['expose']['identifier'] = 'field_biblio_department_tid';
  /* Filter criterion: Fields: Topics (field_biblio_topics) - tid */
  $handler->display->display_options['filters']['field_biblio_topics_tid']['id'] = 'field_biblio_topics_tid';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['table'] = 'field_data_field_biblio_topics';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['field'] = 'field_biblio_topics_tid';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_biblio_topics_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biblio_topics_tid']['expose']['operator_id'] = 'field_biblio_topics_tid_op';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['expose']['operator'] = 'field_biblio_topics_tid_op';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['expose']['identifier'] = 'field_biblio_topics_tid';

  /* Display: Publications List by Type */
  $handler = $view->new_display('panel_pane', 'Publications List by Type', 'publications_by_type_pane');
  $handler->display->display_options['display_description'] = 'Displays a list of publications as a panels pane grouped by type..';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'biblio' => 'biblio',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 0;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['multiple'] = FALSE;
  /* Filter criterion: Biblio: Type of Publication */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'biblio_types';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 0;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = 0;
  /* Filter criterion: Biblio: Year of Publication */
  $handler->display->display_options['filters']['biblio_year']['id'] = 'biblio_year';
  $handler->display->display_options['filters']['biblio_year']['table'] = 'biblio';
  $handler->display->display_options['filters']['biblio_year']['field'] = 'biblio_year';
  $handler->display->display_options['filters']['biblio_year']['group'] = 0;
  $handler->display->display_options['filters']['biblio_year']['exposed'] = TRUE;
  $handler->display->display_options['filters']['biblio_year']['expose']['operator_id'] = 'biblio_year_op';
  $handler->display->display_options['filters']['biblio_year']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['biblio_year']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['biblio_year']['expose']['operator'] = 'biblio_year_op';
  $handler->display->display_options['filters']['biblio_year']['expose']['identifier'] = 'biblio_year';
  $handler->display->display_options['filters']['biblio_year']['expose']['multiple'] = FALSE;
  /* Filter criterion: Fields: Department (field_biblio_department) - tid */
  $handler->display->display_options['filters']['field_biblio_department_tid']['id'] = 'field_biblio_department_tid';
  $handler->display->display_options['filters']['field_biblio_department_tid']['table'] = 'field_data_field_biblio_department';
  $handler->display->display_options['filters']['field_biblio_department_tid']['field'] = 'field_biblio_department_tid';
  $handler->display->display_options['filters']['field_biblio_department_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_biblio_department_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_biblio_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biblio_department_tid']['expose']['operator_id'] = 'field_biblio_department_tid_op';
  $handler->display->display_options['filters']['field_biblio_department_tid']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_biblio_department_tid']['expose']['operator'] = 'field_biblio_department_tid_op';
  $handler->display->display_options['filters']['field_biblio_department_tid']['expose']['identifier'] = 'field_biblio_department_tid';
  /* Filter criterion: Fields: Topics (field_biblio_topics) - tid */
  $handler->display->display_options['filters']['field_biblio_topics_tid']['id'] = 'field_biblio_topics_tid';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['table'] = 'field_data_field_biblio_topics';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['field'] = 'field_biblio_topics_tid';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_biblio_topics_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biblio_topics_tid']['expose']['operator_id'] = 'field_biblio_topics_tid_op';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['expose']['operator'] = 'field_biblio_topics_tid_op';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['expose']['identifier'] = 'field_biblio_topics_tid';

  /* Display: Publications of content */
  $handler = $view->new_display('panel_pane', 'Publications of content', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Panel pane display of publications filtered by nodeID';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Fields: Related Projects (field_biblio_projects) - nid */
  $handler->display->display_options['arguments']['field_biblio_projects_nid']['id'] = 'field_biblio_projects_nid';
  $handler->display->display_options['arguments']['field_biblio_projects_nid']['table'] = 'field_data_field_biblio_projects';
  $handler->display->display_options['arguments']['field_biblio_projects_nid']['field'] = 'field_biblio_projects_nid';
  $handler->display->display_options['arguments']['field_biblio_projects_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_biblio_projects_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_biblio_projects_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_biblio_projects_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_biblio_projects_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_biblio_projects_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_biblio_projects_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_biblio_projects_nid']['not'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_biblio_projects_nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Related Projects (field_biblio_projects)',
    ),
  );
  $translatables['publications_panes'] = array(
    t('Master'),
    t('Publications'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Publications of author'),
    t('Panel pane display of publications filtered by authorID'),
    t('All'),
    t('View panes'),
    t('Publications of user'),
    t('Panel pane display of publications filtered by userID'),
    t('Publications List by Year'),
    t('Displays a list of publications as a panels pane grouped by year..'),
    t('Search Terms'),
    t('Type'),
    t('Year'),
    t('Department'),
    t('Topic'),
    t('Publications List by Type'),
    t('Displays a list of publications as a panels pane grouped by type..'),
    t('Publications of content'),
    t('Panel pane display of publications filtered by nodeID'),
  );
  $export['publications_panes'] = $view;

  return $export;
}
