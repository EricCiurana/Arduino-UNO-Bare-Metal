#!/bin/bash
# Bash script
# Author: Eric Ciurana
# Purpose: Save time when compiling the Arduino UNO bare metal version blink example
# Creation date: 24/06/2019(DD/MM/YYYY)

avr-gcc -mmcu=atmega328p -c blink.c
avr-gcc -mmcu=atmega328p blink.o -o blink.elf
avr-objcopy -O ihex blink.elf blink.hex
