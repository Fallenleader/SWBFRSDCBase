#!/bin/bash
# Big-endian check: builds the game headless (platform/null) for x86-64 and 32-bit PowerPC (powerpc-linux-gnu-gcc, run under
# qemu-ppc), runs both with a fixed step and AK_LOG=2, and diffs the logs (times stripped).  The Wii U and GameCube are big
# endian; a diff holding only the random music pick and the blueprint memory size means the engine reads the PSP data alike.
#   AK_DATA_DIR=<game files> FR=<frames> AUD=1 EXTRA="AK_X=1" engine/tools/be_check.sh      (AK_LEVEL etc. from the environment)
cd "$(dirname "$0")/.." || exit 1
W=${WORK:-/tmp/akbe}; mkdir -p "$W/bin" "$W/x86" "$W/ppc"
S=$(grep -o 'add_library(akcore STATIC [^)]*' CMakeLists.txt | cut -d' ' -f3-)
G="app/viewer.c app/play.c app/play_sound.c app/hud.c app/frontend.c app/gc_screen.c platform/desktop/plat_desktop.c platform/null/plat_null.c platform/null/gfx_null.c"
F="-std=gnu11 -O1 -ffp-contract=off -ffunction-sections -fdata-sections -Wl,--gc-sections -I. -DAK_BUILD_ID=\"t\""
gcc $F $S $G -o "$W/bin/aurek_x86" -lm -lpthread 2>&1 | grep -E "error|undefined" | head
powerpc-linux-gnu-gcc $F -static $S $G -o "$W/bin/aurek_ppc" -lm -lpthread 2>&1 | grep -E "error|undefined" | head
FR=${FR:-300}
for a in x86 ppc; do
  cd "$W/$a" || exit 1; rm -f log.txt
  run="$W/bin/aurek_$a"; [ $a = ppc ] && run="qemu-ppc $W/bin/aurek_ppc"
  env AK_DATA_DIR="${AK_DATA_DIR:?set AK_DATA_DIR}" AK_PLAY=1 AK_LOG=2 AK_FIXED_DT=0.0166667 AK_SCREENSHOT=x AK_SCREENSHOT_FRAME=$FR \
      AK_AUDIO=${AUD:-0} $EXTRA timeout 1200 $run > out.txt 2>&1
done
strip_t(){ sed -E 's/^ *[0-9]+\.[0-9]+ //; s/[0-9.]+ ms/X ms/g; s/[0-9.]+ fps/X fps/g; s/[0-9.]+ MB/X MB/g' "$1" | grep -v "^\[frame\]\|\[settings\]"; }
diff <(strip_t "$W/x86/log.txt") <(strip_t "$W/ppc/log.txt") > "$W/diff.txt"
echo "x86 $(wc -l < "$W/x86/log.txt") lines, ppc $(wc -l < "$W/ppc/log.txt") lines, diff $(wc -l < "$W/diff.txt") ($W/diff.txt)"
