<?php
/**
 * @file
 * opensanmateo_security.default_password_policy.inc
 */

/**
 * Implements hook_default_password_policy().
 */
function opensanmateo_security_default_password_policy() {
  $export = array();

  $password_policy = new stdClass();
  $password_policy->disabled = FALSE; /* Edit this to true to make a default password_policy disabled initially */
  $password_policy->api_version = 1;
  $password_policy->name = 'SMC security policies';
  $password_policy->config = 'a:10:{s:11:"consecutive";a:1:{s:22:"consecutive_char_count";s:1:"0";}s:11:"alpha_count";a:1:{s:11:"alpha_count";s:1:"0";}s:10:"char_count";a:1:{s:10:"char_count";s:1:"8";}s:14:"past_passwords";a:1:{s:14:"past_passwords";s:1:"0";}s:12:"symbol_count";a:2:{s:12:"symbol_count";s:1:"1";s:20:"symbol_count_symbols";s:30:"!@#$%^&*()_+=-|}{"?:><,./;\'\\[]";}s:9:"int_count";a:1:{s:9:"int_count";s:1:"0";}s:6:"global";a:1:{s:6:"global";i:0;}s:4:"role";a:1:{s:5:"roles";a:6:{i:2;s:1:"2";i:3;i:0;i:4;i:0;i:6;i:0;i:5;i:0;i:7;i:0;}}s:18:"concurrent_session";a:4:{s:23:"lock_session_concurrent";s:1:"0";s:31:"lock_session_concurrent_message";s:34:"There are too many active sessions";s:28:"lock_session_timeout_message";s:48:"Your session has timed out, please authenticate.";s:20:"lock_session_timeout";s:6:"15 min";}s:6:"expire";a:4:{s:12:"expire_limit";s:8:"60 years";s:25:"expire_warning_email_sent";s:8:"-15 days";s:28:"expire_warning_email_message";s:0:"";s:28:"expire_warning_email_subject";s:92:"[user:name] you password on [site:name] shall expire in [password_expiration_date:interval] ";}}';
  $export['SMC security policies'] = $password_policy;

  return $export;
}
