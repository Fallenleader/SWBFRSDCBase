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
# the Vulkan renderer (PS5_VULKAN, make ps5 PS5_VULKAN=...): RADV linked whole (its global names that the OpenGL SDK's Mesa also
# defines renamed apart: PS5_RADV), the PS5_Vulkan SDK fork's platform layer bound to libc's missing names as its tools/radv-link.sh
# does, except the heap (the OpenGL SDK's app_heap stays the allocator) and the directory functions (dirent_ps5.c)
vk_in=(); vk_flags=(); vk_map="$out/radv-local.map"
if [[ -n ${PS5_VULKAN:-} ]]; then
    vkr=$(cd -- "$PS5_VULKAN" && pwd); radv=${PS5_RADV:?PS5_RADV: the renamed RADV archive (tools/ps5_radv_rename.sh)}
    [[ -f $radv ]] || { echo "the RADV archive is missing: $radv" >&2; exit 2; }
    source "$vkr/tools/radv-link.sh"
    PS5_CLANG=${PS5_CLANG:-$(command -v clang-20 || command -v clang)} radv_link_recipe "$vkr" "$vkr/.deps/native/ps5-payload-sdk" "$radv" >/dev/null || exit 2
    platform="$vkr/.deps/native/ps5-payload-sdk/target/lib/libps5platform.a"
    builtins="$("${PS5_CLANG:-$(command -v clang-20 || command -v clang)}" --print-resource-dir)/lib/linux/libclang_rt.builtins-x86_64.a"
    vk_in=(--whole-archive "$radv" --no-whole-archive "$builtins" "$platform")
    for f in "${radv_link_flags[@]}"; do
        case $f in
            --wrap=malloc|--wrap=calloc|--wrap=realloc|--wrap=free|--wrap=posix_memalign|--wrap=malloc_usable_size) ;;
            --wrap=aligned_alloc|--wrap=memalign|--wrap=reallocf|--wrap=reallocarray|--wrap=getline|--wrap=getdelim) ;;
            --defsym=opendir=*|--defsym=fdopendir=*|--defsym=readdir=*|--defsym=rewinddir=*|--defsym=dirfd=*|--defsym=closedir=*) ;;
            --version-script|*.map) ;;
            *) vk_flags+=("$f") ;;
        esac
    done
    # one version script: nothing exported (app-symbols.map), the bound names local
    { printf '{\n    local:\n        *;\n'; for f in "${vk_flags[@]}"; do [[ $f == --defsym=* ]] || continue; f=${f#--defsym=}; printf '        %s;\n' "${f%%=*}"; done; printf '};\n'; } > "$vk_map"
fi
vscript="$root/platform/ps5/app-symbols.map"; agcdrv="$gl/lib/libSceAgcDriver.so"
if [[ -n ${PS5_VULKAN:-} ]]; then
    vscript="$vk_map"
    # libSceAgcDriver's link stub: the OpenGL SDK's functions and RADV's (its HS off-chip parameters) together
    { "$sdk/bin/llvm-nm" -D --defined-only "$agcdrv" | awk '{print $NF}'
      grep -o 'sceAgcDriver[A-Za-z0-9_]*' "$vkr/vendor/ps5/sdk/stubs/agc_driver_canary_link_stub.c"; } | sort -u | sed 's/.*/void &(void){}/' > "$out/agcdrv_stub.c"
    cc -std=c11 -O2 -fPIC -c "$out/agcdrv_stub.c" -o "$out/agcdrv_stub.o"
    mkdir -p "$out/stubs"; "$sdk/bin/prospero-lld" --shared -soname libSceAgcDriver.prx -o "$out/stubs/libSceAgcDriver.so" "$out/agcdrv_stub.o"
    agcdrv="$out/stubs/libSceAgcDriver.so"
fi
"$sdk/bin/prospero-lld" \
    --defsym=__cxa_thread_atexit_impl=0 -L "$lib" \
    --defsym=__dlopen=0 --defsym=__dlsym=0 --defsym=__dladdr=0 --defsym=__dlclose=0 --defsym=__dlerror=0 \
    -T "$native/ps5-pie.ld" -T "$root/platform/ps5/unwind.ld" --eh-frame-hdr --gc-sections --version-script "$vscript" -e _start \
    --no-dynamic-linker --error-limit=0 -Map="$out/llvm-pie.map" -u ps5_agc_gate2_run \
    --wrap=malloc --wrap=calloc --wrap=realloc --wrap=free --wrap=posix_memalign --wrap=malloc_usable_size "${vk_flags[@]}" \
    -o "$out/llvm-pie.elf" \
    --start-group "$out/app_crt.o" "$out/app_cpp_runtime.o" "$@" "${vk_in[@]}" "$gl/lib/libPS5OpenGL.a" \
    "$lib/libc++.a" "$lib/libc++abi.a" "$lib/libunwind.a" --end-group \
    --as-needed "$gl/lib/libSceAgc.so" "$agcdrv" "$lib/libSceVideoOut.so" "$lib/libSceSystemService.so" \
    "$lib/libScePad.so" "$lib/libSceAudioOut.so" "$lib/libSceUserService.so" \
    "$lib/libSceLibcInternal.so" "$lib/libkernel.so" "$lib/libc.a"

# PS5 ELF + development FSELF (the boilerplate's cross-firmware SDK profile)
stubs=()
for s in "$lib"/*.so; do case "${s##*/}" in libSceAgc.so|libSceAgcDriver.so) continue ;; esac; stubs+=(--stub "$s"); done
stubs+=(--stub "$gl/lib/libSceAgc.so" --stub "$agcdrv")
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
