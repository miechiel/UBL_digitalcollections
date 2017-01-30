<?php
/**
 * @file
 * features_demo_november_2016.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function features_demo_november_2016_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_another-title:<nolink>.
  $menu_links['main-menu_another-title:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Another title',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_another-title:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:<nolink>',
  );
  // Exported menu link: main-menu_block:<nolink>.
  $menu_links['main-menu_block:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Block',
    'options' => array(
      'menu_attach_block' => array(
        'name' => 'user|login',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 1,
        'on_hover' => 0,
        'orientation' => 'vertical',
        'mlid' => 610,
        'plid' => 618,
      ),
      'query' => array(
        'block' => 'user',
        'delta' => 'login',
      ),
      'attributes' => array(
        'title' => 'test',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_block:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:<nolink>',
  );
  // Exported menu link: main-menu_contact:user.
  $menu_links['main-menu_contact:user'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_contact:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:<nolink>',
  );
  // Exported menu link: main-menu_education--learning:<nolink>.
  $menu_links['main-menu_education--learning:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Education & Learning',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'submenu-title',
        'style' => '',
      ),
      'identifier' => 'main-menu_education--learning:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:<nolink>',
  );
  // Exported menu link: main-menu_frontpage:<front>.
  $menu_links['main-menu_frontpage:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Frontpage',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_frontpage:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:<nolink>',
  );
  // Exported menu link: main-menu_login:<front>.
  $menu_links['main-menu_login:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => 'user',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'query' => array(
        'module' => 'user',
        'delta' => 'login',
      ),
      'identifier' => 'main-menu_login:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:<nolink>',
  );
  // Exported menu link: main-menu_login:<nolink>.
  $menu_links['main-menu_login:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_login:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_professionals:<nolink>.
  $menu_links['main-menu_professionals:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Professionals',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_professionals:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:<nolink>',
  );
  // Exported menu link: main-menu_separator:<separator>.
  $menu_links['main-menu_separator:<separator>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<separator>',
    'router_path' => '<separator>',
    'link_title' => 'separator',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_separator:<separator>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:<nolink>',
  );
  // Exported menu link: main-menu_test:<front>.
  $menu_links['main-menu_test:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'test',
    'options' => array(
      'query' => array(
        'block' => 'menu',
        'delta' => 'menu-footer-menu',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_test:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:<nolink>',
  );
  // Exported menu link: menu-footer-menu_contact:https://www.library.universiteitleiden.nl/about-us/contact.
  $menu_links['menu-footer-menu_contact:https://www.library.universiteitleiden.nl/about-us/contact'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://www.library.universiteitleiden.nl/about-us/contact',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'menu-footer-menu_contact:https://www.library.universiteitleiden.nl/about-us/contact',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_creative-content-license:node/1.
  $menu_links['menu-footer-menu_creative-content-license:node/1'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Creative content license',
    'options' => array(
      'identifier' => 'menu-footer-menu_creative-content-license:node/1',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_policies:node/10.
  $menu_links['menu-footer-menu_policies:node/10'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Policies',
    'options' => array(
      'identifier' => 'menu-footer-menu_policies:node/10',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_researchers:node/2.
  $menu_links['menu-footer-menu_researchers:node/2'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Researchers',
    'options' => array(
      'identifier' => 'menu-footer-menu_researchers:node/2',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: user-menu_contact:https://www.universiteitleiden.nl/over-ons/contact.
  $menu_links['user-menu_contact:https://www.universiteitleiden.nl/over-ons/contact'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'https://www.universiteitleiden.nl/over-ons/contact',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'user-menu_contact:https://www.universiteitleiden.nl/over-ons/contact',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: user-menu_universiteit-leiden-home:http://www.leidenuniv.nl/.
  $menu_links['user-menu_universiteit-leiden-home:http://www.leidenuniv.nl/'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'http://www.leidenuniv.nl/',
    'router_path' => '',
    'link_title' => 'Universiteit Leiden Home',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'user-menu_universiteit-leiden-home:http://www.leidenuniv.nl/',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Another title');
  t('Block');
  t('Contact');
  t('Creative content license');
  t('Education & Learning');
  t('Frontpage');
  t('Log out');
  t('Login');
  t('Policies');
  t('Professionals');
  t('Researchers');
  t('Universiteit Leiden Home');
  t('separator');
  t('test');

  return $menu_links;
}
