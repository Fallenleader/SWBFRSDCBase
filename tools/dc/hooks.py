"""Post-pass of the decompiler (run by `make regen` after native_gu.py): native hooks around selected game functions.
Each listed function is renamed <name>__orig (static) and a wrapper with the original name calls the native hook before it (it
may change the arguments: they are the wrapper's parameters) and/or after it.  The game's
own code is otherwise untouched, so `make regen` reproduces exactly this.
usage: hooks.py <src/game dir>   (idempotent)"""
import re, sys, os

# address -> (call before the original, call after it); argument names are the decompiled parameter names
HOOKS = {
    '088FDCC0': (None, 'rs_input_after_pad()'),                  # pad read: stick + buttons into the game's input arrays (game_11.c)
    '08A5F1A4': (None, 'rs_input_after_scheme(a0, a1)'),         # one control scheme's action bindings built (game_26.c)
    '08897814': ('rs_game_var_range(a1, &a2, &a3)', None),       # a game option registered with its range (game_06.c): game_patches.c
}
MARK = '/* native hook (tools/dc/hooks.py) */'
INCLUDE = '#include "../../platform/common/game_hooks.h"   ' + MARK + '\n'

def process(path):
    t = open(path).read()
    if MARK in t: return 0
    n = 0
    for addr, (before, after) in HOOKS.items():
        m = re.search(r'\n(?:/\* %s \*/\n)(void func_%s)\(([^)]*)\)\n\{\n' % (addr, addr), t)
        if not m: continue
        params = m.group(2).strip()
        names = [] if params in ('', 'void') else [p.split()[-1] for p in params.split(',')]
        start = m.start(1)
        end = t.index('\n}\n', m.end()) + 3
        orig = 'static void func_%s__orig(%s)' % (addr, params)
        body = t[m.end(2) + 1:end]                          # ")\n{ ... }\n" minus the ")"
        wrapper = 'void func_%s(%s)\n{\n' % (addr, params)
        if before: wrapper += '    %s;   %s\n' % (before, MARK)
        wrapper += '    func_%s__orig(%s);\n' % (addr, ', '.join(names))
        if after: wrapper += '    %s;   %s\n' % (after, MARK)
        wrapper += '}\n'
        t = t[:start] + orig + body + '\n' + wrapper + t[end:]
        n += 1
    if n:
        i = t.index('#include "game.h"') + len('#include "game.h"\n')
        t = t[:i] + INCLUDE + t[i:]
        open(path, 'w').write(t)
    return n

if __name__ == '__main__':
    d = sys.argv[1]; total = 0
    for f in sorted(os.listdir(d)):
        if f.startswith('game_') and f.endswith('.c'): total += process(os.path.join(d, f))
    print('native hooks: %d functions wrapped now (of %d listed)' % (total, len(HOOKS)))
    src = ''.join(open(os.path.join(d, f)).read() for f in os.listdir(d) if f.startswith('game_') and f.endswith('.c'))
    missing = [a for a in HOOKS if 'func_%s__orig(' % a not in src]
    if missing: sys.exit('hooks.py: not wrapped: ' + ', '.join(missing))
