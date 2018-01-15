#!/bin/sh

cat contacts_hard.txt | grep -i 'nicolas\tbauer'  | grep '(*)' | cut -f4
