<?php
/**
 * @file
 * mzes_panels_displays.pages_default.inc
 */

/**
 * Implementation of hook_default_page_manager_handlers().
 */
function mzes_panels_displays_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Profile Detail',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'profile' => 'profile',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = '960_16_664_rightSb';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left_above' => NULL,
      'right_above' => array(
        'corner_location' => 'pane',
      ),
      'left_below' => NULL,
      'right_below' => NULL,
      'aboveLeft' => NULL,
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'rightSb' => array(
        'corner_location' => 'panel',
      ),
      'top' => array(
        'corner_location' => 'pane',
      ),
      'aboveRight' => NULL,
      'middle' => NULL,
    ),
    'left_above' => array(
      'style' => '-1',
    ),
    'middle' => array(
      'style' => '-1',
    ),
    'right_above' => array(
      'style' => 'rounded_corners',
    ),
    'aboveRight' => array(
      'style' => '-1',
    ),
    'rightSb' => array(
      'style' => 'rounded_corners',
    ),
    'top' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'aboveLeft';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Profile',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['aboveLeft'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'aboveRight';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_profile_research_interests';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['aboveRight'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'aboveRight';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_profile_research';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-3'] = $pane;
    $display->panels['aboveRight'][1] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects_panels-projects_as_director_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-4'] = $pane;
    $display->panels['middle'][0] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects_panels-projects_as_researcher_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-5'] = $pane;
    $display->panels['middle'][1] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'publications_panes-publications_of_author_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-6'] = $pane;
    $display->panels['middle'][2] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'rightSb';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $display->content['new-7'] = $pane;
    $display->panels['rightSb'][0] = 'new-7';
    $pane = new stdClass;
    $pane->pid = 'new-8';
    $pane->panel = 'top';
    $pane->type = 'panels_mini';
    $pane->subtype = 'profile_core_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => '%node:title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-8'] = $pane;
    $display->panels['top'][0] = 'new-8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Project Detail',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'project' => 'project',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = '960_16_664_rightSb';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left_above' => NULL,
      'right_above' => array(
        'corner_location' => 'pane',
      ),
      'left_below' => NULL,
      'right_below' => NULL,
      'aboveLeft' => NULL,
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'rightSb' => array(
        'corner_location' => 'panel',
      ),
      'middle' => NULL,
      'aboveRight' => NULL,
    ),
    'left_above' => array(
      'style' => '-1',
    ),
    'middle' => array(
      'style' => '-1',
    ),
    'right_above' => array(
      'style' => 'rounded_corners',
    ),
    'aboveRight' => array(
      'style' => '-1',
    ),
    'top' => array(
      'style' => 'default',
    ),
    'rightSb' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'aboveLeft';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['aboveLeft'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'aboveLeft';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_project_current_stage';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['aboveLeft'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'aboveRight';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects_panels-project_current_directors_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-3'] = $pane;
    $display->panels['aboveRight'][0] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'aboveRight';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects_panels-project_current_researchers_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-4'] = $pane;
    $display->panels['aboveRight'][1] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'aboveRight';
    $pane->type = 'panels_mini';
    $pane->subtype = 'project_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Factsheet',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-5'] = $pane;
    $display->panels['aboveRight'][2] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects_panels-project_publications_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-6'] = $pane;
    $display->panels['middle'][0] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'rightSb';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $display->content['new-7'] = $pane;
    $display->panels['rightSb'][0] = 'new-7';
    $pane = new stdClass;
    $pane->pid = 'new-8';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h2 class="pane-title">%node:field-project-title</h2>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-8'] = $pane;
    $display->panels['top'][0] = 'new-8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Basic Page Detail',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Publication Detail',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'biblio' => 'biblio',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = '960_16_664_rightSb';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'aboveLeft' => array(
        'corner_location' => 'pane',
      ),
      'aboveRight' => array(
        'corner_location' => 'panel',
      ),
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'bottom' => NULL,
      'rightSb' => NULL,
    ),
    'aboveRight' => array(
      'style' => 'rounded_corners',
    ),
    'aboveLeft' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'aboveLeft';
    $pane->type = 'views_panes';
    $pane->subtype = 'publications_panes-publication_detail_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '1',
      'offset' => '0',
      'path' => '',
      'fields_override' => array(
        'title' => 0,
        'citation' => 0,
        'biblio_abst_e' => 1,
        'kid' => 1,
        'biblio_authors' => 1,
        'biblio_date' => 1,
        'biblio_doi' => 1,
        'biblio_edition' => 1,
        'biblio_abst_f' => 1,
        'biblio_isbn' => 1,
        'biblio_issn' => 1,
        'biblio_issue' => 1,
        'biblio_original_publication' => 1,
        'biblio_pages' => 1,
        'biblio_place_published' => 1,
        'biblio_lang' => 1,
        'biblio_publisher' => 1,
        'biblio_refereed' => 1,
        'biblio_reprint_edition' => 1,
        'biblio_secondary_authors' => 1,
        'biblio_secondary_title' => 1,
        'biblio_section' => 1,
        'biblio_short_title' => 1,
        'name' => 1,
        'biblio_type_of_work' => 1,
        'biblio_url' => 1,
        'biblio_volume' => 1,
        'biblio_year' => 1,
      ),
      'override_title' => 1,
      'override_title_text' => '%title %node:title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['aboveLeft'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'aboveRight';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_biblio_url_publisher';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'default',
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $display->content['new-2'] = $pane;
    $display->panels['aboveRight'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'aboveRight';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_biblio_url_fulltext';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'default',
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $display->content['new-3'] = $pane;
    $display->panels['aboveRight'][1] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'aboveRight';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_biblio_url_extras';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'default',
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-4'] = $pane;
    $display->panels['aboveRight'][2] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $display->content['new-5'] = $pane;
    $display->panels['middle'][0] = 'new-5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'News Item Detail',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'media_coverage' => 'media_coverage',
              'news_item' => 'news_item',
              'press_release' => 'press_release',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = '960_16_664_rightSb';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'aboveLeft' => NULL,
      'aboveRight' => NULL,
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'bottom' => NULL,
      'rightSb' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'top';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['top'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_5'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Research Departments',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              12 => '12',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '12',
            11 => array(),
            15 => array(),
            13 => array(),
            12 => array(
              123 => '123',
              124 => '124',
            ),
            14 => array(),
            10 => array(),
            7 => array(),
            8 => array(),
            2 => array(),
            3 => array(),
            4 => array(),
            5 => array(),
            9 => array(),
            6 => array(),
            16 => array(),
            1 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display;
  $display->layout = '960_16_664_rightSb';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'aboveLeft' => NULL,
      'aboveRight' => NULL,
      'middle' => NULL,
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'bottom' => NULL,
      'rightSb' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'rightSb';
    $pane->type = 'term_list';
    $pane->subtype = 'term_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'title' => NULL,
      'type' => 'sibling',
      'list_type' => 'ul',
      'path' => 'taxonomy/term',
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => 'Other Departments',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['rightSb'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'rightSb';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_panels-news_by_term_id_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '5',
      'offset' => '0',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
      ),
      'context' => array(
        0 => 'argument_term_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['rightSb'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'top';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-3'] = $pane;
    $display->panels['top'][0] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects_panels-projects_by_term_grouped_by_research_area';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_project_research_areas' => 1,
        'title' => 1,
      ),
      'context' => array(
        0 => 'argument_term_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Projects by Research Area',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-4'] = $pane;
    $display->panels['top'][1] = 'new-4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Research Areas',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              12 => '12',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display;
  $display->layout = '960_16_664_rightSb';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'aboveLeft' => NULL,
      'aboveRight' => NULL,
      'middle' => NULL,
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'bottom' => NULL,
      'rightSb' => array(
        'corner_location' => 'pane',
      ),
    ),
    'rightSb' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'rightSb';
    $pane->type = 'term_list';
    $pane->subtype = 'term_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'title' => NULL,
      'type' => 'top',
      'list_type' => 'ul',
      'path' => 'taxonomy/term',
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => 'Research Departments',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['rightSb'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'rightSb';
    $pane->type = 'term_list';
    $pane->subtype = 'term_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'title' => NULL,
      'type' => 'sibling',
      'list_type' => 'ul',
      'path' => 'taxonomy/term',
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => 'Related Research Areas',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['rightSb'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'rightSb';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_panels-news_by_term_id_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '10',
      'offset' => '0',
      'path' => '',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
      ),
      'context' => array(
        0 => 'argument_term_1',
      ),
      'override_title' => 0,
      'override_title_text' => 'News from RA: %node:title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['rightSb'][2] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'top';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-4'] = $pane;
    $display->panels['top'][0] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects_panels-projects_by_term';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'title' => 1,
        'field_project_duration' => 1,
        'field_project_type' => 1,
        'body' => 1,
      ),
      'context' => array(
        0 => 'argument_term_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-5'] = $pane;
    $display->panels['top'][1] = 'new-5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implementation of hook_default_page_manager_pages().
 */
function mzes_panels_displays_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about_section';
  $page->task = 'page';
  $page->admin_title = 'About Section';
  $page->admin_description = '';
  $page->path = 'about';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'About',
    'name' => 'main-menu',
    'weight' => '6',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_section_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'about_section';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'About Section',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = '960_16_664_rightSb';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'aboveLeft' => NULL,
      'aboveRight' => NULL,
      'middle' => NULL,
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'bottom' => NULL,
      'rightSb' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About the MZES';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about_section'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frontpage';
  $page->task = 'page';
  $page->admin_title = 'Frontpage';
  $page->admin_description = 'Frontpage with custom layout';
  $page->path = 'frontpage';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_frontpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = '960_16_664';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
          2 => 6,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 8,
          1 => 7,
          2 => 9,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'width' => '67',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => '33',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 4,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_right',
        ),
        'parent' => '3',
        'class' => '',
      ),
      'top_right' => array(
        'type' => 'region',
        'title' => 'Top Right',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_left',
        ),
        'parent' => '2',
        'class' => '',
      ),
      'top_left' => array(
        'type' => 'region',
        'title' => 'Top Left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'Bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
      7 => array(
        'type' => 'column',
        'width' => '34',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 11,
        ),
        'class' => '',
      ),
      8 => array(
        'type' => 'column',
        'width' => '33',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 10,
        ),
        'class' => '',
      ),
      9 => array(
        'type' => 'column',
        'width' => '33',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 12,
        ),
        'class' => '',
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center_left',
        ),
        'parent' => '8',
        'class' => '',
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => '7',
        'class' => '',
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center_right',
        ),
        'parent' => '9',
        'class' => '',
      ),
      'center_left' => array(
        'type' => 'region',
        'title' => 'Center Left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => '11',
        'class' => '',
      ),
      'center_right' => array(
        'type' => 'region',
        'title' => 'Center Right',
        'width' => 100,
        'width_type' => '%',
        'parent' => '12',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_right' => NULL,
      'bottom' => NULL,
      'center_left' => array(
        'corner_location' => 'pane',
      ),
      'center' => NULL,
      'center_right' => NULL,
      'top_left' => NULL,
      'rightSb' => array(
        'corner_location' => 'pane',
      ),
      'top' => NULL,
      'aboveLeft' => NULL,
      'middle' => NULL,
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'aboveCenter' => NULL,
      'belowCenter' => NULL,
      'aboveRight' => NULL,
    ),
    'center_left' => array(
      'style' => 'rounded_corners',
    ),
    'top_left' => array(
      'style' => '-1',
    ),
    'rightSb' => array(
      'style' => 'rounded_corners',
    ),
    'aboveRight' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Frontpage';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'aboveLeft';
    $pane->type = 'views_panes';
    $pane->subtype = 'features_panels-homepage_feature_slideshow_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '10',
      'offset' => '0',
      'path' => '',
      'fields_override' => array(
        'field_featured_content_url' => 0,
        'field_featured_content_image' => 1,
        'title' => 1,
        'body' => 1,
        'field_featured_content_url_1' => 1,
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['aboveLeft'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'aboveRight';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_panels-research_areas_links_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '0',
      'offset' => '0',
      'path' => '',
      'fields_override' => array(
        'field_research_area_id' => 0,
        'name' => 1,
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['aboveRight'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'belowCenter';
    $pane->type = 'views_panes';
    $pane->subtype = 'publications_panes-publications_recent_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '5',
      'offset' => '0',
      'path' => '',
      'fields_override' => array(
        'citation' => 1,
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-3'] = $pane;
    $display->panels['belowCenter'][0] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'belowLeft';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_panels-current_news_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-4'] = $pane;
    $display->panels['belowLeft'][0] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'belowRight';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_panels-upcoming_events_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-5'] = $pane;
    $display->panels['belowRight'][0] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'belowRight';
    $pane->type = 'views_panes';
    $pane->subtype = 'features_panels-profile_slideshow_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-6'] = $pane;
    $display->panels['belowRight'][1] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_panels-frontpage_featured_news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '1',
      'offset' => '0',
      'path' => '',
      'fields_override' => array(
        'title' => 1,
        'body' => 1,
      ),
      'override_title' => 1,
      'override_title_text' => 'Important',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:important_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-7'] = $pane;
    $display->panels['middle'][0] = 'new-7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'welcome';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Homepage',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = '960_24_5676_5613_leftSb';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'corner_location' => 'pane',
      ),
      'aboveLeft' => NULL,
      'aboveRight' => NULL,
      'middle' => NULL,
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'bottom' => NULL,
      'rightSb' => NULL,
      'aboveCenter' => NULL,
      'belowCenter' => NULL,
      'alpha' => NULL,
      'leftSb' => NULL,
      'topLeft' => NULL,
      'topCenter' => NULL,
      'topRight' => NULL,
      'bottomLeft' => NULL,
      'bottomCenter' => NULL,
      'bottomRight' => NULL,
      'omega' => NULL,
    ),
    'top' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = 'Welcome';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'leftSb';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_panels-research_areas_links_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['leftSb'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'features_panels-profile_slideshow_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['top'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'topCenter';
    $pane->type = 'views_panes';
    $pane->subtype = 'publications_panes-publications_recent_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-3'] = $pane;
    $display->panels['topCenter'][0] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'topLeft';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_panels-current_news_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-4'] = $pane;
    $display->panels['topLeft'][0] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'topRight';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_panels-upcoming_events_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 1,
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
    $display->content['new-5'] = $pane;
    $display->panels['topRight'][0] = 'new-5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_section';
  $page->task = 'page';
  $page->admin_title = 'News Section';
  $page->admin_description = '';
  $page->path = 'news';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'News',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_section_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news_section';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'News Section',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = '960_16_664_rightSb';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'aboveLeft' => array(
        'corner_location' => 'pane',
      ),
      'aboveRight' => array(
        'corner_location' => 'pane',
      ),
      'middle' => NULL,
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'bottom' => NULL,
      'rightSb' => array(
        'corner_location' => 'pane',
      ),
    ),
    'rightSb' => array(
      'style' => 'rounded_corners',
    ),
    'aboveLeft' => array(
      'style' => 'rounded_corners',
    ),
    'aboveRight' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = 'News & Events';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'aboveLeft';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_panels-featured_news_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['aboveLeft'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'aboveLeft';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_panels-current_news_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['aboveLeft'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'aboveRight';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_panels-featured_event_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
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
    $display->content['new-3'] = $pane;
    $display->panels['aboveRight'][0] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'aboveRight';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_panels-upcoming_events_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 1,
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
    $display->content['new-4'] = $pane;
    $display->panels['aboveRight'][1] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'aboveRight';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '81',
      'links' => 1,
      'leave_node_title' => 1,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 1,
      'override_title' => 1,
      'override_title_text' => 'Press Contact',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-5'] = $pane;
    $display->panels['aboveRight'][2] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'rightSb';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_links_panels-news_categories_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '0',
      'offset' => '0',
      'path' => '',
      'fields_override' => array(
        'name' => 1,
      ),
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
    $display->content['new-6'] = $pane;
    $display->panels['rightSb'][0] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'rightSb';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_links_panels-event_categories_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '0',
      'offset' => '0',
      'path' => '',
      'fields_override' => array(
        'name' => 1,
      ),
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
    $display->content['new-7'] = $pane;
    $display->panels['rightSb'][1] = 'new-7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_section'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'people_section';
  $page->task = 'page';
  $page->admin_title = 'People Section';
  $page->admin_description = '';
  $page->path = 'people';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'People',
    'name' => 'main-menu',
    'weight' => '4',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_people_section_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'people_section';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'People Section',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = '960_16_664_rightSb';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'aboveLeft' => NULL,
      'aboveRight' => NULL,
      'middle' => NULL,
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'bottom' => NULL,
      'rightSb' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'People';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'rightSb';
    $pane->type = 'block';
    $pane->subtype = 'views-a1699127d5c6887a3e1b9d327d2c1e6f';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['rightSb'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'profiles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => 'people',
      'display' => 'staff_directory_page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['top'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['people_section'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'projects_section';
  $page->task = 'page';
  $page->admin_title = 'Projects Section';
  $page->admin_description = '';
  $page->path = 'projects';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Projects',
    'name' => 'main-menu',
    'weight' => '3',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_projects_section_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'projects_section';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Research Areas Overview',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = '960_16_664_rightSb';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'bottom' => NULL,
      'rightSb' => NULL,
      'aboveLeft' => NULL,
      'aboveRight' => NULL,
    ),
    'aboveLeft' => array(
      'style' => '-1',
    ),
    'aboveRight' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Projects Overview';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'aboveLeft';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_panels-research_department_a_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_research_area_id' => 0,
        'name' => 1,
        'description' => 1,
        'tid' => 1,
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['aboveLeft'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'aboveLeft';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_panels-research_areas_a_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_research_area_id' => 0,
        'name' => 1,
        'description' => 1,
        'tid' => 1,
      ),
      'override_title' => 1,
      'override_title_text' => 'Core Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['aboveLeft'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'aboveRight';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_panels-research_department_b_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_research_area_id' => 0,
        'name' => 1,
        'description' => 1,
        'tid' => 1,
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-3'] = $pane;
    $display->panels['aboveRight'][0] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'aboveRight';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_panels-research_areas_b_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_research_area_id' => 0,
        'name' => 1,
        'description' => 1,
        'tid' => 1,
      ),
      'override_title' => 1,
      'override_title_text' => 'Core Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-4'] = $pane;
    $display->panels['aboveRight'][1] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'rightSb';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_panels-news_by_term_id_manual_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '4+5',
      ),
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '5',
      'offset' => '0',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-5'] = $pane;
    $display->panels['rightSb'][0] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'projects_section_intro';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-6'] = $pane;
    $display->panels['top'][0] = 'new-6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['projects_section'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'publications_browser';
  $page->task = 'page';
  $page->admin_title = 'Publications Browser';
  $page->admin_description = '';
  $page->path = 'publications/%arg1/!arg2';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Publications',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Publications',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'arg1' => array(
      'id' => 2,
      'identifier' => 'arg1',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'arg2' => array(
      'id' => 1,
      'identifier' => 'arg2',
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
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_publications_browser_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'publications_browser';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Publications by Type',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'type',
            'case' => 0,
          ),
          'context' => 'argument_string_2',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = '960_16_664_rightSb';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'aboveLeft' => NULL,
      'aboveRight' => NULL,
      'middle' => array(
        'corner_location' => 'pane',
      ),
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'bottom' => NULL,
      'rightSb' => NULL,
    ),
    'middle' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'rightSb';
    $pane->type = 'panels_mini';
    $pane->subtype = 'publications_browse_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $display->content['new-1'] = $pane;
    $display->panels['rightSb'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'publications_panes-publications_by_type_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '',
      'items_per_page' => '25',
      'offset' => '0',
      'path' => 'publications/type',
      'fields_override' => array(
        'citation' => 1,
        'biblio_year' => 0,
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'arguments' => array(
        'name' => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['top'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_publications_browser_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'publications_browser';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Publications by Year',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'year',
            'case' => 0,
          ),
          'context' => 'argument_string_2',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = '960_16_664_rightSb';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'aboveLeft' => NULL,
      'aboveRight' => NULL,
      'middle' => array(
        'corner_location' => 'pane',
      ),
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'bottom' => NULL,
      'rightSb' => NULL,
    ),
    'middle' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'rightSb';
    $pane->type = 'panels_mini';
    $pane->subtype = 'publications_browse_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $display->content['new-1'] = $pane;
    $display->panels['rightSb'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'publications_panes-publications_by_year_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '',
      'items_per_page' => '25',
      'offset' => '0',
      'path' => 'publications/year',
      'fields_override' => array(
        'citation' => 1,
        'name' => 0,
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['top'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_publications_browser_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'publications_browser';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Publications by Author',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        2 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'author',
            'case' => 0,
          ),
          'context' => 'argument_string_2',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = '960_16_664_rightSb';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'aboveLeft' => NULL,
      'aboveRight' => NULL,
      'middle' => array(
        'corner_location' => 'pane',
      ),
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'bottom' => NULL,
      'rightSb' => NULL,
    ),
    'middle' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'rightSb';
    $pane->type = 'panels_mini';
    $pane->subtype = 'publications_browse_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $display->content['new-1'] = $pane;
    $display->panels['rightSb'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'publications_panes-publications_by_author_name_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '25',
      'offset' => '0',
      'path' => 'publications/author',
      'fields_override' => array(
        'citation' => 1,
        'biblio_year' => 0,
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['top'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_publications_browser_panel_context_4';
  $handler->task = 'page';
  $handler->subtask = 'publications_browser';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Publications by Title',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        2 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'title',
            'case' => 0,
          ),
          'context' => 'argument_string_2',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = '960_16_664_rightSb';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'aboveLeft' => NULL,
      'aboveRight' => NULL,
      'middle' => array(
        'corner_location' => 'pane',
      ),
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'bottom' => NULL,
      'rightSb' => NULL,
    ),
    'middle' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'rightSb';
    $pane->type = 'panels_mini';
    $pane->subtype = 'publications_browse_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $display->content['new-1'] = $pane;
    $display->panels['rightSb'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'publications_panes-publications_by_title_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '25',
      'offset' => '0',
      'path' => 'publications/title',
      'fields_override' => array(
        'citation' => 1,
        'biblio_year' => 0,
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['top'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['publications_browser'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'publications_filter_page';
  $page->task = 'page';
  $page->admin_title = 'Publications Advanced Selection';
  $page->admin_description = '';
  $page->path = 'publications/advanced-selection';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Advanced Selection',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Publications',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_publications_filter_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'publications_filter_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Publications by Type',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = '960_12_singularity';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'aboveLeft' => NULL,
      'aboveRight' => NULL,
      'middle' => array(
        'corner_location' => 'pane',
      ),
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'bottom' => NULL,
      'rightSb' => NULL,
      'single' => NULL,
    ),
    'middle' => array(
      'style' => 'rounded_corners',
    ),
    'rightSb' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Publications: Advanced Selection';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'single';
    $pane->type = 'views_panes';
    $pane->subtype = 'publications_panes-publications_list_exposed_filters';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '25',
      'offset' => '0',
      'path' => '',
      'fields_override' => array(
        'citation' => 1,
      ),
      'override_title' => 1,
      'override_title_text' => 'Publications: Advanced Selection',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['single'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['publications_filter_page'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'publications_section';
  $page->task = 'page';
  $page->admin_title = 'Publications Section';
  $page->admin_description = '';
  $page->path = 'publications';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Publications',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Publications',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_publications_section_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'publications_section';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Publications Overview',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = '960_16_664_rightSb';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'aboveLeft' => NULL,
      'aboveRight' => NULL,
      'middle' => array(
        'corner_location' => 'pane',
      ),
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'bottom' => NULL,
      'rightSb' => NULL,
    ),
    'middle' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'rightSb';
    $pane->type = 'panels_mini';
    $pane->subtype = 'publications_browse_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $display->content['new-1'] = $pane;
    $display->panels['rightSb'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'publications_panes-publications_recent_books';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '4',
      'offset' => '0',
      'path' => 'publications/type/book',
      'fields_override' => array(
        'field_biblio_media_assets' => 1,
        'citation' => 1,
      ),
      'override_title' => 1,
      'override_title_text' => 'New Books',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['top'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'publications_panes-publications_recent_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '10',
      'offset' => '0',
      'path' => 'publications/year',
      'fields_override' => array(
        'citation' => 1,
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-3'] = $pane;
    $display->panels['top'][1] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['publications_section'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'research';
  $page->task = 'page';
  $page->admin_title = 'Research Section';
  $page->admin_description = '';
  $page->path = 'research';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Research',
    'name' => 'main-menu',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_research_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'research';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Research Section',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = '960_16_664_rightSb';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'aboveLeft' => NULL,
      'aboveRight' => NULL,
      'middle' => NULL,
      'belowLeft' => NULL,
      'belowRight' => NULL,
      'bottom' => NULL,
      'rightSb' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Research';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['research'] = $page;

 return $pages;

}
