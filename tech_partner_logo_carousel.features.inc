<?php
/**
 * @file
 * tech_partner_logo_carousel.features.inc
 */

/**
 * Implements hook_views_api().
 */
function tech_partner_logo_carousel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function tech_partner_logo_carousel_image_default_styles() {
  $styles = array();

  // Exported image style: tech_partner_logo.
  $styles['tech_partner_logo'] = array(
    'label' => 'Tech Partner Logo',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => 70,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      3 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 150,
            'height' => 80,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function tech_partner_logo_carousel_node_info() {
  $items = array(
    'technology_partner_logo' => array(
      'name' => t('Technology Partner Logo'),
      'base' => 'node_content',
      'description' => t('These are the white manufacturer logos that scroll across the bottom of the page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
