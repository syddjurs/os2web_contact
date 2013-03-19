<?php
/**
 * @file
 * os2web_contact.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2web_contact_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_contact_group_opening|node|os2web_contact_contact|form';
  $field_group->group_name = 'group_os2web_contact_group_opening';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_contact_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = '';
  $export['group_os2web_contact_group_opening|node|os2web_contact_contact|form'] = $field_group;

  return $export;
}
