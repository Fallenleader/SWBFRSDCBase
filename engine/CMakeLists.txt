# Native engine (docs/NATIVE_ENGINE.md).  Independent of the decompiled game: see tools/check_independence.sh.
#   desktop:  cmake -S engine -B build/engine -DCMAKE_BUILD_TYPE=Release && cmake --build build/engine
#   Vita / 3DS / PS5 toolchains join with their platform back ends (milestone 1.2).
cmake_minimum_required(VERSION 3.16)
project(aurek C)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

# every performance flag (owner's rule); per-device CPU flags come from AK_TARGET
set(AK_TARGET "native" CACHE STRING "desktop CPU: native | x86_64_v3 (Windows/PC) | znver2 (Steam Deck)")
set(AK_OPT -O3 -ffunction-sections -fdata-sections -fno-plt -fomit-frame-pointer -fno-semantic-interposition)
if(AK_TARGET STREQUAL "znver2")
  list(APPEND AK_OPT -march=znver2 -mtune=znver2)
elseif(AK_TARGET STREQUAL "x86_64_v3")
  list(APPEND AK_OPT -march=x86-64-v3 -mtune=generic)
else()
  list(APPEND AK_OPT -march=native -mtune=native)
endif()
add_compile_options(-Wall -Wextra -Wno-unused-parameter "$<$<CONFIG:Release>:${AK_OPT}>")
include(CheckIPOSupported)
check_ipo_supported(RESULT AK_LTO OUTPUT _ipo_msg)
if(AK_LTO)
  set(CMAKE_INTERPROCEDURAL_OPTIMIZATION_RELEASE ON)
endif()

add_custom_target(independence ALL COMMAND sh ${CMAKE_CURRENT_SOURCE_DIR}/tools/check_independence.sh VERBATIM)

add_library(akcore STATIC core/ak_core.c assets/asura.c)
target_include_directories(akcore PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(akplat_desktop STATIC platform/desktop/plat_desktop.c)
target_link_libraries(akplat_desktop PUBLIC akcore)
find_package(Threads REQUIRED)
target_link_libraries(akplat_desktop PUBLIC Threads::Threads)

add_executable(akinspect tools/akinspect.c)
target_link_libraries(akinspect PRIVATE akcore akplat_desktop)
target_link_options(akinspect PRIVATE -Wl,--gc-sections)
