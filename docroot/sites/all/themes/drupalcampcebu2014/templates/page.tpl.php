<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */

global $base_path;
$images_dir = '/public/images/';
?>

<div class="main-container">

<div class="above-the-fold">
  <div class="container">
    <div class="camp-logo">
      <div class="row">
        <div class="col-md-4">
          <div class="logo-container">
            <img class="logo-whale" src="<?php print $base_path . drupal_get_path('theme', 'drupalcampcebu2014') .
              $images_dir . 'campcebu-whale-alone.png'; ?>">
            <img class="logo-sun" src="<?php print $base_path . drupal_get_path('theme', 'drupalcampcebu2014') .
              $images_dir . 'campcebu-sun-alone.png'; ?>">
          </div>
        </div>
        <div class="col-md-5">
          <div class="drupalcamp-title">
            <span style="color: white;">DRUPAL</span><span style="color: #f0c419">CAMP</span> <span style="color: #3b97d3" class="cebu">CEBU</span>
          </div>
        </div>
        <div class="col-md-3">
          <div class="venue-container">
            <span style="color: white;" class="date">15/16 NOVEMBER 2014</span> <span style="color: #3b97d3;" class="uni">UNIVERSITY OF</span> <span style="color: #3b97d3;" class="uni-name">SAN CARLOS</span> <span style="color: white;" class="cebucity">CEBU CITY</span>
          </div>
        </div>

        <div class="header-intro-text">
          <div class="row">
            <div class="col-md-12">
              <p>Drupalcamp Cebu is a 1.5 day conference organized by  the Drupal Cebu User Group. This is the first Drupalcamp in the Philippines, outside of Manila. We wish to bring together a variety of people interested in learning and growing skills in open-source, web development, business, DevOps, web design and more with great speakers and sessions.<br>
                Join us to learn, attend great sessions for various levels of experience, social events and Cebu&#39;s specialities &#59;)</p>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>

  <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
    <div class="nav-container">
      <div class="nav">
        <div class="camp-menu">
          <div class="row">
            <div class="col-md-12">
              <?php if (!empty($primary_nav)): ?>
                <ul class="menu">
                  <div class="col-md-3">
                    <li class="logo-title-menu logo-title-menu-hidden">
                      <span class="title-1st">DRUPAL</span><span class="title-2nd">CAMP</span>
                      <span class="title-3rd">CEBU</span>
                    </li>
                  </div>
                  <div class="col-md-6">
                    <?php
                    foreach($primary_nav as $key => $primary_menu_item) {
                      if (is_numeric($key)) {
                        print render($primary_menu_item);
                      }
                    }
                    ?>
                </div>
              </ul>
              <?php endif; ?>
            </div>
          </div>
        </div>
      </div>
    </div>
  <?php endif; ?>

</div>

<div class="camp-speakers-wave"></div>


<div class="camp-speakers">
  <div class="container">
    <div class="row">
      <div class="col-md-12 drupalcamp-speakers">
        <?php if (!empty($title)): ?>
          <h1 class="page-header"><?php print $title; ?></h1>
        <?php endif; ?>
<!--        <h3>Speakers</h3>-->
        <?php print $messages; ?>
        <?php print render($page['content']); ?>
        <?php if (!empty($page['yellow-region'])): ?>
          <?php print render($page['yellow-region']); ?>
        <?php endif; ?>
      </div>
    </div>
  </div>
</div>

<?php if (!empty($page['blue-region'])): ?>
  <div class="camp-sessions-wave"></div>
  <div class="camp-sessions">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <?php print render($page['blue-region']); ?>
        </div>
      </div>
    </div>
  </div>
<?php endif; ?>

<?php if (!empty($page['map-region'])): ?>
  <div class="camp-venue">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <?php print render($page['map-region']); ?>
        </div>
      </div>
    </div>
  </div>
<?php endif; ?>

<?php if (!empty($page['grey-region'])): ?>
<div class="camp-sponsors">
  <div class="container">
    <div class="row">
      <div class="col-md-12 drupalcamp-sponsors">
        <?php print render($page['grey-region']); ?>
      </div>
    </div>
  </div>
</div>
<?php endif; ?>

<div class="camp-footer">
  <div class="container">
    <div class="row">
      <div class="col-md-7">
        <h3>ABOUT</h3>
        <p class="footer-description">This camp is brought to you by the Drupal Cebu User Group.
          All the sources of this website based on Drupal are Open Source, under GNU GENERAL PUBLIC LICENSE on <a href="#">github.com</a></p>
      </div>
      <div class="col-md-5">
        <h3>CONNECT</h3>
        <p class="footer-description">We tweet
          <a href="#">@DrupalcampCebu</a>
          <a href="#">Drupal Cebu on Facebook</a>
          More about the <a href="#">Drupal cebu user group</a>
        </p>
      </div>
    </div> <!-- row -->
    <div class="row">
      <div class="col-md-12">
        <p class="copyright">&copy; Copyright 2014 Drupal Camp Cebu. All rights reserved. Drupal is a <a href="#">registered trademark</a> of <a href="#">Dries Buytaert</a>.<br>
          Logo by <a href="#">Lord Geltzdale de Vera</a>. Design by <a href="#">Rein Figuracion</a>. Web development by these <a href="#">amazing guys!</a></p>
      </div>
    </div> <!-- row -->
  </div> <!-- container -->
</div> <!-- camp-footer -->

<script type="text/javascript">
  // Function to fix the menu when scrolling.
  jQuery("document").ready(function($){
    var nav = $('.nav-container');
    $(window).scroll(function () {
      if ($(this).scrollTop() > 670) {
        nav.addClass("f-nav");
        nav.addClass("logo-title-menu");
        $( ".logo-title-menu-hidden" ).removeClass("hide");
      } else {
        nav.removeClass("f-nav");
        nav.removeClass("logo-title-menu");
        $( ".logo-title-menu-hidden" ).addClass("hide");
      }
    });
  });
</script>
