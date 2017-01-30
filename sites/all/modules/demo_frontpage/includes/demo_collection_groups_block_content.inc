<?php
/**
 * Custom function to assemble array for block theme.
 *
 * @return
 *   returns a array of block content.
 */
function demo_collection_groups_block_content() {
  $items = array();
  $items['button-more']['text'] = variable_get('demo_collection_groups_more_text_', t('all collections'));
  $items['button-more']['link'] = variable_get('demo_collection_groups_more_link_', t('#'));
  $d=0;
  while ($d < 10) {
    // Capture text from the variables
    $title = variable_get('demo_collection_groups_title_'.$d, '');
    $desc = variable_get('demo_collection_groups_desc_'.$d, '');
    $link = variable_get('demo_collection_groups_link_'.$d, '');
    // Capture the image file path and form into HTML with attributes
    $image_file = file_load(variable_get('demo_collection_groups_image_'.$d.'_fid', ''));
    $image_path = '';
    if ($image_file) {
      if (isset($image_file->uri)) {
        $image_path = $image_file->uri;
      }
      $image = theme('image',array(
        'path' => ($image_path),
        'title' => $desc,
        'attributes' => array('class' => 'dc-object-fit'),
      ));
      $items[$d]['image'] = $image;
      $items[$d]['title'] = $title;
      $items[$d]['desc'] = $desc;
      $items[$d]['link'] = $link;
    }
    $d++;
  }
  return theme('demo_collection_groups_block_content', array('items' => $items));
}