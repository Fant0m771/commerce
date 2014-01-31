<?php
/**
 * @file
 * mirnitok_site_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mirnitok_site_settings_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: content administer.
  $roles['content administer'] = array(
    'name' => 'content administer',
    'weight' => 3,
  );

  return $roles;
}
