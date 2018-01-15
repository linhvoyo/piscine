#!/bin/sh 

cat /etc/passwd | grep -v ^#  | awk 'NR%2==1 {print}' | cut -d ":" -f1 | rev | sort -r |  awk -v line1=${FT_LINE1} -v line2=${FT_LINE2} 'line1<=NR && NR<=line2' | tr '\n' ', ' | sed s'/,/, /g' | sed s'/, $/./' | tr -d '\n'
