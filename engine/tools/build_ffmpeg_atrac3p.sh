#!/bin/sh
# Builds FFmpeg's ATRAC3plus decoder alone (libavcodec + libavutil, LGPL 2.1+) for the music: the game's music and speech are
# ATRAC3plus, which the Vita's public decoders (ATRAC9, MP3, AAC, CELP) do not take.  Out: <out>/host and <out>/vita, which the
# CMake builds find with -DAK_FFMPEG_DIR=<out>/host (desktop) or <out>/vita (Vita).  Usage: build_ffmpeg_atrac3p.sh <out dir>
set -e
OUT=$(realpath -m "${1:-build/ffmpeg}"); SRC=$(mktemp -d)
git clone -q --depth 1 --branch n6.1.2 https://github.com/FFmpeg/FFmpeg.git "$SRC/ff"
# (6.1 forgets that the ATRAC3plus decoder needs the sine windows)
sed -i '/^atrac1_decoder_select=/a atrac3p_decoder_select="sinewin"' "$SRC/ff/configure"
COMMON="--disable-everything --disable-programs --disable-doc --disable-network --disable-avdevice --disable-avformat --disable-swscale
 --disable-avfilter --disable-postproc --disable-swresample --enable-decoder=atrac3p --disable-pthreads --disable-debug"
cp -r "$SRC/ff" "$SRC/host"; cd "$SRC/host"
./configure --prefix="$OUT/host" $COMMON --enable-pic --extra-cflags="-O2" && make -j8 && make install
cd "$SRC/ff"
./configure --prefix="$OUT/vita" $COMMON --enable-cross-compile --cross-prefix=arm-vita-eabi- --arch=arm --cpu=cortex-a9 --target-os=none \
  --disable-runtime-cpudetect --enable-neon --enable-small \
  --extra-cflags="-O3 -mfpu=neon -mfloat-abi=hard -ffast-math -Wno-incompatible-pointer-types -Wno-int-conversion" && make -j8 && make install
rm -rf "$SRC"
