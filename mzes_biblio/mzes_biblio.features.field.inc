<?php
/**
 * @file
 * mzes_biblio.features.field.inc
 */

/**
 * Implementation of hook_field_default_fields().
 */
function mzes_biblio_field_default_fields() {
  $fields = array();

  // Exported field: 'node-biblio-field_biblio_call_no_other'
  $fields['node-biblio-field_biblio_call_no_other'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_biblio_call_no_other',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 'create',
          'edit' => 'edit',
          'edit own' => 'edit own',
          'view' => 'view',
          'view own' => 'view own',
        ),
        'max_length' => '30',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'biblio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 2,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_biblio_call_no_other',
      'label' => 'UniBib No.',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '30',
        ),
        'type' => 'text_textfield',
        'weight' => '17',
      ),
    ),
  );

  // Exported field: 'node-biblio-field_biblio_mzes_lang'
  $fields['node-biblio-field_biblio_mzes_lang'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_biblio_mzes_lang',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'DE' => 'deutsch',
          'EN' => 'englisch',
          'FR' => 'französisch',
          'IT' => 'italienisch',
          'MS' => 'mehrsprachig',
          'NB' => 'nicht belegt',
          'RU' => 'russisch',
          'SO' => 'sonstige',
        ),
        'allowed_values_function' => '',
        'field_permissions' => array(
          'create' => 'create',
          'edit' => 'edit',
          'edit own' => 'edit own',
          'view' => 'view',
          'view own' => 'view own',
        ),
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'biblio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 21,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_biblio_mzes_lang',
      'label' => 'Language',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '22',
      ),
    ),
  );

  // Exported field: 'node-biblio-field_biblio_mzes_rel_lehrst'
  $fields['node-biblio-field_biblio_mzes_rel_lehrst'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_biblio_mzes_rel_lehrst',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'keine Lehrstuhlzuordnung',
          1 => 'Fachbereich Polit. Wissenschaft',
          2 => 'Fachbereich Soziologie',
          3 => 'Ls Pol Wissenschaft I',
          4 => 'Ls Pol Wissenschaft II',
          5 => 'Ls Pol Wissenschaft III',
          6 => 'Ls Pol Wiss int Vergl Sozforsch',
          7 => 'Ls Pol Wiss u Zeitgeschichte',
          11 => 'Ls Soziologie I',
          12 => 'Ls Soziologie II',
          13 => 'Ls Soziologie III',
          14 => 'Ls Methoden d emp Soz Forschung',
        ),
        'allowed_values_function' => '',
        'field_permissions' => array(
          'create' => 'create',
          'edit' => 'edit',
          'edit own' => 'edit own',
          'view' => 'view',
          'view own' => 'view own',
        ),
      ),
      'translatable' => '1',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'biblio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 25,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_biblio_mzes_rel_lehrst',
      'label' => 'Lehrstuhlzuordnung',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '21',
      ),
    ),
  );

  // Exported field: 'node-biblio-field_biblio_mzes_review'
  $fields['node-biblio-field_biblio_mzes_review'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_biblio_mzes_review',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'ohne',
          1 => 'SSCI reviewed',
          2 => 'andere wissenschaftliche',
          3 => 'Zeitungen, Newsletter, andere',
          4 => 'Eurodata Newsletter',
        ),
        'allowed_values_function' => '',
        'field_permissions' => array(
          'create' => 'create',
          'edit' => 'edit',
          'edit own' => 'edit own',
          'view' => 'view',
          'view own' => 'view own',
        ),
      ),
      'translatable' => '1',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'biblio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 23,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_biblio_mzes_review',
      'label' => 'Review-Status',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '24',
      ),
    ),
  );

  // Exported field: 'node-biblio-field_biblio_mzes_series'
  $fields['node-biblio-field_biblio_mzes_series'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_biblio_mzes_series',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'keine',
          1 => 'MZES Jahrbuch',
          2 => 'IZ / MZES Reihe',
          3 => 'Societies of Europe',
          4 => 'Jahrbuch für historische Kommunismusforschung',
        ),
        'allowed_values_function' => '',
        'field_permissions' => array(
          'create' => 'create',
          'edit' => 'edit',
          'edit own' => 'edit own',
          'view' => 'view',
          'view own' => 'view own',
        ),
      ),
      'translatable' => '1',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'biblio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 22,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_biblio_mzes_series',
      'label' => 'MZES Buchreihen',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '20',
      ),
    ),
  );

  // Exported field: 'node-biblio-field_biblio_note'
  $fields['node-biblio-field_biblio_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_biblio_note',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 'create',
          'edit' => 'edit',
          'edit own' => 'edit own',
          'view' => 'view',
          'view own' => 'view own',
        ),
      ),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'biblio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 14,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_biblio_note',
      'label' => 'Note',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '18',
      ),
    ),
  );

  // Exported field: 'node-biblio-field_biblio_price'
  $fields['node-biblio-field_biblio_price'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_biblio_price',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 'create',
          'edit' => 'edit',
          'edit own' => 'edit own',
          'view' => 'view',
          'view own' => 'view own',
        ),
        'max_length' => '10',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'biblio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 13,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_biblio_price',
      'label' => 'Price',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '10',
        ),
        'type' => 'text_textfield',
        'weight' => '23',
      ),
    ),
  );

  // Exported field: 'node-biblio-field_biblio_unibib_copy'
  $fields['node-biblio-field_biblio_unibib_copy'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_biblio_unibib_copy',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
        'field_permissions' => array(
          'create' => 'create',
          'edit' => 'edit',
          'edit own' => 'edit own',
          'view' => 'view',
          'view own' => 'view own',
        ),
      ),
      'translatable' => '1',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'biblio',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 3,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_biblio_unibib_copy',
      'label' => 'UniBib Copy',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '20',
      ),
    ),
  );

  // Exported field: 'node-biblio-field_biblio_unibib_transfer'
  $fields['node-biblio-field_biblio_unibib_transfer'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_biblio_unibib_transfer',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
        'field_permissions' => array(
          'create' => 'create',
          'edit' => 'edit',
          'edit own' => 'edit own',
          'view' => 'view',
          'view own' => 'view own',
        ),
      ),
      'translatable' => '1',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'biblio',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_biblio_unibib_transfer',
      'label' => 'UniBib Transfer',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '19',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Language');
  t('Lehrstuhlzuordnung');
  t('MZES Buchreihen');
  t('Note');
  t('Price');
  t('Review-Status');
  t('UniBib Copy');
  t('UniBib No.');
  t('UniBib Transfer');

  return $fields;
}
