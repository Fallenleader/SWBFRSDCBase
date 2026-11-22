#!/bin/sh
# Builds an OpenOrbis PS4 toolchain from source, for hosts where the release archives cannot be downloaded (only git works).
# The result is a folder laid out like an OpenOrbis release: point OO_PS4_TOOLCHAIN at it.
#   sh bootstrap_toolchain.sh <work folder>       (needs git, clang/lld, Go, the .NET 8 SDK, cmake, make)
# What each part is:
#   - include/            OpenOrbis headers (current git) + the OpenOrbis musl headers
#   - lib/*.so            system-library stubs, from the stub sources removed from the toolchain repo in c946047 (Dec 2021)
#   - lib/libc.a ...      the OpenOrbis musl fork
#   - lib/crt1.o          src/crt/crt1.S from the same commit
#   - lib/libc++.a, libc++abi.a, libunwind.a and include/c++/v1: the OpenOrbis LLVM fork (libc++ 11), built as its build.sh does
#   - bin/linux/          create-fself and create-gp4 (Go, OpenOrbis repos) and PkgTool.Core (OpenOrbis LibOrbisPkg, .NET 8)
set -e
W=$(realpath "${1:?work folder}")
TC=$W/ps4tc
mkdir -p "$W" "$TC/bin/linux" "$TC/lib" "$TC/include"
cd "$W"
[ -d oo ] || git clone -q https://github.com/OpenOrbis/OpenOrbis-PS4-Toolchain.git oo
[ -d oomusl ] || git clone -q --depth 1 https://github.com/OpenOrbis/musl.git oomusl
[ -d create-fself ] || git clone -q --depth 1 https://github.com/OpenOrbis/create-fself.git
[ -d create-gp4 ] || git clone -q --depth 1 https://github.com/OpenOrbis/create-gp4.git
[ -d liborbispkg ] || git clone -q --depth 1 https://github.com/OpenOrbis/LibOrbisPkg.git liborbispkg
if [ ! -d oollvm ]; then
  git clone -q --depth 1 --filter=blob:none --sparse https://github.com/OpenOrbis/llvm-project.git oollvm
  (cd oollvm && git sparse-checkout set libcxx libcxxabi libunwind cmake llvm/cmake llvm/utils llvm/include/llvm/Config runtimes)
fi

# stubs and crt from the last commit that had their sources
mkdir -p ootc && (cd oo && git archive c946047^ src/lib src/crt | tar -x -C ../ootc)
(cd ootc/src/lib && mkdir -p build/lib && make -j"$(nproc)" -k >/dev/null 2>&1 || true)
cp ootc/src/lib/build/lib/*.so "$TC/lib/"
as ootc/src/crt/crt1.S -o "$TC/lib/crt1.o"; as ootc/src/crt/crtlib.S -o "$TC/lib/crtlib.o"

# musl
(cd oomusl && ./configure --target=x86_64-scei-ps4 --disable-shared CC=clang CFLAGS="-fPIC -DPS4 -D_LIBUNWIND_IS_BAREMETAL=1" --prefix="$W/ps4sys" >/dev/null && make -j"$(nproc)" >/dev/null && make install >/dev/null)
cp -r oo/include/* "$TC/include/"; cp -r --update=none "$W"/ps4sys/include/* "$TC/include/"; cp "$W"/ps4sys/lib/*.a "$TC/lib/"; cp oo/link.x "$TC/"

# tools
(cd create-fself/cmd/create-fself && sed -i 's#=> ..\\..\\pkg\\fself#=> ../../pkg/fself#; s#=> ..\\..\\\\pkg\\oelf#=> ../../pkg/oelf#' go.mod && GOFLAGS=-mod=mod go build -o "$TC/bin/linux/create-fself" .)
(cd create-gp4/cmd/create-gp4 && GOFLAGS=-mod=mod go build -o "$TC/bin/linux/create-gp4" .)
dotnet publish liborbispkg/PkgTool.Core/PkgTool.Core.csproj -c Release -r linux-x64 --self-contained true -p:PublishSingleFile=true -o "$TC/bin/linux" >/dev/null

# libc++ (libunwind, libc++abi, libc++) for x86_64-pc-freebsd12-elf against the toolchain's headers
CF="-fPIC -DPS4 -D_GNU_SOURCE -D_LIBUNWIND_IS_BAREMETAL=1 --target=x86_64-pc-freebsd12-elf -isysroot $TC -isystem $TC/include -O3"
COMMON="-DLLVM_COMPILER_CHECKED=ON -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_TRY_COMPILE_TARGET_TYPE=STATIC_LIBRARY -DLLVM_PATH=$W/oollvm/llvm"
cd oollvm
cmake -S libunwind -B b-unw $COMMON -DCMAKE_C_FLAGS="$CF" -DCMAKE_CXX_FLAGS="$CF" -DLIBUNWIND_USE_COMPILER_RT=YES -DLIBUNWIND_ENABLE_STATIC=ON -DLIBUNWIND_ENABLE_SHARED=OFF >/dev/null
make -C b-unw -j"$(nproc)" >/dev/null
cmake -S libcxxabi -B b-abi $COMMON -DCMAKE_C_FLAGS="$CF" -DCMAKE_CXX_FLAGS="$CF" -DLIBCXXABI_ENABLE_SHARED=NO -DLIBCXXABI_ENABLE_STATIC=YES \
  -DLIBCXXABI_ENABLE_EXCEPTIONS=YES -DLIBCXXABI_USE_COMPILER_RT=YES -DLIBCXXABI_USE_LLVM_UNWINDER=YES -DLIBCXXABI_LIBUNWIND_PATH="$W/oollvm/libunwind" \
  -DLIBCXXABI_LIBCXX_INCLUDES="$W/oollvm/libcxx/include" -DLIBCXXABI_ENABLE_PIC=YES >/dev/null
make -C b-abi -j"$(nproc)" >/dev/null
cmake -S libcxx -B b-cxx $COMMON -DCMAKE_C_FLAGS="$CF" -DCMAKE_CXX_FLAGS="$CF" -DLIBCXX_ENABLE_RTTI=YES -DLIBCXX_HAS_MUSL_LIBC=YES -DLIBCXX_ENABLE_SHARED=NO \
  -DLIBCXX_CXX_ABI=libcxxabi -DLIBCXX_CXX_ABI_INCLUDE_PATHS="$W/oollvm/libcxxabi/include" -DLIBCXX_CXX_ABI_LIBRARY_PATH="$W/oollvm/b-abi/lib" \
  -DLIBCXX_INCLUDE_BENCHMARKS=OFF -DLIBCXX_INCLUDE_TESTS=OFF >/dev/null
make -C b-cxx -j"$(nproc)" >/dev/null
cmake --install b-cxx --prefix "$W/cxxinst" >/dev/null
mkdir -p "$TC/include/c++"; cp -r "$W/cxxinst/include/c++/v1" "$TC/include/c++/"
cp b-cxx/lib/libc++.a b-abi/lib/libc++abi.a b-unw/lib/libunwind.a "$TC/lib/"
echo "OO_PS4_TOOLCHAIN=$TC"
