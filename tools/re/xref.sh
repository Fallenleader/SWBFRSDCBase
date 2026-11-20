#!/bin/sh
# xref.sh PATTERN : functions in the decomp whose body matches PATTERN
cd /home/claude/rs/src/game
grep -n -e "^/\* 08[0-9A-F]\{6\} \*/" -e "$1" *.c | awk -F: -v p="$1" '{ if ($3 ~ /^\/\* 08/) { split($3,a," "); cur=a[2] } else if (cur!="") print cur }' | sort -u | tr '\n' ' '; echo
