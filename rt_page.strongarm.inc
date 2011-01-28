<?php

/**
 * Implementation of hook_strongarm().
 */
function rt_page_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_rt_page';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_rt_page'] = $strongarm;
  return $export;
}
