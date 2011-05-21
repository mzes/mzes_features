<?php
/**
 * @file
 * mzes_defaults.features.field.inc
 */

/**
 * Implementation of hook_field_default_fields().
 */
function mzes_defaults_field_default_fields() {
  $fields = array();

  // Exported field: 'media-audio-file'
  $fields['media-audio-file'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'file',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => 0,
        ),
        'media_large' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => 0,
        ),
        'media_link' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => 0,
        ),
        'media_original' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => -5,
        ),
        'media_preview' => array(
          'label' => 'hidden',
          'module' => 'media',
          'settings' => array(),
          'type' => 'media_large_icon',
          'weight' => -5,
        ),
        'media_small' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'media',
      'field_name' => 'file',
      'label' => 'File',
      'locked' => TRUE,
      'required' => TRUE,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => '',
        'file_extensions' => 'txt',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'file',
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => -5,
      ),
      'widget_type' => 'file_file',
    ),
  );

  // Exported field: 'media-default-file'
  $fields['media-default-file'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'file',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'default',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => 0,
        ),
        'media_large' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => 0,
        ),
        'media_link' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => 0,
        ),
        'media_original' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => -5,
        ),
        'media_preview' => array(
          'label' => 'hidden',
          'module' => 'media',
          'settings' => array(),
          'type' => 'media_large_icon',
          'weight' => -5,
        ),
        'media_small' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'media',
      'field_name' => 'file',
      'label' => 'File',
      'locked' => TRUE,
      'required' => TRUE,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => '',
        'file_extensions' => 'txt',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'file',
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => -5,
      ),
      'widget_type' => 'file_file',
    ),
  );

  // Exported field: 'media-image-file'
  $fields['media-image-file'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'file',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'image',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => 0,
        ),
        'media_large' => array(
          'label' => 'above',
          'module' => 'styles',
          'settings' => array(),
          'type' => 'styles_file_large',
          'weight' => 0,
        ),
        'media_link' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => 0,
        ),
        'media_original' => array(
          'label' => 'hidden',
          'module' => 'styles',
          'settings' => array(),
          'type' => 'styles_file_original',
          'weight' => -5,
        ),
        'media_preview' => array(
          'label' => 'hidden',
          'module' => 'styles',
          'settings' => array(),
          'type' => 'styles_file_square_thumbnail',
          'weight' => -5,
        ),
        'media_small' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'media',
      'field_name' => 'file',
      'label' => 'File',
      'locked' => TRUE,
      'required' => TRUE,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => '',
        'file_extensions' => 'txt',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'file',
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => -5,
      ),
      'widget_type' => 'file_file',
    ),
  );

  // Exported field: 'media-video-file'
  $fields['media-video-file'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'file',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => 0,
        ),
        'media_large' => array(
          'label' => 'above',
          'module' => 'styles',
          'settings' => array(),
          'type' => 'styles_file_large',
          'weight' => 0,
        ),
        'media_link' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => 0,
        ),
        'media_original' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => -5,
        ),
        'media_preview' => array(
          'label' => 'hidden',
          'module' => 'styles',
          'settings' => array(),
          'type' => 'styles_file_square_thumbnail',
          'weight' => -5,
        ),
        'media_small' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'media',
      'field_name' => 'file',
      'label' => 'File',
      'locked' => TRUE,
      'required' => TRUE,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => '',
        'file_extensions' => 'txt',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'file',
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => -5,
      ),
      'widget_type' => 'file_file',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('File');

  return $fields;
}
