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
C_SRC := $(C)/hle.c $(C)/audio.c $(C)/settings.c $(C)/vfs.c $(C)/gfx_jobs.c $(C)/twin_stick.c $(C)/game_patches.c
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

.PHONY: all data regen linux_test vita clean
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
