<?php
/**
 * Theme override for theme_menu_link()
 */
function uvl_menu_link($variables) {
    $element = $variables['element'];
    $menu_name = $variables['element']['#original_link']['menu_name'];
    $sub_menu = '';
    $classes = implode (' ',$element['#attributes']['class']);

    //add class to menu item if it has children
    if ($element['#below']) {
      $sub_menu = drupal_render($element['#below']);
      $element['#attributes']['class'][] = 'cbp-placeholder';
      $sub_menu = '<div class="cbp-hrsub">
        <div class="cbp-hrsub-inner dc-centercontent"><div>'
        . $sub_menu . '</div></div>';
    }

    $output = l($element['#title'], $element['#href'],
      array('attributes' => $element['#attributes']));

    //create fragment link for <nolink> menu items in first level
    if ($element['#href'] == '<nolink>' && $element['#below']) {
      $output = l($element['#title'], NULL, array(
        'attributes' => $element['#attributes'],
        'fragment' => FALSE
      ));
    }
    //H4 element for <nolink> items in submenu
    if ($element['#href'] == '<nolink>' && !$element['#below']) {
      $output = '<h4>' . $element['#title'] . '</h4>';
    }
    //Change separator menu item to div element
    if ($element['#href'] == '<separator>') {
      $output = '</ul></div><div><ul>';
      return $output;
    }
    //Inject block content when url query contains block
    if (isset($element['#original_link']['options']['query']['block'])) {
      $output = render_block_content(
        $element['#original_link']['options']['query']['block'],
        $element['#original_link']['options']['query']['delta']);
    }

    //Inject search block after last menu item
    if ($element['#original_link']['depth'] === '1' &&
      in_array('last', $element['#attributes']['class']) &&
      $menu_name == 'main-menu') {
      return '<li>' . $output . $sub_menu . '</li>' .
      '<li class="dc-menu-search">' .
      render_block_content('islandora_solr', 'simple') . '</li>';
    }

    return '<li classes="'.$classes.'">' . $output . $sub_menu . '</li>';
}

/**
 * Implements hook_form_alter().
 */
function uvl_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'islandora_solr_simple_search_form') {
    //change submit button markup
    $form['simple']['submit'] = array(
      '#type' => 'submit',
      '#suffix' => '<button type="submit" class="form-submit"><i class="fa fa-search"></i></button>',
      '#weight' => 1000,
    );
    //add placeholder to search textbox
    $form['simple']['islandora_simple_search_query']['#attributes']['placeholder'] = t('Search');
  }
}

/**
 * Helper function to find and render a block.
 */
function render_block_content($module, $delta) {
  $output = '';
  if ($block = block_load($module, $delta)) {
    if ($build = module_invoke($module, 'block_view', $delta)) {
      $delta = str_replace('-', '_', $delta);
      drupal_alter(array(
        'block_view',
        "block_view_{$module}_{$delta}"
      ), $build, $block);

      if (!empty($build['content'])) {
        return is_array($build['content']) ? render($build['content']) : $build['content'];
      }
    }
  }
  return $output;
}

/**
 * Theme_preprocess_image
 * @param array $variables
 */
function uvl_preprocess_image(&$variables) {
  //No other way than check for image path to determine if it is a solr search page.

  if(strpos($variables['path'], 'solr_nav')) {
    $variables['attributes']['class'][] = 'dc-object-fit';
  }
}

/**
 * Theme_item_list
 * @param array $variables
 */
function uvl_item_list(&$variables) {

  //change classes in search results page list
  if (isset($variables['attributes']['class']) &&
    $variables['attributes']['class'][0] == 'pager') {
      $variables['attributes']['class'][] = 'dc-searchresults-pager';
      foreach ($variables['items'] as $key => $var)
      {
        if ($var['class'][0] == 'first') {
          $variables['items'][$key]['class'][] = 'dc-pager-first';
        }
        if ($var['class'][0] == 'pager-current') {
          $variables['items'][$key]['class'][] = 'dc-pager-active';
        }
        if ($var['class'][0] == 'pager-next') {
          $variables['items'][$key]['class'][] = 'dc-pager-next';
        }
        if ($var['class'][0] == 'pager-previous') {
          $variables['items'][$key]['class'][] = 'dc-pager-prev';
        }
        if ($var['class'][0] == 'pager-first') {
          $variables['items'][$key]['class'][] = 'dc-pager-first';
        }
        if ($var['class'][0] == 'pager-last') {
          $variables['items'][$key]['class'][] = 'dc-pager-last';
        }
      }
  }
  //Change class for search results switch list
  if (isset($variables['attributes']['class']) &&
    $variables['attributes']['class'] == 'islandora-solr-display') {
    $variables['attributes']['class'] = 'dc-searchresults-tools';
  }

  $items = $variables['items'];
  $title = $variables['title'];
  $type = $variables['type'];
  $attributes = $variables['attributes'];

  // Only output the list container and title, if there are any list items.
  // Check to see whether the block title exists before adding a header.
  // Empty headers are not semantic and present accessibility challenges.
  $output = '';
  if (isset($title) && $title !== '') {
    $output .= '<h3>' . $title . '</h3>';
  }

  if (!empty($items)) {
    $output .= "<$type" . drupal_attributes($attributes) . '>';
    $num_items = count($items);
    $i = 0;
    foreach ($items as $item) {
      $attributes = array();
      $children = array();
      $data = '';
      $i++;
      if (is_array($item)) {
        foreach ($item as $key => $value) {
          if ($key == 'data') {
            $data = $value;
          }
          elseif ($key == 'children') {
            $children = $value;
          }
          else {
            $attributes[$key] = $value;
          }
        }
      }
      else {
        $data = $item;
      }
      if (count($children) > 0) {
        // Render nested list.
        $data .= theme_item_list(array('items' => $children, 'title' => NULL, 'type' => $type, 'attributes' => $attributes));
      }
      if ($i == 1) {
        $attributes['class'][] = 'first';
      }
      if ($i == $num_items) {
        $attributes['class'][] = 'last';
      }
      $output .= '<li' . drupal_attributes($attributes) . '>' . $data . "</li>\n";
    }
    $output .= "</$type>";
  }
  return $output;
}