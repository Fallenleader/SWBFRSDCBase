#!/usr/bin/env python3
"""Battlefront (2004) / Battlefront II (2005) maps -> Renegade Squadron.

  bf2rs.py fbx    <world .wld> [--assets DIR ...] -o OUT            the world as one FBX for Maya (terrain, props, col_ collision) + PNGs
  bf2rs.py rsmap  <world .wld> --game RSGAME --base HOTH [--era CLASSIC] [--assets DIR ...] -o OUTDIR [--install DATA --id ID --name N]
                                                                    a Renegade Squadron era folder (tools/asura/maptool.py format) built
                                                                    on a base RS map: its geometry, textures and collision replaced by the
                                                                    BF world's, its gameplay entities (command posts, spawns, AI hints,
                                                                    props) lowered or raised onto the new ground, the AI graph re-baked;
                                                                    then packed, and installed as a custom map with --install
  bf2rs.py info   <world .wld> [--assets DIR ...]                   what the world holds (objects, classes, command posts, regions, paths)

The world is a .wld from the SWBF2 Mod Tools (assets/worlds/<MAP>/world1/<map>.wld), or a munged level of either game
(SWBF1 _LVL_PC/HOT/hot1.lvl, SWBF2 _lvl_pc/hot/hot1.lvl), unmunged first with swbf-unmunge (bf_unmunge.py).  --assets: folders searched for .msh, .odf and .tga (default: the world's map folder, e.g. assets/worlds/HOT).

Options:  --step N      terrain decimation (default 4: one vertex every 4 terrain cells; 1 = full detail, 65536 cells)
          --radius M    only keep terrain and objects within M metres of the world's command posts / objects (default 0 = all)
          --tex N       largest texture size (default 256; the PSP's levels use 64..256)
          --detail low  props use their meshes' low-detail (lowrez) versions where they have one (default); high = full detail"""
import os, sys, re, math, json, shutil, argparse
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import swbf_msh as M, swbf_world as W, fbxwrite

def _asura():
    for p in (os.path.join(HERE, '..', 'asura'), os.path.join(HERE, '..', '..', 'tools', 'asura'), os.path.join(HERE, 'asura')):
        if os.path.exists(os.path.join(p, 'maptool.py')): sys.path.insert(0, os.path.abspath(p)); return os.path.abspath(p)
    raise SystemExit('tools/asura (maptool.py) not found next to this folder')

SKIP_LABELS = ('soldier', 'hover', 'walker', 'flyer', 'droid', 'animal', 'commandwalker', 'commandhover', 'commandflyer', 'vehiclespawn',
               'weapon', 'ordnance', 'explosion', 'powerup', 'grenade', 'mine', 'remote', 'sticky', 'cloudcluster', 'sound', 'emitter')
BUILDING_LABELS = ('building', 'destructablebuilding', 'armedbuilding', 'commandpost', 'prop', 'animatedprop', 'animatedbuilding', 'door')

# ------------------------------------------------------------------ textures
class Textures:
    def __init__(self, find, outdir, maxsize=256):
        self.find = find; self.outdir = outdir; self.max = maxsize; self.done = {}
    def png(self, name):
        """the PNG for a texture name (TGA in the assets), converted once; None if not found"""
        if not name: return None
        key = os.path.splitext(name.lower().replace('\\', '/').split('/')[-1])[0]
        if key in self.done: return self.done[key]
        src = self.find(key, ('.tga', '.png', '.bmp', '.dds'))
        out = None
        if src:
            try:
                from PIL import Image
                im = Image.open(src); im.load(); im = im.convert('RGBA')
                w, h = im.size
                p2 = lambda v: 1 << max(3, min(int(round(math.log2(max(v, 1)))), int(math.log2(self.max))))
                im = im.resize((p2(w), p2(h)), Image.LANCZOS) if (p2(w), p2(h)) != (w, h) else im
                os.makedirs(self.outdir, exist_ok=True); out = os.path.join(self.outdir, key + '.png'); im.save(out)
            except Exception as e:
                print('  texture %s: %s' % (src, e)); out = None
        self.done[key] = out
        return out

# ------------------------------------------------------------------ the scene
def _orient(tris, pos, nrm):
    """make each triangle counter-clockwise seen from the side its vertex normals point to"""
    out = []
    for a, b, c, m in tris:
        if nrm:
            pa, pb, pc = pos[a], pos[b], pos[c]
            ux, uy, uz = pb[0] - pa[0], pb[1] - pa[1], pb[2] - pa[2]; vx, vy, vz = pc[0] - pa[0], pc[1] - pa[1], pc[2] - pa[2]
            gx, gy, gz = uy * vz - uz * vy, uz * vx - ux * vz, ux * vy - uy * vx
            nx = nrm[a][0] + nrm[b][0] + nrm[c][0]; ny = nrm[a][1] + nrm[b][1] + nrm[c][1]; nz = nrm[a][2] + nrm[b][2] + nrm[c][2]
            if gx * nx + gy * ny + gz * nz < 0: out.append((a, c, b, m)); continue
        out.append((a, b, c, m))
    return out

def build(wld_path, asset_dirs, outdir, step=4, radius=0.0, texmax=256, detail='low', log=print):
    wdir = os.path.dirname(os.path.abspath(wld_path))
    if not asset_dirs: asset_dirs = [os.path.dirname(wdir)]
    asset_dirs = [os.path.abspath(d) for d in asset_dirs] + [wdir]
    find = W.Finder(asset_dirs); odfs = W.Odfs(asset_dirs)
    world = W.load_wld(wld_path)
    tex = Textures(find, os.path.join(outdir, 'textures', 'bf'), texmax)
    stem = os.path.splitext(wld_path)[0]
    # layers (.lyr) with their own objects: the gameplay ones (command posts, ...)
    layers = []
    for f in sorted(os.listdir(wdir)):
        if f.lower().endswith('.lyr'):
            lw = W.load_wld(os.path.join(wdir, f)); layers.append((f[:-4], lw['objects']))
    allobjs = [(None, o) for o in world['objects']] + [(ln, o) for ln, objs in layers for o in objs]
    regions = W.load_regions(stem + '.rgn'); paths = W.load_paths(stem + '.pth')
    for ln, _ in layers: regions += W.load_regions(os.path.join(wdir, ln + '.rgn')); paths += W.load_paths(os.path.join(wdir, ln + '.pth'))
    centres = [o['pos'] for _, o in allobjs]
    def keep(x, z):
        if radius <= 0 or not centres: return True
        return any((x - c[0]) ** 2 + (z - c[2]) ** 2 < radius * radius for c in centres)
    render = []; collision = []; report = {'objects': 0, 'missing': {}, 'skipped': {}, 'commandposts': []}
    # terrain
    ter = None
    if world['terrain']:
        tp = find(world['terrain'])
        if tp:
            ter = W.load_ter(tp)
            log('terrain %s: %dx%d, %.1f m cells, height scale %.3f' % (os.path.basename(tp), ter['N'], ter['N'], ter['grid'], ter['hscale']))
        else: log('terrain %s: not found' % world['terrain'])
    if ter:
        N = ter['N']; s = max(1, int(step)); CH = 16                                  # chunks of 16 x 16 (decimated) cells
        mats = []; matidx = {}
        for L, (diff, det) in enumerate(ter['names']):
            if diff: matidx[L] = len(mats); mats.append(('bf_ter_' + re.sub(r'\W', '_', os.path.splitext(diff)[0]), tex.png(diff)))
        if not mats: mats = [('bf_terrain', None)]; matidx[0] = 0
        idx = list(range(0, N, s))
        if idx[-1] != N - 1: idx.append(N - 1)
        n = len(idx)
        for cr in range(0, n - 1, CH):
            for cc in range(0, n - 1, CH):
                pos, nrm, uv, tris, vmap = [], [], [], [], {}
                r1 = min(cr + CH, n - 1); c1 = min(cc + CH, n - 1)
                ox, _, oz = W.ter_pos(ter, idx[cr], idx[cc])
                def v(i, j, L):
                    k = (i, j, L)
                    if k in vmap: return vmap[k]
                    r, c = idx[i], idx[j]; p = W.ter_pos(ter, r, c)
                    hl = ter['heights']; sc = ter['hscale']; g = ter['grid']
                    dx = (hl[r][min(c + 1, N - 1)] - hl[r][max(c - 1, 0)]) * sc / (2 * g); dz = (hl[min(r + 1, N - 1)][c] - hl[max(r - 1, 0)][c]) * sc / (2 * g)
                    ln = math.sqrt(dx * dx + 1 + dz * dz)
                    t = ter['tile'][L] or 0.0625
                    vmap[k] = len(pos); pos.append(p); nrm.append((-dx / ln, 1 / ln, -dz / ln)); uv.append(((p[0] - ox) * t, -(p[2] - oz) * t))
                    return vmap[k]
                for i in range(cr, r1):
                    for j in range(cc, c1):
                        x0, _, z0 = W.ter_pos(ter, idx[i], idx[j])
                        if not keep(x0, z0): continue
                        L = W.ter_layer(ter, idx[i], idx[j]); L = L if L in matidx else next(iter(matidx))
                        a, b, c_, d = v(i, j, L), v(i, j + 1, L), v(i + 1, j + 1, L), v(i + 1, j, L)
                        tris += [(a, d, c_, matidx[L]), (a, c_, b, matidx[L])]
                if tris:
                    tris = _orient(tris, pos, nrm)
                    render.append({'name': 'bf_terrain_%02d_%02d' % (cr // CH, cc // CH), 'pos': pos, 'nrm': nrm, 'uv': uv, 'col': None, 'tris': tris, 'materials': mats})
                    collision.append({'name': 'col_static_c%d_terrain' % (len(collision) + 1), 'pos': pos, 'tris': [(a, b, c, 0) for a, b, c, _ in tris]})
    # objects
    cache = {}
    for layer, o in allobjs:
        p = odfs.get(o['class']); label = p.get('classlabel', '').lower()
        if label == 'commandpost': report['commandposts'].append({'name': o['name'], 'class': o['class'], 'pos': o['pos'], 'team': o['team'], 'layer': layer})
        if label in SKIP_LABELS or re.search(r'_prop_(dust|mist|steam|cloud)', o['class'].lower()): report['skipped'][label or o['class']] = report['skipped'].get(label or o['class'], 0) + 1; continue
        g = p.get('geometryname') or p.get('buildinggeometry')
        if not g: continue
        if not keep(o['pos'][0], o['pos'][2]): continue
        mp = find(g if g.lower().endswith('.msh') else g + '.msh')
        if not mp: report['missing'][g] = report['missing'].get(g, 0) + 1; continue
        if mp not in cache:
            try: cache[mp] = M.load(mp)
            except Exception as e: log('  %s: %s' % (mp, e)); cache[mp] = None
        mesh = cache[mp]
        if not mesh: continue
        report['objects'] += 1
        w, x, y, z = o['rot']; O = M.mat4(M.quat_mat(-x, -y, -z, w), o['pos'])        # the world's quaternion turns the other way (checked on Hoth's corridors)
        mats = [('bf_' + re.sub(r'\W', '_', os.path.splitext(m['texture'] or m['name'])[0]), tex.png(m['texture'])) for m in mesh['materials']] or [('bf_none', None)]
        pos, nrm, uv, col, tris = [], [], [], [], []
        cpos, ctris = [], []
        has_col = any(M.classify(md) in ('collision', 'prim') for md in mesh['models'])
        low = detail == 'low' and any(re.search(r'lowre[sz]', md['name'].lower()) and md['segments'] for md in mesh['models'])
        for md in mesh['models']:
            kind = M.classify(md); T = M.mul(O, md['world'])
            if low:                                                                   # the mesh's low-detail version instead of the full one
                lr = bool(re.search(r'lowre[sz]', md['name'].lower()))
                if kind == 'render': kind = None
                if lr and md['segments'] and md['type'] != 6: kind = 'render'
            if kind == 'render' or (kind is None and False):
                for sg in md['segments']:
                    base = len(pos)
                    pos += [M.xform(T, v) for v in sg['pos']]
                    nrm += [M.xform(T, nn, 0.0) for nn in (sg['nrm'] or [(0, 1, 0)] * len(sg['pos']))]
                    uv += [(u, 1.0 - vv) for u, vv in (sg['uv'] or [(0, 0)] * len(sg['pos']))]
                    col += sg['col'] or [(1, 1, 1, 1)] * len(sg['pos'])
                    mi = min(sg['mat'], len(mats) - 1)
                    tris += [(base + a, base + b, base + c, mi) for a, b, c in sg['tris'] if max(a, b, c) < len(sg['pos'])]
                    if not has_col and label in BUILDING_LABELS and 'dust' not in o['class'].lower() and 'mist' not in o['class'].lower():
                        cb = len(cpos); cpos += [M.xform(T, v) for v in sg['pos']]
                        ctris += [(cb + a, cb + b, cb + c, 0) for a, b, c in sg['tris'] if max(a, b, c) < len(sg['pos'])]
            elif kind == 'collision':
                for sg in md['segments']:
                    cb = len(cpos); cpos += [M.xform(T, v) for v in sg['pos']]
                    ctris += [(cb + a, cb + b, cb + c, 0) for a, b, c in sg['tris'] if max(a, b, c) < len(sg['pos'])]
            elif kind == 'prim':
                typ, a1, a2, a3 = md['prim']
                if typ == 4: hx, hy, hz = a1, a2, a3
                elif typ == 2: hx, hy, hz = a1, a2, a1
                else: hx = hy = hz = a1
                cb = len(cpos)
                for sx in (-1, 1):
                    for sy in (-1, 1):
                        for sz in (-1, 1): cpos.append(M.xform(T, (sx * hx, sy * hy, sz * hz)))
                F = [(0, 2, 3, 1), (4, 5, 7, 6), (0, 1, 5, 4), (2, 6, 7, 3), (0, 4, 6, 2), (1, 3, 7, 5)]
                for q in F: ctris += [(cb + q[0], cb + q[1], cb + q[2], 0), (cb + q[0], cb + q[2], cb + q[3], 0)]
        nm = re.sub(r'\W', '_', '%s_%s' % (o['class'], o['name']))[:60]
        if tris:
            render.append({'name': 'bf_' + nm, 'pos': pos, 'nrm': nrm, 'uv': uv, 'col': col, 'tris': _orient(tris, pos, nrm), 'materials': mats})
        if ctris:
            collision.append({'name': 'col_static_c%d_%s' % (len(collision) + 1, nm[:40]), 'pos': cpos, 'tris': ctris})
    report['regions'] = regions; report['paths'] = paths; report['layers'] = [l for l, _ in layers]
    report['triangles'] = sum(len(m['tris']) for m in render); report['collision_triangles'] = sum(len(c['tris']) for c in collision)
    return {'render': render, 'collision': collision, 'report': report, 'world': world, 'terrain': ter,
            'objects': [dict(o, layer=l, label=odfs.get(o['class']).get('classlabel', '')) for l, o in allobjs]}

def collision_fbx_meshes(scene):
    out = []
    for c in scene['collision']:
        tris = c['tris']
        out.append({'name': c['name'], 'pos': c['pos'], 'tris': tris, 'materials': [('cmat0', None)]})
    return out

def write_fbx(scene, path):
    os.makedirs(os.path.dirname(os.path.abspath(path)), exist_ok=True)
    fbxwrite.write(path, scene['render'] + collision_fbx_meshes(scene), 'Battlefront world converted by ToolsCrossTest/bf2rs.py: bf_* drawn meshes, col_* collision')

# ------------------------------------------------------------------ readable gameplay data
def lua_str(s): return '"%s"' % s.replace('\\', '\\\\').replace('"', '\\"')
def write_gameplay_lua(scene, path):
    r = scene['report']; L = ['-- The Battlefront world\'s gameplay objects, for placing the Renegade Squadron ones (read by nothing yet).',
                              '-- Positions in metres, Y up (the same frame as bf_world.fbx and the RS map\'s env/Env.fbx).', 'return {']
    L.append('  command_posts = {')
    for c in r['commandposts']: L.append('    { name = %s, class = %s, team = %d, pos = { %.3f, %.3f, %.3f }, layer = %s },' % (lua_str(c['name']), lua_str(c['class']), c['team'], c['pos'][0], c['pos'][1], c['pos'][2], lua_str(c['layer'] or '')))
    L.append('  },'); L.append('  objects = {')
    for o in scene['objects']:
        L.append('    { name = %s, class = %s, label = %s, team = %d, pos = { %.3f, %.3f, %.3f }, rot = { %.4f, %.4f, %.4f, %.4f }, layer = %s },' % (
            lua_str(o['name']), lua_str(o['class']), lua_str(o['label']), o['team'], o['pos'][0], o['pos'][1], o['pos'][2], o['rot'][0], o['rot'][1], o['rot'][2], o['rot'][3], lua_str(o['layer'] or '')))
    L.append('  },'); L.append('  regions = {')
    for g in r['regions']: L.append('    { name = %s, class = %s, shape = %d, pos = { %s }, size = { %s } },' % (lua_str(g['name']), lua_str(g['class']), g['shape'], ', '.join('%.3f' % v for v in (g['pos'] or ())), ', '.join('%.3f' % v for v in (g['size'] or ()))))
    L.append('  },'); L.append('  paths = {')
    for p in r['paths']: L.append('    { name = %s, nodes = { %s } },' % (lua_str(p['name']), ', '.join('{ %.2f, %.2f, %.2f }' % n[:3] for n in p['nodes'])))
    L.append('  },'); L.append('}'); open(path, 'w').write('\n'.join(L) + '\n')

# ------------------------------------------------------------------ Renegade Squadron map
class Ground:
    """heights of a triangle soup at (x, z), Y up"""
    def __init__(self, tris, cell=8.0):
        self.cell = cell; self.grid = {}; self.tris = tris
        for i, (a, b, c) in enumerate(tris):
            x0 = min(a[0], b[0], c[0]); x1 = max(a[0], b[0], c[0]); z0 = min(a[2], b[2], c[2]); z1 = max(a[2], b[2], c[2])
            for gx in range(int(math.floor(x0 / cell)), int(math.floor(x1 / cell)) + 1):
                for gz in range(int(math.floor(z0 / cell)), int(math.floor(z1 / cell)) + 1): self.grid.setdefault((gx, gz), []).append(i)
    def heights(self, x, z):
        out = []
        for i in self.grid.get((int(math.floor(x / self.cell)), int(math.floor(z / self.cell))), ()):
            a, b, c = self.tris[i]
            d = (b[2] - c[2]) * (a[0] - c[0]) + (c[0] - b[0]) * (a[2] - c[2])
            if abs(d) < 1e-9: continue
            l1 = ((b[2] - c[2]) * (x - c[0]) + (c[0] - b[0]) * (z - c[2])) / d; l2 = ((c[2] - a[2]) * (x - c[0]) + (a[0] - c[0]) * (z - c[2])) / d; l3 = 1 - l1 - l2
            if l1 >= -1e-6 and l2 >= -1e-6 and l3 >= -1e-6: out.append(l1 * a[1] + l2 * b[1] + l3 * c[1])
        return out

def _soup(meshes):
    out = []
    for m in meshes:
        P = m['pos']
        for t in m['tris']: out.append((P[t[0]], P[t[1]], P[t[2]]))
    return out

F32 = re.compile(r'f32\((-?[0-9.eE+-]+)\)')
def drape(folder, old, new, log=print):
    """move every position in the ENTI scripts (three f32 in a row: x, y, z in the game's axes, Y down) by the change of ground height
    under it: old ground = the base map's collision, new = the converted world's.  Returns the number of positions moved."""
    sdir = os.path.join(folder, 'scripts', 'ENTI'); moved = 0; files = 0
    if not os.path.isdir(sdir): return 0
    for f in sorted(os.listdir(sdir)):
        if not f.endswith('.lua'): continue
        p = os.path.join(sdir, f); txt = open(p).read()
        ms = list(F32.finditer(txt)); repl = []
        i = 0
        while i + 2 < len(ms):
            a, b, c = ms[i], ms[i + 1], ms[i + 2]
            between = txt[a.end():b.start()] + txt[b.end():c.start()]
            if re.fullmatch(r'[,\s]*', between):
                x, yg, z = float(a.group(1)), float(b.group(1)), float(c.group(1)); y = -yg
                ho = old.heights(x, z)
                if ho:
                    hb = min(ho, key=lambda h: abs(h - y))
                    if abs(hb - y) < 25.0:
                        hn = new.heights(x, z)
                        if hn:
                            top = max(hn); ny = y + (top - hb)
                            repl.append((b.start(), b.end(), 'f32(%r)' % float('%.6g' % -ny))); moved += 1; i += 3; continue
            i += 1
        if repl:
            for s, e, t in reversed(repl): txt = txt[:s] + t + txt[e:]
            open(p, 'w').write(txt); files += 1
    log('ground: %d entity positions moved onto the new ground (%d scripts)' % (moved, files))
    return moved

def rsmap(scene, game, base, era, out, log=print):
    _asura(); import maptool, envfbx, fbxread
    src = maptool.find_map(game, base) if hasattr(maptool, 'find_map') else None
    tmp = os.path.join(out, '_base');
    if not os.path.isdir(os.path.join(tmp, base, era)):
        log('unpacking %s (%s) from %s' % (base, era, game)); maptool.unpack(os.path.join(maptool.envs_dir(game), era, base + '.PSP'), os.path.join(tmp, base, era), log=lambda *a: None)
    folder = os.path.join(out, era)
    if os.path.exists(folder): shutil.rmtree(folder)
    shutil.copytree(os.path.join(tmp, base, era), folder)
    env = os.path.join(folder, 'env', 'Env.fbx')
    # the base map's ground (its collision, game axes -> Y up)
    objs, _ = envfbx.read_collision(env)
    old = []
    for g in objs:
        V = [(x, -y, z) for x, y, z in g['verts']]
        for q in g['quads']:
            old.append((V[q[0]], V[q[1]], V[q[2]]))
            if q[3] != 0xFFFF: old.append((V[q[0]], V[q[2]], V[q[3]]))
    # textures into the era folder, the FBX next to the others
    tdir = os.path.join(folder, 'textures', 'bf'); os.makedirs(tdir, exist_ok=True)
    meshes = []
    for m in scene['render']:
        mats = []
        for nm, png in m['materials']:
            if png:
                dst = os.path.join(tdir, os.path.basename(png))
                if not os.path.exists(dst): shutil.copy(png, dst)
                png = dst
            mats.append((nm, png))
        meshes.append(dict(m, materials=mats))
    fbxwrite.write(env, meshes + collision_fbx_meshes(scene), 'Renegade Squadron level geometry from a Battlefront world (ToolsCrossTest/bf2rs.py)')
    drape(folder, Ground(old), Ground(_soup(scene['collision'])), log)
    log('baking the AI navigation graph'); maptool.bake(folder, log=lambda s: log('  ' + s), preview=False)
    return folder

def main(argv):
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('cmd', choices=('fbx', 'rsmap', 'info')); ap.add_argument('wld')
    ap.add_argument('--assets', nargs='*', default=[]); ap.add_argument('-o', '--out', default='bf_out')
    ap.add_argument('--step', type=int, default=4); ap.add_argument('--radius', type=float, default=0.0); ap.add_argument('--tex', type=int, default=256); ap.add_argument('--detail', choices=('low', 'high'), default='low')
    ap.add_argument('--game'); ap.add_argument('--base', default='HOTH'); ap.add_argument('--era', default='CLASSIC')
    ap.add_argument('--install'); ap.add_argument('--id'); ap.add_argument('--name')
    ap.add_argument('--version', choices=('swbf', 'swbf_ii'), help='for a .lvl: SWBF1 (swbf) or SWBF2 (swbf_ii); default from its folder')
    a = ap.parse_args(argv)
    if a.wld.lower().endswith('.lvl'):                                   # a munged level: unmunged first (bf_unmunge.py, swbf-unmunge)
        import bf_unmunge
        d = bf_unmunge.unmunge(a.wld, os.path.join(a.out, '_unmunged'), a.version)
        a.wld = bf_unmunge.world_of(d); a.assets = a.assets or [d]
    scene = build(a.wld, a.assets, a.out, a.step, a.radius, a.tex, a.detail)
    r = scene['report']
    print('%d objects placed, %d drawn triangles, %d collision triangles; %d command posts, %d regions, %d paths' % (
        r['objects'], r['triangles'], r['collision_triangles'], len(r['commandposts']), len(r['regions']), len(r['paths'])))
    if r['missing']: print('meshes not found (add their folders with --assets):', ', '.join(sorted(r['missing'])))
    if a.cmd == 'info': return
    os.makedirs(a.out, exist_ok=True)
    write_gameplay_lua(scene, os.path.join(a.out, 'bf_gameplay.lua'))
    if a.cmd == 'fbx':
        write_fbx(scene, os.path.join(a.out, 'bf_world.fbx')); print('wrote', os.path.join(a.out, 'bf_world.fbx'), 'and', os.path.join(a.out, 'bf_gameplay.lua')); return
    if not a.game: raise SystemExit('rsmap needs --game (the folder that holds PSP_GAME)')
    folder = rsmap(scene, a.game, a.base.upper(), a.era.upper(), a.out)
    shutil.copy(os.path.join(a.out, 'bf_gameplay.lua'), os.path.join(folder, 'bf_gameplay.lua'))
    _asura(); import maptool
    if a.install:
        if not a.id: raise SystemExit('--install needs --id')
        maptool.install(a.out, a.id.upper(), a.name or a.id, a.install, basemap=a.base.upper(), log=print)
    print('era folder:', folder)

if __name__ == '__main__':
    main(sys.argv[1:])
