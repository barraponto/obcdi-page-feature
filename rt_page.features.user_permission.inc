<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function rt_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: create rt_page content
  $permissions['create rt_page content'] = array(
    'name' => 'create rt_page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete own rt_page content
  $permissions['delete own rt_page content'] = array(
    'name' => 'delete own rt_page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit own rt_page content
  $permissions['edit own rt_page content'] = array(
    'name' => 'edit own rt_page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
