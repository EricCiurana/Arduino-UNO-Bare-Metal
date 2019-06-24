#!/bin/bash
# Bash script
# Author: Eric Ciurana
# Purpose: Save time when flashing the Arduino UNO bare metal version blink example
# Creation date: 24/06/2019(DD/MM/YYYY)

avrdude -P /dev/ttyACM0 -c arduino -p m328p -U flash:w:blink.hex
