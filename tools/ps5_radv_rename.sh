#!/usr/bin/env bash
# The RADV archive for the PS5 title (make ps5 PS5_VULKAN=...): RADV (PS5_Vulkan's build of Mesa's Vulkan driver) and the PS5
# OpenGL SDK are both Mesa, so they define thousands of the same global names (NIR, ACO's and Mesa's utilities, ...) - in one
# executable the linker would take one copy for both.  This writes RADV's archive with each name the OpenGL SDK also defines
# renamed rsvk_<name> (llvm-objcopy --redefine-syms), so each driver keeps its own code.
#   usage: ps5_radv_rename.sh <libvulkan_radeon.ps5.a> <PS5 OpenGL SDK sdk/ directory> <output .a>
set -euo pipefail
radv=$1; gl=$2; out=$3
nm=${LLVM_NM:-$(command -v llvm-nm-20 || command -v llvm-nm)}
objcopy=${LLVM_OBJCOPY:-$(command -v llvm-objcopy-20 || command -v llvm-objcopy)}
tmp=$(mktemp -d); trap 'rm -rf "$tmp"' EXIT
syms() { "$nm" --defined-only -g --format=just-symbols "$@" 2>/dev/null | grep -v -e ':$' -e '^$' | sort -u; }
syms "$radv" > "$tmp/radv"
# libPS5OpenGL.a is a linker script: GROUP ( the archives )
libs=(); for l in $(sed -n '/GROUP *(/,/)/p' "$gl/lib/libPS5OpenGL.a" | tr -d '()' | grep -o '[A-Za-z0-9_.+-]*\.a'); do libs+=("$gl/lib/$l"); done
syms "${libs[@]}" > "$tmp/gl"
comm -12 "$tmp/radv" "$tmp/gl" | grep -v -e '^vk_icd' -e '^vk[A-Z]' | awk '{print $1, "rsvk_" $1}' > "$tmp/map"
echo "$(wc -l < "$tmp/map") global names renamed"
"$objcopy" --redefine-syms="$tmp/map" --strip-debug "$radv" "$out"
