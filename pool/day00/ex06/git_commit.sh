#!/bin/sh
git log --pretty=format:%H | tail -5 | sed 's/%//g'
