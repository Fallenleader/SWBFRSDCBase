# Native engine (docs/NATIVE_ENGINE.md).  Independent of the decompiled game: see tools/check_independence.sh.
#   desktop:  cmake -S engine -B build/engine -DCMAKE_BUILD_TYPE=Release && cmake --build build/engine
#   Vita / 3DS / PS5 toolchains join with their platform back ends (milestone 1.2).
cmake_minimum_required(VERSION 3.16)
project(rsengine C)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

# every performance flag (owner's rule); per-device CPU flags come from RS_TARGET
set(RS_TARGET "native" CACHE STRING "desktop CPU: native | x86_64_v3 (Windows/PC) | znver2 (Steam Deck)")
set(RS_OPT -O3 -ffunction-sections -fdata-sections -fno-plt -fomit-frame-pointer -fno-semantic-interposition)
if(RS_TARGET STREQUAL "znver2")
  list(APPEND RS_OPT -march=znver2 -mtune=znver2)
elseif(RS_TARGET STREQUAL "x86_64_v3")
  list(APPEND RS_OPT -march=x86-64-v3 -mtune=generic)
else()
  list(APPEND RS_OPT -march=native -mtune=native)
endif()
add_compile_options(-Wall -Wextra -Wno-unused-parameter "$<$<CONFIG:Release>:${RS_OPT}>")
include(CheckIPOSupported)
check_ipo_supported(RESULT RS_LTO OUTPUT _ipo_msg)
if(RS_LTO)
  set(CMAKE_INTERPROCEDURAL_OPTIMIZATION_RELEASE ON)
endif()

add_custom_target(independence ALL COMMAND sh ${CMAKE_CURRENT_SOURCE_DIR}/tools/check_independence.sh VERBATIM)

add_library(rscore STATIC core/rs_core.c assets/asura.c)
target_include_directories(rscore PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(rsplat_desktop STATIC platform/desktop/plat_desktop.c)
target_link_libraries(rsplat_desktop PUBLIC rscore)
find_package(Threads REQUIRED)
target_link_libraries(rsplat_desktop PUBLIC Threads::Threads)

add_executable(rsinspect tools/rsinspect.c)
target_link_libraries(rsinspect PRIVATE rscore rsplat_desktop)
target_link_options(rsinspect PRIVATE -Wl,--gc-sections)
