#!/bin/bash

if [ -z $1 ]; then
  echo No name specified
  exit 1
fi

EXISTING=`cyber-dojo start-point ls | grep $1`

if [ "" != "${EXISTING}" ]; then
  echo Deleting existing start point ...
  cyber-dojo start-point rm $1
fi

echo Creating start point ...
cyber-dojo start-point create $1 --dir=`pwd`
