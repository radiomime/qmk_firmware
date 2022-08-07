#!/usr/bin/env bash

# https://beta.docs.qmk.fm/using-qmk/guides/git-best-practices/newbs_git_using_your_master_branch

printf "Flashing Corne with radiomime's keymap\n"

KEYBOARD=crkbd
KEYMAP=radiomime

# make git-submodule
# qmk clean -a

qmk compile \
    --keyboard $KEYBOARD \
    --keymap $KEYMAP \

qmk flash \
    --keyboard $KEYBOARD \
    --keymap $KEYMAP
