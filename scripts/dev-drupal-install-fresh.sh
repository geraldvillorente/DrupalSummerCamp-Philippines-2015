#!/bin/bash
cd ../docroot
drush site-install drupalcampcebu --account-name=admincampcebu --account-pass=DrupalCampCebu2014 --site-name=DrupalcampCebu -y

echo "enabling modules for dev server"

drush en field_ui -y
drush en views_ui -y
drush en devel -y
drush en context_ui -y
drush en shield -y
