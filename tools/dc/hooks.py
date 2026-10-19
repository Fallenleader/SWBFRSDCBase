"""Post-pass of the decompiler (run by `make regen` after native_gu.py): native hooks around selected game functions.
Each listed function is renamed <name>__orig (static) and a wrapper with the original name calls:
  before   a native call made first; it may change the arguments (they are the wrapper's parameters, so &a2 etc. work)
  replace  a native condition: when it returns non-zero the original is skipped and the wrapper returns r_ (the hook fills it
           through &r_; for void functions r_ is not used)
  after    a native call made after the original returned
The game's own code is otherwise untouched, so `make regen` reproduces exactly this.  Re-running updates the wrappers in place.
usage: hooks.py <src/game dir>"""
import re, sys, os

# address -> {'before': call, 'replace': call, 'after': call}; argument names are the decompiled parameter names
HOOKS = {
    '088FDCC0': {'after': 'rs_input_after_pad(), rs_picker_pad(), rs_savemgr_pad(), rs_parts_frame(), rs_loadout_frame(), rs_patches_frame()'},          # pad read (game_11.c): twin_stick.c, colour_picker.c, save_manager.c
    '08A5F1A4': {'after': 'rs_input_after_scheme(a0, a1)'},                   # a control scheme's bindings built (game_26.c): twin_stick.c
    '08897814': {'before': 'rs_game_var_range(a0, a1, &a2, &a3)'},                # a game option registered with its range (game_06.c)
    '088977A0': {'before': 'rs_game_var_bool(a0, a1, a2, a3)'},                  # a bool game option registered (game_06.c): renderer_option.c
    '08A359F4': {'replace': 'rs_picker_category(a0, a1, a2, &r_)'},           # Personalisation: list item accepted (game_25.c)
    '0897843C': {'replace': 'rs_colour_lookup(a0, a1, 0, &r_)'},              # a faction's colour 1 (team) as 0xAARRGGBB (game_16.c)
    '0897848C': {'replace': 'rs_colour_lookup(a0, a1, 1, &r_)'},              # a faction's colour 2 (uniform)
    '08977FFC': {'replace': 'rs_head_lookup(a0, a1, a2, &r_)'},               # a body's head (game_16.c): parts_swap.c
    '08A35BB0': {'replace': 'rs_parts_list(a0, a1, &r_)'},                    # Personalisation carousel: list an item (game_25.c)
    '08A35D88': {'replace': 'rs_parts_anim(a0, a1, &r_)'},                    # Personalisation carousel: an item's 3D model
    '08A34280': {'after': 'rs_credits_init(a0)'},                           # Customize Load-out: credits reset (game_24.c): loadout_slots.c
    '08A35B00': {'replace': 'rs_parts_accept(a0, a1, &r_)'},                  # Personalisation carousel: item chosen
    '08956118': {'replace': 'rs_ai_pool_init()'},
    '088346E0': {'replace': 'rs_text_get(a0, a1, &r_)'},                       # text table string n (bot names past 48): game_patches.c                              # AI object pool (behaviours, goals): game_patches.c
}
# data symbols (symbols.h) redirected to native data: address -> expression
DATA = {
    '08ADC5E8': 'rs_loadout_table(0)',   # Customize Load-out item ids: Weapon 1 (loadout_slots.c)
    '08ADC610': 'rs_loadout_table(1)',   # Weapon 2
    '08ADC630': 'rs_loadout_table(2)',   # Explosive
    '08ADC648': 'rs_loadout_table(3)',   # Special Item
    '08ADC668': 'rs_loadout_table(4)',   # Power Up
}
DATA_DECL = 'u32 rs_loadout_table(int);'
MARK = '/* native hook (tools/dc/hooks.py) */'
INCLUDE = '#include "../../platform/common/game_hooks.h"   ' + MARK + '\n'
INIT = {'void': '', 'u32': ' = 0', 'u64': ' = 0', 'float': ' = 0', 'rv_t': ' = {0, 0, 0}'}

def wrapper(addr, ret, params, h):
    names = [] if params in ('', 'void') else [p.split()[-1] for p in params.split(',')]
    call = 'func_%s__orig(%s)' % (addr, ', '.join(names))
    w = '%s func_%s(%s)\n{\n' % (ret, addr, params)
    if h.get('replace') and ret != 'void': w += '    %s r_%s;\n' % (ret, INIT[ret])
    if h.get('before'): w += '    %s;   %s\n' % (h['before'], MARK)
    if h.get('replace'):
        w += '    if (%s) return%s;   %s\n' % (h['replace'], '' if ret == 'void' else ' r_', MARK)
    if h.get('after') or ret == 'void':
        if ret == 'void': w += '    %s;\n' % call
        else: w += '    %s v_ = %s;\n' % (ret, call)
        if h.get('after'): w += '    %s;   %s\n' % (h['after'], MARK)
        if ret != 'void': w += '    return v_;\n'
    else: w += '    return %s;\n' % call
    return w + '}\n'

def process(path):
    t = open(path).read(); n = 0
    for addr, h in HOOKS.items():
        wrapped = re.search(r'\nstatic (\w+) func_%s__orig\(([^)]*)\)\n\{\n' % addr, t)
        if wrapped:                                         # already wrapped: rewrite its wrapper
            ret, params = wrapped.group(1), wrapped.group(2).strip()
            m = re.search(r'\n%s func_%s\(%s\)\n\{\n' % (re.escape(ret), addr, re.escape(params)), t)
            s = m.start() + 1; e = t.index('\n}\n', m.end()) + 3
            new = wrapper(addr, ret, params, h)
            if t[s:e] != new: t = t[:s] + new + t[e:]; n += 1
            continue
        m = re.search(r'\n(?:/\* %s \*/\n)((\w+) func_%s)\(([^)]*)\)\n\{\n' % (addr, addr), t)
        if not m: continue
        ret, params = m.group(2), m.group(3).strip()
        if ret not in INIT: sys.exit('hooks.py: func_%s returns %s (not supported)' % (addr, ret))
        start = m.start(1); end = t.index('\n}\n', m.end()) + 3
        body = t[m.end(3) + 1:end]                          # ")\n{ ... }\n" minus the ")"
        t = t[:start] + 'static %s func_%s__orig(%s)' % (ret, addr, params) + body + '\n' + wrapper(addr, ret, params, h) + t[end:]
        n += 1
    if n:
        if INCLUDE not in t:
            i = t.index('#include "game.h"') + len('#include "game.h"\n'); t = t[:i] + INCLUDE + t[i:]
        open(path, 'w').write(t)
    return n

def redirect_data(d):
    p = os.path.join(d, 'symbols.h'); t = open(p).read(); n = 0
    for addr, expr in DATA.items():
        m = re.search(r'^#define D_%s .*$' % addr, t, re.M)
        if not m: sys.exit('hooks.py: no symbol D_%s' % addr)
        new = '#define D_%s ((u32)%s)   %s' % (addr, expr, MARK)
        if m.group(0) != new: t = t[:m.start()] + new + t[m.end():]; n += 1
    decl = DATA_DECL + '   ' + MARK + '\n'
    if decl not in t:
        i = t.index('#define D_'); t = t[:i] + decl + t[i:]; n += 1
    if n: open(p, 'w').write(t)
    return n

if __name__ == '__main__':
    d = sys.argv[1]; total = 0
    print('native data: %d symbols redirected' % redirect_data(d))
    for f in sorted(os.listdir(d)):
        if f.startswith('game_') and f.endswith('.c'): total += process(os.path.join(d, f))
    print('native hooks: %d wrappers written (of %d listed)' % (total, len(HOOKS)))
    src = ''.join(open(os.path.join(d, f)).read() for f in os.listdir(d) if f.startswith('game_') and f.endswith('.c'))
    missing = [a for a in HOOKS if 'func_%s__orig(' % a not in src]
    if missing: sys.exit('hooks.py: not wrapped: ' + ', '.join(missing))
