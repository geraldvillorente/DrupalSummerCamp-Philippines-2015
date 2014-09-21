<?php
/**
 * @file
 * media_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function media_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: drupal-speakers.
  $styles['drupal-speakers'] = array(
    'name' => 'drupal-speakers',
    'label' => 'drupal-speakers(128x128)',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 128,
          'height' => 128,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sponsor-bronze.
  $styles['sponsor-bronze'] = array(
    'name' => 'sponsor-bronze',
    'label' => 'sponsor-bronze(140x63)',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 140,
          'height' => 63,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sponsor-misc.
  $styles['sponsor-misc'] = array(
    'name' => 'sponsor-misc',
    'label' => 'sponsor-misc(214x97)',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 214,
          'height' => 97,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sponsor-silver.
  $styles['sponsor-silver'] = array(
    'name' => 'sponsor-silver',
    'label' => 'sponsor-silver(210x95)',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 210,
          'height' => 95,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sponsors-gold.
  $styles['sponsors-gold'] = array(
    'name' => 'sponsors-gold',
    'label' => 'sponsor-gold(306x138)',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 306,
          'height' => 138,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
