#!/bin/sh
cat $1 | grep -i "nicolas	bauer" | awk '{print $(NF-1)}' | sed '/\./d'
