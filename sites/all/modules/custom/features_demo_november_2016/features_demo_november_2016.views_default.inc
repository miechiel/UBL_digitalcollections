<?php
/**
 * @file
 * features_demo_november_2016.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_demo_november_2016_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'clone_of_frontpage_solr_boxes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Collection page boxes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related items';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  /* Field: Islandora Solr: fgs_label_t */
  $handler->display->display_options['fields']['fgs_label_t']['id'] = 'fgs_label_t';
  $handler->display->display_options['fields']['fgs_label_t']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fgs_label_t']['field'] = 'fgs_label_t';
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  /* Contextual filter: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['default_action'] = 'default';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Islandora Solr: dc.title */
  $handler->display->display_options['filters']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['group'] = 1;

  /* Display: Browse Collections */
  $handler = $view->new_display('block', 'Browse Collections', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse Collections';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '11';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'dc.title' => 'dc.title',
    'counter' => 'counter',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: dc.title */
  $handler->display->display_options['filters']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['group'] = 1;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:root';

  /* Display: Collection large image block */
  $handler = $view->new_display('block', 'Collection large image block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Collection items';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no collection items.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  /* Field: Islandora Solr: fgs_label_t */
  $handler->display->display_options['fields']['fgs_label_t']['id'] = 'fgs_label_t';
  $handler->display->display_options['fields']['fgs_label_t']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fgs_label_t']['field'] = 'fgs_label_t';
  $handler->display->display_options['fields']['fgs_label_t']['label'] = '';
  $handler->display->display_options['fields']['fgs_label_t']['exclude'] = TRUE;
  $handler->display->display_options['fields']['fgs_label_t']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a title="[fgs_label_t]" href="/islandora/object/[PID]"><img class="dc-object-fit" src="https://scharrelaar-p1.leidenuniv.nl/islandora/object/[PID]/datastream/JPG/view" alt="[PID]"></a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: fedora_datastream_latest_JPG_MIMETYPE_mt */
  $handler->display->display_options['filters']['fedora_datastream_latest_JPG_MIMETYPE_mt']['id'] = 'fedora_datastream_latest_JPG_MIMETYPE_mt';
  $handler->display->display_options['filters']['fedora_datastream_latest_JPG_MIMETYPE_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['fedora_datastream_latest_JPG_MIMETYPE_mt']['field'] = 'fedora_datastream_latest_JPG_MIMETYPE_mt';
  $handler->display->display_options['filters']['fedora_datastream_latest_JPG_MIMETYPE_mt']['value'] = 'image/jpeg';

  /* Display: Related items */
  $handler = $view->new_display('block', 'Related items', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  /* Field: Islandora Solr: fgs_label_t */
  $handler->display->display_options['fields']['fgs_label_t']['id'] = 'fgs_label_t';
  $handler->display->display_options['fields']['fgs_label_t']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fgs_label_t']['field'] = 'fgs_label_t';
  $handler->display->display_options['fields']['fgs_label_t']['label'] = '';
  $handler->display->display_options['fields']['fgs_label_t']['exclude'] = TRUE;
  $handler->display->display_options['fields']['fgs_label_t']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a title="[fgs_label_t]" href="/islandora/object/[PID]"><div class="dc-grid-pic"><img class="dc-object-fit" src="https://scharrelaar-p1.leidenuniv.nl/islandora/object/[PID]/datastream/TN/view" alt="[PID]"></div></a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $export['clone_of_frontpage_solr_boxes'] = $view;

  $view = new view();
  $view->name = 'collection_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Collection info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '<h2>[title]</h2><p>[field_subtitle]</p>';
  $handler->display->display_options['fields']['field_subtitle']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_subtitle']['element_class'] = 'dc-feat-desc';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['element_default_classes'] = FALSE;
  /* Field: Content: Collection image */
  $handler->display->display_options['fields']['field_collection_image']['id'] = 'field_collection_image';
  $handler->display->display_options['fields']['field_collection_image']['table'] = 'field_data_field_collection_image';
  $handler->display->display_options['fields']['field_collection_image']['field'] = 'field_collection_image';
  $handler->display->display_options['fields']['field_collection_image']['label'] = '';
  $handler->display->display_options['fields']['field_collection_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_collection_image']['alter']['text'] = '<div class="dc-feat-pic"><h4>[field_collection_image-title]</h4>
[field_collection_image]</div>';
  $handler->display->display_options['fields']['field_collection_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_collection_image']['element_class'] = 'dc-object-fit';
  $handler->display->display_options['fields']['field_collection_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_collection_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: PID (field_pid) */
  $handler->display->display_options['arguments']['field_pid_value']['id'] = 'field_pid_value';
  $handler->display->display_options['arguments']['field_pid_value']['table'] = 'field_data_field_pid';
  $handler->display->display_options['arguments']['field_pid_value']['field'] = 'field_pid_value';
  $handler->display->display_options['arguments']['field_pid_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_pid_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_pid_value']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_pid_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pid_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pid_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pid_value']['limit'] = '0';
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
    'collection' => 'collection',
  );

  /* Display: Title text */
  $handler = $view->new_display('block', 'Title text', 'block_0');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="dc-feat-banner">';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '</div>';

  /* Display: Description */
  $handler = $view->new_display('block', 'Description', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<p class="dc-leader">[body-summary]</p>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body_1']['element_type'] = 'p';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;

  /* Display: Metadata */
  $handler = $view->new_display('block', 'Metadata', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Description';
  $handler->display->display_options['display_description'] = 'Description';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: origination */
  $handler->display->display_options['fields']['field_origination']['id'] = 'field_origination';
  $handler->display->display_options['fields']['field_origination']['table'] = 'field_data_field_origination';
  $handler->display->display_options['fields']['field_origination']['field'] = 'field_origination';
  $handler->display->display_options['fields']['field_origination']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_origination']['element_label_colon'] = FALSE;
  /* Field: Content: date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  /* Field: Content: extent */
  $handler->display->display_options['fields']['field_extent']['id'] = 'field_extent';
  $handler->display->display_options['fields']['field_extent']['table'] = 'field_data_field_extent';
  $handler->display->display_options['fields']['field_extent']['field'] = 'field_extent';
  $handler->display->display_options['fields']['field_extent']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_extent']['element_label_colon'] = FALSE;
  /* Field: Content: abstract */
  $handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
  $handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['element_label_colon'] = FALSE;
  /* Field: Content: institution */
  $handler->display->display_options['fields']['field_institution']['id'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['table'] = 'field_data_field_institution';
  $handler->display->display_options['fields']['field_institution']['field'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['element_label_colon'] = FALSE;
  /* Field: Content: location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'metadata' => 'metadata',
  );

  /* Display: Related content */
  $handler = $view->new_display('block', 'Related content', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related content';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Related content */
  $handler->display->display_options['fields']['field_related_content_new']['id'] = 'field_related_content_new';
  $handler->display->display_options['fields']['field_related_content_new']['table'] = 'field_data_field_related_content_new';
  $handler->display->display_options['fields']['field_related_content_new']['field'] = 'field_related_content_new';
  $handler->display->display_options['fields']['field_related_content_new']['label'] = '';
  $handler->display->display_options['fields']['field_related_content_new']['element_label_colon'] = FALSE;
  $export['collection_info'] = $view;

  return $export;
}
