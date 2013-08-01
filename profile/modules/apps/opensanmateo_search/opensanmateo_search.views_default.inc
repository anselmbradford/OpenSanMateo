<?php
/**
 * @file
 * opensanmateo_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opensanmateo_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'opensanmateo_lookup';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_san_mateo_content_index';
  $view->human_name = 'OpenSanMateo Lookup';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_san_mateo_content_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_san_mateo_content_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  $export['opensanmateo_lookup'] = $view;

  $view = new view();
  $view->name = 'opensanmateo_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_san_mateo_content_index';
  $view->human_name = 'OpenSanMateo Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_san_mateo_content_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Thumbnail Image » The image file. */
  $handler->display->display_options['fields']['field_thumbnail_image_file']['id'] = 'field_thumbnail_image_file';
  $handler->display->display_options['fields']['field_thumbnail_image_file']['table'] = 'search_api_index_san_mateo_content_index';
  $handler->display->display_options['fields']['field_thumbnail_image_file']['field'] = 'field_thumbnail_image_file';
  $handler->display->display_options['fields']['field_thumbnail_image_file']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail_image_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_image_file']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_san_mateo_content_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Aggregated Teaser */
  $handler->display->display_options['fields']['search_api_aggregation_1']['id'] = 'search_api_aggregation_1';
  $handler->display->display_options['fields']['search_api_aggregation_1']['table'] = 'search_api_index_san_mateo_content_index';
  $handler->display->display_options['fields']['search_api_aggregation_1']['field'] = 'search_api_aggregation_1';
  $handler->display->display_options['fields']['search_api_aggregation_1']['label'] = '';
  $handler->display->display_options['fields']['search_api_aggregation_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_aggregation_1']['link_to_entity'] = 0;
  /* Field: Indexed Node: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_san_mateo_content_index';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 1;
  /* Field: Indexed Node: Release Date */
  $handler->display->display_options['fields']['field_release_date']['id'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['table'] = 'search_api_index_san_mateo_content_index';
  $handler->display->display_options['fields']['field_release_date']['field'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['label'] = '';
  $handler->display->display_options['fields']['field_release_date']['element_label_colon'] = FALSE;
  /* Sort criterion: Indexed Node: Release Date */
  $handler->display->display_options['sorts']['field_release_date']['id'] = 'field_release_date';
  $handler->display->display_options['sorts']['field_release_date']['table'] = 'search_api_index_san_mateo_content_index';
  $handler->display->display_options['sorts']['field_release_date']['field'] = 'field_release_date';
  $handler->display->display_options['sorts']['field_release_date']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_release_date']['expose']['label'] = 'Release Date';
  /* Filter criterion: Indexed Node: Site Hash */
  $handler->display->display_options['filters']['search_api_site_hash']['id'] = 'search_api_site_hash';
  $handler->display->display_options['filters']['search_api_site_hash']['table'] = 'search_api_index_san_mateo_content_index';
  $handler->display->display_options['filters']['search_api_site_hash']['field'] = 'search_api_site_hash';
  $handler->display->display_options['filters']['search_api_site_hash']['value'] = '2';
  $handler->display->display_options['filters']['search_api_site_hash']['group'] = 1;
  $handler->display->display_options['filters']['search_api_site_hash']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_site_hash']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['search_api_site_hash']['expose']['label'] = 'True';
  $handler->display->display_options['filters']['search_api_site_hash']['expose']['operator'] = 'search_api_site_hash_op';
  $handler->display->display_options['filters']['search_api_site_hash']['expose']['identifier'] = 'search_api_site_hash';
  $handler->display->display_options['filters']['search_api_site_hash']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['search_api_site_hash']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: List w/search */
  $handler = $view->new_display('panel_pane', 'List w/search', 'panel_pane_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Site Hash */
  $handler->display->display_options['filters']['search_api_site_hash']['id'] = 'search_api_site_hash';
  $handler->display->display_options['filters']['search_api_site_hash']['table'] = 'search_api_index_san_mateo_content_index';
  $handler->display->display_options['filters']['search_api_site_hash']['field'] = 'search_api_site_hash';
  $handler->display->display_options['filters']['search_api_site_hash']['value'] = '2';
  $handler->display->display_options['filters']['search_api_site_hash']['group'] = 1;
  $handler->display->display_options['filters']['search_api_site_hash']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_site_hash']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['search_api_site_hash']['expose']['label'] = 'True';
  $handler->display->display_options['filters']['search_api_site_hash']['expose']['operator'] = 'search_api_site_hash_op';
  $handler->display->display_options['filters']['search_api_site_hash']['expose']['identifier'] = 'search_api_site_hash';
  $handler->display->display_options['filters']['search_api_site_hash']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['search_api_site_hash']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_san_mateo_content_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['pane_category']['name'] = 'Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: List by Type */
  $handler = $view->new_display('panel_pane', 'List by Type', 'panel_pane_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Site Hash */
  $handler->display->display_options['filters']['search_api_site_hash']['id'] = 'search_api_site_hash';
  $handler->display->display_options['filters']['search_api_site_hash']['table'] = 'search_api_index_san_mateo_content_index';
  $handler->display->display_options['filters']['search_api_site_hash']['field'] = 'search_api_site_hash';
  $handler->display->display_options['filters']['search_api_site_hash']['value'] = '2';
  $handler->display->display_options['filters']['search_api_site_hash']['group'] = 1;
  $handler->display->display_options['filters']['search_api_site_hash']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_site_hash']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['search_api_site_hash']['expose']['label'] = 'Site';
  $handler->display->display_options['filters']['search_api_site_hash']['expose']['operator'] = 'search_api_site_hash_op';
  $handler->display->display_options['filters']['search_api_site_hash']['expose']['identifier'] = 'search_api_site_hash';
  $handler->display->display_options['filters']['search_api_site_hash']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['search_api_site_hash']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_san_mateo_content_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array();
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  $handler->display->display_options['pane_category']['name'] = 'Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'search_api_site_hash' => 'configureable',
      'type' => '',
    ),
    'sorts' => array(
      'field_release_date' => '',
    ),
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Site item id */
  $handler->display->display_options['arguments']['search_api_site_id']['id'] = 'search_api_site_id';
  $handler->display->display_options['arguments']['search_api_site_id']['table'] = 'search_api_index_san_mateo_content_index';
  $handler->display->display_options['arguments']['search_api_site_id']['field'] = 'search_api_site_id';
  $handler->display->display_options['arguments']['search_api_site_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_site_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_site_id']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['search_api_site_id']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $export['opensanmateo_search'] = $view;

  return $export;
}