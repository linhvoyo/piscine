#!/bin/sh 
ifconfig  | grep  'ether ' | sed s'/[[:space:]]*ether //' |  sed s'/ $//'
