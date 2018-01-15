#!bin/bash 
ldapsearch -Q "uid=z*"  | grep "cn:" | sort -r --ignore-case | cut -c 5- 
