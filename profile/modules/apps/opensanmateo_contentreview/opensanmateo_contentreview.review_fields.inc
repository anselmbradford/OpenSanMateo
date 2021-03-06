<?php

function opensanmateo_contentreview_field_default_field_review_instances_template() {
  $field_instances = array();

  $field_instances['node-site_page-field_next_review'] = array(
    'bundle' => 'site_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_next_review',
    'label' => 'Next Review',
    'required' => FALSE,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 36,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Next Review');

  return $field_instances;
}

function opensanmateo_contentreview_field_default_field_interval_instances_template() {

  // Exported field_instance: 'node-site_page-field_review_interval'
  $field_instances['node-site_page-field_review_interval'] = array(
    'bundle' => 'site_page',
    'default_value' => array(
      0 => array(
        'value' => 31104000,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_review_interval',
    'label' => 'Review Interval',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'opensanmteo_contentreview',
      'settings' => array(),
      'type' => 'strtotime_timeperiod_select',
      'weight' => 35,
    ),
  );

  t('Review Interval');
  return $field_instances;
}

