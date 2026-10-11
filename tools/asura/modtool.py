#!/usr/bin/env python
"""Renegade Squadron mod packer.  Python 2.7 (Maya 2020) and 3.x, no extra modules.

  modtool.py build  <extracted dir> <edited dir> <mod out dir>
        For every texture listed in <extracted dir>/manifest.json, looks for a file with the SAME relative path in <edited dir>
        (e.g. edited/textures/graphics/vehicles/at_at.png).  Found -> copied to <mod out>/textures/<key>.png.
        PBR maps next to it are picked up too:  at_at_mr.png (R = ambient occlusion, G = roughness, B = metalness; glTF/ORM layout)
                                                at_at_n.png  (tangent-space normal map, OpenGL / +Y convention)
        Edited PNGs may be any resolution (keep the aspect ratio); the runtime scales UVs itself.
  modtool.py normal <height or colour png> <out _n.png> [strength]
        Height map (luminance) -> tangent-space normal map.  Default strength 2.0.
  modtool.py mr <out _mr.png> <width> <height> <roughness 0..1> <metalness 0..1>
        Flat metal-roughness map (handy starting point).
  modtool.py pack-mr <out _mr.png> <roughness png> [metalness png] [ao png]
        Packs separate greyscale maps into one _mr map (missing metalness = 0, missing AO = white).  Sizes must match.
  modtool.py sounds <level .PSP>
        Lists the sound effects (VAG) inside a level file.
  modtool.py sound <level .PSP> <sound name> <new.wav> <mod dir>
        Replaces one sound effect (16-bit PCM WAV, mono or stereo; the game plays it at the WAV's sample rate) and writes the level into
        <mod dir>/files/<same path as on the disc>.  Run it again with the files/ copy to replace more sounds in the same level.
  modtool.py info <mod dir>
        Lists what a mod replaces.

Install: copy <mod out> to  ux0:data/RS/mods/<mod name>/  (Vita)  or  <game folder>/mods/<mod name>/  (PC).
Mods load alphabetically; a later mod wins when two replace the same texture.  RS_MODS=0 in settings.txt disables all mods."""
from __future__ import print_function
import os, sys, json, shutil
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import pngw, pack

def mkdirs(p):
    if p and not os.path.isdir(p): os.makedirs(p)

def build(ext_dir, edit_dir, out_dir):
    man = json.load(open(os.path.join(ext_dir, 'manifest.json')))
    tdir = os.path.join(out_dir, 'textures'); mkdirs(tdir); n = 0; names = {}
    for name, t in sorted(man.get('textures', {}).items()):
        rel = t['png']; base = os.path.splitext(rel)[0]
        for suffix, tag in (('', ''), ('_mr', '_mr'), ('_n', '_n')):
            src = os.path.join(edit_dir, base + suffix + '.png')
            if not os.path.isfile(src): continue
            if suffix == '':
                orig = os.path.join(ext_dir, rel)
                if os.path.isfile(orig) and open(orig, 'rb').read() == open(src, 'rb').read(): continue   # unchanged copy
            shutil.copyfile(src, os.path.join(tdir, t['key'] + tag + '.png')); names[t['key'] + tag] = name; n += 1
    # a PBR map without an edited colour texture still needs the colour file: use the original
    for k in list(names):
        if k.endswith('_mr') or k.endswith('_n'):
            key = k.split('_')[0]
            if key not in names:
                for name, t in man['textures'].items():
                    if t['key'] == key: shutil.copyfile(os.path.join(ext_dir, t['png']), os.path.join(tdir, key + '.png')); names[key] = name; n += 1
    with open(os.path.join(out_dir, 'mod.json'), 'w') as f: json.dump({'textures': names}, f, indent=1, sort_keys=True)
    print('%d file(s) -> %s' % (n, tdir))

def normal(src, dst, strength=2.0):
    w, h, px = pngw.read(src); hgt = [(px[i * 4] * 0.299 + px[i * 4 + 1] * 0.587 + px[i * 4 + 2] * 0.114) / 255.0 for i in range(w * h)]
    out = bytearray(w * h * 4)
    for y in range(h):
        for x in range(w):
            def H(xx, yy): return hgt[(yy % h) * w + (xx % w)]
            dx = (H(x + 1, y) - H(x - 1, y)) * strength; dy = (H(x, y + 1) - H(x, y - 1)) * strength
            nx, ny, nz = -dx, dy, 1.0; l = (nx * nx + ny * ny + nz * nz) ** 0.5
            o = (y * w + x) * 4; out[o] = int((nx / l * 0.5 + 0.5) * 255); out[o + 1] = int((ny / l * 0.5 + 0.5) * 255); out[o + 2] = int((nz / l * 0.5 + 0.5) * 255); out[o + 3] = 255
    pngw.write(dst, w, h, out); print('normal map %dx%d -> %s' % (w, h, dst))

def mr(dst, w, h, rough, metal):
    px = bytearray([255, int(rough * 255), int(metal * 255), 255]) * (w * h); pngw.write(dst, w, h, px); print('metal-roughness %dx%d -> %s' % (w, h, dst))

def pack_mr(dst, rough, metal=None, ao=None):
    w, h, r = pngw.read(rough); m = pngw.read(metal)[2] if metal else None; a = pngw.read(ao)[2] if ao else None
    out = bytearray(w * h * 4)
    for i in range(w * h):
        out[i * 4] = a[i * 4] if a else 255; out[i * 4 + 1] = r[i * 4]; out[i * 4 + 2] = m[i * 4] if m else 0; out[i * 4 + 3] = 255
    pngw.write(dst, w, h, out); print('packed %dx%d -> %s' % (w, h, dst))

def _disc_rel(path):
    p = os.path.abspath(path).replace('\\', '/'); i = p.upper().find('/PSP_GAME/')
    return p[i + 1:] if i >= 0 else os.path.basename(p)
def sounds(level):
    d = open(level, 'rb').read()
    for name, lst in sorted(pack.resources(d).items()):
        p, s, v, typ, unk, q, dsz = lst[0]
        if typ == 3 and d[q:q + 4] == b'VAGp':
            import struct; size, rate = struct.unpack_from('>II', d, q + 12); print('%-60s %6d Hz %6.2f s' % (name, rate, size / 16.0 * 28 / rate))
def sound(level, name, wav, mod):
    rel = _disc_rel(level); dst = os.path.join(mod, 'files', rel)
    src = level if os.path.abspath(level) == os.path.abspath(dst) or not os.path.isfile(dst) else dst
    d = open(src, 'rb').read(); res = pack.resources(d)
    if name not in res:
        cands = [n for n in res if n.lower().endswith(name.lower())]
        if len(cands) != 1: print('no (unique) sound named %s; see: modtool.py sounds %s' % (name, level)); return
        name = cands[0]
    rate, smp = pack.read_wav(wav); vag = pack.encode_vag(smp, rate, os.path.splitext(os.path.basename(wav))[0])
    out = pack.replace(d, {name: vag}); mkdirs(os.path.dirname(dst)); open(dst, 'wb').write(out)
    print('%s: %d samples at %d Hz -> %s' % (name, len(smp), rate, dst))

def info(mod):
    tdir = os.path.join(mod, 'textures'); names = {}
    if os.path.isfile(os.path.join(mod, 'mod.json')): names = json.load(open(os.path.join(mod, 'mod.json'))).get('textures', {})
    for f in sorted(os.listdir(tdir)): print('%-20s %s' % (f, names.get(os.path.splitext(f)[0], '')))

if __name__ == '__main__':
    a = sys.argv[1:]
    if len(a) >= 4 and a[0] == 'build': build(a[1], a[2], a[3])
    elif len(a) >= 3 and a[0] == 'normal': normal(a[1], a[2], float(a[3]) if len(a) > 3 else 2.0)
    elif len(a) == 6 and a[0] == 'mr': mr(a[1], int(a[2]), int(a[3]), float(a[4]), float(a[5]))
    elif len(a) == 2 and a[0] == 'info': info(a[1])
    elif len(a) >= 3 and a[0] == 'pack-mr': pack_mr(a[1], a[2], a[3] if len(a) > 3 else None, a[4] if len(a) > 4 else None)
    elif len(a) == 2 and a[0] == 'sounds': sounds(a[1])
    elif len(a) == 5 and a[0] == 'sound': sound(a[1], a[2], a[3], a[4])
    else: print(__doc__)
