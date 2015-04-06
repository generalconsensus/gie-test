<?php
/**
 * @file
 * gie_innovation.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gie_innovation_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'innovations';
  $page->task = 'page';
  $page->admin_title = 'Innovations';
  $page->admin_description = 'Resources Landing Page';
  $page->path = 'innovations';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_innovations__panel_context_e3797bcf-20be-4eba-8e89-930bb55f2e73';
  $handler->task = 'page';
  $handler->subtask = 'innovations';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Innovations',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'sidebar_left';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'sidebar' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '61dbe43a-75fe-43bc-a855-90bbfe646f07';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-60e54368-d1e2-4601-b729-207dc5ad91da';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'innovations_listing-resource_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '60e54368-d1e2-4601-b729-207dc5ad91da';
    $display->content['new-60e54368-d1e2-4601-b729-207dc5ad91da'] = $pane;
    $display->panels['main'][0] = 'new-60e54368-d1e2-4601-b729-207dc5ad91da';
    $pane = new stdClass();
    $pane->pid = 'new-ab129232-d653-4beb-81ff-207733b5da27';
    $pane->panel = 'preface';
    $pane->type = 'pane';
    $pane->subtype = 'innovations_introduction';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ab129232-d653-4beb-81ff-207733b5da27';
    $display->content['new-ab129232-d653-4beb-81ff-207733b5da27'] = $pane;
    $display->panels['preface'][0] = 'new-ab129232-d653-4beb-81ff-207733b5da27';
    $pane = new stdClass();
    $pane->pid = 'new-10c3ab0c-cb27-48c7-8059-bf5e19685bee';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-6vSkkV34eaABxf2XK4OOc36N6IAyohwH';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Assistance Sought',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '10c3ab0c-cb27-48c7-8059-bf5e19685bee';
    $display->content['new-10c3ab0c-cb27-48c7-8059-bf5e19685bee'] = $pane;
    $display->panels['sidebar'][0] = 'new-10c3ab0c-cb27-48c7-8059-bf5e19685bee';
    $pane = new stdClass();
    $pane->pid = 'new-9a8dd6a9-15e3-45f0-9b52-f53a6618f790';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-I2gfwaROyft1BxMlakuZNCCqh5BFwoXV';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Sectors',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9a8dd6a9-15e3-45f0-9b52-f53a6618f790';
    $display->content['new-9a8dd6a9-15e3-45f0-9b52-f53a6618f790'] = $pane;
    $display->panels['sidebar'][1] = 'new-9a8dd6a9-15e3-45f0-9b52-f53a6618f790';
    $pane = new stdClass();
    $pane->pid = 'new-ed2f3642-990d-4f6d-a82c-c1d4762f3cf2';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-bCPjY27nCxBH4nkThoEY1wSC0gxiyVjh';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Topics',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ed2f3642-990d-4f6d-a82c-c1d4762f3cf2';
    $display->content['new-ed2f3642-990d-4f6d-a82c-c1d4762f3cf2'] = $pane;
    $display->panels['sidebar'][2] = 'new-ed2f3642-990d-4f6d-a82c-c1d4762f3cf2';
    $pane = new stdClass();
    $pane->pid = 'new-19c26c2c-edab-42d3-8d6c-330cbbe8b14f';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-OW2xuL11GfSOR8Lt2V2k1VJlbtJrQZWK';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Program',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '19c26c2c-edab-42d3-8d6c-330cbbe8b14f';
    $display->content['new-19c26c2c-edab-42d3-8d6c-330cbbe8b14f'] = $pane;
    $display->panels['sidebar'][3] = 'new-19c26c2c-edab-42d3-8d6c-330cbbe8b14f';
    $pane = new stdClass();
    $pane->pid = 'new-ca6a2666-e6ae-489d-a2ff-c6baf1d75ce9';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-DWXXyf4Sf7KbO6qt5tvdO201sGvEOwbE';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Region',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'ca6a2666-e6ae-489d-a2ff-c6baf1d75ce9';
    $display->content['new-ca6a2666-e6ae-489d-a2ff-c6baf1d75ce9'] = $pane;
    $display->panels['sidebar'][4] = 'new-ca6a2666-e6ae-489d-a2ff-c6baf1d75ce9';
    $pane = new stdClass();
    $pane->pid = 'new-bc2720c5-a09e-4775-a9d3-425ad79d404d';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Rlds3Jh70LgzU8nlQV9wQyf1Nzi83k9g';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Country',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'bc2720c5-a09e-4775-a9d3-425ad79d404d';
    $display->content['new-bc2720c5-a09e-4775-a9d3-425ad79d404d'] = $pane;
    $display->panels['sidebar'][5] = 'new-bc2720c5-a09e-4775-a9d3-425ad79d404d';
    $pane = new stdClass();
    $pane->pid = 'new-04cc4700-b985-44c1-9010-fcffd5cf3875';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-I5DY0l6p1FWwEzoigB84GCwJpVN3jjFn';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Stage of Innovation',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '04cc4700-b985-44c1-9010-fcffd5cf3875';
    $display->content['new-04cc4700-b985-44c1-9010-fcffd5cf3875'] = $pane;
    $display->panels['sidebar'][6] = 'new-04cc4700-b985-44c1-9010-fcffd5cf3875';
    $pane = new stdClass();
    $pane->pid = 'new-dde6d9da-6317-4494-9c5c-081473d3f486';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-NFNUK8O1tQr4zVcwWwH4RFAgN7zCSaKE';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Type of Innovation',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'dde6d9da-6317-4494-9c5c-081473d3f486';
    $display->content['new-dde6d9da-6317-4494-9c5c-081473d3f486'] = $pane;
    $display->panels['sidebar'][7] = 'new-dde6d9da-6317-4494-9c5c-081473d3f486';
    $pane = new stdClass();
    $pane->pid = 'new-4fc13182-76a5-4e44-8ff7-d8ecd458dcf4';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-pzIdAjEwyyn4wyhOsDVQbjEGiyDhivpx';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Program',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '4fc13182-76a5-4e44-8ff7-d8ecd458dcf4';
    $display->content['new-4fc13182-76a5-4e44-8ff7-d8ecd458dcf4'] = $pane;
    $display->panels['sidebar'][8] = 'new-4fc13182-76a5-4e44-8ff7-d8ecd458dcf4';
    $pane = new stdClass();
    $pane->pid = 'new-bb6ecbdd-e27b-4f56-864e-ffd6e175f1b9';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Ht1zazGYQlFq0mTXgeskLoTnytOD5w8k';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Created In',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'bb6ecbdd-e27b-4f56-864e-ffd6e175f1b9';
    $display->content['new-bb6ecbdd-e27b-4f56-864e-ffd6e175f1b9'] = $pane;
    $display->panels['sidebar'][9] = 'new-bb6ecbdd-e27b-4f56-864e-ffd6e175f1b9';
    $pane = new stdClass();
    $pane->pid = 'new-ce29e549-8755-4c18-9033-f98f0cd47f2a';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-25DXP0VUKOVQKQuwGI4a2R6StCZmLaIE';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Implemented In',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'ce29e549-8755-4c18-9033-f98f0cd47f2a';
    $display->content['new-ce29e549-8755-4c18-9033-f98f0cd47f2a'] = $pane;
    $display->panels['sidebar'][10] = 'new-ce29e549-8755-4c18-9033-f98f0cd47f2a';
    $pane = new stdClass();
    $pane->pid = 'new-c27c810a-8dce-4fba-97cd-a8b635847479';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-uR9FoZDVqXbAs25w1uggMNvmo0UEboLf';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'c27c810a-8dce-4fba-97cd-a8b635847479';
    $display->content['new-c27c810a-8dce-4fba-97cd-a8b635847479'] = $pane;
    $display->panels['sidebar'][11] = 'new-c27c810a-8dce-4fba-97cd-a8b635847479';
    $pane = new stdClass();
    $pane->pid = 'new-b238a7f8-d02f-4da1-81a5-4fc9d4c12dcf';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-JT1HavDEPAJ0zpsxMAVdEVlFuEkR3pm4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = 'b238a7f8-d02f-4da1-81a5-4fc9d4c12dcf';
    $display->content['new-b238a7f8-d02f-4da1-81a5-4fc9d4c12dcf'] = $pane;
    $display->panels['sidebar'][12] = 'new-b238a7f8-d02f-4da1-81a5-4fc9d4c12dcf';
    $pane = new stdClass();
    $pane->pid = 'new-8a3c01b2-fdd7-4299-af0c-bca75da789e7';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-I8HfvJeK0DfBGyCDWBxx7z5sby7VftjQ';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '8a3c01b2-fdd7-4299-af0c-bca75da789e7';
    $display->content['new-8a3c01b2-fdd7-4299-af0c-bca75da789e7'] = $pane;
    $display->panels['sidebar'][13] = 'new-8a3c01b2-fdd7-4299-af0c-bca75da789e7';
    $pane = new stdClass();
    $pane->pid = 'new-46dc186a-7224-409d-85a7-78fa890e928c';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-XOeivkvBVTbxICo7cyJltVj0N4gWGBIA';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '46dc186a-7224-409d-85a7-78fa890e928c';
    $display->content['new-46dc186a-7224-409d-85a7-78fa890e928c'] = $pane;
    $display->panels['sidebar'][14] = 'new-46dc186a-7224-409d-85a7-78fa890e928c';
    $pane = new stdClass();
    $pane->pid = 'new-bf505105-577e-4151-a08d-a3f15bfc8c92';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-h1bU0yba646Lz9zjcyTa95EJUuZ98J17';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = 'bf505105-577e-4151-a08d-a3f15bfc8c92';
    $display->content['new-bf505105-577e-4151-a08d-a3f15bfc8c92'] = $pane;
    $display->panels['sidebar'][15] = 'new-bf505105-577e-4151-a08d-a3f15bfc8c92';
    $pane = new stdClass();
    $pane->pid = 'new-69861551-e0fa-4eb0-a86e-f8b3ce27b104';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Yxpyh7CA8sktr00XrjyNkkBXpxjXVBD1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = '69861551-e0fa-4eb0-a86e-f8b3ce27b104';
    $display->content['new-69861551-e0fa-4eb0-a86e-f8b3ce27b104'] = $pane;
    $display->panels['sidebar'][16] = 'new-69861551-e0fa-4eb0-a86e-f8b3ce27b104';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['innovations'] = $page;

  return $pages;

}