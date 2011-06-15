<?php
/**
 * @file
 * mzes_panels_displays.stylizer.inc
 */

/**
 * Implementation of hook_default_stylizer().
 */
function mzes_panels_displays_default_stylizer() {
  $export = array();

  $style = new stdClass;
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'important_pane';
  $style->admin_title = 'Important Pane';
  $style->admin_description = '';
  $style->settings = array(
    'name' => 'important_pane',
    'style_base' => 'pane_rounded_shadow',
    'palette' => array(
      'background' => '#feeae7',
      'text' => '#000000',
      'header-text' => '#000000',
      'header-border' => '#fdddd8',
    ),
    'header_font' => array(
      'font' => '',
      'size' => 'large',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => 'bold',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'text_font' => array(
      'font' => '',
      'size' => 'small',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
    'header_border' => array(
      'thickness' => '1px',
      'style' => 'solid',
    ),
  );
  $export['important_pane'] = $style;

  return $export;
}
