#!/bin/bash
LOG=pcsx.log
[ -f pcsx.log ] rm pcsx.log

make -j4 -f Makefile.libretro clean
make -j4 -f Makefile.libretro 2>&1 | tee $LOG

