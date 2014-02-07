<?php
/**
 * @file
 * oa_discussion.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function oa_discussion_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_5';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Discussion Edit Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'node-edit',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Node add form',
        'keyword' => 'node_add',
        'name' => 'node_add_form',
        'type' => 'oa_discussion_post',
        'id' => 1,
      ),
    ),
    'relationships' => array(
      0 => array(
        'identifier' => 'Parent Node',
        'keyword' => 'parent',
        'name' => 'entity_from_field:oa_parent-node-node',
        'delta' => 0,
        'context' => 'context_node_add_form_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'oa_discussion_post' => 'oa_discussion_post',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => '0',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7ccba046-b87b-4708-8517-2161dac8e106';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5b8109bd-36af-4214-a04d-35756b7db4b8';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-original_post';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_field:oa_parent-node-node_1',
      ),
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5b8109bd-36af-4214-a04d-35756b7db4b8';
    $display->content['new-5b8109bd-36af-4214-a04d-35756b7db4b8'] = $pane;
    $display->panels['contentmain'][0] = 'new-5b8109bd-36af-4214-a04d-35756b7db4b8';
    $pane = new stdClass();
    $pane->pid = 'new-803615a6-b921-4707-9958-e78ce7e3ffbd';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-replies';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_field:oa_parent-node-node_1',
      ),
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '803615a6-b921-4707-9958-e78ce7e3ffbd';
    $display->content['new-803615a6-b921-4707-9958-e78ce7e3ffbd'] = $pane;
    $display->panels['contentmain'][1] = 'new-803615a6-b921-4707-9958-e78ce7e3ffbd';
    $pane = new stdClass();
    $pane->pid = 'new-80ccf066-940b-4b03-a41f-4352ec43872b';
    $pane->panel = 'contentmain';
    $pane->type = 'node_form_title';
    $pane->subtype = 'node_form_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '80ccf066-940b-4b03-a41f-4352ec43872b';
    $display->content['new-80ccf066-940b-4b03-a41f-4352ec43872b'] = $pane;
    $display->panels['contentmain'][2] = 'new-80ccf066-940b-4b03-a41f-4352ec43872b';
    $pane = new stdClass();
    $pane->pid = 'new-0779e8ed-0496-415a-a814-41a6dd5d0d4c';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_entity_from_field:oa_parent-node-node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'view_mode' => NULL,
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0779e8ed-0496-415a-a814-41a6dd5d0d4c';
    $display->content['new-0779e8ed-0496-415a-a814-41a6dd5d0d4c'] = $pane;
    $display->panels['contentmain'][3] = 'new-0779e8ed-0496-415a-a814-41a6dd5d0d4c';
    $pane = new stdClass();
    $pane->pid = 'new-cbdfa877-5d3d-45ad-b25a-513f969d38e5';
    $pane->panel = 'contentmain';
    $pane->type = 'node_form_path';
    $pane->subtype = 'node_form_path';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'cbdfa877-5d3d-45ad-b25a-513f969d38e5';
    $display->content['new-cbdfa877-5d3d-45ad-b25a-513f969d38e5'] = $pane;
    $display->panels['contentmain'][4] = 'new-cbdfa877-5d3d-45ad-b25a-513f969d38e5';
    $pane = new stdClass();
    $pane->pid = 'new-10d595a0-206f-4980-b440-856f429a4eec';
    $pane->panel = 'contentmain';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '10d595a0-206f-4980-b440-856f429a4eec';
    $display->content['new-10d595a0-206f-4980-b440-856f429a4eec'] = $pane;
    $display->panels['contentmain'][5] = 'new-10d595a0-206f-4980-b440-856f429a4eec';
    $pane = new stdClass();
    $pane->pid = 'new-a8b75067-5d5f-4a63-974f-ed3392a8ed39';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:group_access';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a8b75067-5d5f-4a63-974f-ed3392a8ed39';
    $display->content['new-a8b75067-5d5f-4a63-974f-ed3392a8ed39'] = $pane;
    $display->panels['sidebar'][0] = 'new-a8b75067-5d5f-4a63-974f-ed3392a8ed39';
    $pane = new stdClass();
    $pane->pid = 'new-0d9724f1-8e05-41ac-bcc9-a8696f48dad6';
    $pane->panel = 'sidebar';
    $pane->type = 'panelizer_form_default';
    $pane->subtype = 'panelizer_form_default';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0d9724f1-8e05-41ac-bcc9-a8696f48dad6';
    $display->content['new-0d9724f1-8e05-41ac-bcc9-a8696f48dad6'] = $pane;
    $display->panels['sidebar'][1] = 'new-0d9724f1-8e05-41ac-bcc9-a8696f48dad6';
    $pane = new stdClass();
    $pane->pid = 'new-9e8eeec8-30a5-444c-a3cf-1f738215d79a';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => 'Featured image',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9e8eeec8-30a5-444c-a3cf-1f738215d79a';
    $display->content['new-9e8eeec8-30a5-444c-a3cf-1f738215d79a'] = $pane;
    $display->panels['sidebar'][2] = 'new-9e8eeec8-30a5-444c-a3cf-1f738215d79a';
    $pane = new stdClass();
    $pane->pid = 'new-b254f412-bd50-4299-b9d3-7e4ed9a4fce4';
    $pane->panel = 'sidebar';
    $pane->type = 'node_form_oa_notifications';
    $pane->subtype = 'node_form_oa_notifications';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b254f412-bd50-4299-b9d3-7e4ed9a4fce4';
    $display->content['new-b254f412-bd50-4299-b9d3-7e4ed9a4fce4'] = $pane;
    $display->panels['sidebar'][3] = 'new-b254f412-bd50-4299-b9d3-7e4ed9a4fce4';
    $pane = new stdClass();
    $pane->pid = 'new-388bd57b-ed34-495a-8eb1-e1a6c29c52a9';
    $pane->panel = 'sidebar';
    $pane->type = 'node_form_menu';
    $pane->subtype = 'node_form_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '388bd57b-ed34-495a-8eb1-e1a6c29c52a9';
    $display->content['new-388bd57b-ed34-495a-8eb1-e1a6c29c52a9'] = $pane;
    $display->panels['sidebar'][4] = 'new-388bd57b-ed34-495a-8eb1-e1a6c29c52a9';
    $pane = new stdClass();
    $pane->pid = 'new-ef4345eb-7eb1-4700-828b-d1d1ab294f06';
    $pane->panel = 'sidebar';
    $pane->type = 'node_form_publishing';
    $pane->subtype = 'node_form_publishing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ef4345eb-7eb1-4700-828b-d1d1ab294f06';
    $display->content['new-ef4345eb-7eb1-4700-828b-d1d1ab294f06'] = $pane;
    $display->panels['sidebar'][5] = 'new-ef4345eb-7eb1-4700-828b-d1d1ab294f06';
    $pane = new stdClass();
    $pane->pid = 'new-868fce89-4418-41c7-ad61-fd1c1cd0bf4c';
    $pane->panel = 'sidebar';
    $pane->type = 'node_form_author';
    $pane->subtype = 'node_form_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '868fce89-4418-41c7-ad61-fd1c1cd0bf4c';
    $display->content['new-868fce89-4418-41c7-ad61-fd1c1cd0bf4c'] = $pane;
    $display->panels['sidebar'][6] = 'new-868fce89-4418-41c7-ad61-fd1c1cd0bf4c';
    $pane = new stdClass();
    $pane->pid = 'new-19c040bd-bda5-4848-9cb5-72787d8ffb83';
    $pane->panel = 'sidebar';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '19c040bd-bda5-4848-9cb5-72787d8ffb83';
    $display->content['new-19c040bd-bda5-4848-9cb5-72787d8ffb83'] = $pane;
    $display->panels['sidebar'][7] = 'new-19c040bd-bda5-4848-9cb5-72787d8ffb83';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_5'] = $handler;

  return $export;
}
