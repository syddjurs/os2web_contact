<?php
/**
 * @file
 * os2web_contact.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2web_contact_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_contact_context_block';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'contentpage' => 'contentpage',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-os2web_contact_view_contact-block' => array(
          'module' => 'views',
          'delta' => 'os2web_contact_view_contact-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['os2web_contact_context_block'] = $context;

  return $export;
}
