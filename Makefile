# SWBFRSDCBase - decompiled Star Wars Battlefront: Renegade Squadron (PSP, ULUS10292 v1.02)
#
#   make data EBOOT=/path/to/decrypted/EBOOT.BIN     build/data.c: the game's data segment, extracted from YOUR copy
#   make linux_test EBOOT=...                         32-bit Linux validation build (test harness, not a port)
#   make regen EBOOT=...                              regenerate src/game from the EBOOT (decompiler: tools/dc)
#
# The game code (src/game) is plain C for any 32-bit target; a target port supplies the PSP SDK interface
# (src/game/psp_sdk.h) and the support symbols in src/game/rs_base.h.  See README.md.

#   make linux_test EBOOT=... LAYOUT=high             the same with all memory above 0x80000000 and the per-thread state in one
#                                                     block (RS_TLS_STRUCT): the PS Vita's memory layout, on Linux
#   make linux_test GE_REF=1                         reference build: the original GU writing GE command lists, interpreted by ge.c
#   make linux_test CENSUS=1                         analysis build: attributes every executed GE command to the function that wrote it
#   make vita EBOOT=... [DOCKER=1]                   PS Vita VPK (VitaSDK, or the vitasdk/vitasdk Docker image; platform/vita/README.md)

EBOOT ?= EBOOT.BIN
GAME_SRC := $(wildcard src/game/game_*.c)
ifeq ($(LAYOUT),high)
B := build/linux_high
XFLAGS := -DRS_TLS_STRUCT -DRS_HIGH_LAYOUT
XLD := -Wl,-Ttext-segment=0x81000000
else
B := build
XFLAGS :=
XLD :=
endif
ifeq ($(CENSUS),1)
B := $(B)_census
XFLAGS += -DRS_CENSUS
GE_REF := 1
endif
ifeq ($(PROF),1)
B := $(B)_prof
GAME_CFLAGS := -O1 -finstrument-functions
endif
ifeq ($(GE_REF),1)
B := $(B)_geref
XFLAGS += -DRS_GE_REFERENCE
endif
GAME_OBJ := $(patsubst src/game/%.c,$(B)/game/%.o,$(GAME_SRC)) $(B)/game/data.o
T := platform/linux_test
C := platform/common
T_SRC := $(T)/main.c $(T)/gfx_gl.c $(T)/pc_egl.c $(T)/texrep.c $(T)/prof.c
C_SRC := $(C)/hle.c $(C)/audio.c $(C)/settings.c $(C)/vfs.c $(C)/gfx_jobs.c $(C)/twin_stick.c $(C)/game_patches.c $(C)/colour_picker.c $(C)/overlay_ui.c $(C)/game_ui.c $(C)/asura_tex.c $(C)/save_manager.c $(C)/parts_swap.c $(C)/loadout_slots.c $(C)/tex_mips.c $(C)/guest64.c $(C)/gfx_fx.c $(C)/gfx_backend.c $(C)/renderer_option.c $(C)/blueprints.c $(C)/custom_maps.c $(C)/mpeg.c $(C)/rs_avc.c $(C)/mp4demux.c $(C)/convert.c $(C)/gfx_menu.c
ifeq ($(GE_REF),1)
C_SRC += $(C)/ge.c
else
C_SRC += $(C)/gu_native.c
endif
ifeq ($(CENSUS),1)
C_SRC += $(C)/census.c
endif
ifeq ($(PROF),1)
C_SRC += $(C)/fnprof.c
endif
T_OBJ := $(patsubst $(T)/%.c,$(B)/linux_test/%.o,$(T_SRC)) $(patsubst $(C)/%.c,$(B)/linux_test/c_%.o,$(C_SRC)) $(B)/linux_test/glue.o
AT3_OBJ := $(patsubst $(C)/ext/at3/%.cpp,$(B)/linux_test/at3_%.o,$(wildcard $(C)/ext/at3/*.cpp))

CC32 := gcc -m32 -msse2 -mfpmath=sse $(XFLAGS)
GAME_CFLAGS ?= -O1
GAME_FLAGS := $(GAME_CFLAGS) -w -fno-strict-aliasing -ffp-contract=off -Isrc/game

.PHONY: all data regen linux_test linux64 ps5 vita clean
all: linux_test
data: build/data.c
build/data.c: ; mkdir -p build && python3 tools/dc/mkdata.py $(EBOOT) $@
regen: ; python3 tools/dc/gen.py src/game $(EBOOT) && python3 tools/dc/vfpu_locals.py src/game --exclude=tools/dc/vfpu_locals_exclude.txt && python3 tools/dc/native_gu.py src/game && python3 tools/dc/hooks.py src/game

$(B)/game/%.o: src/game/%.c src/game/game.h src/game/rs_base.h ; @mkdir -p $(B)/game; $(CC32) $(GAME_FLAGS) -c $< -o $@
$(B)/game/data.o: build/data.c ; @mkdir -p $(B)/game; $(CC32) $(GAME_FLAGS) -c $< -o $@

$(B)/linux_test/glue.c: src/game/psp_sdk.h ; @mkdir -p $(B)/linux_test; python3 $(C)/mkglue.py $< $@
$(B)/linux_test/glue.o: $(B)/linux_test/glue.c ; $(CC32) -O1 -w -I$(C) -I src/game -c $< -o $@
$(B)/linux_test/%.o: $(T)/%.c ; @mkdir -p $(B)/linux_test; $(CC32) -O1 -w -DHOST_BUILD -I$(T) -I$(C) -I src/game -c $< -o $@
$(B)/linux_test/c_%.o: $(C)/%.c ; @mkdir -p $(B)/linux_test; $(CC32) -O1 -w -DHOST_BUILD -I$(C) -I src/game -c $< -o $@
$(B)/linux_test/at3_%.o: $(C)/ext/at3/%.cpp ; @mkdir -p $(B)/linux_test; g++ -m32 -msse2 -mfpmath=sse -O2 -I$(C)/ext/at3 -c $< -o $@
linux_test: $(B)/rs_linux_test
$(B)/rs_linux_test: $(GAME_OBJ) $(T_OBJ) $(AT3_OBJ) ; g++ -m32 -no-pie $(XLD) -o $@ $^ -lm -lpthread -ldl

# ---- 64-bit Linux (RS_GUEST64): the same harness with the game's memory in a guest window; the model of the 64-bit consoles ----
#   make linux64 EBOOT=...                           -> build/linux64/rs_linux64
B64 ?= build/linux64
LINUX64_DEFS ?=
# movies: the system's FFmpeg (libavcodec) decodes the game's H.264 videos (RS_AVC=0: no movies)
RS_AVC ?= $(shell test -f /usr/include/x86_64-linux-gnu/libavcodec/avcodec.h -o -f /usr/include/libavcodec/avcodec.h && echo 1 || echo 0)
ifeq ($(RS_AVC),1)
LINUX64_DEFS += -DRS_AVC_FFMPEG
AVC_LIBS := -lavformat -lavcodec -lavutil
endif
# RS_VULKAN=1: the Vulkan back end too (platform/linux_test/gfx_vk.c, shaders in platform/linux_test/vk/ -> build/vk_spv.h)
ifeq ($(RS_VULKAN),1)
LINUX64_DEFS += -DRS_VULKAN -DRS_GFX_FX
VK64_OBJ := $(B64)/linux_test/gfx_vk.o
endif
build/vk_spv.h: $(wildcard platform/linux_test/vk/*.vert platform/linux_test/vk/*.frag platform/linux_test/vk/*.glsl platform/linux_test/vk/build_shaders.py) ; @mkdir -p build; python3 platform/linux_test/vk/build_shaders.py $@
$(B64)/linux_test/gfx_vk.o: platform/linux_test/gfx_vk.c build/vk_spv.h ; @mkdir -p $(B64)/linux_test; $(CC64) -O2 -w -DHOST_BUILD -Ibuild -I$(T) -I$(C) -I src/game -c $< -o $@
CC64 := gcc -m64 -msse2 -DRS_GUEST64 $(LINUX64_DEFS)
GAME64_OBJ := $(patsubst src/game/%.c,$(B64)/game/%.o,$(GAME_SRC)) $(B64)/game/data.o $(B64)/game/fn_table.o
T64_OBJ := $(patsubst $(T)/%.c,$(B64)/linux_test/%.o,$(T_SRC)) $(patsubst $(C)/%.c,$(B64)/linux_test/c_%.o,$(C_SRC)) $(B64)/linux_test/glue.o
AT3_64_OBJ := $(patsubst $(C)/ext/at3/%.cpp,$(B64)/linux_test/at3_%.o,$(wildcard $(C)/ext/at3/*.cpp))
$(B64)/game/%.o: src/game/%.c src/game/game.h src/game/rs_base.h ; @mkdir -p $(B64)/game; $(CC64) $(GAME_FLAGS) -c $< -o $@
$(B64)/game/data.o: build/data.c ; @mkdir -p $(B64)/game; $(CC64) $(GAME_FLAGS) -c $< -o $@
$(B64)/linux_test/glue.c: src/game/psp_sdk.h ; @mkdir -p $(B64)/linux_test; python3 $(C)/mkglue.py $< $@
$(B64)/linux_test/glue.o: $(B64)/linux_test/glue.c ; $(CC64) -O1 -w -I$(C) -I src/game -c $< -o $@
$(B64)/linux_test/%.o: $(T)/%.c ; @mkdir -p $(B64)/linux_test; $(CC64) -O1 -w -DHOST_BUILD -I$(T) -I$(C) -I src/game -c $< -o $@
$(B64)/linux_test/c_%.o: $(C)/%.c ; @mkdir -p $(B64)/linux_test; $(CC64) -O1 -w -DHOST_BUILD -I$(C) -I src/game -c $< -o $@
$(B64)/linux_test/at3_%.o: $(C)/ext/at3/%.cpp ; @mkdir -p $(B64)/linux_test; g++ -m64 -O2 -I$(C)/ext/at3 -c $< -o $@
linux64: $(B64)/rs_linux64
$(B64)/rs_linux64: $(GAME64_OBJ) $(T64_OBJ) $(VK64_OBJ) $(AT3_64_OBJ) ; g++ -m64 -o $@ $^ -lm -lpthread -ldl $(AVC_LIBS)

# ---- PS5 (platform/ps5): native homebrew title, 64-bit (RS_GUEST64), OpenGL on the PS5 OpenGL SDK ----
#   make ps5 EBOOT=... PS5_BOILERPLATE=<ps5-native-app-boilerplate checkout> PS5_OPENGL=<ps5-opengl-sdk-1.0.2/sdk>
#   -> build/ps5/PPSA90292/ (the title folder for /data/homebrew) and build/ps5/PPSA90292.zip   (platform/ps5/README.md)
PS5_BOILERPLATE ?= ../ps5-native-app-boilerplate
PS5_OPENGL ?= ../ps5-opengl-sdk-1.0.2/sdk
PS5_SDK := $(PS5_BOILERPLATE)/.deps/native/ps5-payload-sdk
PS5CC := env PS5_PAYLOAD_SDK=$(abspath $(PS5_SDK)) USE_CCACHE=1 sh $(PS5_BOILERPLATE)/tooling/prospero-clang18
PS5_DEFS := -DRS_GUEST64 -DRS_TLS_STRUCT -DRS_PS5 -DRS_HW_ANISO -DRS_ANISO_MAX=16 -DRS_ANISO_DEFAULT=16 -DRS_GFX_MAX_SCALE=8
PS5_VULKAN ?=
# FFmpeg built for the PS5 (H.264 / AAC decoders, AAC encoder, MP4 muxer: the first-start media conversion and the movies)
PS5_FFMPEG ?= ../ext/ffmpeg-ps5
PS5_DEFS += -DRS_AVC_FFMPEG
ifneq ($(PS5_VULKAN),)
PS5_DEFS += -DRS_VULKAN -DRS_GFX_FX
endif
PS5_FLAGS := -O3 -march=znver2 -mtune=znver2 -w -fno-strict-aliasing -ffp-contract=off -fno-math-errno -ffunction-sections -fdata-sections $(PS5_DEFS)
P5 := build/ps5
PS5_C_SRC := $(filter-out $(C)/ge.c $(C)/census.c $(C)/fnprof.c,$(C_SRC))
PS5_OBJ := $(patsubst src/game/%.c,$(P5)/game/%.o,$(GAME_SRC)) $(P5)/game/data.o $(P5)/game/fn_table.o \
           $(patsubst $(C)/%.c,$(P5)/c_%.o,$(PS5_C_SRC)) $(P5)/gfx_gl.o $(P5)/texrep.o $(P5)/main.o $(P5)/dirent_ps5.o $(P5)/glue.o $(P5)/app_heap.o \
           $(patsubst $(C)/ext/at3/%.cpp,$(P5)/at3_%.o,$(wildcard $(C)/ext/at3/*.cpp))
PS5_INC := -Isrc/game -I$(C) -I$(T) -Iplatform/ps5 -I$(PS5_OPENGL)/include -I$(PS5_FFMPEG)/include
$(P5)/game/%.o: src/game/%.c src/game/game.h src/game/rs_base.h ; @mkdir -p $(P5)/game; $(PS5CC) -std=gnu11 $(PS5_FLAGS) -Isrc/game -c $< -o $@
$(P5)/game/data.o: build/data.c ; @mkdir -p $(P5)/game; $(PS5CC) -std=gnu11 $(PS5_FLAGS) -Isrc/game -c $< -o $@
$(P5)/glue.c: src/game/psp_sdk.h ; @mkdir -p $(P5); python3 $(C)/mkglue.py $< $@
$(P5)/glue.o: $(P5)/glue.c ; $(PS5CC) -std=gnu11 $(PS5_FLAGS) $(PS5_INC) -c $< -o $@
$(P5)/c_%.o: $(C)/%.c ; @mkdir -p $(P5); $(PS5CC) -std=gnu11 $(PS5_FLAGS) $(PS5_INC) -c $< -o $@
$(P5)/%.o: $(T)/%.c ; @mkdir -p $(P5); $(PS5CC) -std=gnu11 $(PS5_FLAGS) $(PS5_INC) -c $< -o $@
$(P5)/main.o: platform/ps5/main.c ; @mkdir -p $(P5); $(PS5CC) -std=gnu11 $(PS5_FLAGS) $(PS5_INC) -c $< -o $@
$(P5)/dirent_ps5.o: platform/ps5/dirent_ps5.c ; @mkdir -p $(P5); $(PS5CC) -std=gnu11 $(PS5_FLAGS) $(PS5_INC) -c $< -o $@
$(P5)/app_heap.o: $(PS5_OPENGL)/../native-app/app_heap.c ; @mkdir -p $(P5); $(PS5CC) -std=gnu11 -O3 -march=znver2 -w -c $< -o $@
$(P5)/at3_%.o: $(C)/ext/at3/%.cpp ; @mkdir -p $(P5); $(PS5CC) -std=c++17 -O2 -w -I$(C)/ext/at3 -c $< -o $@
# PS5_VULKAN=<PS5_Vulkan checkout with its RADV built> (+ PS5_RADV=<RADV archive, its global names apart from the OpenGL SDK's>):
# the Vulkan renderer (ray tracing) next to OpenGL, chosen by RS_RENDERER in settings.txt / the Options menu
PS5_RADV ?= $(P5)/libvulkan_radeon_rs.a
ifneq ($(PS5_VULKAN),)
PS5_OBJ += $(P5)/gfx_vk.o $(PS5_RADV)
$(P5)/libvulkan_radeon_rs.a: $(PS5_VULKAN)/.deps/native/radv-release/lib/libvulkan_radeon.ps5.a ; @mkdir -p $(P5); bash tools/ps5_radv_rename.sh $< $(PS5_OPENGL) $@
$(P5)/gfx_vk.o: platform/linux_test/gfx_vk.c build/vk_spv.h ; @mkdir -p $(P5); $(PS5CC) -std=gnu11 $(PS5_FLAGS) $(PS5_INC) -Ibuild -I$(PS5_VULKAN)/.deps/native/radv-release/include -c $< -o $@
endif
ps5: build/data.c $(PS5_OBJ) ; PS5_FFMPEG="$(abspath $(PS5_FFMPEG))" PS5_VULKAN="$(PS5_VULKAN)" PS5_RADV="$(abspath $(PS5_RADV))" bash platform/ps5/package.sh "$(PS5_BOILERPLATE)" "$(PS5_OPENGL)" $(filter-out $(PS5_RADV),$(PS5_OBJ))

# ---- PS Vita (platform/vita) ----
VITA_B := build/vita
VITA_CMAKE := cmake -S platform/vita -B $(VITA_B) -DRS_DATA_C=$(CURDIR)/build/data.c && cmake --build $(VITA_B) -j$$(nproc)
vita: build/data.c
ifeq ($(DOCKER),1)
	docker run --rm -v "$(CURDIR)":"$(CURDIR)" -w "$(CURDIR)" vitasdk/vitasdk sh -c '$(VITA_CMAKE)'
else
	$(VITA_CMAKE)
endif

clean: ; rm -rf build

# ---- Desktop (platform/desktop): Steam Deck / Linux and Windows, 64-bit, Vulkan in an SDL2 window; cross-built with zig (pip install ziglang)
#   make deck     -> build/deck/SWBFRS/      (SteamOS / Linux x86-64, glibc 2.31+: no ray tracing, 1280x800 full screen)
#   make windows  -> build/windows/SWBFRS/   (Windows 10/11 x64: ray tracing off by default)
#   make rtx      -> build/rtx/SWBFRS/       (Windows x64, NVIDIA RTX: hardware ray tracing on by default)
EXT ?= ../ext
ZIG := python3 -m ziglang
DESK_DEFS := -DRS_GUEST64 -DRS_DESKTOP -DRS_VULKAN -DRS_GFX_FX -DRS_AVC_FFMPEG -DRS_HW_ANISO -DRS_ANISO_MAX=16 -DRS_ANISO_DEFAULT=16 -DRS_GFX_MAX_SCALE=8
DESK_C_SRC := $(filter-out $(C)/ge.c $(C)/census.c $(C)/fnprof.c,$(C_SRC))
define DESKTOP
$(1)_B := build/$(1)
$(1)_CC := $(ZIG) cc -target $(2)
$(1)_CXX := $(ZIG) c++ -target $(2)
$(1)_FLAGS := -O3 $(3) -w -fno-strict-aliasing -ffp-contract=off -fno-math-errno -ffunction-sections -fdata-sections $(DESK_DEFS) -DRS_VARIANT=\"$(1)\" $(4)
$(1)_INC := -Isrc/game -I$(C) -I$(T) -Iplatform/desktop -Ibuild -I$(EXT)/vkinc -I$(5) -I$(EXT)/ffmpeg-$(6)/include
$(1)_OBJ := $$(patsubst src/game/%.c,$$($(1)_B)/game/%.o,$(GAME_SRC)) $$($(1)_B)/game/data.o $$($(1)_B)/game/fn_table.o \
    $$(patsubst $(C)/%.c,$$($(1)_B)/c_%.o,$(DESK_C_SRC)) $$($(1)_B)/gfx_gl.o $$($(1)_B)/gfx_vk.o $$($(1)_B)/texrep.o $$($(1)_B)/main.o $$($(1)_B)/glue.o \
    $$(patsubst $(C)/ext/at3/%.cpp,$$($(1)_B)/at3_%.o,$$(wildcard $(C)/ext/at3/*.cpp))
$$($(1)_B)/game/%.o: src/game/%.c src/game/game.h src/game/rs_base.h ; @mkdir -p $$(@D); $$($(1)_CC) -std=gnu11 $$($(1)_FLAGS) -Isrc/game -c $$< -o $$@
$$($(1)_B)/game/data.o: build/data.c ; @mkdir -p $$(@D); $$($(1)_CC) -std=gnu11 $$($(1)_FLAGS) -Isrc/game -c $$< -o $$@
$$($(1)_B)/glue.c: src/game/psp_sdk.h ; @mkdir -p $$(@D); python3 $(C)/mkglue.py $$< $$@
$$($(1)_B)/glue.o: $$($(1)_B)/glue.c ; $$($(1)_CC) -std=gnu11 $$($(1)_FLAGS) $$($(1)_INC) -c $$< -o $$@
$$($(1)_B)/c_%.o: $(C)/%.c ; @mkdir -p $$(@D); $$($(1)_CC) -std=gnu11 $$($(1)_FLAGS) $$($(1)_INC) -c $$< -o $$@
$$($(1)_B)/%.o: $(T)/%.c build/vk_spv.h ; @mkdir -p $$(@D); $$($(1)_CC) -std=gnu11 $$($(1)_FLAGS) $$($(1)_INC) -c $$< -o $$@
$$($(1)_B)/main.o: platform/desktop/main.c ; @mkdir -p $$(@D); $$($(1)_CC) -std=gnu11 $$($(1)_FLAGS) $$($(1)_INC) -c $$< -o $$@
$$($(1)_B)/at3_%.o: $(C)/ext/at3/%.cpp ; @mkdir -p $$(@D); $$($(1)_CXX) -std=c++17 -O2 $(3) -w -I$(C)/ext/at3 -c $$< -o $$@
endef
$(eval $(call DESKTOP,deck,x86_64-linux-gnu.2.31,-march=znver2 -mtune=znver2,-DRS_VARIANT_DECK -DRS_NO_GL,$(EXT)/sdlinc,lin))
$(eval $(call DESKTOP,decktest,x86_64-linux-gnu.2.31,-march=x86_64_v3,-DRS_VARIANT_DECK -DRS_NO_GL,$(EXT)/sdlinc,lin))
$(eval $(call DESKTOP,windows,x86_64-windows-gnu,-march=x86_64_v3,-DRS_VARIANT_WINDOWS -include platform/desktop/win_compat.h -D_FILE_OFFSET_BITS=64,$(EXT)/SDL2-2.30.9/x86_64-w64-mingw32/include,win))
$(eval $(call DESKTOP,rtx,x86_64-windows-gnu,-march=x86_64_v3,-DRS_VARIANT_RTX -include platform/desktop/win_compat.h -D_FILE_OFFSET_BITS=64,$(EXT)/SDL2-2.30.9/x86_64-w64-mingw32/include,win))
FF_LIBS = $(EXT)/ffmpeg-$(1)/lib/libavformat.a $(EXT)/ffmpeg-$(1)/lib/libavcodec.a $(EXT)/ffmpeg-$(1)/lib/libavutil.a
deck_OBJ := $(filter-out $(deck_B)/gfx_gl.o,$(deck_OBJ))
decktest_OBJ := $(filter-out $(decktest_B)/gfx_gl.o,$(decktest_OBJ))
deck: build/data.c $(deck_OBJ)
	@mkdir -p $(deck_B)/SWBFRS
	$(ZIG) c++ -target x86_64-linux-gnu.2.31 -o $(deck_B)/SWBFRS/swbfrs $(deck_OBJ) $(call FF_LIBS,lin) /usr/lib/x86_64-linux-gnu/libSDL2-2.0.so.0 -lm -lpthread -ldl -Wl,--gc-sections -s
	bash platform/desktop/package.sh deck $(deck_B)/SWBFRS
windows: build/data.c $(windows_OBJ)
	@mkdir -p $(windows_B)/SWBFRS
	$(ZIG) c++ -target x86_64-windows-gnu -o $(windows_B)/SWBFRS/SWBFRS.exe $(windows_OBJ) $(call FF_LIBS,win) $(EXT)/SDL2-2.30.9/x86_64-w64-mingw32/lib/libSDL2.dll.a -lbcrypt -lole32 -Wl,--subsystem,windows -Wl,--gc-sections -s
	bash platform/desktop/package.sh windows $(windows_B)/SWBFRS
rtx_OBJ := $(filter-out $(windows_B)/main.o,$(windows_OBJ)) $(rtx_B)/main.o
rtx: build/data.c $(rtx_OBJ)
	@mkdir -p $(rtx_B)/SWBFRS
	$(ZIG) c++ -target x86_64-windows-gnu -o $(rtx_B)/SWBFRS/SWBFRS.exe $(rtx_OBJ) $(call FF_LIBS,win) $(EXT)/SDL2-2.30.9/x86_64-w64-mingw32/lib/libSDL2.dll.a -lbcrypt -lole32 -Wl,--subsystem,windows -Wl,--gc-sections -s
	bash platform/desktop/package.sh rtx $(rtx_B)/SWBFRS
decktest: build/data.c $(decktest_OBJ)
	@mkdir -p $(decktest_B)/SWBFRS
	$(ZIG) c++ -target x86_64-linux-gnu.2.31 -o $(decktest_B)/SWBFRS/swbfrs $(decktest_OBJ) $(call FF_LIBS,lin) /usr/lib/x86_64-linux-gnu/libSDL2-2.0.so.0 -lm -lpthread -ldl -Wl,--gc-sections
