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
    '088FDCC0': {'after': 'rs_input_after_pad(), rs_picker_pad(), rs_savemgr_pad(), rs_parts_frame(), rs_loadout_frame(), rs_patches_frame(), rs_gs_frame()'},          # pad read (game_11.c): twin_stick.c, colour_picker.c, save_manager.c
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
    '08A0AD64': {'replace': 'rs_unit_list_add(a0, &r_)'},                       # a soldier added to that list (game_23.c)
    '08A0ADFC': {'replace': 'rs_unit_list_remove(a0, &r_)'},
    '08834304': {'replace': 'rs_stdtext_get(a0, &r_)'},
    '089D7D08': {'replace': 'rs_vehicle_hit(a0, a1)'},                         # vehicle against soldier contact: friendly pass, enemy run over (game_20.c)                       # STDTEXT line n: Weapons_Mod.txt names past the file's own (game_02.c)                    # and removed
    '089A8A98': {'before': 'rs_ai_ctl_pre(a0, a1)'},                     # soldier controls applied (game_18.c): AI bridge
    '089E1FDC': {'before': 'rs_ai_dmg_pre(a0, a1)', 'after': 'rs_ai_dmg_post(a0, a1)'},   # damage taken (game_21.c): AI bridge events
    '088BBDEC': {'replace': 'rs_phys_pair(a0, &r_)'},                          # physics pair test: vehicles pass through friendly soldiers (game_08.c)
    '0899530C': {'before': 'rs_soldier_frame(a0)'},                           # the soldier update (game_17.c): look centring off
    '08926220': {'after': 'rs_ai_squad_caps(a0)'},                              # AI: a team's squad sizes (game_12.c): game_patches.c
    '08926478': {'replace': 'rs_ai_assign(a0, a1, a2)'},              # AI: a squad sent to a command post
    '088346E0': {'replace': 'rs_text_get(a0, a1, &r_)'},                       # text table string n (bot names past 48): game_patches.c                              # AI object pool (behaviours, goals): game_patches.c
    '088B73C4': {'before': 'rs_col_query(a1)'},
    '08834E84': {'before': 'rs_col_ray(a0)'},                                  # a ray against the level: census of its masks (RS_COL_LOG)                               # a collision query against the level (PHEN): census of masks (RS_COL_LOG)
    '089771D8': {'replace': 'rs_map_has_era(a0, a1, &r_)'},                    # custom maps (custom_maps.c): the map table's readers (game_16.c)
    '08977218': {'replace': 'rs_map_mode(a0, a1, &r_)'},
    '089772B4': {'replace': 'rs_map_space(a0, &r_)'},
    '08977308': {'replace': 'rs_map_prequel(a0, &r_)'},
    '08977338': {'replace': 'rs_map_classic(a0, &r_)'},
    '08977368': {'replace': 'rs_map_text(a0, &r_)'},
    '08977398': {'replace': 'rs_map_text_by_name(a0, &r_)'},
    '089773E0': {'replace': 'rs_map_index(a0, &r_)'},
    '089775E0': {'before': 'rs_map_played(&a1)'},                              # the profile's times-played count (22 slots)
    '08A31C38': {'replace': 'rs_fe_list_all_maps(a0, a1, a2, &r_)'},          # FE_ListAllMaps (game_24.c)
    '08A31918': {'replace': 'rs_fe_select_planet(a0, a1, a2, &r_)'},          # FE_SelectMapPlanet
    '0889FE7C': {'after': 'rs_gs_register()'},                                 # the GameSpy menu commands registered (game_06.c): gamespy_ui.c
    '08897890': {'before': 'rs_gs_string_var(a0, a1)'},                         # a string variable registered (Menus.GameSpyNick ...)
    '088A0408': {'before': 'rs_gs_login(&a0, &a1, &a2)'},                       # GameSpy login (nickname, e-mail, password)
    '088A0560': {'before': 'rs_gs_login(&a0, &a1, &a2)'},                       # GameSpy new account
    '08A2EFF0': {'after': 'rs_gs_loaded()'},                                    # FE_LoadGamespyLoginInfo (game_24.c)
    '089702D0': {'before': 'rs_cen_in(0)', 'after': 'rs_cen_out(0)'},   # census: a part of the world update timed (RS_UPDATE_CENSUS, lift.c)
    '08877504': {'before': 'rs_cen_in(1)', 'after': 'rs_cen_out(1)'},   # census: a part of the world update timed (RS_UPDATE_CENSUS, lift.c)
    '08901774': {'before': 'rs_cen_in(2)', 'after': 'rs_cen_out(2)'},   # census: a part of the world update timed (RS_UPDATE_CENSUS, lift.c)
    '088D189C': {'before': 'rs_cen_in(3)', 'after': 'rs_cen_out(3)'},   # census: a part of the world update timed (RS_UPDATE_CENSUS, lift.c)
    '089FA30C': {'before': 'rs_cen_in(4)', 'after': 'rs_cen_out(4)'},   # census: a part of the world update timed (RS_UPDATE_CENSUS, lift.c)
    '088AFEF0': {'before': 'rs_cen_in(5)', 'after': 'rs_cen_out(5)'},   # census: a part of the world update timed (RS_UPDATE_CENSUS, lift.c)
    '088B84B0': {'before': 'rs_cen_in(6)', 'after': 'rs_cen_out(6)'},   # census: a part of the world update timed (RS_UPDATE_CENSUS, lift.c)
    '08A03E78': {'before': 'rs_cen_in(7)', 'after': 'rs_cen_out(7)'},   # census: a part of the world update timed (RS_UPDATE_CENSUS, lift.c)
    '089DAC88': {'before': 'rs_cen_in(8)', 'after': 'rs_cen_out(8)'},   # census: a part of the world update timed (RS_UPDATE_CENSUS, lift.c)
    '08AC6F88': {'before': 'rs_cen_in(9)', 'after': 'rs_cen_out(9)'},   # census: a part of the world update timed (RS_UPDATE_CENSUS, lift.c)
    '0880688C': {'before': 'rs_cen_in(10)', 'after': 'rs_cen_out(10)'},   # census: a part of the world update timed (RS_UPDATE_CENSUS, lift.c)
    '089221E0': {'replace': 'rs_census_node(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19, &r_)'},   # an object's behaviour tree updated, children first (game_12.c): RS_UPDATE_CENSUS times each node type (lift.c)
    '08923E30': {'replace': 'rs_update_census(a1, a2, a3, t0, t1, t2, t3, f13, f14, f15, f16, f17, f18, f19, &r_)'},   # the world's per-object update (game_12.c): RS_UPDATE_CENSUS times each object type (lift.c)
    '08833F0C': {'replace': 'rs_lift_raybox(a0, a1, a2, a3, &r_)'},           # lifted (lift.c): ray / box test (game_02.c)
    '08833440': {'replace': 'rs_lift_boxtree(a0, a1, a2, a3, t0, &r_)'},      # lifted: ray cast through a box tree
}
# data symbols (symbols.h) redirected to native data: address -> expression
DATA = {
    '08ADC5E8': 'rs_loadout_table(0)',   # Customize Load-out item ids: Weapon 1 (loadout_slots.c)
    '08ADC610': 'rs_loadout_table(1)',   # Weapon 2
    '08ADC630': 'rs_loadout_table(2)',   # Explosive
    '08ADC648': 'rs_loadout_table(3)',   # Special Item
    '08ADC668': 'rs_loadout_table(4)',   # Power Up
    '08C2C4EC': 'rs_unit_list()',       # the game's list of up to 32 soldiers (now RS_UNIT_LIST_MAX): game_patches.c
}
DATA_DECL = 'u32 rs_loadout_table(int); u32 rs_unit_list(void);'
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

# Fixes in the game's own code: (old, new) text in the generated C, applied once.
FIXES = [
    # 08929C9C (CTF: a flag secured): the result of 089268D0 is stored through before it is tested (the MIPS delay slot), and with
    # more players than the game's own 16 it can be 0 once the 4th flag is secured: a write to address 0xF4 that crashed the Vita
    ("""    ST32(s1+80, v0);
    cnd_ = v0 == 0;
    ST32(v0+244, s4);
    if (cnd_) { goto L_08929D6C; }""",
     """    ST32(s1+80, v0);
    cnd_ = v0 == 0;
    if (!cnd_) ST32(v0+244, s4);   /* RS fix: tested first (tools/dc/hooks.py FIXES) */
    if (cnd_) { goto L_08929D6C; }"""),
]

# ... and the same pattern anywhere: a store through a pointer in the delay slot of its own null test.  On the PSP a null there would
# have crashed as well, so the game never relies on it; with the larger player counts it does happen (above), so the store waits for the test
NULL_STORE = re.compile(r'(cnd_ = (\w+) == 0;\n    )(ST(?:32|16|8)\(\2\+\d+, \w+\);)(\n    if \(cnd_\))')

def process(path):
    t = open(path).read(); n = 0
    for old, new in FIXES:
        if old in t: t = t.replace(old, new); n += 1
    t, k = NULL_STORE.subn(lambda m: m.group(1) + 'if (!cnd_) ' + m.group(3) + '   /* RS fix: tested first (tools/dc/hooks.py NULL_STORE) */' + m.group(4), t); n += k
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
