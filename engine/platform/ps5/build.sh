#!/usr/bin/env bash
# PS5 build of Aurek: RADV (Vulkan 1.4, PS5_Vulkan's port) linked into a native title, presenting through VK_KHR_display.
#   PS5_VULKAN=/path/to/PS5_Vulkan engine/platform/ps5/build.sh   ->  build/ps5/PPSA90293/ (copy to /data/homebrew/PPSA90293)
# Needs PS5_Vulkan set up as its README says (tools/setup-native-dependencies.sh: the payload SDK fork; make: ps5-native-tool and
# libc.prx; tools/build-radv.sh release: the RADV archive from PS5_Mesa) - or PS5_VulkanTemplate's ps5/tools/bootstrap.sh, which
# does all of it.  The link and packaging steps are PS5_Vulkan's tools/build-radv-title.sh with Aurek's objects in place of the
# smoke test.  Not yet run: this host may not run PS5_Vulkan's tools (see docs/NATIVE_ENGINE.md, 2026-11-22).
set -euo pipefail
here=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)
engine=$(cd -- "$here/../.." && pwd)
repo=$(dirname "$engine")
vk=${PS5_VULKAN:?set PS5_VULKAN to the PS5_Vulkan checkout}
mesa=${PS5_MESA_FORK:-$vk/../PS5_Mesa}
archive=${RADV_ARCHIVE:-$mesa/build-ps5/src/amd/vulkan/libvulkan_radeon.a}
sdk_root="$vk/.deps/native/ps5-payload-sdk"
native="$vk/tooling/native"
tool="$vk/build/host/ps5-native-tool"
out="$repo/build/ps5"
param="$here/sce_sys/param.json"
for f in "$archive" "$tool" "$sdk_root/bin/prospero-lld" "$vk/runtime/libc.prx"; do [[ -e $f ]] || { echo "missing $f" >&2; exit 2; }; done
command -v glslangValidator >/dev/null || { echo "glslangValidator was not found" >&2; exit 2; }
title_id=$(python3 -c 'import json,sys; print(json.load(open(sys.argv[1]))["titleId"])' "$param")
mkdir -p "$out/obj" "$out/stubs" "$out/gen"
cc() { PS5_PAYLOAD_SDK="$sdk_root" sh "$vk/tooling/prospero-clang18" "$@"; }

# the shaders (the desktop Vulkan back end's)
cmake -DSRC="$engine/platform/desktop/vk" -DOUT="$out/gen/gfx_vk_spv.h" -DGLSLANG="$(command -v glslangValidator)" -P "$engine/platform/desktop/vk/spv.cmake"

# every optimisation flag clang has for the PS5's Zen 2 (the GCC-only ones of the other builds - graphite, IPA-PTA - have no clang form)
OPT=(-O3 -march=znver2 -mtune=znver2 -ffast-math -fno-finite-math-only -fno-math-errno -ffp-contract=fast -fno-signed-zeros
     -fno-trapping-math -funroll-loops -fvectorize -fslp-vectorize -fomit-frame-pointer -fno-semantic-interposition
     -fmerge-all-constants -fno-common -fno-stack-protector -ffunction-sections -fdata-sections -flto=full)
src=$(grep -o 'add_library(akcore STATIC [^)]*' "$engine/CMakeLists.txt" | cut -d' ' -f3-)
src="$src app/viewer.c app/play.c app/play_sound.c app/hud.c app/frontend.c app/gc_screen.c platform/desktop/plat_desktop.c platform/ps5/plat_ps5.c platform/desktop/gfx_vk.c"
build_id=$(git -C "$engine" describe --always --dirty=+ 2>/dev/null || echo unknown)
objs=()
for f in $src; do
  o="$out/obj/$(echo "$f" | tr / _).o"; extra=()
  [[ $f == game/ak_gc_ai.c ]] && extra=(-fno-fast-math -ffp-contract=off)   # the GC AI rounds as the PSP does
  cc -std=gnu11 "${OPT[@]}" "${extra[@]}" -DAK_VK_DISPLAY -DAK_BUILD_ID="\"$build_id\"" -I "$engine" -I "$out/gen" -I "$mesa/include" \
     -Wall -Wno-unused-parameter -c "$engine/$f" -o "$o"
  objs+=("$o")
done
cc -std=c++20 -O2 -fno-exceptions -fno-rtti -ffunction-sections -fdata-sections -c "$native/app_crt.cpp" -o "$out/obj/app_crt.o"
cc -std=c++20 -O2 -fno-exceptions -fno-rtti -ffunction-sections -fdata-sections -c "$native/app_cpp_runtime.cpp" -o "$out/obj/app_cpp_runtime.o"
stub() {
  cc -std=c11 -O2 -fPIC -c "$vk/$2" -o "$out/obj/$1_stub.o"
  "$sdk_root/bin/prospero-lld" --shared -soname "$1.prx" -o "$out/stubs/$1.so" "$out/obj/$1_stub.o"
}
stub libSceAgc vendor/ps5/sdk/stubs/agc_canary_link_stub.c
stub libSceAgcDriver vendor/ps5/sdk/stubs/agc_driver_canary_link_stub.c

source "$vk/tools/radv-link.sh"
radv_link_recipe "$vk" "$sdk_root" "$archive"
"$sdk_root/bin/prospero-lld" "${radv_linker_script[@]}" --eh-frame-hdr "${radv_link_flags[@]}" --lto-O3 -O2 --gc-sections \
  --version-script "$native/app-symbols.map" --exclude-libs=ALL -e _start -o "$out/llvm-pie.elf" \
  "$out/obj/app_crt.o" "$out/obj/app_cpp_runtime.o" "${objs[@]}" "$out/stubs/libSceAgc.so" "$out/stubs/libSceAgcDriver.so" \
  "${radv_link_inputs[@]}" --as-needed "$sdk_root"/target/lib/*.so
"$tool" link --in "$out/llvm-pie.elf" --out "$out/eboot.elf" --stub-dir "$sdk_root/target/lib" --stub "$out/stubs/libSceAgc.so" \
  --stub "$out/stubs/libSceAgcDriver.so" --module-sdk 0x02000009 --companion-sdk 0x08050001 --file-name eboot.elf
app="$out/$title_id"; rm -rf -- "$app"; mkdir -p "$app/sce_sys" "$app/sce_module"
"$tool" self --sign --in "$out/eboot.elf" --out "$app/eboot.bin" --magic 0x1D3D154F
cp "$param" "$here/sce_sys/icon0.png" "$app/sce_sys/"
for f in pic0.dds pic1.dds snd0.at9; do [[ -f $repo/platform/ps5/sce_sys/$f ]] && cp "$repo/platform/ps5/sce_sys/$f" "$app/sce_sys/"; done
[[ -f $app/sce_sys/pic0.dds && ! -f $app/sce_sys/pic1.dds ]] && cp "$app/sce_sys/pic0.dds" "$app/sce_sys/pic1.dds"
cp "$vk/runtime/libc.prx" "$app/sce_module/libc.prx"
cp "$here/settings.txt" "$out/settings.txt"
"$tool" self --inspect --file "$app/eboot.bin" | head -12
echo "built $app (copy it to /data/homebrew/$title_id; settings.txt and the game files go to /data/Aurek)"
