#!/usr/bin/env bash

printf "Flashing Corne with radiomime's keymap\n"
qmk flash \
    --keyboard crkbd \
    --keymap radiomime \
    --bootloader dfu
