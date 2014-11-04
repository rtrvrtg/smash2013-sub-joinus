<?php

/**
 * Implements hook_rules_action_info().
 */
function render_view_to_file_rules_action_info() {
  $actions = array();
  $actions['render_view_to_file_action_render'] = array(
    'label' => t('Renders a view to a file'),
    'parameter' => array(
      'view' => array(
        'type' => 'text',
        'label' => t('View'),
        'options list' => 'render_view_to_file_views_list',
        'description' => t('Select the view and display you want to use to
          create a list.'),
        'restriction' => 'input',
      ),
      'args' => array(
        'type' => 'text',
        'label' => t('Arguments'),
        'description' => t('Any arguments to pass to the view, one per line.
          You may use token replacement patterns.'),
        'optional' => TRUE,
      ),
      'filename' => array(
        'type' => 'text',
        'label' => t('Filename'),
        'description' => t('The filename to render the result out to.
          Must be a valid Drupal filesystem path.
          You may use token replacement patterns.'),
        'optional' => TRUE,
      ),
    ),
    'provides' => array(
      'file_uri' => array(
        'type' => 'text',
        'label' => t('A file URI'),
      ),
    ),
    'group' => t('Views'),
  );
  $actions['render_view_to_file_action_get_path'] = array(
    'label' => t('Gets a file path from a URI'),
    'parameter' => array(
      'file_uri' => array(
        'type' => 'text',
        'label' => t('File URI'),
        'description' => t('The file URI'),
      ),
    ),
    'provides' => array(
      'file_path' => array(
        'type' => 'text',
        'label' => t('The file path'),
      ),
    ),
    'group' => t('Files'),
  );
  return $actions;
}

/**
 * Renders a view as a file.
 *
 * @param $view
 *   A string in the format "$view_name|$display_name".
 * @param $args
 *   Arguments that should be passed to the View.
 * @param $filename
 *   A path on the Drupal file system that we want to render to.
 * @return array
 *   Array containing the entity, which is the file URI in question.
 *   - array('file_uri' => $file_uri)
 */
function render_view_to_file_action_render($view, $args, $filename) {
  list($view_name, $display_id) = explode("|", $view);

  $vr = new ViewRenderer($view_name, $display_id);
  if (!empty($args)) {
    $vr->arguments($args);
  }
  $file = $vr->render($filename);

  if (!empty($file)) {
    error_log(print_r($file->uri, 1));
    return array('file_uri' => $file->uri);
  }
  return array('file_uri' => NULL);
}

/**
 * Renders a view as a file.
 *
 * @param $uri
 *   A URI on the Drupal file system.
 * @return string
 *   Array containing the entity, which is the file path in question.
 *   - array('file_path' => $file_path)
 */
function render_view_to_file_action_get_path($file_uri) {
  $path = NULL;

  error_log(print_r($file_uri, 1));

  $scheme = file_uri_scheme($file_uri);
  error_log(print_r($scheme, 1));

  if ($scheme && file_stream_wrapper_valid_scheme($scheme)) {
    $wrapper = file_stream_wrapper_get_instance_by_scheme($scheme);
    error_log(print_r($wrapper, 1));
    $path = $wrapper->getDirectoryPath() . "/" . file_uri_target($file_uri);
    error_log(print_r($path, 1));
  }

  return array('file_path' => $path);
}
