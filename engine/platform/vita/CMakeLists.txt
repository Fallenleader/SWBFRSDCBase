# Aurek on PS Vita (VitaSDK).
#   cmake -S engine/platform/vita -B build/aurek_vita -DCMAKE_TOOLCHAIN_FILE=$VITASDK/share/vita.toolchain.cmake && cmake --build build/aurek_vita
cmake_minimum_required(VERSION 3.16)
if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  set(CMAKE_TOOLCHAIN_FILE "$ENV{VITASDK}/share/vita.toolchain.cmake" CACHE PATH "toolchain")
endif()
project(aurek_vita C)
include("$ENV{VITASDK}/share/vita.cmake" REQUIRED)
set(CMAKE_C_STANDARD 11)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(VITA_APP_NAME "Aurek viewer")
set(VITA_TITLEID "AURK00001")
set(VITA_VERSION "01.00")
set(E ${CMAKE_CURRENT_SOURCE_DIR}/../..)

execute_process(COMMAND git -C "${E}" describe --always --dirty=+ OUTPUT_VARIABLE AK_GIT_ID OUTPUT_STRIP_TRAILING_WHITESPACE ERROR_QUIET)
add_custom_target(independence ALL COMMAND sh ${E}/tools/check_independence.sh VERBATIM)

# every performance flag: Cortex-A9 with NEON, hard float, Thumb-2, -O3, LTO, sections for the linker's garbage collection
add_compile_options(-O3 -march=armv7-a+simd -mtune=cortex-a9 -mfpu=neon -mfloat-abi=hard -mthumb -fomit-frame-pointer
                    -ffunction-sections -fdata-sections -fno-math-errno -ffp-contract=fast -fno-signed-zeros -fno-trapping-math -flto=auto
                    -Wall -Wextra -Wno-unused-parameter)
add_executable(aurek
  ${E}/app/viewer.c ${E}/core/ak_core.c ${E}/core/ak_vfs.c ${E}/core/ak_settings.c ${E}/assets/asura.c ${E}/assets/model.c ${E}/assets/entity.c ${E}/assets/blueprint.c ${E}/game/ak_soldier.c ${E}/world/ak_collision.c ${E}/world/ak_nav.c ${E}/render/ak_scene.c
  plat_vita.c gfx_gxm.c)
add_dependencies(aurek independence)
target_compile_definitions(aurek PRIVATE AK_BUILD_ID="${AK_GIT_ID}")
target_link_options(aurek PRIVATE -flto=auto -O3 -Wl,--gc-sections)
target_link_libraries(aurek vitashark SceShaccCg_stub SceShaccCgExt taihen_stub SceGxm_stub SceDisplay_stub SceCtrl_stub ScePower_stub
                      SceSysmodule_stub SceKernelDmacMgr_stub SceIofilemgr_stub SceAppMgr_stub m)

vita_create_self(eboot.bin aurek UNSAFE)        # unsafe: loads ur0:data/libshacccg.suprx (the system Cg compiler) at first start
vita_create_vpk(aurek.vpk ${VITA_TITLEID} eboot.bin
  VERSION ${VITA_VERSION} NAME ${VITA_APP_NAME}
  FILE ${CMAKE_CURRENT_SOURCE_DIR}/sce_sys/icon0.png sce_sys/icon0.png)
