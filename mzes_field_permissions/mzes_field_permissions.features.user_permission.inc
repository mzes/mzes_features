<?php
/**
 * @file
 * mzes_field_permissions.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function mzes_field_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer field permissions
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create body
  $permissions['create body'] = array(
    'name' => 'create body',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_biblio_call_no_other
  $permissions['create field_biblio_call_no_other'] = array(
    'name' => 'create field_biblio_call_no_other',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_biblio_mzes_lang
  $permissions['create field_biblio_mzes_lang'] = array(
    'name' => 'create field_biblio_mzes_lang',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_biblio_mzes_rel_lehrst
  $permissions['create field_biblio_mzes_rel_lehrst'] = array(
    'name' => 'create field_biblio_mzes_rel_lehrst',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_biblio_mzes_review
  $permissions['create field_biblio_mzes_review'] = array(
    'name' => 'create field_biblio_mzes_review',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_biblio_mzes_series
  $permissions['create field_biblio_mzes_series'] = array(
    'name' => 'create field_biblio_mzes_series',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_biblio_note
  $permissions['create field_biblio_note'] = array(
    'name' => 'create field_biblio_note',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_biblio_price
  $permissions['create field_biblio_price'] = array(
    'name' => 'create field_biblio_price',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_biblio_unibib_copy
  $permissions['create field_biblio_unibib_copy'] = array(
    'name' => 'create field_biblio_unibib_copy',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_biblio_unibib_transfer
  $permissions['create field_biblio_unibib_transfer'] = array(
    'name' => 'create field_biblio_unibib_transfer',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_profile_biblio_author_id
  $permissions['create field_profile_biblio_author_id'] = array(
    'name' => 'create field_profile_biblio_author_id',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_profile_gender
  $permissions['create field_profile_gender'] = array(
    'name' => 'create field_profile_gender',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_profile_internal_email
  $permissions['create field_profile_internal_email'] = array(
    'name' => 'create field_profile_internal_email',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_profile_staff
  $permissions['create field_profile_staff'] = array(
    'name' => 'create field_profile_staff',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_profile_staff_external
  $permissions['create field_profile_staff_external'] = array(
    'name' => 'create field_profile_staff_external',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_profile_staff_rec_no
  $permissions['create field_profile_staff_rec_no'] = array(
    'name' => 'create field_profile_staff_rec_no',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_profile_staff_status
  $permissions['create field_profile_staff_status'] = array(
    'name' => 'create field_profile_staff_status',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_profile_user
  $permissions['create field_profile_user'] = array(
    'name' => 'create field_profile_user',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_project_current_stage
  $permissions['create field_project_current_stage'] = array(
    'name' => 'create field_project_current_stage',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_project_data_sources
  $permissions['create field_project_data_sources'] = array(
    'name' => 'create field_project_data_sources',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_project_geo_areas
  $permissions['create field_project_geo_areas'] = array(
    'name' => 'create field_project_geo_areas',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_project_tags
  $permissions['create field_project_tags'] = array(
    'name' => 'create field_project_tags',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_project_urls
  $permissions['create field_project_urls'] = array(
    'name' => 'create field_project_urls',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_project_website
  $permissions['create field_project_website'] = array(
    'name' => 'create field_project_website',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit body
  $permissions['edit body'] = array(
    'name' => 'edit body',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_biblio_call_no_other
  $permissions['edit field_biblio_call_no_other'] = array(
    'name' => 'edit field_biblio_call_no_other',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_biblio_mzes_lang
  $permissions['edit field_biblio_mzes_lang'] = array(
    'name' => 'edit field_biblio_mzes_lang',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_biblio_mzes_rel_lehrst
  $permissions['edit field_biblio_mzes_rel_lehrst'] = array(
    'name' => 'edit field_biblio_mzes_rel_lehrst',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_biblio_mzes_review
  $permissions['edit field_biblio_mzes_review'] = array(
    'name' => 'edit field_biblio_mzes_review',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_biblio_mzes_series
  $permissions['edit field_biblio_mzes_series'] = array(
    'name' => 'edit field_biblio_mzes_series',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_biblio_note
  $permissions['edit field_biblio_note'] = array(
    'name' => 'edit field_biblio_note',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_biblio_price
  $permissions['edit field_biblio_price'] = array(
    'name' => 'edit field_biblio_price',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_biblio_unibib_copy
  $permissions['edit field_biblio_unibib_copy'] = array(
    'name' => 'edit field_biblio_unibib_copy',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_biblio_unibib_transfer
  $permissions['edit field_biblio_unibib_transfer'] = array(
    'name' => 'edit field_biblio_unibib_transfer',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_profile_biblio_author_id
  $permissions['edit field_profile_biblio_author_id'] = array(
    'name' => 'edit field_profile_biblio_author_id',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_profile_gender
  $permissions['edit field_profile_gender'] = array(
    'name' => 'edit field_profile_gender',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_profile_internal_email
  $permissions['edit field_profile_internal_email'] = array(
    'name' => 'edit field_profile_internal_email',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_profile_staff
  $permissions['edit field_profile_staff'] = array(
    'name' => 'edit field_profile_staff',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_profile_staff_external
  $permissions['edit field_profile_staff_external'] = array(
    'name' => 'edit field_profile_staff_external',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_profile_staff_rec_no
  $permissions['edit field_profile_staff_rec_no'] = array(
    'name' => 'edit field_profile_staff_rec_no',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_profile_staff_status
  $permissions['edit field_profile_staff_status'] = array(
    'name' => 'edit field_profile_staff_status',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_profile_user
  $permissions['edit field_profile_user'] = array(
    'name' => 'edit field_profile_user',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_project_current_stage
  $permissions['edit field_project_current_stage'] = array(
    'name' => 'edit field_project_current_stage',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_project_data_sources
  $permissions['edit field_project_data_sources'] = array(
    'name' => 'edit field_project_data_sources',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_project_geo_areas
  $permissions['edit field_project_geo_areas'] = array(
    'name' => 'edit field_project_geo_areas',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_project_tags
  $permissions['edit field_project_tags'] = array(
    'name' => 'edit field_project_tags',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_project_urls
  $permissions['edit field_project_urls'] = array(
    'name' => 'edit field_project_urls',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_project_website
  $permissions['edit field_project_website'] = array(
    'name' => 'edit field_project_website',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own body
  $permissions['edit own body'] = array(
    'name' => 'edit own body',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_biblio_call_no_other
  $permissions['edit own field_biblio_call_no_other'] = array(
    'name' => 'edit own field_biblio_call_no_other',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_biblio_mzes_lang
  $permissions['edit own field_biblio_mzes_lang'] = array(
    'name' => 'edit own field_biblio_mzes_lang',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_biblio_mzes_rel_lehrst
  $permissions['edit own field_biblio_mzes_rel_lehrst'] = array(
    'name' => 'edit own field_biblio_mzes_rel_lehrst',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_biblio_mzes_review
  $permissions['edit own field_biblio_mzes_review'] = array(
    'name' => 'edit own field_biblio_mzes_review',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_biblio_mzes_series
  $permissions['edit own field_biblio_mzes_series'] = array(
    'name' => 'edit own field_biblio_mzes_series',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_biblio_note
  $permissions['edit own field_biblio_note'] = array(
    'name' => 'edit own field_biblio_note',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_biblio_price
  $permissions['edit own field_biblio_price'] = array(
    'name' => 'edit own field_biblio_price',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_biblio_unibib_copy
  $permissions['edit own field_biblio_unibib_copy'] = array(
    'name' => 'edit own field_biblio_unibib_copy',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_biblio_unibib_transfer
  $permissions['edit own field_biblio_unibib_transfer'] = array(
    'name' => 'edit own field_biblio_unibib_transfer',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_profile_biblio_author_id
  $permissions['edit own field_profile_biblio_author_id'] = array(
    'name' => 'edit own field_profile_biblio_author_id',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_profile_biography
  $permissions['edit own field_profile_biography'] = array(
    'name' => 'edit own field_profile_biography',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_profile_cv
  $permissions['edit own field_profile_cv'] = array(
    'name' => 'edit own field_profile_cv',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_profile_cv_attachment
  $permissions['edit own field_profile_cv_attachment'] = array(
    'name' => 'edit own field_profile_cv_attachment',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_profile_gender
  $permissions['edit own field_profile_gender'] = array(
    'name' => 'edit own field_profile_gender',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_profile_internal_email
  $permissions['edit own field_profile_internal_email'] = array(
    'name' => 'edit own field_profile_internal_email',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_profile_research
  $permissions['edit own field_profile_research'] = array(
    'name' => 'edit own field_profile_research',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_profile_research_interests
  $permissions['edit own field_profile_research_interests'] = array(
    'name' => 'edit own field_profile_research_interests',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_profile_staff
  $permissions['edit own field_profile_staff'] = array(
    'name' => 'edit own field_profile_staff',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_profile_staff_external
  $permissions['edit own field_profile_staff_external'] = array(
    'name' => 'edit own field_profile_staff_external',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_profile_staff_rec_no
  $permissions['edit own field_profile_staff_rec_no'] = array(
    'name' => 'edit own field_profile_staff_rec_no',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_profile_staff_status
  $permissions['edit own field_profile_staff_status'] = array(
    'name' => 'edit own field_profile_staff_status',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_profile_user
  $permissions['edit own field_profile_user'] = array(
    'name' => 'edit own field_profile_user',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_project_current_stage
  $permissions['edit own field_project_current_stage'] = array(
    'name' => 'edit own field_project_current_stage',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_project_data_sources
  $permissions['edit own field_project_data_sources'] = array(
    'name' => 'edit own field_project_data_sources',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_project_geo_areas
  $permissions['edit own field_project_geo_areas'] = array(
    'name' => 'edit own field_project_geo_areas',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_project_tags
  $permissions['edit own field_project_tags'] = array(
    'name' => 'edit own field_project_tags',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_project_urls
  $permissions['edit own field_project_urls'] = array(
    'name' => 'edit own field_project_urls',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_project_website
  $permissions['edit own field_project_website'] = array(
    'name' => 'edit own field_project_website',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view body
  $permissions['view body'] = array(
    'name' => 'view body',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_biblio_call_no_other
  $permissions['view field_biblio_call_no_other'] = array(
    'name' => 'view field_biblio_call_no_other',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_biblio_mzes_lang
  $permissions['view field_biblio_mzes_lang'] = array(
    'name' => 'view field_biblio_mzes_lang',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_biblio_mzes_rel_lehrst
  $permissions['view field_biblio_mzes_rel_lehrst'] = array(
    'name' => 'view field_biblio_mzes_rel_lehrst',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_biblio_mzes_review
  $permissions['view field_biblio_mzes_review'] = array(
    'name' => 'view field_biblio_mzes_review',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_biblio_mzes_series
  $permissions['view field_biblio_mzes_series'] = array(
    'name' => 'view field_biblio_mzes_series',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_biblio_note
  $permissions['view field_biblio_note'] = array(
    'name' => 'view field_biblio_note',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_biblio_price
  $permissions['view field_biblio_price'] = array(
    'name' => 'view field_biblio_price',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_biblio_unibib_copy
  $permissions['view field_biblio_unibib_copy'] = array(
    'name' => 'view field_biblio_unibib_copy',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_biblio_unibib_transfer
  $permissions['view field_biblio_unibib_transfer'] = array(
    'name' => 'view field_biblio_unibib_transfer',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_profile_biblio_author_id
  $permissions['view field_profile_biblio_author_id'] = array(
    'name' => 'view field_profile_biblio_author_id',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_profile_gender
  $permissions['view field_profile_gender'] = array(
    'name' => 'view field_profile_gender',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_profile_internal_email
  $permissions['view field_profile_internal_email'] = array(
    'name' => 'view field_profile_internal_email',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_profile_staff
  $permissions['view field_profile_staff'] = array(
    'name' => 'view field_profile_staff',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_profile_staff_external
  $permissions['view field_profile_staff_external'] = array(
    'name' => 'view field_profile_staff_external',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_profile_staff_rec_no
  $permissions['view field_profile_staff_rec_no'] = array(
    'name' => 'view field_profile_staff_rec_no',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_profile_staff_status
  $permissions['view field_profile_staff_status'] = array(
    'name' => 'view field_profile_staff_status',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_profile_user
  $permissions['view field_profile_user'] = array(
    'name' => 'view field_profile_user',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own body
  $permissions['view own body'] = array(
    'name' => 'view own body',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_biblio_call_no_other
  $permissions['view own field_biblio_call_no_other'] = array(
    'name' => 'view own field_biblio_call_no_other',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_biblio_mzes_lang
  $permissions['view own field_biblio_mzes_lang'] = array(
    'name' => 'view own field_biblio_mzes_lang',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_biblio_mzes_rel_lehrst
  $permissions['view own field_biblio_mzes_rel_lehrst'] = array(
    'name' => 'view own field_biblio_mzes_rel_lehrst',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_biblio_mzes_review
  $permissions['view own field_biblio_mzes_review'] = array(
    'name' => 'view own field_biblio_mzes_review',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_biblio_mzes_series
  $permissions['view own field_biblio_mzes_series'] = array(
    'name' => 'view own field_biblio_mzes_series',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_biblio_note
  $permissions['view own field_biblio_note'] = array(
    'name' => 'view own field_biblio_note',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_biblio_price
  $permissions['view own field_biblio_price'] = array(
    'name' => 'view own field_biblio_price',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_biblio_unibib_copy
  $permissions['view own field_biblio_unibib_copy'] = array(
    'name' => 'view own field_biblio_unibib_copy',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_biblio_unibib_transfer
  $permissions['view own field_biblio_unibib_transfer'] = array(
    'name' => 'view own field_biblio_unibib_transfer',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_profile_biblio_author_id
  $permissions['view own field_profile_biblio_author_id'] = array(
    'name' => 'view own field_profile_biblio_author_id',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_profile_gender
  $permissions['view own field_profile_gender'] = array(
    'name' => 'view own field_profile_gender',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_profile_internal_email
  $permissions['view own field_profile_internal_email'] = array(
    'name' => 'view own field_profile_internal_email',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_profile_staff
  $permissions['view own field_profile_staff'] = array(
    'name' => 'view own field_profile_staff',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_profile_staff_external
  $permissions['view own field_profile_staff_external'] = array(
    'name' => 'view own field_profile_staff_external',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_profile_staff_rec_no
  $permissions['view own field_profile_staff_rec_no'] = array(
    'name' => 'view own field_profile_staff_rec_no',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_profile_staff_status
  $permissions['view own field_profile_staff_status'] = array(
    'name' => 'view own field_profile_staff_status',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_profile_user
  $permissions['view own field_profile_user'] = array(
    'name' => 'view own field_profile_user',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
