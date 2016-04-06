<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function simplesaml_authentication_for_cul_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer simpleSAMLphp authentication
  $permissions['administer simpleSAMLphp authentication'] = array(
    'name' => 'administer simpleSAMLphp authentication',
    'roles' => array(),
  );

  return $permissions;
}
