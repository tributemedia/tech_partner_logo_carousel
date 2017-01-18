<?php
/**
 * @file
 * tech_partner_logo_carousel.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tech_partner_logo_carousel_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tech_partner_logos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tech Partner Logos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Technology Partners';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = '';
  $handler->display->display_options['style_options']['visible'] = '6';
  $handler->display->display_options['style_options']['auto'] = '3';
  $handler->display->display_options['style_options']['autoPause'] = 0;
  $handler->display->display_options['style_options']['animation'] = '2000';
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Logo Upload */
  $handler->display->display_options['fields']['field_logo_upload']['id'] = 'field_logo_upload';
  $handler->display->display_options['fields']['field_logo_upload']['table'] = 'field_data_field_logo_upload';
  $handler->display->display_options['fields']['field_logo_upload']['field'] = 'field_logo_upload';
  $handler->display->display_options['fields']['field_logo_upload']['label'] = '';
  $handler->display->display_options['fields']['field_logo_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo_upload']['settings'] = array(
    'image_style' => 'tech_partner_logo',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'technology_partner_logo' => 'technology_partner_logo',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['tech_partner_logos'] = $view;

  return $export;
}
