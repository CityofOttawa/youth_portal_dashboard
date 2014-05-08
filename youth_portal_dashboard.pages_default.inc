<?php
/**
 * @file
 * youth_portal_dashboard.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function youth_portal_dashboard_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'youth_portal_dashboard';
  $page->task = 'page';
  $page->admin_title = 'Youth Portal Dashboard';
  $page->admin_description = 'A dashboard view of the youth portal features and how to edit them.';
  $page->path = 'admin/youthdashboard';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'edit any portal_toc_page content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 5,
            2 => 6,
            3 => 7,
            4 => 8,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Youth Portal Dashboard',
    'name' => 'management',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_youth_portal_dashboard_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'youth_portal_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5d51a804-22ff-c724-dd2d-1935d4ee9f57';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-67c78991-967c-86e4-6542-089059c5b1ae';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views';
    $pane->subtype = 'youth_portal_banners';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Rotating banners',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '67c78991-967c-86e4-6542-089059c5b1ae';
    $display->content['new-67c78991-967c-86e4-6542-089059c5b1ae'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-67c78991-967c-86e4-6542-089059c5b1ae';
    $pane = new stdClass();
    $pane->pid = 'new-9331c5e8-4560-cdd4-a998-c37461c157af';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views';
    $pane->subtype = 'youth_portal_mega_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Mega Menu Blurbs',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9331c5e8-4560-cdd4-a998-c37461c157af';
    $display->content['new-9331c5e8-4560-cdd4-a998-c37461c157af'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-9331c5e8-4560-cdd4-a998-c37461c157af';
    $pane = new stdClass();
    $pane->pid = 'new-4eec3e0c-4c9d-f834-7938-9e799ed091d6';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views';
    $pane->subtype = 'portal_highlights';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '25',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'portal_highlight_sort',
      'override_title' => 1,
      'override_title_text' => 'Homepage featured block order',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4eec3e0c-4c9d-f834-7938-9e799ed091d6';
    $display->content['new-4eec3e0c-4c9d-f834-7938-9e799ed091d6'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-4eec3e0c-4c9d-f834-7938-9e799ed091d6';
    $pane = new stdClass();
    $pane->pid = 'new-11f5d397-6bd6-7bc4-ddec-e81959a9a0ee';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views';
    $pane->subtype = 'youth_portal_right_hand_boxes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Right hand boxes',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '11f5d397-6bd6-7bc4-ddec-e81959a9a0ee';
    $display->content['new-11f5d397-6bd6-7bc4-ddec-e81959a9a0ee'] = $pane;
    $display->panels['two_66_33_first'][3] = 'new-11f5d397-6bd6-7bc4-ddec-e81959a9a0ee';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-67c78991-967c-86e4-6542-089059c5b1ae';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['youth_portal_dashboard'] = $page;

  return $pages;

}
