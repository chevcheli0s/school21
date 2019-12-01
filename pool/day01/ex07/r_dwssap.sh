#!/bin/sh
cat /etc/passwd | sed '/#/d;s/:.*//g' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | sed '1d;n;d' | sed  's/$/\,/' | tr '\n' ' ' | sed 's/..$/./' | cat -e
