#!/bin/sh
# Every value or rule the engine still makes up in place of the game's: each carries PARITY(<task>) pointing at
# docs/PARITY_TASKS.md.  The list should shrink to nothing as the tasks are traced.
cd "$(dirname "$0")/.." && grep -rn --include=*.c --include=*.h "PARITY(" . | grep -v "^./tools/" | sed 's|^\./||' | sort -t'(' -k2
