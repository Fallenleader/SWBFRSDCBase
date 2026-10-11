# SWBFRSDCBase - decompiled Star Wars Battlefront: Renegade Squadron (PSP, ULUS10292 v1.02)
#
#   make data EBOOT=/path/to/decrypted/EBOOT.BIN     build/data.c: the game's data segment, extracted from YOUR copy
#   make linux_test EBOOT=...                         32-bit Linux validation build (test harness, not a port)
#   make regen EBOOT=...                              regenerate src/game from the EBOOT (decompiler: tools/dc)
#
# The game code (src/game) is plain C for any 32-bit target; a target port supplies the PSP SDK interface
# (src/game/psp_sdk.h) and the support symbols in src/game/rs_base.h.  See README.md.

EBOOT ?= EBOOT.BIN
GAME_SRC := $(wildcard src/game/game_*.c)
GAME_OBJ := $(patsubst src/game/%.c,build/game/%.o,$(GAME_SRC)) build/game/data.o
T := platform/linux_test
T_SRC := $(T)/main.c $(T)/hle.c $(T)/ge.c $(T)/gfx_gl.c $(T)/audio.c $(T)/pc_egl.c $(T)/texrep.c $(T)/prof.c $(T)/harness_patches.c
T_OBJ := $(patsubst $(T)/%.c,build/linux_test/%.o,$(T_SRC)) build/linux_test/glue.o
AT3_OBJ := $(patsubst $(T)/ext/at3/%.cpp,build/linux_test/at3_%.o,$(wildcard $(T)/ext/at3/*.cpp))

CC32 := gcc -m32 -msse2 -mfpmath=sse
GAME_CFLAGS ?= -O1
GAME_FLAGS := $(GAME_CFLAGS) -w -fno-strict-aliasing -ffp-contract=off -Isrc/game

.PHONY: all data regen linux_test clean
all: linux_test
data: build/data.c
build/data.c: ; mkdir -p build && python3 tools/dc/mkdata.py $(EBOOT) $@
regen: ; python3 tools/dc/gen.py src/game $(EBOOT)

build/game/%.o: src/game/%.c src/game/game.h src/game/rs_base.h ; @mkdir -p build/game; $(CC32) $(GAME_FLAGS) -c $< -o $@
build/game/data.o: build/data.c ; @mkdir -p build/game; $(CC32) $(GAME_FLAGS) -c $< -o $@

build/linux_test/glue.c: src/game/psp_sdk.h ; @mkdir -p build/linux_test; python3 $(T)/mkglue.py $< $@
build/linux_test/glue.o: build/linux_test/glue.c ; $(CC32) -O1 -w -I$(T) -c $< -o $@
build/linux_test/%.o: $(T)/%.c ; @mkdir -p build/linux_test; $(CC32) -O1 -w -DHOST_BUILD -I$(T) -c $< -o $@
build/linux_test/at3_%.o: $(T)/ext/at3/%.cpp ; @mkdir -p build/linux_test; g++ -m32 -msse2 -mfpmath=sse -O2 -I$(T)/ext/at3 -c $< -o $@
linux_test: build/rs_linux_test
build/rs_linux_test: $(GAME_OBJ) $(T_OBJ) $(AT3_OBJ) ; g++ -m32 -no-pie -o $@ $^ -lm -lpthread -ldl

clean: ; rm -rf build
