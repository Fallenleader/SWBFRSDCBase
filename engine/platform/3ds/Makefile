# Aurek on the Nintendo 3DS (devkitARM + libctru + citro3d): a .3dsx for the Homebrew Launcher, aimed at the Old 3DS.
#   make -f engine/platform/3ds/Makefile          (from the repository root; needs DEVKITPRO / DEVKITARM - see
#                                                  platform/3ds/build_toolchain.sh for a toolchain built from source)
ifeq ($(strip $(DEVKITARM)),)
$(error "Set DEVKITARM (and DEVKITPRO)")
endif
PREFIX   := $(DEVKITARM)/bin/arm-none-eabi-
CC       := $(PREFIX)gcc
PICASSO  ?= picasso
BIN2S    ?= bin2s
TOOL3DSX ?= 3dsxtool
SMDHTOOL ?= smdhtool
CTRU     := $(DEVKITPRO)/libctru
CRT      := $(DEVKITARM)/arm-none-eabi/lib

E   := engine
P   := engine/platform/3ds
B   := build/aurek_3ds
OUT := $(B)/Aurek

SRC := $(E)/app/viewer.c $(E)/app/play.c $(E)/app/play_sound.c $(E)/app/hud.c $(E)/core/ak_core.c $(E)/core/ak_vfs.c $(E)/core/ak_settings.c \
       $(E)/assets/asura.c $(E)/assets/model.c $(E)/assets/entity.c $(E)/assets/blueprint.c $(E)/game/ak_soldier.c $(E)/game/ak_character.c \
       $(E)/game/ak_weapon.c $(E)/game/ak_conquest.c $(E)/game/ak_ctf.c $(E)/game/ak_vehicle.c $(E)/game/ak_space.c $(E)/game/ak_turret.c $(E)/game/ak_projectile.c \
       $(E)/game/ak_path.c $(E)/game/ak_loco.c $(E)/world/ak_collision.c $(E)/world/ak_nav.c $(E)/render/ak_scene.c $(E)/audio/ak_audio.c \
       $(E)/audio/ak_music.c $(E)/audio/ak_speech.c $(E)/audio/ak_adp.c $(P)/plat_3ds.c $(P)/gfx_c3d.c
OBJ := $(patsubst $(E)/%.c,$(B)/%.o,$(SRC)) $(B)/aurek.shbin.o

GIT_ID := $(shell git describe --always --dirty=+ 2>/dev/null)

# every performance flag: the ARM11 MPCore with its VFPv2, hard float, ARM code (the ARMv6 Thumb-1 set is slower), -O3, link-time
# optimisation, sections for the linker's garbage collection, fast float rules (as the Vita build).  TLS is a call on the 3DS (-mtp=soft).
ARCH    := -march=armv6k -mtune=mpcore -mfloat-abi=hard -mtp=soft -marm
OPT     := -O3 -flto=auto -fomit-frame-pointer -ffunction-sections -fdata-sections -fno-math-errno -ffp-contract=fast -fno-signed-zeros \
           -fno-trapping-math -fno-strict-aliasing
DEFS    := -D__3DS__ -DAK_AUDIO_RATE=32000 -DAK_BUILD_ID=\"$(GIT_ID)\"
CFLAGS  := -std=gnu11 $(ARCH) $(OPT) $(DEFS) -Wall -Wextra -Wno-unused-parameter -Wno-format -I$(E) -I$(B) -I$(CTRU)/include
LDFLAGS := -B$(CRT)/ -specs=3dsx.specs -nodefaultlibs $(ARCH) $(OPT) -Wl,--gc-sections -Wl,-Map,$(B)/aurek.map
LIBS    := -L$(CTRU)/lib -Wl,--start-group -lcitro3d -lctru -lsysbase -lc -lm -lgcc -Wl,--end-group

.PHONY: all clean independence
all: independence $(OUT)/aurek.3dsx
independence: ; @sh $(E)/tools/check_independence.sh

$(B)/aurek.shbin: $(P)/aurek.v.pica ; @mkdir -p $(B); $(PICASSO) -o $@ $<
$(B)/aurek_shbin.h $(B)/aurek.shbin.o: $(B)/aurek.shbin ; cd $(B) && $(BIN2S) -a 4 -H aurek_shbin.h aurek.shbin > aurek.shbin.s && $(CC) $(ARCH) -c aurek.shbin.s -o aurek.shbin.o
$(B)/%.o: $(E)/%.c $(B)/aurek_shbin.h ; @mkdir -p $(dir $@); $(CC) $(CFLAGS) -c $< -o $@

$(B)/aurek.elf: $(OBJ) ; $(CC) $(LDFLAGS) $^ $(LIBS) -o $@
$(B)/aurek.smdh: $(P)/icon.png ; $(SMDHTOOL) --create "Aurek" "Star Wars Battlefront: Renegade Squadron - native engine" "Aurek" $< $@
$(OUT)/aurek.3dsx: $(B)/aurek.elf $(B)/aurek.smdh ; @mkdir -p $(OUT); $(TOOL3DSX) $< $@ --smdh=$(B)/aurek.smdh; cp $(P)/settings.txt $(OUT)/settings.txt

clean: ; rm -rf $(B)
