#!/bin/bash
# usage: rundc.sh <outdir> <seconds> <script> [dump_every] [dump_from]
OUT=$1; SEC=$2; SCR=$3; EV=${4:-60}; FR=${5:-0}
rm -rf $OUT; mkdir -p $OUT; cd "/home/claude/work/disc/Renegade Squadron"
env LIBGL_ALWAYS_SOFTWARE=1 RS_SCRIPT="$(cat "$SCR")" RS_MAX_SECONDS=$SEC RS_DUMP_DIR=$OUT RS_DUMP_EVERY=$EV RS_DUMP_FROM=$FR $EXTRA timeout $((SEC+30)) setarch -R ${RS_BIN} > $OUT/log.txt 2>&1
echo "exit $?"
python3 - "$OUT" <<'PY'
import sys,glob
from PIL import Image
o=sys.argv[1]; fs=sorted(glob.glob(o+'/frame_*.ppm'))
if fs:
    n=min(len(fs),16); sel=[fs[int(i*(len(fs)-1)/max(1,n-1))] for i in range(n)]
    W=Image.new('RGB',(480*4,272*((n+3)//4)))
    for i,f in enumerate(sel): W.paste(Image.open(f),((i%4)*480,(i//4)*272))
    W=W.resize((W.width//2,W.height//2)); W.save(o+'/sheet.png'); print('frames',len(fs),[f[-9:-4] for f in sel])
PY
