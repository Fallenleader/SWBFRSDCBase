#!/bin/sh
# The native engine must not depend on the decompiled game or the old PSP-shaped platform layer (docs/NATIVE_ENGINE.md, rule 1).
# Fails on: includes that leave engine/, references to the decompiled tree, PSP firmware / GE names, guest-memory macros.
cd "$(dirname "$0")/.." || exit 1
bad=0
inc=$(grep -rnE '#[[:space:]]*include[[:space:]]*"[^"]*\.\./\.\./' --include='*.c' --include='*.h' . | grep -v '^./tools/check_independence.sh')
[ -n "$inc" ] && { echo "includes from outside engine/:"; echo "$inc"; bad=1; }
refs=$(grep -rnE 'src/game|platform/common|rs_base\.h|psp_sdk\.h|game_hooks\.h|guest\.h|\bsce(Gu|Ge|Kernel|Io|Sas|Atrac|Mpeg|Psmf|Utility)[A-Za-z]*\(|\bGP\(|\bLW\(|\bGU32\(|\bPTR\(|RS_GUEST64|big_lock|vfpu_' \
       --include='*.c' --include='*.h' --include='*.txt' --include='*.cmake' . | grep -v '^./tools/check_independence.sh')
[ -n "$refs" ] && { echo "PSP / decompiled-game references:"; echo "$refs"; bad=1; }
[ $bad = 0 ] && echo "engine independence: ok"
exit $bad
