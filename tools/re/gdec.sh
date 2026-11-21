#!/bin/sh
# gdec.sh ADDR... : Ghidra-decompile functions into /home/claude/work/gdec/ADDR.c and print them
G=$(ls -d /home/claude/tools/ghidra_*); mkdir -p /home/claude/work/gdec
DECOMP_RETURNS="${DECOMP_RETURNS:-0898D2C8}" DECOMP_LIST="$*" DECOMP_OUT=/home/claude/work/gdec $G/support/analyzeHeadless /home/claude/work/gproj rs -process image_reloc.bin -noanalysis -readOnly -scriptPath /home/claude/work/gscripts -postScript Decomp.java > /tmp/gdec.log 2>&1
for a in "$@"; do echo "//==== $a"; cat /home/claude/work/gdec/$(echo $a | tr a-f A-F).c; done
