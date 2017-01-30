<?php
/**
 * Custom function to assemble array for block theme.
 *
 * @return
 *   returns a array of block content.
 */
function demo_frontpage_block_content() {
  $items = array();

  $title = variable_get('demo_frontpage_title_0', '');
  $desc = variable_get('demo_frontpage_desc_0', '');
  $link = variable_get('demo_frontpage_link_0', null);
  $items['button-more']['text'] = variable_get('demo_frontpage_more_text_', t('all expositions'));
  $items['button-more']['link'] = variable_get('demo_frontpage_more_link_', t('#'));

  // Capture the image file path and form into HTML with attributes
  $image_file = file_load(variable_get('demo_frontpage_image_0'.'_fid', ''));
  $image_path = '';
  if ($image_file) {
    if (isset($image_file->uri)) {
      $image_path = $image_file->uri;
    }
    $image = theme('image_style', array(
      'style_name' => 'front-features-first',
      'path' => $image_path,
      'alt' => t($title),
      'attributes' => array('class' => 'dc-object-fit'),
    ));

    $items['first-item'] = array(
      'image' => $image,
      'title' => $title,
      'desc' => $desc,
      'link' => $link,
    );
  }

  $d=1;
  while ($d < 5) {
    $title = variable_get('demo_frontpage_title_'.$d, '');
    $desc = variable_get('demo_frontpage_desc_'.$d, '');
    $link = variable_get('demo_frontpage_link_'.$d, null);
    // Capture the image file path and form into HTML with attributes
    $image_file = file_load(variable_get('demo_frontpage_image_'.$d.'_fid', ''));
    $image_path = '';
    if ($image_file) {
      if (isset($image_file->uri)) {
        $image_path = $image_file->uri;
      }
      $image = theme('image_style',array(
        'style_name' => 'front-features-below',
        'path' => ($image_path),
        'title' => $desc,
        'attributes' => array('class' => 'dc-object-fit'),
      ));
      $items['feat-browser'][$d] = array(
        'title' => $title,
        'desc' => $desc,
        'image' => $image,
        'link' => $link,
      );
   }
    $d++;
  }
  return theme('demo_frontpage_block_content', array('items' => $items));
}