#!/usr/bin/env python3
"""Renegade Squadron character and weapon tool: export a character (or weapon) model from the game's levels to FBX with its skeleton,
skin weights, textures, LODs and hit boxes; edit it (Maya: the SWBF menu); import it back into every level that has it.

  chartool.py list    <game folder> [characters|weapons|all]
        The models in the game's levels (characters: skinned to a skeleton of 10+ joints; weapons: the rest of the carried items).
  chartool.py export  <game folder> <Name> [-o <out folder>]
        <out>/<Name>/<Name>.fbx         the model (LOD 0): mesh, joints (bind pose), skin (each vertex weight 1 to one joint), material
                                        with its texture, and the hit boxes as meshes col_<joint> under their joints
                     <Name>_L1.fbx, _L2.fbx  the lower details (when the game has them)
                     textures/*.png    the model's textures
                     chartool.json      what was exported (import compares against it: do not edit)
  chartool.py import  <game folder> <folder> --data <data folder>
        Rebuilds every level that has the model from the edited folder: the model from <Name>.fbx, the LODs from their FBX if edited
        (else from <Name>.fbx, so an edit shows at every distance), the hit boxes from the col_ meshes (else measured around each
        joint's part of the new mesh), changed textures.  The levels are written to <data>/mods/files/PSP_GAME/USRDIR/ENVS/<era>/
        (the game reads them instead of its own; a level already there is the starting point, so edits to several models add up).

Rules for the FBX (as the map tool's): keep the joints (names, hierarchy, bind pose: the game's animations drive them).  Each vertex
follows the one joint with its largest weight (the PSP models are rigid per part).  Hit boxes: a mesh col_<joint name> (any shape: its
box around it in the joint's space is used), parented to the joint or not.  Y up, 1 unit = 1 m (Maya: 100 cm).  Python 3, no extra
modules (numpy not needed)."""
import os, sys, json, struct, hashlib, re, math
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from chunks import chunks
from rscf import rscf
import model, skeleton, texture, texenc, pngw, lists, fbx, fbxread, pack, rigid_io

WEAPON_WORDS = ('rifle', 'pistol', 'shotgun', 'launcher', 'cutter', 'blaster', 'grenade', 'mine', 'detpack', 'saber', 'sabre', 'pack', 'gun', 'bowcaster', 'cannon_hand')
def levels(game):
    root = game
    for sub in ('PSP_GAME/USRDIR/ENVS', 'USRDIR/ENVS', 'ENVS'):
        if os.path.isdir(os.path.join(game, sub)): root = os.path.join(game, sub); break
    out = []
    for era in ('CLASSIC', 'PREQUEL', 'CAMPAIGN'):
        d = os.path.join(root, era)
        if os.path.isdir(d): out += [os.path.join(d, f) for f in sorted(os.listdir(d)) if f.upper().endswith('.PSP')]
    return root, out
def sha1(p): return hashlib.sha1(open(p, 'rb').read()).hexdigest()
def mkdirs(p):
    if p and not os.path.isdir(p): os.makedirs(p)
def safe(s): return re.sub(r'[^A-Za-z0-9_\-]', '_', s)

class Level:
    """the parts of one level file this tool needs"""
    def __init__(self, path, data=None):
        self.path = path; self.d = d = data if data is not None else open(path, 'rb').read()
        self.lst = list(chunks(d)); self.models = {}; self.skels = {}; self.hsbb = {}; self.tex = {}; self.model_tex = {}
        last_text = None
        for i, (p, t, s, v, fl) in enumerate(self.lst):
            if t == 'TEXT': last_text = lists.text(d[p + 16:p + s])
            elif t == 'HSKN' and v == 8:
                try: sk = skeleton.parse(d[p + 16:p + s]); self.skels[sk['name']] = (i, sk)
                except Exception: pass
            elif t == 'HSBB':
                b = d[p + 16:p + s]; e = b.index(b'\0'); nm = b[:e].decode('latin1'); o = (e + 1 + 3) & ~3
                n = struct.unpack_from('<I', b, o)[0]; o += 4
                boxes = [(list(struct.unpack_from('<6f', b, o + 28 * k)), struct.unpack_from('<I', b, o + 28 * k + 24)[0]) for k in range(n)]
                self.hsbb[nm] = (i, o - 4, boxes)
            elif t == 'RSCF':
                typ, unk, dsz, name, q = rscf(d, p, s, v)
                if typ == 0 and unk == 5:
                    self.models[name] = (i, q, dsz)
                    if last_text: self.model_tex[name] = ['\\graphics' + x for x in last_text]
                elif typ == 2: self.tex[name.lower()] = (i, q, dsz, name)
    def blob(self, name): i, q, dsz = self.models[name]; return self.d[q:q + dsz]
    def skeleton_of(self, name):
        base = name.split('#')[-1]; return self.skels.get(base, (None, None))[1]
    def texture_of(self, name):
        for tn in self.model_tex.get(name, []):
            e = self.tex.get(tn.lower())
            if e: return e
        return None

def kind_of(name, sk):
    if sk and len(sk['bones']) >= 10: return 'characters'
    if any(w in name.lower() for w in WEAPON_WORDS) and not any(x in name.lower() for x in ('turret', 'gunship', 'destroyed', 'deatroyed')): return 'weapons'
    return 'other'

def cmd_list(game, what='all'):
    root, lv = levels(game); seen = {}
    for f in lv:
        L = Level(f)
        for nm in L.models:
            if '#' in nm: continue
            k = kind_of(nm, L.skeleton_of(nm))
            if what != 'all' and k != what: continue
            seen.setdefault((k, nm), []).append(os.path.relpath(f, root))
    for (k, nm), fs in sorted(seen.items()): print('%-11s %-34s in %d level(s), e.g. %s' % (k, nm, len(fs), fs[0]))

def find(game, name):
    root, lv = levels(game); hits = []
    for f in lv:
        d = open(f, 'rb').read()
        if name.encode('latin1') + b'\0' not in d: continue
        L = Level(f, d)
        if name in L.models: hits.append(L)
    return root, hits

# ------------------------------------------------------------------ export
def cmd_export(game, name, out, log=print):
    root, hits = find(game, name)
    if not hits: raise SystemExit('no model %r in the levels (chartool.py list shows the names)' % name)
    L = hits[0]; sk = L.skeleton_of(name); folder = os.path.join(out, safe(name)); mkdirs(os.path.join(folder, 'textures'))
    man = {'name': name, 'level': os.path.relpath(L.path, root), 'files': {}, 'texture': None, 'lods': []}
    te = L.texture_of(name); tex_rel = None
    if te:
        i, q, dsz, tname = te; tx = texture.parse(L.d[q:q + dsz]); w, h, px = texture.to_rgba(tx)
        tex_rel = 'textures/' + safe(os.path.splitext(os.path.basename(tname.replace('\\', '/')))[0]) + '.png'; pngw.write(os.path.join(folder, tex_rel), w, h, px)
        man['texture'] = {'name': tname, 'png': tex_rel, 'bpp': tx['bpp'], 'mips': tx['mips'], 'extra': L.d[q + tx['size']:q + dsz].hex()}
    boxes = {}
    hb = L.hsbb.get(name)
    if hb:
        for b, (bx, ok) in enumerate(hb[2]):
            if ok: boxes[b] = bx
    for lod, nm in enumerate([name] + ['L%d#%s' % (k, name) for k in (1, 2, 3)]):
        if nm not in L.models: continue
        fn = safe(name) + ('' if lod == 0 else '_L%d' % lod) + '.fbx'
        fbx.write(os.path.join(folder, fn), safe(name) + ('' if lod == 0 else '_L%d' % lod), model.parse(L.blob(nm)), sk, tex_rel,
                  boxes=boxes if lod == 0 else None)
        man['lods'].append({'name': nm, 'fbx': fn}); log('%s/%s' % (folder, fn))
    for f in [x['fbx'] for x in man['lods']] + ([tex_rel] if tex_rel else []): man['files'][f] = sha1(os.path.join(folder, f))
    man['levels'] = [os.path.relpath(h.path, root) for h in hits]
    json.dump(man, open(os.path.join(folder, 'chartool.json'), 'w'), indent=1)
    log('%s: %s (%s), %d joints, %d hit boxes; in %d level(s)' % (folder, name, kind_of(name, sk), len(sk['bones']) if sk else 0, len(boxes), len(hits)))
    return folder

# ------------------------------------------------------------------ import
def _hit_boxes(fpath, sk, parts):
    """the col_ meshes of the FBX -> {bone: box in the bone's space}; bones without one: measured around their part of the mesh"""
    names = (sk.get('bone_names') if sk else None) or []; nb = len(sk['bones']) if sk else len(parts)
    bname = dict(((names[i] if i < len(names) else 'bone%02d' % i).replace(' ', '_').lower(), i) for i in range(nb))
    W = skeleton.world(sk) if sk else [((0, 0, 0, 1), (0, 0, 0))] * nb
    sc = fbxread.load(fpath); unit = sc['unit']; out = {}
    for me in sc['meshes']:
        nm = (me['model'] or me['name']).split(':')[-1]
        if not nm.lower().startswith('col_'): continue
        rest = nm[4:].lower()
        for w in ('static_', 'kinematic_', 'hull_'):
            if rest.startswith(w): rest = rest[len(w):]
        b = bname.get(rest)
        if b is None: b = bname.get(re.sub(r'\d+$', '', rest))
        if b is None: print('  %s: no joint %r: left out' % (nm, nm[4:])); continue
        q, t = W[b]; qi = (-q[0], -q[1], -q[2], q[3]); pts = []
        for p in me['pos']:
            x, y, z = fbxread.transform(me['matrix'], p); g = (x * unit - t[0], -y * unit - t[1], z * unit - t[2]); pts.append(skeleton.qrot(qi, g))
        if not pts: continue
        bx = [min(p[0] for p in pts), max(p[0] for p in pts), min(p[1] for p in pts), max(p[1] for p in pts), min(p[2] for p in pts), max(p[2] for p in pts)]
        if b in out: o = out[b]; bx = [min(o[0], bx[0]), max(o[1], bx[1]), min(o[2], bx[2]), max(o[3], bx[3]), min(o[4], bx[4]), max(o[5], bx[5])]
        out[b] = bx
    return out

def _measured_boxes(blob):
    m = model.parse(blob); out = {}
    for i, pt in enumerate(m['parts']):
        if not pt['tris']: continue
        end = m['parts'][i + 1]['v0'] if i + 1 < len(m['parts']) else len(m['verts'])
        tris = model.strip_tris(m['indices'], pt['i0'], pt['tris']); used = set(x for t in tris for x in t)
        P = [m['verts'][pt['v0'] + x][5:8] for x in used]
        if P: out[i] = [min(p[0] for p in P), max(p[0] for p in P), min(p[1] for p in P), max(p[1] for p in P), min(p[2] for p in P), max(p[2] for p in P)]
    return out

def _rebuild(d, repl):
    """level bytes with chunks replaced: repl {chunk index: new chunk bytes}; the FNFO file size updated"""
    out = [d[:8]]; lst = list(chunks(d))
    for i, (p, t, s, v, fl) in enumerate(lst): out.append(repl.get(i, d[p:p + s]))
    end = lst[-1][0] + lst[-1][2] if lst else 8; out.append(d[end:])
    b = bytearray(b''.join(out)); p = 8
    while p + 16 <= len(b):
        tag = bytes(b[p:p + 4]); sz = struct.unpack_from('<I', b, p + 4)[0]
        if tag == b'FNFO' and sz >= 20: struct.pack_into('<I', b, p + 16, len(b)); break
        if sz < 16: break
        p += sz
    return bytes(b)
def _chunk(tag, ver, flags, body): body += b'\0' * ((-len(body)) % 4); return tag.encode('latin1') + struct.pack('<III', 16 + len(body), ver, flags) + body
def _rscf(d, p, s, v, fl, blob):
    q = p + 16; typ, unk, dsz = struct.unpack_from('<III', d, q); e = d.index(b'\0', q + 12); hend = q + 12 + ((e - (q + 12) + 1 + 3) & ~3)
    head = bytearray(d[q:hend]); struct.pack_into('<I', head, 8, len(blob)); tail = d[hend + dsz:p + s]
    return _chunk('RSCF', v, fl, bytes(head) + blob + tail)

def cmd_import(game, folder, data, log=print):
    man = json.load(open(os.path.join(folder, 'chartool.json'))); name = man['name']
    changed = lambda f: os.path.exists(os.path.join(folder, f)) and sha1(os.path.join(folder, f)) != man['files'].get(f)
    lods = man['lods']; main_fbx = lods[0]['fbx']; any_change = [l['fbx'] for l in lods if changed(l['fbx'])]
    tex_changed = man['texture'] and changed(man['texture']['png'])
    if not any_change and not tex_changed: log('nothing changed in %s' % folder); return
    root, _ = levels(game); n = 0
    for rel in man['levels']:
        out = os.path.join(data, 'mods', 'files', 'PSP_GAME', 'USRDIR', 'ENVS', rel.replace('\\', '/').upper())
        src = out if os.path.exists(out) else os.path.join(root, rel)                    # edits to several models add up
        d = open(src, 'rb').read(); L = Level(src, d); sk = L.skeleton_of(name); lst = L.lst; repl = {}
        for k, lod in enumerate(lods):
            if lod['name'] not in L.models: continue
            f = lod['fbx'] if changed(lod['fbx']) else (main_fbx if changed(main_fbx) else None)
            if not f: continue
            import maptool
            blob = maptool._model_from_fbx(os.path.join(folder, f), L.blob(lod['name']), sk)
            i = L.models[lod['name']][0]; p, t, s, v, fl = lst[i]; repl[i] = _rscf(d, p, s, v, fl, blob)
            if k == 0:
                hb = L.hsbb.get(name)
                if hb:
                    boxes = _hit_boxes(os.path.join(folder, f), sk, None)
                    if not boxes: boxes = _measured_boxes(blob); log('  no col_ meshes: hit boxes measured around each joint\'s part')
                    i2, off, old = hb; p2, t2, s2, v2, fl2 = lst[i2]; body = bytearray(d[p2 + 16:p2 + s2])
                    for b, bx in boxes.items():
                        if b < len(old): struct.pack_into('<6fI', body, off + 4 + 28 * b, *(list(bx) + [1]))
                    repl[i2] = _chunk('HSBB', v2, fl2, bytes(body))
        if tex_changed:
            te = L.texture_of(name)
            if te:
                i, q, dsz, tname = te; w, h, px = pngw.read(os.path.join(folder, man['texture']['png']))
                tx = texture.parse(d[q:q + dsz]); mips = tx['mips']
                while mips and (w >> mips < 1 or h >> mips < 1): mips -= 1
                blob = texenc.encode(w, h, px, tx['bpp'], mips, d[q:q + 8]) + d[q + tx['size']:q + dsz]
                p, t, s, v, fl = lst[i]; repl[i] = _rscf(d, p, s, v, fl, blob)
        if not repl: continue
        mkdirs(os.path.dirname(out)); open(out, 'wb').write(_rebuild(d, repl)); n += 1
        log('%s (%d chunks replaced)' % (out, len(repl)))
    log('%s: %d level(s) written' % (name, n))

def main(argv):
    if len(argv) < 2 or argv[1] in ('-h', '--help', 'help'): print(__doc__); return 0
    cmd = argv[1]; args = argv[2:]
    def opt(k, dflt=None):
        if k in args: i = args.index(k); v = args[i + 1]; del args[i:i + 2]; return v
        return dflt
    if cmd == 'list': cmd_list(args[0], args[1] if len(args) > 1 else 'all')
    elif cmd == 'export': cmd_export(args[0], args[1], opt('-o', 'models'))
    elif cmd == 'import':
        data = opt('--data')
        if not data: raise SystemExit('import needs --data <data folder> (the folder holding mods/, e.g. the Vita\'s ux0:data/SWBFRS copied to the PC)')
        cmd_import(args[0], args[1], data)
    else: print(__doc__); return 1
    return 0

if __name__ == '__main__':
    sys.exit(main(sys.argv))
