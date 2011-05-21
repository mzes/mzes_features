<?php
/**
 * @file
 * mzes_defaults.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function mzes_defaults_user_default_permissions() {
  $permissions = array();

  // Exported permission: Use PHP for title patterns
  $permissions['Use PHP for title patterns'] = array(
    'name' => 'Use PHP for title patterns',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'auto_nodetitle',
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

  // Exported permission: create field_profile_titles_rendering
  $permissions['create field_profile_titles_rendering'] = array(
    'name' => 'create field_profile_titles_rendering',
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

  // Exported permission: edit field_profile_titles_rendering
  $permissions['edit field_profile_titles_rendering'] = array(
    'name' => 'edit field_profile_titles_rendering',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
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

  // Exported permission: edit own field_profile_titles_rendering
  $permissions['edit own field_profile_titles_rendering'] = array(
    'name' => 'edit own field_profile_titles_rendering',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
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

  // Exported permission: view field_profile_titles_rendering
  $permissions['view field_profile_titles_rendering'] = array(
    'name' => 'view field_profile_titles_rendering',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
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

  // Exported permission: view own field_profile_titles_rendering
  $permissions['view own field_profile_titles_rendering'] = array(
    'name' => 'view own field_profile_titles_rendering',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
