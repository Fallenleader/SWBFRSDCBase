#!/usr/bin/env python3
"""Elite Squadron (PSP, a later Asura engine) maps -> Renegade Squadron.

An Elite Squadron map is a folder of level files, ENVS/<ERA>/<MAP>/<MAP><part>.PSP:
  CM  the common part (characters, vehicles, effects)     GR  the ground battle (the planet's level: geometry, collision, AI graph)
  SP  the space battle    IN  interiors (capital ships)    HV  heroes vs villains    SE  (campaign) other set pieces
Their level geometry, textures and collision are the same formats as Renegade Squadron's (tools/asura/maptool.py reads them as
they are); entities (ENTI v0), level objects (EMOD v7) and the AI graph (NAV1 v16) differ.

  es2rs.py fbx   <ES map folder> [--part GR] -o OUT              the part's level as an FBX for Maya (+ PNGs, + its chunks as Lua scripts)
  es2rs.py rsmap <ES map folder> [--part GR] --game RSGAME --base HOTH [--era CLASSIC] -o OUTDIR [--install DATA --id ID --name N]
                  a Renegade Squadron era folder built on a base RS map, as bf2rs.py rsmap does: the geometry, textures and collision
                  replaced by the Elite Squadron part's, the base map's gameplay entities moved onto the new ground, the AI graph re-baked.

The part is unpacked with maptool.py first (OUT/_es/<part>/): every chunk as a readable Lua script (scripts/<TAG>/...), which
maptool.py pack turns back into the binary chunk."""
import os, sys, re, shutil, argparse
HERE = os.path.dirname(os.path.abspath(__file__)); sys.path.insert(0, HERE)
import bf2rs

def find_part(folder, part):
    for f in os.listdir(folder):
        if f.upper().endswith(part.upper() + '.PSP'): return os.path.join(folder, f)
    raise SystemExit('no *%s.PSP in %s (parts: %s)' % (part, folder, ', '.join(sorted(f for f in os.listdir(folder) if f.upper().endswith('.PSP')))))

def scene_from_env(fbx, texroot):
    """the unpacked part's env/Env.fbx -> bf2rs scene (drawn meshes with their textures, collision meshes)"""
    bf2rs._asura(); import fbxread
    sc = fbxread.load(fbx); unit = sc['unit']; up = sc['up']
    render, collision = [], []
    for me in sc['meshes']:
        nm = (me['model'] or me['name']).split(':')[-1]
        M = me['matrix']
        def P(p):
            q = fbxread.transform(M, p); x, y, z = q[0] * unit, q[1] * unit, q[2] * unit
            return (x, z, -y) if up == 2 else (x, y, z)
        pos = [P(p) for p in me['pos']]
        if nm.lower().startswith('col_'):
            tris = []
            for poly in me['polys']:
                for j in range(1, len(poly) - 1): tris.append((poly[0], poly[j], poly[j + 1], 0))
            # keep the collision type words (static / kinematic / hull ...), renumber the object to stay apart from others
            words = [w for w in nm[4:].split('_') if w in ('static', 'kinematic', 'hull', 'noai', 'twosided') or re.fullmatch(r'f[0-9a-fA-F]{4}', w)]
            collision.append({'name': 'col_%s_c%d_es' % ('_'.join(words) or 'static', len(collision) + 1), 'pos': pos, 'tris': tris})
            continue
        if nm.lower().startswith('nav_'): continue
        mats = []
        for mn in me['materials']:
            tex = (me.get('textures') or {}).get(mn)
            png = os.path.normpath(os.path.join(os.path.dirname(fbx), tex)) if tex else None
            base = os.path.splitext(os.path.basename(png))[0] if png else re.sub(r'^m\d+_', '', mn)
            mats.append(('es_' + re.sub(r'\W', '_', base), png if png and os.path.exists(png) else None))
        if not mats: mats = [('es_none', None)]
        vpos, vnrm, vuv, vcol, tris = [], [], [], [], []
        k = 0
        for pi, poly in enumerate(me['polys']):
            idx = []
            for j, v in enumerate(poly):
                vpos.append(pos[v])
                n = me['normals'][k + j] if me['normals'] else (0, 1, 0)
                q = fbxread.transform(M, n, 0.0); vnrm.append((q[0], q[2], -q[1]) if up == 2 else tuple(q))
                vuv.append(tuple(me['uvs'][k + j]) if me['uvs'] and me['uvs'][k + j] else (0.0, 0.0))
                c = me['colors'][k + j] if me['colors'] and me['colors'][k + j] else (1, 1, 1, 1)
                vcol.append(tuple(c) + (1.0,) * (4 - len(c)))
                idx.append(len(vpos) - 1)
            k += len(poly)
            mi = me['mat'][pi] if me['mat'] and me['mat'][pi] < len(mats) else 0
            for j in range(1, len(idx) - 1): tris.append((idx[0], idx[j], idx[j + 1], mi))
        layer = '__blend' in nm
        render.append({'name': 'es_' + re.sub(r'^o\d+_', '', nm) + ('__blend' if layer and not nm.endswith('__blend') else ''), 'pos': vpos, 'nrm': vnrm,
                       'uv': vuv, 'col': vcol, 'tris': tris, 'materials': mats})
    return {'render': render, 'collision': collision, 'report': {'commandposts': [], 'regions': [], 'paths': []}, 'objects': []}

def main(argv):
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('cmd', choices=('fbx', 'rsmap')); ap.add_argument('folder'); ap.add_argument('--part', default='GR')
    ap.add_argument('-o', '--out', default='es_out'); ap.add_argument('--game'); ap.add_argument('--base', default='HOTH'); ap.add_argument('--era', default='CLASSIC')
    ap.add_argument('--install'); ap.add_argument('--id'); ap.add_argument('--name')
    a = ap.parse_args(argv)
    bf2rs._asura(); import maptool
    src = find_part(a.folder, a.part); work = os.path.join(a.out, '_es', a.part.upper())
    if not os.path.isdir(work): print('unpacking %s -> %s' % (src, work)); maptool.unpack(src, work, log=lambda *x: None)
    fbx = os.path.join(work, 'env', 'Env.fbx')
    scene = scene_from_env(fbx, os.path.join(work, 'textures'))
    print('%d drawn meshes (%d triangles), %d collision meshes' % (len(scene['render']), sum(len(m['tris']) for m in scene['render']), len(scene['collision'])))
    if a.cmd == 'fbx':
        print('the part, unpacked (Lua scripts, PNG textures, FBX): %s' % work); return
    if not a.game: raise SystemExit('rsmap needs --game (the folder that holds PSP_GAME)')
    folder = bf2rs.rsmap(scene, a.game, a.base.upper(), a.era.upper(), a.out)
    if a.install:
        if not a.id: raise SystemExit('--install needs --id')
        maptool.install(a.out, a.id.upper(), a.name or a.id, a.install, basemap=a.base.upper(), log=print)
    print('era folder:', folder)

if __name__ == '__main__':
    main(sys.argv[1:])
