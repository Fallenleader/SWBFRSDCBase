# Nintendo 3DS build of the decompiled game (libctru + citro3d), a .3dsx homebrew application.  See platform/3ds/README.md.
#
#   make -f platform/3ds/Makefile            (from the repository root; needs DEVKITPRO / DEVKITARM, and build/data.c from 'make data')
#
# Old 3DS and New 3DS: one executable.  The New 3DS's faster CPU clock and L2 cache are switched on at start-up (osSetSpeedupEnable);
# its C-stick (the right stick) drives the twin-stick controls; the Old 3DS has no right stick and plays with the PSP layout.
ifeq ($(strip $(DEVKITARM)),)
$(error "Set DEVKITARM (and DEVKITPRO): see platform/3ds/README.md")
endif
PREFIX   := $(DEVKITARM)/bin/arm-none-eabi-
CC       := $(PREFIX)gcc
CXX      := $(PREFIX)g++
PICASSO  ?= picasso
BIN2S    ?= bin2s
TOOL3DSX ?= 3dsxtool
SMDHTOOL ?= smdhtool
CTRU     := $(DEVKITPRO)/libctru
CRT      := $(DEVKITARM)/arm-none-eabi/lib

B   := build/3ds
P   := platform/3ds
C   := platform/common
OUT := $(B)/SWBFRS

GAME_SRC := $(wildcard src/game/game_*.c)
C_SRC := $(C)/hle.c $(C)/audio.c $(C)/settings.c $(C)/vfs.c $(C)/gfx_jobs.c $(C)/twin_stick.c $(C)/game_patches.c $(C)/colour_picker.c \
         $(C)/overlay_ui.c $(C)/game_ui.c $(C)/asura_tex.c $(C)/save_manager.c $(C)/parts_swap.c $(C)/loadout_slots.c $(C)/blueprints.c \
         $(C)/custom_maps.c $(C)/tex_mips.c $(C)/gu_native.c $(C)/native_io.c $(C)/lift.c $(C)/guest64.c $(C)/renderer_option.c $(C)/gfx_menu.c $(C)/dedicated_host.c
P_SRC := $(P)/main.c $(P)/gfx_c3d.c $(P)/no_movies.c
SHADERS := $(P)/psp.v.pica

GAME_OBJ := $(patsubst src/game/%.c,$(B)/game/%.o,$(GAME_SRC)) $(B)/game/data.o
C_OBJ    := $(patsubst $(C)/%.c,$(B)/c_%.o,$(C_SRC)) $(B)/glue.o
P_OBJ    := $(patsubst $(P)/%.c,$(B)/p_%.o,$(P_SRC)) $(patsubst $(P)/%.v.pica,$(B)/%.shbin.o,$(SHADERS))
AT3_OBJ  := $(patsubst $(C)/ext/at3/%.cpp,$(B)/at3_%.o,$(wildcard $(C)/ext/at3/*.cpp))

# ARM11 MPCore with VFPv2: ARM code (the ARMv6 Thumb-1 set is much slower), hard float.  TLS is a call on the 3DS (-mtp=soft), so the
# game's per-thread state is one block (RS_TLS_STRUCT), as on the Vita.  Game code at -O2 (I-cache: 16 KB); the rest -O3.
ARCH     := -march=armv6k -mtune=mpcore -mfloat-abi=hard -mtp=soft -marm
DEFS     := -D__3DS__ -DRS_3DS -DRS_TLS_STRUCT -DHOST_BUILD -D_GNU_SOURCE
COMMON   := $(ARCH) $(DEFS) -fomit-frame-pointer -fsigned-char -fno-strict-aliasing -ffp-contract=off -fno-math-errno -ffunction-sections -fdata-sections -w
INC      := -Isrc/game -I$(C) -Iplatform/linux_test -I$(P) -I$(B) -I$(C)/ext/at3 -I$(CTRU)/include
GAME_OPT ?= -O2
CFLAGS_GAME := $(GAME_OPT) $(COMMON) $(INC)
CFLAGS_PLAT := -O3 $(COMMON) $(INC)
LDFLAGS  := -B$(CRT)/ -specs=3dsx.specs -nodefaultlibs $(ARCH) -Wl,--gc-sections -Wl,-Map,$(B)/swbfrs.map
LIBS     := -L$(CTRU)/lib -Wl,--start-group -lcitro3d -lctru -lstdc++ -lsysbase -lc -lm -lgcc -Wl,--end-group

APP_TITLE  := SWBF Renegade Squadron
APP_DESC   := Decompiled port (SWBFRSDCBase)
APP_AUTHOR := SWBFRSDCBase
ICON       := $(P)/icon.png

.PHONY: all clean
all: $(OUT)/swbfrs.3dsx

$(B)/game/%.o: src/game/%.c src/game/game.h src/game/rs_base.h ; @mkdir -p $(B)/game; $(CC) $(CFLAGS_GAME) -c $< -o $@
$(B)/game/data.o: build/data.c ; @mkdir -p $(B)/game; $(CC) $(CFLAGS_GAME) -c $< -o $@
$(B)/c_%.o: $(C)/%.c ; @mkdir -p $(B); $(CC) $(CFLAGS_PLAT) -c $< -o $@
$(B)/p_%.o: $(P)/%.c $(patsubst $(P)/%.v.pica,$(B)/%_shbin.h,$(SHADERS)) ; @mkdir -p $(B); $(CC) $(CFLAGS_PLAT) -c $< -o $@
$(B)/at3_%.o: $(C)/ext/at3/%.cpp ; @mkdir -p $(B); $(CXX) -O3 -ffast-math $(ARCH) $(DEFS) -w -fno-exceptions -fno-rtti $(INC) -c $< -o $@
$(B)/glue.c: src/game/psp_sdk.h $(C)/mkglue.py ; @mkdir -p $(B); python3 $(C)/mkglue.py $< $@
$(B)/glue.o: $(B)/glue.c ; $(CC) $(CFLAGS_PLAT) -c $< -o $@
# vertex shader: picasso -> .shbin -> an object with the binary (psp_shbin / psp_shbin_size) and its header
$(B)/%.shbin: $(P)/%.v.pica ; @mkdir -p $(B); $(PICASSO) -o $@ $<
$(B)/%_shbin.h $(B)/%.shbin.o: $(B)/%.shbin ; cd $(B) && $(BIN2S) -a 4 -H $*_shbin.h $*.shbin > $*.shbin.s && $(CC) $(ARCH) -c $*.shbin.s -o $*.shbin.o

$(B)/swbfrs.elf: $(GAME_OBJ) $(C_OBJ) $(P_OBJ) $(AT3_OBJ) ; $(CXX) $(LDFLAGS) $^ $(LIBS) -o $@
$(B)/swbfrs.smdh: $(ICON) ; $(SMDHTOOL) --create "$(APP_TITLE)" "$(APP_DESC)" "$(APP_AUTHOR)" $< $@
$(OUT)/swbfrs.3dsx: $(B)/swbfrs.elf $(B)/swbfrs.smdh ; @mkdir -p $(OUT); $(TOOL3DSX) $< $@ --smdh=$(B)/swbfrs.smdh; python3 platform/3ds/check_3dsx.py $@ $< || { rm -f $@; exit 1; }

clean: ; rm -rf $(B)
