#!/bin/sh
# The native engine must not depend on the decompiled game or the old PSP-shaped platform layer (docs/NATIVE_ENGINE.md, rule 1).
# Fails on: includes that leave engine/, references to the decompiled tree, PSP firmware / GE names, guest-memory macros.
cd "$(dirname "$0")/.." || exit 1
bad=0
root=$(pwd -P)
inc=$(grep -rnoE '#[[:space:]]*include[[:space:]]*"[^"]+"' --include='*.c' --include='*.h' . | while IFS=: read -r f l m; do
        h=$(echo "$m" | sed 's/.*"\(.*\)"/\1/'); d=$(dirname "$f")
        [ -e "$d/$h" ] || continue                      # system / toolchain headers found elsewhere are fine
        r=$(cd "$(dirname "$d/$h")" && pwd -P)
        case "$r" in "$root"|"$root"/*) ;; *) echo "$f:$l: $h";; esac
      done)
[ -n "$inc" ] && { echo "includes from outside engine/:"; echo "$inc"; bad=1; }
# names that only exist on the PSP or in the decompiled game: banned everywhere
refs=$(grep -rnE 'src/game|platform/common|rs_base\.h|psp_sdk\.h|game_hooks\.h|guest\.h|\bsce(Gu|Ge|Sas|Atrac|Psmf|Utility|Umd|Impose)[A-Za-z]*\(|\bGP\(|\bLW\(|\bGU32\(|\bPTR\(|RS_GUEST64|big_lock|vfpu_' \
       --include='*.c' --include='*.h' --include='*.txt' --include='*.cmake' . | grep -v '^./tools/check_independence.sh')
# kernel / file calls are the native API of Sony's own devices (Vita, PS4, PS5): allowed only in their platform folders
refs2=$(grep -rnE '\bsce(Kernel|Io)[A-Za-z]*\(' --include='*.c' --include='*.h' . | grep -vE '^./platform/(vita|ps4|ps5)/')
refs=$(printf '%s\n%s' "$refs" "$refs2" | sed '/^$/d')
[ -n "$refs" ] && { echo "PSP / decompiled-game references:"; echo "$refs"; bad=1; }
[ $bad = 0 ] && echo "engine independence: ok"
exit $bad
