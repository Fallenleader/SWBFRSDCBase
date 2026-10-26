#!/usr/bin/env python
"""Renegade Squadron (PSP, Asura engine) asset extractor.  Python 2.7 (Maya 2020) and 3.x.
usage: extract.py <file.PSP|.ASR|.GUI|...> [more files] -o <out dir>
Writes per input file: textures/*.png (+ textures.json: name -> runtime replacement key), models/*.obj|.mtl|.skeleton.json|.fbx (skeleton + skin),
env/Env.obj|.mtl (level geometry, one group per material), sounds/*.wav, manifest.json."""
from __future__ import print_function
import os, sys, json, struct
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from chunks import chunks
from rscf import rscf
import texture, model, skeleton, env, lists, vag, pngw, fnv, fbx

def safe(name): return name.replace('\\', '/').lstrip('/').replace(':', '_')
def mkdirs(p):
    if p and not os.path.isdir(p): os.makedirs(p)

def write_tex(out, name, blob):
    t = texture.parse(blob); w, h, px = texture.to_rgba(t)
    rel = 'textures/' + os.path.splitext(safe(name))[0] + '.png'; path = os.path.join(out, rel); mkdirs(os.path.dirname(path))
    pngw.write(path, w, h, bytearray(px))
    lw, lh, sz = texture.level_sizes(t['width'], t['height'], t['bpp'], t['mips'])[0]
    return rel, {'key': fnv.texkey(blob[8:8 + sz]), 'width': w, 'height': h, 'bpp': t['bpp'], 'mips': t['mips']}

def write_rigid(out, name, m, sk, tex_rel):
    W = skeleton.world(sk) if sk else None
    base = safe(name).replace('#', '_'); obj = os.path.join(out, 'models', base + '.obj'); mkdirs(os.path.dirname(obj))
    with open(os.path.join(out, 'models', base + '.mtl'), 'w') as f:
        f.write('newmtl %s_mat\n' % base); f.write('Kd 1 1 1\n')
        if tex_rel: f.write('map_Kd ../%s\n' % tex_rel)
    with open(obj, 'w') as f:
        f.write('# %s (Asura rigid model, %d parts)\nmtllib %s.mtl\n' % (name, len(m['parts']), base))
        vi = 1
        for i, pt in enumerate(m['parts']):
            if not pt['tris']: continue
            q, tt = W[i] if W and i < len(W) else ((0, 0, 0, 1), (0, 0, 0))
            bone = sk['bone_names'][i] if sk and i < len(sk.get('bone_names', [])) else 'part%02d' % i
            tris = model.strip_tris(m['indices'], pt['i0'], pt['tris']); used = sorted(set(x for tr in tris for x in tr)); mp = {}
            f.write('g %s\nusemtl %s_mat\n' % (bone.replace(' ', '_'), base))
            for x in used:
                u, v, nx, ny, nz, px, py, pz = m['verts'][pt['v0'] + x]
                p = skeleton.qrot(q, (px, py, pz)); n = skeleton.qrot(q, (nx, ny, nz))
                f.write('v %.6f %.6f %.6f\nvt %.6f %.6f\nvn %.6f %.6f %.6f\n' % (p[0] + tt[0], -(p[1] + tt[1]), p[2] + tt[2], u, 1 - v, n[0], -n[1], n[2]))
                mp[x] = vi; vi += 1
            for a, b, c in tris: f.write('f %d/%d/%d %d/%d/%d %d/%d/%d\n' % ((mp[a],) * 3 + (mp[c],) * 3 + (mp[b],) * 3))
    return 'models/' + base + '.obj'

def write_env(out, e, texnames, mats):
    mkdirs(os.path.join(out, 'env'))
    with open(os.path.join(out, 'env', 'Env.mtl'), 'w') as f:
        for i in range(e['materials']):
            f.write('newmtl mat%03d\nKd 1 1 1\n' % i)
            if i < len(mats) and 0 <= mats[i]['tex'][0] < len(texnames):
                f.write('map_Kd ../textures/%s.png\n' % os.path.splitext(safe('graphics' + texnames[mats[i]['tex'][0]]))[0])
    with open(os.path.join(out, 'env', 'Env.obj'), 'w') as f:
        f.write('# Asura level geometry: %d strips, %d vertices (layer strips = blended second texture)\nmtllib Env.mtl\n' % (len(e['strips']), len(e['verts'])))
        for v in e['verts']:
            f.write('v %.4f %.4f %.4f\nvt %.6f %.6f\nvn %.4f %.4f %.4f\n' % (v[6], -v[7], v[8], v[0], 1 - v[1], v[3], -v[4], v[5]))
        cur = None
        for k, st in enumerate(e['strips']):
            g = 'mat%03d%s' % (st['mat'], '_layer' if st['layer'] else '')
            if g != cur: f.write('g %s\nusemtl mat%03d\n' % (g, st['mat'])); cur = g
            for a, b, c in env.strip_tris(st['v0'], st['n']):
                a += 1; b += 1; c += 1; f.write('f %d/%d/%d %d/%d/%d %d/%d/%d\n' % (a, a, a, c, c, c, b, b, b))
    return 'env/Env.obj'

def extract(path, out):
    d = open(path, 'rb').read(); mkdirs(out)
    man = {'source': os.path.basename(path), 'textures': {}, 'models': [], 'sounds': [], 'env': None}
    last_text = []; env_text = None; env_mtrl = None; skel = None; skels = {}
    for p, t, s, v, fl in chunks(d):
        body = d[p + 16:p + s]
        if t == 'TEXT':
            last_text = lists.text(body)
            if len(last_text) > 8 and any('environments' in x for x in last_text): env_text = last_text
        elif t == 'MTRL':
            m = lists.mtrl(body)
            if env_text is not None and len(m) > 8 and env_mtrl is None: env_mtrl = m
        elif t == 'HSKN' and v == 8:
            try:
                sk = skeleton.parse(body); skel = sk; skels[sk['name']] = sk
            except Exception: pass
        elif t == 'RSCF':
            typ, unk, dsz, name, q = rscf(d, p, s, v); blob = d[q:q + dsz]
            try:
                if typ == 2:
                    rel, info = write_tex(out, name, blob); info['png'] = rel; man['textures'][name] = info
                elif typ == 3 and blob[:4] == b'VAGp':
                    rate, smp = vag.decode(blob); rel = 'sounds/' + os.path.splitext(safe(name))[0] + '.wav'
                    pth = os.path.join(out, rel); mkdirs(os.path.dirname(pth)); open(pth, 'wb').write(vag.wav_bytes(rate, smp)); man['sounds'].append(rel)
                elif typ == 0 and v == 1 and unk == 5:
                    m = model.parse(blob); base = name.split('#')[-1]; sk = skels.get(base)
                    tex_rel = None
                    if last_text: tex_rel = 'textures/' + os.path.splitext(safe('graphics' + last_text[0]))[0] + '.png'
                    rel = write_rigid(out, name, m, sk, tex_rel); man['models'].append({'name': name, 'obj': rel, 'parts': len(m['parts']), 'skeleton': base if sk else None})
                    fb = os.path.join(out, 'models', safe(name).replace('#', '_') + '.fbx')     # FBX with the skeleton and the skin (weights)
                    fbx.write(fb, os.path.basename(safe(name).replace('#', '_')), m, sk, ('../' + tex_rel) if tex_rel else None)
                    if sk and not os.path.exists(os.path.join(out, 'models', safe(base) + '.skeleton.json')):
                        json.dump({'name': base, 'bones': sk['bones']}, open(os.path.join(out, 'models', safe(base) + '.skeleton.json'), 'w'), indent=1)
                elif typ == 0 and v == 1 and name == 'Env':
                    man['env'] = write_env(out, env.parse(blob), env_text or [], env_mtrl or [])
            except Exception as ex:
                print('  skipped %s (%s)' % (name, ex))
    json.dump(man, open(os.path.join(out, 'manifest.json'), 'w'), indent=1, sort_keys=True)
    return man

if __name__ == '__main__':
    args = sys.argv[1:]; out = 'extracted'
    if '-o' in args: i = args.index('-o'); out = args[i + 1]; del args[i:i + 2]
    for f in args:
        o = os.path.join(out, os.path.splitext(os.path.basename(f))[0]); print(f, '->', o)
        m = extract(f, o); print('  %d textures, %d models, %d sounds, env: %s' % (len(m['textures']), len(m['models']), len(m['sounds']), m['env']))
