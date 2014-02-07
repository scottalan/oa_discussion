<?php
/**
 * @file
 * oa_discussion.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function oa_discussion_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:oa_discussion_post:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'oa_discussion_post';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Space',
      'keyword' => 'space',
      'name' => 'entity_from_field:og_group_ref-node-node',
      'delta' => 0,
      'context' => 'panelizer',
      'id' => 1,
    ),
    1 => array(
      'identifier' => 'Section',
      'keyword' => 'space',
      'name' => 'entity_from_field:oa_section_ref-node-node',
      'delta' => 0,
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
    'sidebar' => array(
      'style' => '0',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '09816a3f-8f86-4bc9-a832-a193b6f23cdc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a8b96a8a-a479-4a98-8be0-207c0d3b91ae';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-original_post';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'view_mode' => 'teaser',
      'widget_title' => '',
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
      'override_title' => '',
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
    $pane->uuid = 'a8b96a8a-a479-4a98-8be0-207c0d3b91ae';
    $display->content['new-a8b96a8a-a479-4a98-8be0-207c0d3b91ae'] = $pane;
    $display->panels['contentmain'][0] = 'new-a8b96a8a-a479-4a98-8be0-207c0d3b91ae';
    $pane = new stdClass();
    $pane->pid = 'new-e7a6e6ae-e748-4f57-9048-1c5870d17aab';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-replies';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
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
    $pane->uuid = 'e7a6e6ae-e748-4f57-9048-1c5870d17aab';
    $display->content['new-e7a6e6ae-e748-4f57-9048-1c5870d17aab'] = $pane;
    $display->panels['contentmain'][1] = 'new-e7a6e6ae-e748-4f57-9048-1c5870d17aab';
    $pane = new stdClass();
    $pane->pid = 'new-7bfcb147-0495-4e66-bd85-edf81d175af1';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7bfcb147-0495-4e66-bd85-edf81d175af1';
    $display->content['new-7bfcb147-0495-4e66-bd85-edf81d175af1'] = $pane;
    $display->panels['contentmain'][2] = 'new-7bfcb147-0495-4e66-bd85-edf81d175af1';
    $pane = new stdClass();
    $pane->pid = 'new-0b783e73-7fb4-474a-8469-030d352184bd';
    $pane->panel = 'contentmain';
    $pane->type = 'oa_discussion_reply';
    $pane->subtype = 'oa_discussion_reply';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'form_build_id' => 'form-iVavqOC6bzBA_ErXsVB7zwrNYyoHM1BHhC1eMooaeqk',
      'form_token' => '4CdQgzPlDP9xxRzmRMKu1oy6AB4yaHSwnO7i8ygSNj0',
      'form_id' => 'oa_discussion_reply_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0b783e73-7fb4-474a-8469-030d352184bd';
    $display->content['new-0b783e73-7fb4-474a-8469-030d352184bd'] = $pane;
    $display->panels['contentmain'][3] = 'new-0b783e73-7fb4-474a-8469-030d352184bd';
    $pane = new stdClass();
    $pane->pid = 'new-ba36f91f-af85-4a7f-8655-1ef4c1de4dc9';
    $pane->panel = 'contentmain';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'panelizer',
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
    $pane->uuid = 'ba36f91f-af85-4a7f-8655-1ef4c1de4dc9';
    $display->content['new-ba36f91f-af85-4a7f-8655-1ef4c1de4dc9'] = $pane;
    $display->panels['contentmain'][4] = 'new-ba36f91f-af85-4a7f-8655-1ef4c1de4dc9';
    $pane = new stdClass();
    $pane->pid = 'new-deaf94a2-282f-46e4-9f62-2ac90460f9d6';
    $pane->panel = 'contentmain';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'panelizer',
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
    $pane->uuid = 'deaf94a2-282f-46e4-9f62-2ac90460f9d6';
    $display->content['new-deaf94a2-282f-46e4-9f62-2ac90460f9d6'] = $pane;
    $display->panels['contentmain'][5] = 'new-deaf94a2-282f-46e4-9f62-2ac90460f9d6';
    $pane = new stdClass();
    $pane->pid = 'new-25a9e5e0-7ba4-44ec-a0c0-3ec7150736b2';
    $pane->panel = 'sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'section_sidebar_top';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
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
    $pane->uuid = '25a9e5e0-7ba4-44ec-a0c0-3ec7150736b2';
    $display->content['new-25a9e5e0-7ba4-44ec-a0c0-3ec7150736b2'] = $pane;
    $display->panels['sidebar'][0] = 'new-25a9e5e0-7ba4-44ec-a0c0-3ec7150736b2';
    $pane = new stdClass();
    $pane->pid = 'new-89f2f967-8a42-428e-866f-aeb81560b156';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-attachments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '89f2f967-8a42-428e-866f-aeb81560b156';
    $display->content['new-89f2f967-8a42-428e-866f-aeb81560b156'] = $pane;
    $display->panels['sidebar'][1] = 'new-89f2f967-8a42-428e-866f-aeb81560b156';
    $pane = new stdClass();
    $pane->pid = 'new-d0a19cea-082c-4c87-9db3-6f21f45ddce0';
    $pane->panel = 'sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'default_section_sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 0,
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
    $pane->uuid = 'd0a19cea-082c-4c87-9db3-6f21f45ddce0';
    $display->content['new-d0a19cea-082c-4c87-9db3-6f21f45ddce0'] = $pane;
    $display->panels['sidebar'][2] = 'new-d0a19cea-082c-4c87-9db3-6f21f45ddce0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:oa_discussion_post:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:oa_section:oa_section_discussion';
  $panelizer->title = 'Discussion Section';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'oa_section';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe_node_access';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Space',
      'keyword' => 'space',
      'name' => 'entity_from_field:og_group_ref-node-node',
      'delta' => 0,
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'bryant_flipped_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
    'sidebar' => array(
      'style' => 'oa_styles_oa_pane',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '92c6c1c3-d007-4864-ac7e-6f0582a701e5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-960363b6-3aaa-47a7-8e75-9b6f91f5dd88';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '960363b6-3aaa-47a7-8e75-9b6f91f5dd88';
    $display->content['new-960363b6-3aaa-47a7-8e75-9b6f91f5dd88'] = $pane;
    $display->panels['contentmain'][0] = 'new-960363b6-3aaa-47a7-8e75-9b6f91f5dd88';
    $pane = new stdClass();
    $pane->pid = 'new-0c8a4bfa-efa2-475b-8248-9b61727a7373';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0c8a4bfa-efa2-475b-8248-9b61727a7373';
    $display->content['new-0c8a4bfa-efa2-475b-8248-9b61727a7373'] = $pane;
    $display->panels['contentmain'][1] = 'new-0c8a4bfa-efa2-475b-8248-9b61727a7373';
    $pane = new stdClass();
    $pane->pid = 'new-794c001a-0c14-4201-9d1e-af6b20045d5d';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-discussion_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => 'oa_discussion_post',
      ),
      'context' => array(
        1 => 'panelizer',
      ),
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'items_per_page' => '20',
      'use_pager' => 1,
      'pager_id' => '',
      'offset' => '',
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '794c001a-0c14-4201-9d1e-af6b20045d5d';
    $display->content['new-794c001a-0c14-4201-9d1e-af6b20045d5d'] = $pane;
    $display->panels['contentmain'][2] = 'new-794c001a-0c14-4201-9d1e-af6b20045d5d';
    $pane = new stdClass();
    $pane->pid = 'new-afbe3b93-a6ff-4b71-810b-e392474fb8db';
    $pane->panel = 'contentmain';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'afbe3b93-a6ff-4b71-810b-e392474fb8db';
    $display->content['new-afbe3b93-a6ff-4b71-810b-e392474fb8db'] = $pane;
    $display->panels['contentmain'][3] = 'new-afbe3b93-a6ff-4b71-810b-e392474fb8db';
    $pane = new stdClass();
    $pane->pid = 'new-ad17a1b3-1859-421b-a3f4-15ccecc4f315';
    $pane->panel = 'contentmain';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'panelizer',
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
    $pane->uuid = 'ad17a1b3-1859-421b-a3f4-15ccecc4f315';
    $display->content['new-ad17a1b3-1859-421b-a3f4-15ccecc4f315'] = $pane;
    $display->panels['contentmain'][4] = 'new-ad17a1b3-1859-421b-a3f4-15ccecc4f315';
    $pane = new stdClass();
    $pane->pid = 'new-66272005-711e-4e4d-911d-8f72213ac17e';
    $pane->panel = 'sidebar';
    $pane->type = 'oa_widgets_content_visibility';
    $pane->subtype = 'oa_widgets_content_visibility';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'form_build_id' => 'form-Mu6nO6nBWsEMQS3rgB1GQ44dcra2o5gifVUMggSJ_u4',
      'form_token' => 'BzH8uxEwTjsQGuqkcXBIlcjCxMTFGGufXWz-7ckhC2M',
      'form_id' => 'oa_widgets_content_visibility_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '66272005-711e-4e4d-911d-8f72213ac17e';
    $display->content['new-66272005-711e-4e4d-911d-8f72213ac17e'] = $pane;
    $display->panels['sidebar'][0] = 'new-66272005-711e-4e4d-911d-8f72213ac17e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:oa_section:oa_section_discussion'] = $panelizer;

  return $export;
}
