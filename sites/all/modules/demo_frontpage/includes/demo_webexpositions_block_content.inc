<?php
/**
 * Custom function to assemble renderable array for block content.
 *
 * @return
 *   returns a renderable array of block content
 */
function demo_webexpositions_block_content() {

  $items['button-more']['text'] = variable_get('demo_webexpositions_more_text_', t('all expositions'));
  $items['button-more']['link'] = variable_get('demo_webexpositions_more_link_', t('#'));

  $d=0;
  while ($d < 6) {
    // Capture text from variables
    $title = variable_get('demo_webexpositions_title_'.$d, '');
    $desc = variable_get('demo_webexpositions_desc_'.$d, '');
    $link = variable_get('demo_webexpositions_link_'.$d, '');
    // Capture the image file path and form into HTML with attributes
    $image_file = file_load(variable_get('demo_webexpositions_image_'.$d.'_fid', ''));
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

      $items[$d] = array(
        '#tree' => TRUE,
        'image' => array(
          '#prefix' => '<li class="dc-grid-item"><a href="'.
                        $link.'"><div class="dc-grid-pic">',
          '#type' => 'markup',
          '#markup' => $image,
          '#suffix' => '</div>',
        ),
        'title' => array(
          '#prefix' => '<div class="dc-grid-caption">',
          '#type' => 'markup',
          '#markup' => '<h4>'.$title.'</h4><div>'.$desc.'</div>',
          '#suffix' => '</a></li>',
        ),
      );
    }

    $d++;
  }

  return theme('demo_webexpositions_block_content', array('items' => $items));
}