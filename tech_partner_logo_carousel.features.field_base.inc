<?php
/**
 * @file
 * tech_partner_logo_carousel.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tech_partner_logo_carousel_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_logo_upload'.
  $field_bases['field_logo_upload'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_logo_upload',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
