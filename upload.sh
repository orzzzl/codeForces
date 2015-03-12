#!/bin/bash

read name
git add $name
git commit -m "$name"
git push origin master 

