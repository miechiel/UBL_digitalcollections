<?php
/**
 * @file
 * features_demo_november_2016.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_demo_november_2016_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function features_demo_november_2016_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function features_demo_november_2016_image_default_styles() {
  $styles = array();

  // Exported image style: front-features-below.
  $styles['front-features-below'] = array(
    'label' => 'front-features-below',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 197,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front-features-first.
  $styles['front-features-first'] = array(
    'label' => 'front-features-first',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 717,
          'height' => 470,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function features_demo_november_2016_node_info() {
  $items = array(
    'collection' => array(
      'name' => t('Collection info'),
      'base' => 'node_content',
      'description' => t('Provides text field for Fedora collection items.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'metadata' => array(
      'name' => t('Description'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
