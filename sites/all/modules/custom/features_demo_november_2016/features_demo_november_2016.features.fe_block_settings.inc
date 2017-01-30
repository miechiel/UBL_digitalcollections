<?php
/**
 * @file
 * features_demo_november_2016.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_demo_november_2016_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-copyright'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'copyright',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'uvl',
        'weight' => -34,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['demo_frontpage-demo_collection_groups_block'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'demo_collection_groups_block',
    'module' => 'demo_frontpage',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uvl',
        'weight' => -30,
      ),
    ),
    'title' => 'About special collections',
    'visibility' => 1,
  );

  $export['demo_frontpage-demo_frontpage_block'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'demo_frontpage_block',
    'module' => 'demo_frontpage',
    'node_types' => array(),
    'pages' => '<front>
<lagaligo>',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => 'feature',
        'status' => 1,
        'theme' => 'uvl',
        'weight' => -33,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['demo_frontpage-demo_webexpositions_block'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'demo_webexpositions_block',
    'module' => 'demo_frontpage',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uvl',
        'weight' => -31,
      ),
    ),
    'title' => 'Exhibitions',
    'visibility' => 1,
  );

  $export['islandora_basic_collection-collection_listing'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'collection_listing',
    'module' => 'islandora_basic_collection',
    'node_types' => array(),
    'pages' => 'collection',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => 'feature',
        'status' => 1,
        'theme' => 'uvl',
        'weight' => -31,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['islandora_basic_collection-collection_object_count'] = array(
    'cache' => 2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'collection_object_count',
    'module' => 'islandora_basic_collection',
    'node_types' => array(),
    'pages' => 'islandora/object/*',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uvl',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['islandora_bookmark-islandora_bookmark_list_info'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora_bookmark_list_info',
    'module' => 'islandora_bookmark',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uvl',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_compound_object-compound_jail_display'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'compound_jail_display',
    'module' => 'islandora_compound_object',
    'node_types' => array(),
    'pages' => 'islandora/object/*',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => 'content_bottom',
        'status' => 1,
        'theme' => 'uvl',
        'weight' => -34,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['islandora_solr-explore'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'explore',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => 'collection',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => 'feature',
        'status' => 1,
        'theme' => 'uvl',
        'weight' => -30,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['islandora_solr-search_navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'search_navigation',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => 'content_top',
        'status' => 1,
        'theme' => 'uvl',
        'weight' => -34,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-136a44c4a687023e66e4898268c95668'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '136a44c4a687023e66e4898268c95668',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'islandora/object/collection*
<front>',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => 'content_top',
        'status' => 1,
        'theme' => 'uvl',
        'weight' => -32,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-8e2cf57c451b5173d57c5d0071207c51'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '8e2cf57c451b5173d57c5d0071207c51',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uvl',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-c9aff44ea5cef77286d2b1558b49bfd0'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'c9aff44ea5cef77286d2b1558b49bfd0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'islandora/object/item*',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uvl',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-collection_info-block_0'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'collection_info-block_0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'islandora/object/*',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => 'content_top',
        'status' => 1,
        'theme' => 'uvl',
        'weight' => -33,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-collection_info-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'collection_info-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'islandora/object/*',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uvl',
        'weight' => -32,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-collection_info-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'collection_info-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uvl',
        'weight' => -29,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-collection_info-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'collection_info-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'uvl',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-frontpage_solr_boxes-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'frontpage_solr_boxes-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uvl',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-top_facet_searches-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'top_facet_searches-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uvl',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-top_site_searches-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'top_site_searches-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uvl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uvl',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
