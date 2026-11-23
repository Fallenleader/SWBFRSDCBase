#!/usr/bin/env bash
# GameCube build of Aurek: devkitPPC + libogc (cube), GX renderer.
#   DEVKITPRO=/opt/devkitpro engine/platform/gc/build.sh   ->  build/gc/aurek.dol
# Run aurek.dol with Swiss (or Dolphin).  settings.txt and the game files go in an "aurek" folder on the SD card
# (SD2SP2, or an SD Gecko in slot A / B): sd:/aurek/settings.txt, sd:/aurek/game.iso or sd:/aurek/GAME/PSP_GAME/...
set -euo pipefail
here=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)
engine=$(cd -- "$here/../.." && pwd)
repo=$(dirname "$engine")
DKP=${DEVKITPRO:-/opt/devkitpro}
export PATH="$DKP/devkitPPC/bin:$DKP/tools/bin:$PATH"
out="$repo/build/gc"; mkdir -p "$out/obj"

# every optimisation flag (GCC: the Vita's set without the ARM ones) for the Gekko (PowerPC 750CXe + paired singles)
OPT=(-O3 -DGEKKO -DAK_GFX_KEEPS -mogc -mcpu=750 -meabi -mhard-float -fomit-frame-pointer -ffast-math -fno-finite-math-only -fno-math-errno -ffp-contract=fast
     -fno-signed-zeros -fno-trapping-math -funroll-loops -ftree-vectorize -fpredictive-commoning -fgcse-after-reload -ftree-loop-distribution
     -floop-nest-optimize -fgraphite-identity -fipa-pta -fipa-cp-clone -fsched-pressure -fno-semantic-interposition -fmerge-all-constants
     -fno-common -fno-stack-protector -ffunction-sections -fdata-sections -flto=auto -flto-partition=one -fuse-linker-plugin)
INC=(-I "$engine" -I "$DKP/libogc/include")
build_id=$(git -C "$engine" describe --always --dirty=+ 2>/dev/null || echo unknown)
src=$(grep -o 'add_library(akcore STATIC [^)]*' "$engine/CMakeLists.txt" | cut -d' ' -f3-)
src="$src app/viewer.c app/play.c app/play_sound.c app/hud.c app/frontend.c app/gc_screen.c platform/gc/plat_gc.c platform/gc/gfx_gx.c platform/gc/dvd_fst.c platform/gc/movie_gc.c"
objs=()
for f in $src; do
  o="$out/obj/$(echo "$f" | tr / _).o"; extra=()
  [[ $f == game/ak_gc_ai.c ]] && extra=(-fno-fast-math -ffp-contract=off)   # the GC AI rounds as the PSP does
  powerpc-eabi-gcc -std=gnu11 "${OPT[@]}" "${extra[@]}" -D__GAMECUBE__ -DAK_BUILD_ID="\"$build_id\"" "${INC[@]}" \
     -Wall -Wno-unused-parameter -Wno-missing-field-initializers -c "$engine/$f" -o "$o" &
  objs+=("$o")
  while (( $(jobs -r | wc -l) >= $(nproc) )); do wait -n || exit 1; done
done
for j in $(jobs -p); do wait "$j" || exit 1; done
powerpc-eabi-gcc "${OPT[@]}" -specs="$DKP/libogc/share/ogc.specs" -Wl,--gc-sections -Wl,-Map,"$out/aurek.map" -o "$out/aurek.elf" "${objs[@]}" \
  -L "$DKP/libogc/lib/cube" -lfat -laesnd -logc -lm
elf2dol "$out/aurek.elf" "$out/aurek.dol"
cp "$here/settings.txt" "$out/settings.txt"
ls -la "$out"/aurek.dol
