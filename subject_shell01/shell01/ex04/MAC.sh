#!/usr/bin/env zsh

ifconfig | awk '/ether/ {print $2}' 
