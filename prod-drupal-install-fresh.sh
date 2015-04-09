#!/usr/bin/env bash
cd docroot
echo -n "Please enter the username: "
read USERNAME
echo -n "Please enter the password: "
read PASS
drush site-install drupalcampcebu --account-name=$USERNAME --account-pass=$PASS --site-name=DrupalSummerCampPhilippines -y
