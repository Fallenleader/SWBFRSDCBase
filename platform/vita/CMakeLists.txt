# PS Vita build of the decompiled game (VitaSDK).  See platform/vita/README.md.
#
#   cmake -S platform/vita -B build/vita -DRS_DATA_C=build/data.c && cmake --build build/vita
#
# RS_DATA_C is the data image extracted from your EBOOT.BIN (make data EBOOT=...).
cmake_minimum_required(VERSION 3.10)
if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  if(DEFINED ENV{VITASDK})
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VITASDK}/share/vita.toolchain.cmake" CACHE PATH "toolchain file")
  else()
    message(FATAL_ERROR "Please define VITASDK to point to your SDK path!")
  endif()
endif()
project(swbfrs_vita C CXX)
include("$ENV{VITASDK}/share/vita.cmake" REQUIRED)

get_filename_component(ROOT "${CMAKE_CURRENT_SOURCE_DIR}/../.." ABSOLUTE)
set(RS_DATA_C "${ROOT}/build/data.c" CACHE FILEPATH "data image generated from your EBOOT.BIN (make data)")
set(RS_GAME_OPT "-O2" CACHE STRING "optimisation level of the decompiled game code")
set(VITA_APP_NAME "SWBF Renegade Squadron")
set(VITA_TITLEID "SWBR00002")              # the title ID the vitaGL test builds used, so this installs over them
set(VITA_VERSION "01.00")

if(NOT EXISTS "${RS_DATA_C}")
  message(FATAL_ERROR "${RS_DATA_C} not found: run 'make data EBOOT=/path/to/EBOOT.BIN' first")
endif()

# SDK call glue (generated from the list of SDK functions the game imports)
find_program(PYTHON3 NAMES python3 python)
set(GLUE_C "${ROOT}/build/vita_glue.c")
if(PYTHON3)
  add_custom_command(OUTPUT "${GLUE_C}" COMMAND ${PYTHON3} "${ROOT}/platform/common/mkglue.py" "${ROOT}/src/game/psp_sdk.h" "${GLUE_C}"
                     DEPENDS "${ROOT}/src/game/psp_sdk.h" "${ROOT}/platform/common/mkglue.py")
elseif(NOT EXISTS "${GLUE_C}")
  message(FATAL_ERROR "python3 is needed to generate ${GLUE_C} (or generate it beforehand: python3 platform/common/mkglue.py src/game/psp_sdk.h build/vita_glue.c)")
endif()

file(GLOB GAME_SRC "${ROOT}/src/game/game_*.c")
file(GLOB AT3_SRC "${ROOT}/platform/common/ext/at3/*.cpp")
set(COMMON_SRC "${ROOT}/platform/common/hle.c" "${ROOT}/platform/common/ge.c" "${ROOT}/platform/common/audio.c" "${ROOT}/platform/common/settings.c" "${ROOT}/platform/common/vfs.c" "${ROOT}/platform/common/gfx_jobs.c")
# renderer: the GL ES 2.0 back end (platform/linux_test/gfx_gl.c, Cg shaders on the Vita) on top of vitaGL
set(VITA_SRC "${CMAKE_CURRENT_SOURCE_DIR}/main.c" "${CMAKE_CURRENT_SOURCE_DIR}/gfx_vgl.c" "${ROOT}/platform/linux_test/gfx_gl.c" "${ROOT}/platform/linux_test/texrep.c")

add_executable(swbfrs ${GAME_SRC} "${RS_DATA_C}" ${COMMON_SRC} "${GLUE_C}" ${VITA_SRC} ${AT3_SRC})
target_include_directories(swbfrs PRIVATE "${ROOT}/src/game" "${ROOT}/platform/common" "${ROOT}/platform/linux_test" "${CMAKE_CURRENT_SOURCE_DIR}" "${ROOT}/platform/common/ext/at3")
# RS_TLS_STRUCT: the Vita's thread-local storage is emulated (a call per access); the game's per-thread state is one block instead
target_compile_definitions(swbfrs PRIVATE RS_TLS_STRUCT HOST_BUILD _GNU_SOURCE)
target_compile_options(swbfrs PRIVATE -fsigned-char -fno-strict-aliasing -ffp-contract=off -w)
set_source_files_properties(${GAME_SRC} "${RS_DATA_C}" PROPERTIES COMPILE_OPTIONS "${RS_GAME_OPT}")
set_source_files_properties(${COMMON_SRC} "${GLUE_C}" ${VITA_SRC} PROPERTIES COMPILE_OPTIONS "-O2")
set_source_files_properties(${AT3_SRC} PROPERTIES COMPILE_OPTIONS "-O2;-ffast-math")

target_compile_definitions(swbfrs PRIVATE RS_VITAGL)
set(RS_LIBS vitaGL mathneon SceKernelDmacMgr_stub SceTouch_stub SceHid_stub SceMotion_stub SceAudioIn_stub
            SceGxm_stub SceDisplay_stub SceCtrl_stub SceAudio_stub ScePower_stub SceSysmodule_stub SceAppMgr_stub SceAppUtil_stub SceCommonDialog_stub
            SceIofilemgr_stub vitashark SceShaccCg_stub SceShaccCgExt taihen_stub)
target_link_libraries(swbfrs ${RS_LIBS} stdc++ pthread m)

vita_create_self(eboot.bin swbfrs UNSAFE)      # unsafe: loads ur0:data/libshacccg.suprx (the system Cg compiler) at run time
vita_create_vpk(swbfrs.vpk ${VITA_TITLEID} eboot.bin
  VERSION ${VITA_VERSION} NAME ${VITA_APP_NAME}
  FILE "${CMAKE_CURRENT_SOURCE_DIR}/sce_sys/icon0.png" sce_sys/icon0.png
  FILE "${CMAKE_CURRENT_SOURCE_DIR}/sce_sys/livearea/contents/bg0.png" sce_sys/livearea/contents/bg0.png
  FILE "${CMAKE_CURRENT_SOURCE_DIR}/sce_sys/livearea/contents/startup.png" sce_sys/livearea/contents/startup.png
  FILE "${CMAKE_CURRENT_SOURCE_DIR}/sce_sys/livearea/contents/template.xml" sce_sys/livearea/contents/template.xml)
