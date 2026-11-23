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

# every performance flag (by request, 2026-11-22): Cortex-A9 with NEON, hard float, Thumb-2, -O3, whole-program LTO, fast float
# rules (finite-math kept off: the loaders check isfinite), loop unrolling and vectorisation, graphite loop work, IPA points-to and
# clones, no stack protector or unwind tables, sections and section anchors for the linker's garbage collection
set(AK_VITA_OPT -O3 -march=armv7-a+simd -mtune=cortex-a9 -mfpu=neon -mfloat-abi=hard -mthumb -fomit-frame-pointer
                -ffast-math -fno-finite-math-only -fno-math-errno -ffp-contract=fast -fno-signed-zeros -fno-trapping-math
                -funroll-loops -ftree-vectorize -fvect-cost-model=dynamic -fpredictive-commoning -fgcse-after-reload
                -ftree-loop-distribution -floop-nest-optimize -fgraphite-identity -fipa-pta -fipa-cp-clone -fmodulo-sched -fsched-pressure
                -fno-semantic-interposition -fmerge-all-constants -fno-common -fsection-anchors
                -fno-stack-protector -fno-asynchronous-unwind-tables -fno-unwind-tables
                -ffunction-sections -fdata-sections -flto=auto -flto-partition=one -fuse-linker-plugin -fdevirtualize-at-ltrans)
add_compile_options(${AK_VITA_OPT} -Wall -Wextra -Wno-unused-parameter)
include_directories(${E})
add_executable(aurek
  ${E}/app/viewer.c ${E}/app/play.c ${E}/app/play_sound.c ${E}/app/hud.c ${E}/app/frontend.c ${E}/core/ak_core.c ${E}/core/ak_vfs.c ${E}/core/ak_settings.c ${E}/assets/asura.c ${E}/assets/model.c ${E}/assets/entity.c ${E}/assets/blueprint.c ${E}/assets/gui.c ${E}/game/ak_soldier.c ${E}/game/ak_character.c ${E}/game/ak_weapon.c ${E}/game/ak_conquest.c ${E}/game/ak_ctf.c ${E}/game/ak_vehicle.c ${E}/game/ak_space.c ${E}/game/ak_turret.c ${E}/game/ak_projectile.c ${E}/game/ak_pfx.c ${E}/game/ak_path.c ${E}/game/ak_loco.c ${E}/world/ak_collision.c ${E}/world/ak_nav.c ${E}/render/ak_scene.c ${E}/audio/ak_audio.c ${E}/audio/ak_music.c ${E}/audio/ak_speech.c ${E}/audio/ak_adp.c
  ${E}/app/gc_screen.c ${E}/video/ak_movie.c ${E}/video/ak_thp.c ${E}/game/ak_gc.c ${E}/game/ak_gc_ai.c ${E}/game/ak_script.c
  plat_vita.c gfx_gxm.c)
# the GC AI ranks plans by float scores that must round as the PSP's single-precision code does: no fused multiply-add, no fast-math
set_source_files_properties(${E}/game/ak_gc_ai.c PROPERTIES COMPILE_OPTIONS "-fno-fast-math;-ffp-contract=off")
add_dependencies(aurek independence)
target_compile_definitions(aurek PRIVATE AK_BUILD_ID="${AK_GIT_ID}")
target_link_options(aurek PRIVATE ${AK_VITA_OPT} -Wl,--gc-sections -Wl,-O1 -Wl,--sort-common -Wl,-T,${CMAKE_CURRENT_SOURCE_DIR}/sce_gap.ld)
target_link_libraries(aurek vitashark SceShaccCg_stub SceShaccCgExt taihen_stub SceGxm_stub SceDisplay_stub SceCtrl_stub ScePower_stub
                      SceSysmodule_stub SceNpTrophy_stub SceCommonDialog_stub SceKernelDmacMgr_stub SceIofilemgr_stub SceAppMgr_stub SceAudio_stub m)

vita_create_self(eboot.bin aurek UNSAFE)        # unsafe: loads ur0:data/libshacccg.suprx (the system Cg compiler) at first start
# the trophy pack (tools/trophy/make_trophies.py <game folder>: built from the game's own files, not kept in the repository)
set(AK_TRP ${CMAKE_CURRENT_SOURCE_DIR}/sce_sys/trophy/AURK00001_00/TROPHY.TRP)
if(EXISTS ${AK_TRP})
  set(AK_TRP_FILE FILE ${AK_TRP} sce_sys/trophy/AURK00001_00/TROPHY.TRP)
endif()
vita_create_vpk(aurek.vpk ${VITA_TITLEID} eboot.bin
  VERSION ${VITA_VERSION} NAME ${VITA_APP_NAME}
  FILE ${CMAKE_CURRENT_SOURCE_DIR}/sce_sys/icon0.png sce_sys/icon0.png
  ${AK_TRP_FILE})
