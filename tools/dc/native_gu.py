"""Post-pass of the decompiler (run by `make regen` after gen.py): routes the game's statically linked GU functions to the native GU
(platform/common/gu_native.c).  Every listed function keeps its decompiled body under RS_GE_REFERENCE (the original GE command-list
path, for comparison); without it the function calls its native implementation.  GU functions not listed (pure bookkeeping in the
game's memory, display setup through the SDK, the matrix-stack initialiser) stay as decompiled.
usage: native_gu.py <src/game dir>   (idempotent)"""
import re, sys, os

# address -> native call (argument names are the decompiled parameter names); 'NOP' = nothing to do natively
NATIVE = {
    '08A972CC': 'rgu_init_sync(a0, a1, a2, a3, t0, t1, t2, t3)',
    '08A973B0': 'rgu_start(a0, a1, a2)',
    '08A974A0': 'return rgu_finish_id(0)',
    '08A974BC': 'return rgu_finish_id(a0)',
    '08A975A4': 'rgu_signal(a0, a1)',
    '08A9765C': 'rgu_call_list(a0)',
    '08A976D4': 'rgu_send_list(a0, a1, a2, a3, t0)',
    '08A97780': 'rgu_update_stall()',
    '08A977CC': 'rgu_sync(a0, a1)',
    '08A9789C': 'return rgu_enable(a0)',
    '08A97960': 'return rgu_disable(a0)',
    '08A97A24': 'rgu_end_object()',
    '08A97AE8': 'return rgu_draw_array(a0, a1, a2, a3, t0)',
    '08A97BB8': 'rgu_draw_array_n(a0, a1, a2, a3, t0, t1)',
    '08A97CAC': 'rgu_draw_bezier(a0, a1, a2, a3, t0)',
    '08A97D84': 'rgu_draw_spline(a0, a1, a2, a3, t0, t1, t2)',
    '08A97E6C': 'rgu_sprite(a0, a1, a2, a3, t0, t1, t2)',
    '08A9806C': 'rgu_clear(a0)',
    '08A982C0': 'rgu_copy_image(a0, a1, a2, a3, t0, t1, t2, t3, sp_in)',
    '08A9844C': 'rgu_draw_buffer_list(a0, a1, a2)',
    '08A984A0': 'rgu_depth_buffer(a0, a1)',
    '08A98670': 'rgu_viewport(a0, a1, a2, a3)',
    '08A9871C': 'rgu_depth_range(a0, a1)',
    '08A9883C': 'rgu_offset(a0, a1)',
    '08A98878': 'rgu_front_face(a0)',
    '08A988A0': 'rgu_shade_model(a0)',
    '08A988C4': 'rgu_ambient(a0)',
    '08A988F8': 'rgu_color_material(a0)',
    '08A9891C': 'rgu_material(a0, a1)',
    '08A989B4': 'rgu_light(a0, a1, a2, a3)',
    '08A98AD8': 'rgu_light_att(a0, f12, f13, f14)',
    '08A98B3C': 'rgu_light_color(a0, a1, a2)',
    '08A98C6C': 'rgu_tex_level_mode(a0, f12)',
    '08A98CBC': 'rgu_tex_slope(f12)',
    '08A98CE4': 'rgu_tex_mode(a0, a1, a2, a3)',
    '08A98D28': 'rgu_tex_filter(a0, a1)',
    '08A98D54': 'rgu_tex_func(a0, a1)',
    '08A98D8C': 'rgu_tex_wrap(a0, a1)',
    '08A98DB8': 'rgu_tex_flush()',
    '08A98DD4': 'rgu_tex_image(a0, a1, a2, a3, t0)',
    '08A98E60': 'rgu_tex_scale(f12, f13)',
    '08A98E9C': 'rgu_tex_offset(f12, f13)',
    '08A98ED8': 'rgu_clut_mode(a0, a1, a2, a3)',
    '08A98F20': 'rgu_clut_load(a0, a1)',
    '08A98F6C': 'rgu_fog(a0, f12, f13)',
    '08A98FF8': 'rgu_scissor(a0, a1, a2, a3)',
    '08A99078': 'rgu_color_func(a0, a1, a2)',
    '08A990BC': 'rgu_alpha_func(a0, a1, a2)',
    '08A990F8': 'rgu_stencil_func(a0, a1, a2)',
    '08A99134': 'rgu_stencil_op(a0, a1, a2)',
    '08A99168': 'rgu_depth_func(a0)',
    '08A9918C': 'return rgu_depth_mask(a0)',
    '08A991B4': 'rgu_blend_func(a0, a1, a2, a3, t0)',
    '08A99208': 'rgu_pixel_mask(a0)',
    '08A99240': 'rgu_bone_matrix(a0, a1)',
    '08A992E0': 'rgu_set_matrix(a0, a1)',
    '08A99428': 'NOP',          # GU debug-text printer (unused by the game)
    '08A99598': 'NOP',
    '08A99644': 'NOP',
    '08A99A3C': 'NOP',
    '08A9971C': 'rgu_apply_draw_buffer()',
}
MARK = '/* native GU (tools/dc/native_gu.py) */'
INCLUDE = '#ifndef RS_GE_REFERENCE\n#include "../../platform/common/gu_native.h"   ' + MARK + '\n#endif\n'

def process(path):
    t = open(path).read()
    if MARK in t: return 0
    n = 0
    for addr, call in NATIVE.items():
        m = re.search(r'\n((?:/\* %s \*/\n)?)([\w ]+ func_%s\([^)]*\))\n\{\n' % (addr, addr), t)
        if not m: continue
        start = m.end() - 2                                # the body's opening brace
        end = t.index('\n}\n', start) + 3                  # its closing brace at column 0
        body = t[start:end]
        ret = m.group(2).split()[0]
        if call == 'NOP': nat = '{\n    return;   %s\n}\n' % MARK if ret == 'void' else '{\n    return 0;   %s\n}\n' % MARK
        else:
            stmt = call if call.startswith('return') or ret == 'void' else 'return ' + call
            nat = '{\n    %s;   %s\n}\n' % (stmt, MARK)
        t = t[:start] + '#ifndef RS_GE_REFERENCE\n' + nat + '#else\n' + body + '#endif\n' + t[end:]
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
    print('native GU: %d functions routed (of %d listed)' % (total, len(NATIVE)))
    if total and total != len(NATIVE): sys.exit('native_gu.py: some listed functions were not found')
