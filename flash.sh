#!/usr/bin/env bash

# https://beta.docs.qmk.fm/using-qmk/guides/git-best-practices/newbs_git_using_your_master_branch

printf "Flashing Corne with radiomime's keymap\n"

qmk compile \
    --keyboard crkbd \
    --keymap radiomime \

qmk flash \
    --keyboard crkbd \
    --keymap radiomime
