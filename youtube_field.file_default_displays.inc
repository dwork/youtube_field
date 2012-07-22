<?php
/**
 * @file
 * youtube_field.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function youtube_field_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'thumbnail',
  );
  $export['video__default__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'version' => '3',
    'theme' => 'dark',
    'width' => '560',
    'height' => '340',
    'fullscreen' => 0,
    'autoplay' => 1,
    'related' => 1,
    'hd' => 0,
    'showsearch' => 1,
    'modestbranding' => 0,
    'showinfo' => 1,
    'chromeless' => 0,
  );
  $export['video__default__media_youtube_video'] = $file_display;

  return $export;
}
