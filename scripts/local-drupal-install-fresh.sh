#!/bin/bash
cd ../docroot
drush site-install drupalcampcebu --account-name=admincampcebu --account-pass=DrupalCampCebu2014 --site-name=DrupalcampCebu -y

echo "enabling modules for local"

drush en field_ui -y
drush en views_ui -y
drush en devel -y
