#!/usr/bin/env python3
"""Build-time data generator: EBOOT -> data.c (the game's initialised data segment with native pointers).

Usage: mkdata.py <ULUS10292 decrypted EBOOT.BIN> <out data.c>

The image keeps the original layout (offset = guest address - 0x08804000) so data symbols D_xxxxxxxx keep their distances.
Code bytes are not included (the game does not read its own code).  Relocated words become:
  pointer to data      -> address inside rs_image_w
  pointer to function  -> the C function's address
  jump-table cell / other code label -> the original value (switch statements compare against it)
"""
import sys, os
HERE = os.path.dirname(os.path.abspath(__file__)); sys.path.insert(0, HERE); sys.path.insert(0, os.path.join(HERE, '..'))
from prog import Prog, BASE
import json


def main(eboot, out):
    p = Prog(eboot); p.find_functions()
    names = {}
    nf = os.path.join(HERE, 'names.json')
    if os.path.exists(nf): names = {int(k, 16): v for k, v in json.load(open(nf)).items()}
    fname = lambda a: names.get(a, 'func_%08X' % a)
    ents = set(p.entries)
    size = p.m.size; nw = (size + 3) // 4
    data_lo = p.stub_hi    # everything after the import stubs: module info, rodata, data, eh_frame, ctors, dtors (bss is zero)
    words = []
    used_funcs = set()
    for a in range(data_lo, BASE + size, 4):
        o = a - BASE
        if o + 4 > len(p.m.mem): break
        v = p.m.r32(o)
        if a in p.ptr_at:
            t = p.ptr_at[a]
            if t in ents: words.append((o // 4, '(u32)(uintptr_t)%s' % fname(t))); used_funcs.add(t); continue
            if p.code_lo <= t < p.stub_hi + 0x1000 and t < p.stub_hi: words.append((o // 4, '0x%08Xu' % t)); continue
            if BASE <= t < BASE + size: words.append((o // 4, 'IMG(0x%X)' % (t - BASE))); continue
        if v: words.append((o // 4, '0x%08Xu' % v))
    with open(out, 'w') as f:
        f.write('/* Generated from the game EBOOT by tools/dc/mkdata.py - do not edit, do not commit. */\n#include "game.h"\n')
        f.write('#define IMG(o) ((u32)(uintptr_t)((u8 *)rs_image_w + (o)))\n')
        f.write('u32 rs_image_w[%d] __attribute__((aligned(64))) = {\n' % nw)
        for i, e in words: f.write('[%d]=%s,\n' % (i, e))
        f.write('};\n')
        f.write('const u32 rs_image_size = sizeof rs_image_w;   /* GPU-visible region (see platform/common/psp_impl.h) */\n')
    print('image words', nw, 'initialised', len(words), 'function pointers', len(used_funcs))


if __name__ == '__main__':
    main(sys.argv[1], sys.argv[2])
