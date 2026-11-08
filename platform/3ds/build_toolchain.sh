#!/usr/bin/env bash
# Builds a devkitARM-compatible 3DS toolchain from source on Linux, for machines where devkitPro's own package server cannot be reached.
# With a normal devkitPro install (pacman: 3ds-dev) none of this is needed: set DEVKITPRO / DEVKITARM and run the Makefile.
#
#   platform/3ds/build_toolchain.sh <work dir>        ->  <work dir>/dkp (DEVKITPRO), <work dir>/env.sh (source it before 'make')
#
# What it does:
#   - the compiler: Ubuntu's gcc-arm-none-eabi (13.x), wrapped as devkitARM's (armv6k gets its VFP, devkitPro's defines, devkitPro's
#     newlib instead of Ubuntu's)
#   - devkitPro's newlib (newlib from sourceware + devkitPro's patch from devkitPro/buildscripts), one library set for the 3DS's ARM11
#   - devkitarm-crtls (3dsx.specs, 3dsx.ld, 3dsx_crt0), devkitarm-rules
#   - libctru, citro3d, 3dstools (3dsxtool, smdhtool), picasso (shader assembler), a bin2s
set -e
W=$(realpath -m "${1:?work dir}"); D=$W/dkp; S=$W/src; mkdir -p "$S" "$D/devkitARM/bin" "$D/tools/bin" "$D/libctru"
NEWLIB=4.6.0.20260123; NEWLIB_PATCH=newlib-$NEWLIB-5.patch
sudo apt-get install -y gcc-arm-none-eabi libnewlib-arm-none-eabi libstdc++-arm-none-eabi-newlib >/dev/null
cd "$S"
for r in buildscripts devkitarm-crtls libctru citro3d 3dstools picasso devkitarm-rules; do [ -d $r ] || git clone -q --depth 1 https://github.com/devkitPro/$r; done
[ -d newlib-$NEWLIB ] || { curl -sSL https://sourceware.org/pub/newlib/newlib-$NEWLIB.tar.gz | tar xz; (cd newlib-$NEWLIB && patch -p1 -s < ../buildscripts/patches/$NEWLIB_PATCH); }

NL=$D/devkitARM/arm-none-eabi; G=$(ls -d /usr/lib/gcc/arm-none-eabi/* | tail -1); CXXI=$(ls -d /usr/lib/arm-none-eabi/include/c++/* | tail -1)
mkdir -p "$W/build/newlib"; cd "$W/build/newlib"
CFLAGS_FOR_TARGET="-O2 -ffunction-sections -fdata-sections -march=armv6k+fp -mtune=mpcore -mfloat-abi=hard -marm -mtp=soft -D__DEVKITPRO__ -D__DEVKITARM__ -D__3DS__" \
  "$S/newlib-$NEWLIB/configure" --disable-newlib-supplied-syscalls --enable-newlib-mb --disable-newlib-wide-orient --enable-newlib-register-fini \
  --target=arm-none-eabi --prefix="$D/devkitARM" --disable-multilib >/dev/null
make -j"$(nproc)" MAKEINFO=true >/dev/null && make install -j1 MAKEINFO=true >/dev/null

B=$D/devkitARM/bin
for t in gcc g++ cpp; do
  inc=""; [ $t = g++ ] && inc="-isystem $CXXI -isystem $CXXI/arm-none-eabi/arm/v5te/hard -isystem $CXXI/backward "
  cat > $B/arm-none-eabi-$t <<EOF
#!/bin/bash
a=(); for x in "\$@"; do case "\$x" in -march=armv6k) a+=("-march=armv6k+fp");; *) a+=("\$x");; esac; done
exec /usr/bin/arm-none-eabi-$t -D__DEVKITPRO__ -D__DEVKITARM__ -mfpu=auto -nostdinc $inc-isystem $NL/include -isystem $G/include -isystem $G/include-fixed -L$NL/lib "\${a[@]}"
EOF
  chmod +x $B/arm-none-eabi-$t; done
for t in as ar ld nm objcopy objdump ranlib strip gcc-ar gcc-nm gcc-ranlib readelf size; do ln -sf /usr/bin/arm-none-eabi-$t $B/arm-none-eabi-$t; done
cp "$S"/devkitarm-rules/{3ds_rules,base_rules,base_tools} "$D/devkitARM/"
arm-none-eabi-gcc -x assembler-with-cpp -march=armv6k+fp -mfloat-abi=hard -marm -c "$S/devkitarm-crtls/3dsx_crt0.s" -o "$NL/lib/3dsx_crt0.o"
cp "$S/devkitarm-crtls/3dsx.ld" "$NL/lib/"; grep -v sync-dmb "$S/devkitarm-crtls/3dsx.specs" > "$NL/lib/3dsx.specs"

T=$D/tools/bin
(cd "$S/3dstools/src" && g++ -O2 -o $T/3dsxtool 3dsxtool.cpp romfs.cpp && g++ -O2 -o $T/smdhtool smdhtool.cpp lodepng/*.cpp)
(cd "$S/picasso" && g++ -O2 -std=c++17 -DPACKAGE_STRING='"picasso"' -o $T/picasso source/*.cpp)
cp "$(dirname "$0")/bin2s.py" $T/bin2s; chmod +x $T/bin2s

cat > "$W/env.sh" <<EOF
export DEVKITPRO=$D
export DEVKITARM=$D/devkitARM
export PATH=$D/devkitARM/bin:$D/tools/bin:\$PATH
EOF
. "$W/env.sh"
(cd "$S/libctru/libctru" && make -j"$(nproc)" lib/libctru.a >/dev/null && mkdir -p $D/libctru/lib && cp lib/libctru.a $D/libctru/lib/ && cp -r include default_icon.png $D/libctru/)
(cd "$S/citro3d" && make -j"$(nproc)" >/dev/null && cp lib/libcitro3d.a $D/libctru/lib/ && cp -r include/* $D/libctru/include/)
echo "toolchain ready: . $W/env.sh && make -f platform/3ds/Makefile"
