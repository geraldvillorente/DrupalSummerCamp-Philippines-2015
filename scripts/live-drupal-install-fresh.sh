#!/bin/bash
cd ../docroot
drush site-install drupalcampcebu --account-name=admincampcebu --account-pass=DrupalCampCebu2014 --site-name=DrupalcampCebu -y

echo "enabling modules for dev server"

drush en config_mailchimp -y
drush en config_google_analytics -y
