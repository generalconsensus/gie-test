<?php
/**
 * @file
 * gie_funding.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gie_funding_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'funding';
  $page->task = 'page';
  $page->admin_title = 'Funding';
  $page->admin_description = 'Funding Landing Page';
  $page->path = 'funding';
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
  $handler->name = 'page_funding__panel_context_9d0ed62e-0d22-4cf9-b9a1-5b2084b8c5cf';
  $handler->task = 'page';
  $handler->subtask = 'funding';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Funding',
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
  $display->layout = 'landing';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'sidebar' => NULL,
      'main' => NULL,
      'title' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bdbbea43-cdbe-430c-8e2c-73e8e66065aa';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-37707f0a-0209-4a3c-80b3-384fe53763cb';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'funding_opp_listing-funding_listing';
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
    $pane->uuid = '37707f0a-0209-4a3c-80b3-384fe53763cb';
    $display->content['new-37707f0a-0209-4a3c-80b3-384fe53763cb'] = $pane;
    $display->panels['main'][0] = 'new-37707f0a-0209-4a3c-80b3-384fe53763cb';
    $pane = new stdClass();
    $pane->pid = 'new-03ac2c24-cd07-4197-a7a3-bab64b3980da';
    $pane->panel = 'sidebar';
    $pane->type = 'pane';
    $pane->subtype = 'facet_pane';
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
    $pane->uuid = '03ac2c24-cd07-4197-a7a3-bab64b3980da';
    $display->content['new-03ac2c24-cd07-4197-a7a3-bab64b3980da'] = $pane;
    $display->panels['sidebar'][0] = 'new-03ac2c24-cd07-4197-a7a3-bab64b3980da';
    $pane = new stdClass();
    $pane->pid = 'new-84e5e390-844b-40ce-9f02-150757d0083a';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-4HcOdHYZ5BytzONwnn0RLFevvSBa9RqV';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Funding Type',
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
    $pane->uuid = '84e5e390-844b-40ce-9f02-150757d0083a';
    $display->content['new-84e5e390-844b-40ce-9f02-150757d0083a'] = $pane;
    $display->panels['sidebar'][1] = 'new-84e5e390-844b-40ce-9f02-150757d0083a';
    $pane = new stdClass();
    $pane->pid = 'new-76a72559-783a-4da9-9306-b643191fb123';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-gfYTZ2KI0tWyHR9IKJS5xCCO9I1fxch4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Estimated Time To Complete Application',
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
    $pane->uuid = '76a72559-783a-4da9-9306-b643191fb123';
    $display->content['new-76a72559-783a-4da9-9306-b643191fb123'] = $pane;
    $display->panels['sidebar'][2] = 'new-76a72559-783a-4da9-9306-b643191fb123';
    $pane = new stdClass();
    $pane->pid = 'new-e8c7b2c5-d932-4ba1-90f7-520cccb3c905';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-AiBpbKM0TqkM5fotWFC1kXsoQySxEBB3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Grant / Award',
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
    $pane->uuid = 'e8c7b2c5-d932-4ba1-90f7-520cccb3c905';
    $display->content['new-e8c7b2c5-d932-4ba1-90f7-520cccb3c905'] = $pane;
    $display->panels['sidebar'][3] = 'new-e8c7b2c5-d932-4ba1-90f7-520cccb3c905';
    $pane = new stdClass();
    $pane->pid = 'new-258f1481-c8d0-48b2-b993-38511a91586d';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '258f1481-c8d0-48b2-b993-38511a91586d';
    $display->content['new-258f1481-c8d0-48b2-b993-38511a91586d'] = $pane;
    $display->panels['sidebar'][4] = 'new-258f1481-c8d0-48b2-b993-38511a91586d';
    $pane = new stdClass();
    $pane->pid = 'new-8d4f5661-385a-4c0b-9896-77e343f8a9f9';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '8d4f5661-385a-4c0b-9896-77e343f8a9f9';
    $display->content['new-8d4f5661-385a-4c0b-9896-77e343f8a9f9'] = $pane;
    $display->panels['sidebar'][5] = 'new-8d4f5661-385a-4c0b-9896-77e343f8a9f9';
    $pane = new stdClass();
    $pane->pid = 'new-0f18bc4b-e989-4c94-9a4b-20d9c1e6d9ee';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '0f18bc4b-e989-4c94-9a4b-20d9c1e6d9ee';
    $display->content['new-0f18bc4b-e989-4c94-9a4b-20d9c1e6d9ee'] = $pane;
    $display->panels['sidebar'][6] = 'new-0f18bc4b-e989-4c94-9a4b-20d9c1e6d9ee';
    $pane = new stdClass();
    $pane->pid = 'new-b555644f-5df1-4a71-b4e3-95ecbb737915';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'b555644f-5df1-4a71-b4e3-95ecbb737915';
    $display->content['new-b555644f-5df1-4a71-b4e3-95ecbb737915'] = $pane;
    $display->panels['sidebar'][7] = 'new-b555644f-5df1-4a71-b4e3-95ecbb737915';
    $pane = new stdClass();
    $pane->pid = 'new-d02736c2-f8b9-4ef4-b9f0-4cd88089eed1';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'd02736c2-f8b9-4ef4-b9f0-4cd88089eed1';
    $display->content['new-d02736c2-f8b9-4ef4-b9f0-4cd88089eed1'] = $pane;
    $display->panels['sidebar'][8] = 'new-d02736c2-f8b9-4ef4-b9f0-4cd88089eed1';
    $pane = new stdClass();
    $pane->pid = 'new-983a3f19-23d5-4460-8f26-88cfe910114a';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-hWZ3YxHe1X0SsPNPT1WBAiyxXIDXKz1E';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Organizations',
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
    $pane->uuid = '983a3f19-23d5-4460-8f26-88cfe910114a';
    $display->content['new-983a3f19-23d5-4460-8f26-88cfe910114a'] = $pane;
    $display->panels['sidebar'][9] = 'new-983a3f19-23d5-4460-8f26-88cfe910114a';
    $pane = new stdClass();
    $pane->pid = 'new-283689d1-f32d-4123-b3d7-4e87f1c362a8';
    $pane->panel = 'title';
    $pane->type = 'pane';
    $pane->subtype = 'funding_introduction';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane pane--landing-intro',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '283689d1-f32d-4123-b3d7-4e87f1c362a8';
    $display->content['new-283689d1-f32d-4123-b3d7-4e87f1c362a8'] = $pane;
    $display->panels['title'][0] = 'new-283689d1-f32d-4123-b3d7-4e87f1c362a8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['funding'] = $page;

  return $pages;

}
