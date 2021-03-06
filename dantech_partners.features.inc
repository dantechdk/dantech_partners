<?php
/**
 * @file
 * dantech_partners.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dantech_partners_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dantech_partners_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dantech_partners_node_info() {
  $items = array(
    'dantech_partner' => array(
      'name' => t('Samarbejdspartner'),
      'base' => 'node_content',
      'description' => t('Brug denne til at indskrive samarbejdspartnere.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
