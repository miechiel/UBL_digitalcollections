<?php
/**
 * @file
 * features_demo_november_2016.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function features_demo_november_2016_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Copyright';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'copyright';
  $fe_block_boxes->body = '<div class="dc-copyright">
				©2016 Leiden University
				A service provided by Leiden University Libraries
			</div>';

  $export['copyright'] = $fe_block_boxes;

  return $export;
}
