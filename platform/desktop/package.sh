#!/bin/bash
# the desktop build's folder: settings.txt (the PS5's, with this variant's values), README.txt, SDL2.dll (Windows); zipped
set -e
V=$1; D=$2; R=$(cd "$(dirname "$0")/../.." && pwd)
S=$D/settings.txt
sed -e '/^RS_OUTPUT=/d' -e 's/^RS_CPU_PIN=1/RS_CPU_PIN=0/' -e 's/^RS_DUMP_ASSETS=1/RS_DUMP_ASSETS=0/' "$R/platform/ps5/settings.txt" > "$S"
set_kv(){ if grep -q "^$1=" "$S"; then sed -i "s/^$1=.*/$1=$2/" "$S"; else echo "$1=$2" >> "$S"; fi; }
cat >> "$S" <<'X'
# ---- PC
# 1 = full screen (F11 or Alt+Enter switches), 0 = a window
RS_FULLSCREEN=0
# 1 = in step with the screen (no tearing), 0 = as fast as possible
RS_VSYNC=1
# the GPU to use when there are several: its PCI vendor id (0x10DE NVIDIA, 0x1002 AMD, 0x8086 Intel); empty = a discrete one first
RS_GPU_VENDOR=
X
case $V in
deck)    set_kv RS_RES_SCALE 3; set_kv RS_RT 0; set_kv RS_SHADOW_RES 2048; set_kv RS_FULLSCREEN 1; set_kv RS_MAX_PLAYERS 64 ;;
windows) set_kv RS_RES_SCALE 4; set_kv RS_RT 0 ;;
rtx)     set_kv RS_RES_SCALE 6; set_kv RS_RT 1; set_kv RS_RTAO_RAYS 4; set_kv RS_RTGI_RAYS 2; set_kv RS_RT_DISTANCE 400; set_kv RS_GPU_VENDOR 0x10DE ;;
esac
cp "$R/platform/desktop/README.txt" "$D/README.txt"
if [ $V != deck ]; then cp "$R/../ext/SDL2-2.30.9/x86_64-w64-mingw32/bin/SDL2.dll" "$D/"; fi
(cd "$D/.." && rm -f SWBFRS_$V.zip && python3 -c "import shutil; shutil.make_archive('SWBFRS_$V', 'zip', '.', 'SWBFRS')")
echo "$D -> $(cd "$D/.." && pwd)/SWBFRS_$V.zip"
