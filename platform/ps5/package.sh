#!/usr/bin/env bash
# PS5 title folder from the compiled objects (make ps5): link against the PS5 OpenGL SDK and the payload SDK's system-module stubs,
# convert to the PS5 ELF layout, sign as a development FSELF (the native app boilerplate's tool) and assemble
#   build/ps5/PPSA90292/  eboot.bin  sce_module/libc.prx  sce_sys/{param.json,icon0.png,pic0.dds,pic1.dds,snd0.at9}
# and build/ps5/PPSA90292.zip.
#   usage: package.sh <boilerplate checkout> <PS5 OpenGL SDK sdk/ directory> <objects...>
set -euo pipefail
bp=$(cd -- "$1" && pwd); gl=$(cd -- "$2" && pwd); shift 2
root=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/../.." && pwd)
sdk="$bp/.deps/native/ps5-payload-sdk"; native="$bp/tooling/native"; out="$root/build/ps5"
[[ -x $sdk/bin/prospero-lld ]] || { echo "the payload SDK is missing: run make in $bp first" >&2; exit 2; }
[[ -f $gl/lib/libPS5OpenGL.a ]] || { echo "the PS5 OpenGL SDK is missing: $gl" >&2; exit 2; }
title=$(python3 -c 'import json,sys; print(json.load(open(sys.argv[1]))["titleId"])' "$root/platform/ps5/sce_sys/param.json")

# the boilerplate's host tool (PIE -> PS5 ELF, FSELF writer) and its runtime companion
bash "$bp/tools/build-host-tools.sh" >/dev/null
tool="$bp/build/host/ps5-native-tool"
(cd "$bp/runtime" && sha256sum --check --strict --quiet libc.prx.sha256)

# the boilerplate's process entry and C++ runtime
cc() { env PS5_PAYLOAD_SDK="$sdk" sh "$bp/tooling/prospero-clang18" "$@"; }
for n in app_crt app_cpp_runtime; do
    cc -std=c++20 -O2 -fno-exceptions -fno-rtti -ffunction-sections -fdata-sections -c "$native/$n.cpp" -o "$out/$n.o"
done

# link (as the OpenGL SDK's consumers do: native titles import libkernel, not the web-process provider)
lib="$sdk/target/lib"
"$sdk/bin/prospero-lld" \
    --defsym=__cxa_thread_atexit_impl=0 -L "$lib" \
    --defsym=__dlopen=0 --defsym=__dlsym=0 --defsym=__dladdr=0 --defsym=__dlclose=0 --defsym=__dlerror=0 \
    -T "$native/ps5-pie.ld" -T "$root/platform/ps5/unwind.ld" --eh-frame-hdr --gc-sections --version-script "$root/platform/ps5/app-symbols.map" -e _start \
    --no-dynamic-linker --error-limit=0 -Map="$out/llvm-pie.map" -u ps5_agc_gate2_run \
    --wrap=malloc --wrap=calloc --wrap=realloc --wrap=free --wrap=posix_memalign --wrap=malloc_usable_size \
    -o "$out/llvm-pie.elf" \
    --start-group "$out/app_crt.o" "$out/app_cpp_runtime.o" "$@" "$gl/lib/libPS5OpenGL.a" \
    "$lib/libc++.a" "$lib/libc++abi.a" "$lib/libunwind.a" --end-group \
    --as-needed "$gl/lib/libSceAgc.so" "$gl/lib/libSceAgcDriver.so" "$lib/libSceVideoOut.so" "$lib/libSceSystemService.so" \
    "$lib/libScePad.so" "$lib/libSceAudioOut.so" "$lib/libSceUserService.so" \
    "$lib/libSceLibcInternal.so" "$lib/libkernel.so" "$lib/libc.a"

# PS5 ELF + development FSELF (the boilerplate's cross-firmware SDK profile)
stubs=()
for s in "$lib"/*.so; do case "${s##*/}" in libSceAgc.so|libSceAgcDriver.so) continue ;; esac; stubs+=(--stub "$s"); done
stubs+=(--stub "$gl/lib/libSceAgc.so" --stub "$gl/lib/libSceAgcDriver.so")
"$tool" link --in "$out/llvm-pie.elf" --out "$out/eboot.elf" "${stubs[@]}" --module-sdk 0x02000009 --companion-sdk 0x08050001 --file-name eboot.elf
app="$out/$title"; rm -rf -- "$app"; mkdir -p "$app/sce_sys" "$app/sce_module"
"$tool" self --sign --in "$out/eboot.elf" --out "$app/eboot.bin" --magic 0x1D3D154F
cp "$bp/runtime/libc.prx" "$app/sce_module/libc.prx"
cp "$root/platform/ps5/sce_sys/param.json" "$app/sce_sys/"
for f in icon0.png pic0.dds pic1.dds snd0.at9; do [[ -f $root/platform/ps5/sce_sys/$f ]] && cp "$root/platform/ps5/sce_sys/$f" "$app/sce_sys/"; done
[[ -f $app/sce_sys/pic0.dds && ! -f $app/sce_sys/pic1.dds ]] && cp "$app/sce_sys/pic0.dds" "$app/sce_sys/pic1.dds"   # the launch picture: the same art
"$tool" self --inspect --file "$app/eboot.bin" | head -12
# the zip: the title folder (-> /data/homebrew/) and SWBFRS/settings.txt (-> /data/SWBFRS/settings.txt)
rm -rf "$out/SWBFRS"; mkdir -p "$out/SWBFRS"; cp "$root/platform/ps5/settings.txt" "$out/SWBFRS/settings.txt"
(cd "$out" && rm -f "$title.zip" && python3 -c 'import os,sys,zipfile
z = zipfile.ZipFile(sys.argv[1] + ".zip", "w", zipfile.ZIP_DEFLATED)
for top in (sys.argv[1], "SWBFRS"):
    for d, _, fs in os.walk(top):
        for f in sorted(fs): z.write(os.path.join(d, f))
z.close()' "$title")
echo "title folder: $app"
echo "zip:          $out/$title.zip"
