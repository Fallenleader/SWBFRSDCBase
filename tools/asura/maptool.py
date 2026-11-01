#!/usr/bin/env python3
"""Renegade Squadron map tool: unpack a level into editable files, pack it back into the game's format, install it as a new map.
Full documentation: docs/MAPS.md.  Python 3 (numpy optional: faster texture palettes).

  maptool.py list    <game folder>
        The maps on the disc and their eras.
  maptool.py unpack  <game folder> <MAP> [-o <out folder>]          (or: unpack <file.PSP> -o <out folder>)
        Every era of the map (ENVS/CLASSIC, PREQUEL, CAMPAIGN) into <out>/<MAP>/<ERA>/ (default out folder: maps):
          map.txt            the file's layout: one line per chunk, in order, naming the file that holds it
          textures/*.png     every texture, RGBA (alpha kept)
          sounds/*.wav       every sound effect
          env/Env.fbx        the level geometry (FBX 7.4: Maya 2025, Blender, 3ds Max), one mesh per level object
          models/*.fbx       the map's props (rigid models with their skeletons)
          scripts/<TAG>/*.txt  every other chunk as text (entities, objects, effects, sounds, fog, sky, ...)
          resources/*.txt    resources that are neither textures, sounds nor meshes, as text
          .maptool/          the original file and what was unpacked (pack compares against it: do not edit)
  maptool.py pack    <era folder> [-o <file.PSP>]
        Builds the level file from the folder: chunks whose file was not changed are copied from the original; changed or new files
        are converted (PNG -> palette texture, WAV -> VAG, FBX -> strips, text -> binary).  Default output: <era folder>/<MAP>.PSP
  maptool.py verify  <era folder>
        Packs into memory and reports what changed (an untouched folder must give back the original file byte for byte).
  maptool.py install <map folder> --id <NEWID> --name "<shown name>" --data <data folder> [--base <MAP>]
        Packs every era folder of <map folder> and installs the result as a NEW map: <data>/mods/maps/<NEWID>.txt (definition) and
        <data>/mods/maps/<ERA>/<NEWID>.PSP.  The game lists it in Instant Action's Planet list after the original maps.
        <data folder> is the game's data folder (PS5: /data/SWBFRS, Vita: ux0:data/SWBFRS, PC: the game folder)."""
from __future__ import print_function
import os, sys, json, struct, hashlib, shutil, re, shlex, math
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from chunks import chunks
from rscf import rscf
import texture, texenc, pngw, vag, pack, env, envfbx, fbx, fbxread, model, skeleton, rigid_io, lists, textdump, chunkfmt

ERAS = ('CLASSIC', 'PREQUEL', 'CAMPAIGN')
VERSION = 1

def sha1(path):
    h = hashlib.sha1()
    with open(path, 'rb') as f: h.update(f.read())
    return h.hexdigest()
def mkdirs(p):
    if p and not os.path.isdir(p): os.makedirs(p)
def safe(name): return re.sub(r'[<>:"|?*]', '_', name.replace('\\', '/').lstrip('/'))
def label(s): return re.sub(r'[^A-Za-z0-9_\-]+', '_', s).strip('_')[:40]
def tagdir(t): return t.replace(' ', '_')

def envs_dir(game):
    for c in (game, os.path.join(game, 'ENVS'), os.path.join(game, 'USRDIR', 'ENVS'), os.path.join(game, 'PSP_GAME', 'USRDIR', 'ENVS')):
        if os.path.isdir(os.path.join(c, 'CLASSIC')): return c
    raise SystemExit('no ENVS folder (with CLASSIC/) under %s' % game)
def find_map(game, name):
    e = envs_dir(game); out = []
    for era in ERAS:
        d = os.path.join(e, era)
        for f in sorted(os.listdir(d)) if os.path.isdir(d) else []:
            if f.upper() == name.upper() + '.PSP': out.append((era, os.path.join(d, f)))
    return out

# ------------------------------------------------------------------ unpack
README = """This folder is one era of a Renegade Squadron map, unpacked by tools/asura/maptool.py (documentation: docs/MAPS.md).
Edit the files, then:   maptool.py pack <this folder>      (or install the whole map as a new one: maptool.py install)
  map.txt      the order of the chunks in the level file and which file holds each one; lines can be reordered, removed, or added
  textures/    PNG, RGBA.  Keep the size a power of two (sizes may change).  More than 256 colours are reduced to a palette.
  sounds/      WAV, 16-bit PCM.  Stereo is mixed to mono; the sample rate is kept.
  env/Env.fbx  the level geometry.  Collision is separate (scripts/PHEN) and is not rebuilt from it.
  models/      the props.  Each part follows one joint of the skeleton (rigid skin, weight 1).
  scripts/     every other chunk as text: one value per line, comments after #.  Lists can grow or shrink (counts are fields: keep
               them right); values that point into a chunk by offset are not adjusted.
"""

MAP_HEAD = """# Level layout, one line per chunk of the file, in file order (maptool.py pack follows this file).
#   <n> chunk "<TAG>" <version> <flags> <file>                    a chunk; its data is the text file (textdump syntax)
#   <n> resource <version> <flags> <type> <unk> "<name>" <file>   an embedded resource (RSCF): texture (type 2, .png), sound
#                                                                  (type 3, .wav), mesh (type 0: Env.fbx / models), other (.txt)
# <n> is the chunk's number in the original file; use "new" for a chunk you add.  Remove a line to drop a chunk.
"""

def _q(rel): return '"%s"' % rel if (' ' in rel or '#' in rel) else rel
def _vag_name(blob): return blob[32:48].split(b'\0')[0].decode('latin1') if len(blob) >= 48 else 'rs'

def unpack(src, out, log=print):
    d = open(src, 'rb').read(); mkdirs(os.path.join(out, '.maptool'))
    shutil.copyfile(src, os.path.join(out, '.maptool', 'base.PSP'))
    lst = list(chunks(d)); end = lst[-1][0] + lst[-1][2] if lst else 8
    man = {'version': VERSION, 'source': os.path.basename(src), 'size': len(d), 'trailer': d[end:].hex(), 'chunks': {}, 'files': {}}
    # what the geometry needs: the environment texture list / material list, the object names
    env_text = env_mtrl = emod = env_idx = fnfo = None; last_text = None; texnames = []; mats = []; objects = []; skels = {}; last_tex_for_model = None
    for i, (p, t, s, v, fl) in enumerate(lst):
        body = d[p + 16:p + s]
        if t == 'TEXT': last_text = (i, lists.text(body))
        elif t == 'MTRL' and env_mtrl is None and last_text and any('environments' in x for x in last_text[1]) and len(lists.mtrl(body)) > 8:
            env_text, texnames = last_text; env_mtrl = i; mats = lists.mtrl(body)
        elif t == 'EMOD': emod = i; objects = [e[0] for e in chunkfmt.emod_entries(body)]
        elif t == 'FNFO': fnfo = i
        elif t == 'RSCF':
            typ, unk, dsz, name, q = rscf(d, p, s, v)
            if v == 1 and typ == 0 and name == 'Env': env_idx = i
    man.update({'env_text': env_text, 'env_mtrl': env_mtrl, 'emod': emod, 'env': env_idx, 'fnfo': fnfo})
    restex = {}                                                    # resource name -> png (for the geometry's materials)
    used = set(); lines = [MAP_HEAD]
    def unique(rel):
        b, e = os.path.splitext(rel); r = rel; k = 2
        while r.lower() in used: r = '%s_%d%s' % (b, k, e); k += 1
        used.add(r.lower()); return r
    for i, (p, t, s, v, fl) in enumerate(lst):
        body = d[p + 16:p + s]; ent = {'tag': t, 'ver': v, 'flags': fl, 'off': p, 'size': s}
        if t == 'RSCF':
            typ, unk, dsz, name, q = rscf(d, p, s, v); blob = d[q:q + dsz]; tail = d[q + dsz:p + s]
            ent.update({'type': typ, 'unk': unk, 'name': name, 'head': d[p + 16:q].hex(), 'tail': tail.hex()})
            rel = None
            try:
                if typ == 2:
                    tx = texture.parse(blob); w, h, px = texture.to_rgba(tx)
                    rel = unique('textures/' + os.path.splitext(safe(name))[0] + '.png'); pngw.write(os.path.join(out, rel), w, h, px) if mkdirs(os.path.dirname(os.path.join(out, rel))) is None else None
                    ent.update({'kind': 'texture', 'bpp': tx['bpp'], 'mips': tx['mips'], 'tex_extra': blob[tx['size']:].hex()}); restex[name] = rel
                elif typ == 3 and blob[:4] == b'VAGp':
                    rate, smp = vag.decode(blob); rel = unique('sounds/' + os.path.splitext(safe(name))[0] + '.wav')
                    mkdirs(os.path.dirname(os.path.join(out, rel))); open(os.path.join(out, rel), 'wb').write(vag.wav_bytes(rate, smp))
                    ent.update({'kind': 'sound', 'vagname': _vag_name(blob)})
                elif v == 1 and typ == 0 and name == 'Env':
                    rel = 'env/Env.fbx'; ent['kind'] = 'env'           # written below, once the textures are known
                elif v == 1 and typ == 0 and unk == 5:
                    m = model.parse(blob); base = name.split('#')[-1]; sk = skels.get(base)
                    rel = unique('models/' + safe(name).replace('#', '_') + '.fbx'); mkdirs(os.path.dirname(os.path.join(out, rel)))
                    tex_rel = None
                    if last_text and last_text[1]:
                        tn = '\\graphics' + last_text[1][0]
                        if tn in restex: tex_rel = os.path.relpath(os.path.join(out, restex[tn]), os.path.dirname(os.path.join(out, rel))).replace(os.sep, '/')
                    fbx.write(os.path.join(out, rel), os.path.splitext(os.path.basename(rel))[0], m, sk, tex_rel)
                    ent.update({'kind': 'model', 'skeleton': sk['_idx'] if sk else None})
            except Exception as ex:
                log('  %s: kept as text (%s)' % (name, ex)); rel = None
            if rel is None:
                rel = unique('resources/' + safe(name).replace('#', '_') + '.txt'); mkdirs(os.path.dirname(os.path.join(out, rel)))
                with open(os.path.join(out, rel), 'w') as f:
                    f.write('# resource "%s" (type %d), as text\n' % (name, typ)); f.write('\n'.join(textdump.dump(blob)) + '\n')
                ent['kind'] = 'data'
            ent['file'] = rel
            lines.append('%04d resource %d 0x%x %d 0x%x "%s" %s\n' % (i, v, fl, typ, unk, name.replace('\\', '\\\\').replace('"', '\\"'), _q(rel)))
        else:
            if t == 'HSKN' and v == 8:
                try: sk = skeleton.parse(body); sk['_idx'] = i; skels[sk['name']] = sk
                except Exception: pass
            tl = chunkfmt.lines(t, v, body) or textdump.dump(body)
            first = next((x for x in tl if x.startswith('str "')), '')
            rel = unique('scripts/%s/%04d%s.txt' % (tagdir(t), i, ('_' + label(first[5:-1])) if label(first[5:-1]) else ''))
            mkdirs(os.path.dirname(os.path.join(out, rel)))
            with open(os.path.join(out, rel), 'w') as f:
                f.write('# chunk %s (version %d, flags 0x%x), number %d of %s\n' % (t, v, fl, i, os.path.basename(src))); f.write('\n'.join(tl) + '\n')
            ent.update({'kind': 'chunk', 'file': rel})
            lines.append('%04d chunk "%s" %d 0x%x %s\n' % (i, t, v, fl, _q(rel)))
        man['chunks'][str(i)] = ent
    if env_idx is not None:
        p, t, s, v, fl = lst[env_idx]; typ, unk, dsz, name, q = rscf(d, p, s, v)
        mnames = {}
        for k, mt in enumerate(mats):
            ti = mt['tex'][0]; tn = texnames[ti] if 0 <= ti < len(texnames) else None
            png = restex.get('\\graphics' + tn) if tn else None
            mnames[k] = ('m%03d_%s' % (k, label(os.path.splitext(os.path.basename(tn.replace('\\', '/')))[0]) if tn else 'none'),
                         ('../' + png) if png else None)
        mnames[0xFFFFFFFF] = ('m_none', None)
        mkdirs(os.path.join(out, 'env')); envfbx.write(os.path.join(out, 'env', 'Env.fbx'), env.parse(d[q:q + dsz]), objects, mnames)
    open(os.path.join(out, 'map.txt'), 'w').write(''.join(lines))
    open(os.path.join(out, 'README.txt'), 'w').write(README)
    for e in man['chunks'].values():
        f = e.get('file')
        if f and f not in man['files']: man['files'][f] = sha1(os.path.join(out, f))
    man['maptxt'] = sha1(os.path.join(out, 'map.txt'))
    json.dump(man, open(os.path.join(out, '.maptool', 'manifest.json'), 'w'), indent=0, sort_keys=True)
    return man

# ------------------------------------------------------------------ pack
def _chunk(tag, ver, flags, body):
    pad = (-len(body)) % 4 if False else 0
    return tag.encode('latin1') + struct.pack('<III', 16 + len(body), ver, flags) + body

def read_maptxt(path):
    out = []
    for n, ln in enumerate(open(path, encoding='latin1'), 1):
        s = ln.strip()
        if not s or s.startswith('#'): continue
        try: tok = shlex.split(s, posix=True)
        except ValueError as ex: raise SystemExit('map.txt line %d: %s' % (n, ex))
        idx = None if tok[0].lower() == 'new' else int(tok[0])
        if tok[1] == 'chunk' and len(tok) >= 6: out.append({'idx': idx, 'kind': 'chunk', 'tag': tok[2], 'ver': int(tok[3], 0), 'flags': int(tok[4], 0), 'file': tok[5]})
        elif tok[1] == 'resource' and len(tok) >= 8:
            out.append({'idx': idx, 'kind': 'resource', 'ver': int(tok[2], 0), 'flags': int(tok[3], 0), 'type': int(tok[4], 0), 'unk': int(tok[5], 0), 'name': tok[6], 'file': tok[7]})
        else: raise SystemExit('map.txt line %d: not understood: %s' % (n, s))
        if out[-1]['kind'] == 'chunk' and len(out[-1]['tag']) != 4: raise SystemExit('map.txt line %d: a chunk tag has 4 characters' % n)
    return out

def _read_text(path):
    return [l for l in open(path, encoding='latin1').read().split('\n')]

def _model_from_fbx(path, blob, sk):
    m0 = model.parse(blob); sc = fbxread.load(path); unit = sc['unit']
    nparts = len(m0['parts']); names = (sk.get('bone_names') if sk else None) or []
    bname = dict((((names[i] if i < len(names) else 'bone%02d' % i).replace(' ', '_')), i) for i in range(len(sk['bones']) if sk else nparts))
    verts = []; tris = []
    for me in sc['meshes']:
        part_of = {}
        for jn, ws in me['clusters'].items():
            pi = bname.get(jn.split(':')[-1])
            if pi is None: continue
            for vi, w in ws.items():
                if vi not in part_of or w > part_of[vi][1]: part_of[vi] = (pi, w)
        M = me['matrix']; k = 0; key = {}
        for pi_, poly in enumerate(me['polys']):
            cs = []
            for j, vi in enumerate(poly):
                p = fbxread.transform(M, me['pos'][vi]); p = (p[0] * unit, p[1] * unit, p[2] * unit)
                n = me['normals'][k + j] if me['normals'] else (0.0, 1.0, 0.0); n = fbxread.transform(M, n, 0.0)
                l = math.sqrt(sum(a * a for a in n)) or 1.0; n = tuple(a / l for a in n)
                uv = me['uvs'][k + j] if me['uvs'] else (0.0, 0.0)
                part = part_of.get(vi, (0, 1))[0]
                kk = (vi, tuple(round(a, 6) for a in uv), tuple(round(a, 5) for a in n), part)
                if kk not in key: key[kk] = len(verts); verts.append((p, n, (uv[0], uv[1]), min(part, nparts - 1)))
                cs.append(key[kk])
            k += len(poly)
            for j in range(1, len(cs) - 1): tris.append((cs[0], cs[j], cs[j + 1]))
    parts = rigid_io.from_world(m0['hash'], [pp['flags'] for pp in m0['parts']], sk, verts, tris)
    return pack.build_rigid(m0['hash'], parts)

def packdir(folder, log=print):
    man = json.load(open(os.path.join(folder, '.maptool', 'manifest.json')))
    base = open(os.path.join(folder, '.maptool', 'base.PSP'), 'rb').read()
    items = read_maptxt(os.path.join(folder, 'map.txt'))
    def changed(rel): return not os.path.exists(os.path.join(folder, rel)) or sha1(os.path.join(folder, rel)) != man['files'].get(rel)
    def orig(idx): e = man['chunks'][str(idx)]; return base[e['off']:e['off'] + e['size']]
    def body_of(ch): return ch[16:]
    report = []
    # --- the geometry first: it may add materials and widen object bounds
    env_new = None; env_bounds = {}; new_mats = []; new_tex = []
    env_ent = man['chunks'].get(str(man['env'])) if man.get('env') is not None else None
    if env_ent and any(it['idx'] == man['env'] for it in items) and changed(env_ent['file']):
        emod_body = body_of(orig(man['emod'])); ents = chunkfmt.emod_entries(emod_body)
        centres = dict((i, e[1]) for i, e in enumerate(ents))
        mt_body = body_of(orig(man['env_mtrl'])); tx_body = body_of(orig(man['env_text']))
        mats = lists.mtrl(mt_body); texnames = lists.text(tx_body)
        png2name = {}
        for e in man['chunks'].values():
            if e.get('kind') == 'texture': png2name[os.path.normpath(e['file'])] = e['name']
        common_mode = max(set(m['mode'] for m in mats), key=lambda x: sum(1 for m in mats if m['mode'] == x)) if mats else 6
        cache = {}
        def material_for(mname, tex):
            mm = re.match(r'm(\d+)', mname or '')
            if mm and int(mm.group(1)) < len(mats) + len(new_mats): return int(mm.group(1))
            if mname == 'm_none': return 0xFFFFFFFF
            key = (mname, tex)
            if key in cache: return cache[key]
            if not tex:
                report.append('material %r has no texture: drawn with material 0' % mname); cache[key] = 0; return 0
            pth = tex if os.path.isabs(tex) else os.path.normpath(os.path.join(folder, 'env', tex))
            rel = os.path.normpath(os.path.relpath(pth, folder)) if os.path.exists(pth) else None
            if rel is None:
                alt = os.path.join(folder, 'textures', os.path.basename(tex.replace('\\', '/')))
                rel = os.path.normpath(os.path.relpath(alt, folder)) if os.path.exists(alt) else None
            if rel is None: report.append('material %r: texture %s not found in this folder: drawn with material 0' % (mname, tex)); cache[key] = 0; return 0
            rname = png2name.get(rel)
            if rname is None:                                   # a new texture: becomes a resource of the level
                r2 = rel.replace(os.sep, '/'); r2 = r2[len('textures/'):] if r2.startswith('textures/') else os.path.basename(r2)
                rname = '\\' + os.path.splitext(r2)[0].replace('/', '\\') + '.tga'
                if not rname.lower().startswith('\\graphics\\'): rname = '\\graphics\\environments' + rname
                new_tex.append((rname, rel)); png2name[rel] = rname
            tname = rname[len('\\graphics'):] if rname.lower().startswith('\\graphics') else rname
            if tname not in texnames: texnames.append(tname)
            new_mats.append({'tex': [texnames.index(tname), -1, -1, -1, -1, -1], 'flags': 0, 'mode': common_mode, 'extra': 0})
            cache[key] = len(mats) + len(new_mats) - 1
            report.append('new material %d for %s (texture %s)' % (cache[key], mname, rname)); return cache[key]
        env_new, env_bounds, warns = envfbx.read(os.path.join(folder, env_ent['file']), len(ents), centres, material_for)
        report += warns; report.append('level geometry rebuilt from %s' % env_ent['file'])
    out = [base[:8]]; tex_inserted = False
    last_tex_line = max([k for k, it in enumerate(items) if it['kind'] == 'resource' and it['type'] == 2 and it['idx'] is not None and
                         (man.get('env_text') is None or it['idx'] < man['env_text'])] or [-1])
    for k, it in enumerate(items):
        e = man['chunks'].get(str(it['idx'])) if it['idx'] is not None else None
        same_params = e is not None and e['ver'] == it['ver'] and e['flags'] == it['flags'] and (
            (it['kind'] == 'chunk' and e['tag'] == it['tag'] and e.get('file') == it['file']) or
            (it['kind'] == 'resource' and e['tag'] == 'RSCF' and e['type'] == it['type'] and e['unk'] == it['unk'] and e['name'] == it['name'] and e.get('file') == it['file']))
        fpath = os.path.join(folder, it['file'])
        if e is not None and it['idx'] == man.get('env') and env_new is not None:
            ch = _resource(e, it, env_new)
        elif same_params and not changed(it['file']):
            ch = orig(it['idx'])
        else:
            if not os.path.exists(fpath): raise SystemExit('missing file: %s' % it['file'])
            ch = _build(it, e, fpath, base, man, folder); report.append('rebuilt: %s' % it['file'])
        # the geometry's companions
        if e is not None and env_new is not None:
            if it['idx'] == man['emod']: ch = _chunk('EMOD', e['ver'], e['flags'], _widen(body_of(ch), env_bounds))
            elif it['idx'] == man['env_mtrl'] and new_mats: ch = _chunk('MTRL', e['ver'], e['flags'], _add_mats(body_of(ch), new_mats))
            elif it['idx'] == man['env_text'] and new_tex or (it['idx'] == man.get('env_text') and env_new is not None and len(lists.text(body_of(ch))) < len(texnames)):
                ch = _chunk('TEXT', e['ver'], e['flags'], _set_names(body_of(ch), texnames))
        out.append(ch)
        if k == last_tex_line and new_tex and not tex_inserted:
            for rname, rel in new_tex:
                w, h, px = pngw.read(os.path.join(folder, rel)); mips = 2 if min(w, h) >= 32 else 0
                tmpl = next(x for x in man['chunks'].values() if x.get('kind') == 'texture')
                blob = texenc.encode(w, h, px, 8, mips)
                out.append(_resource_new(rname, 2, tmpl['unk'], tmpl['ver'], tmpl['flags'], blob)); report.append('new texture resource %s' % rname)
            tex_inserted = True
    out.append(bytes.fromhex(man['trailer']))
    data = bytearray(b''.join(out))
    # FNFO: the file size
    p = 8
    while p + 16 <= len(data):
        tag = bytes(data[p:p + 4]); sz = struct.unpack_from('<I', data, p + 4)[0]
        if tag == b'FNFO' and sz >= 20: struct.pack_into('<I', data, p + 16, len(data)); break
        if sz < 16: break
        p += sz
    return bytes(data), report

def _resource_new(name, typ, unk, ver, flags, blob):
    nb = name.encode('latin1') + b'\0'; nb += b'\0' * ((-len(nb)) % 4)
    return _chunk('RSCF', ver, flags, struct.pack('<III', typ, unk, len(blob)) + nb + blob)
def _resource(e, it, blob):
    head = bytearray(bytes.fromhex(e['head'])) if e and e['name'] == it['name'] else None
    if head is None or e['type'] != it['type'] or e['unk'] != it['unk']:
        nb = it['name'].encode('latin1') + b'\0'; nb += b'\0' * ((-len(nb)) % 4); head = bytearray(struct.pack('<III', it['type'], it['unk'], 0) + nb)
    struct.pack_into('<I', head, 8, len(blob))
    return _chunk('RSCF', it['ver'], it['flags'], bytes(head) + blob + (bytes.fromhex(e['tail']) if e else b''))

def _build(it, e, fpath, base, man, folder):
    if it['kind'] == 'chunk':
        return _chunk(it['tag'], it['ver'], it['flags'], textdump.parse(_read_text(fpath)))
    ext = os.path.splitext(fpath)[1].lower()
    if ext == '.png':
        w, h, px = pngw.read(fpath)
        if e is not None and e.get('kind') == 'texture':
            ob = _orig_blob(e, base); hdr = ob[:8]; bpp, mips = e['bpp'], e['mips']
            while mips and (w >> mips < 1 or h >> mips < 1): mips -= 1
            blob = texenc.encode(w, h, px, bpp, mips, hdr) + bytes.fromhex(e.get('tex_extra', ''))
        else:
            blob = texenc.encode(w, h, px, 8, 2 if min(w, h) >= 32 else 0)
    elif ext == '.wav':
        rate, smp = pack.read_wav(fpath); blob = pack.encode_vag(smp, rate, (e or {}).get('vagname', 'rs'))
    elif ext == '.fbx':
        if e is not None and e.get('kind') == 'model':
            sk = None
            if e.get('skeleton') is not None:
                se = man['chunks'][str(e['skeleton'])]; sk = skeleton.parse(base[se['off'] + 16:se['off'] + se['size']])
            blob = _model_from_fbx(fpath, _orig_blob(e, base), sk)
        else: raise SystemExit('%s: a new mesh resource needs an original to replace (see docs/MAPS.md)' % it['file'])
    else:
        lines = _read_text(fpath); blob = textdump.parse(lines)
    return _resource(e if (e and e.get('tag') == 'RSCF') else None, it, blob)

def _orig_blob(e, base):
    head = bytes.fromhex(e['head']); dsz = struct.unpack_from('<I', head, 8)[0]; q = e['off'] + 16 + len(head)
    return base[q:q + dsz]

def _widen(body, nb):
    """EMOD: grow the bounds (and radius) of the objects whose geometry changed so that the new geometry is inside them"""
    b = bytearray(body)
    for i, (name, pos, off) in enumerate(chunkfmt.emod_entries(body)):
        if i not in nb: continue
        mnx, mxx, mny, mxy, mnz, mxz, rad = struct.unpack_from('<7f', b, off); g = nb[i]
        lo = [g[0] - pos[0], g[1] - pos[1], g[2] - pos[2]]; hi = [g[3] - pos[0], g[4] - pos[1], g[5] - pos[2]]
        mnx, mny, mnz = min(mnx, lo[0]), min(mny, lo[1]), min(mnz, lo[2]); mxx, mxy, mxz = max(mxx, hi[0]), max(mxy, hi[1]), max(mxz, hi[2])
        r = math.sqrt(max(abs(mnx), abs(mxx)) ** 2 + max(abs(mny), abs(mxy)) ** 2 + max(abs(mnz), abs(mxz)) ** 2)
        struct.pack_into('<7f', b, off, mnx, mxx, mny, mxy, mnz, mxz, max(rad, r))
    return bytes(b)
def _add_mats(body, new):
    n = struct.unpack_from('<I', body, 0)[0]; recs = body[4:4 + 36 * n]; rest = body[4 + 36 * n:]
    for m in new: recs += struct.pack('<9i', *(m['tex'] + [m['flags'], m['mode'], m['extra']]))
    return struct.pack('<I', n + len(new)) + recs + rest
def _set_names(body, names):
    n = struct.unpack_from('<I', body, 0)[0]; _, end = lists.names(body, 4, n); rest = body[end:]
    out = struct.pack('<I', len(names))
    for s in names: b = s.encode('latin1') + b'\0'; out += b + b'\0' * ((-len(b)) % 4)
    return out + rest

# ------------------------------------------------------------------ install
MAPDEF = """# A custom map for Renegade Squadron (made by tools/asura/maptool.py install; documentation: docs/MAPS.md).
# The level files are <this folder>/<ERA>/{id}.PSP for each era the map has (CLASSIC, PREQUEL, CAMPAIGN).
Name = {name}
# The original map this one was made from: the game modes it offers, ground or space, and any file the game looks up by map name
# that this map does not have itself (loading screen, ...) come from it.
Base = {base}
# Optional: game modes (1 = offered) in the game's order, replacing Base's:   Modes = 1 1 0 0
# Optional: Space = 1 for a space battle
"""

def install(mapdir, mid, name, data, basemap=None, log=print):
    if not re.match(r'^[A-Z0-9_]{1,24}$', mid): raise SystemExit('--id: 1 to 24 characters A-Z 0-9 _ (it is the level file name)')
    eras = [e for e in ERAS if os.path.isdir(os.path.join(mapdir, e))]
    if not eras: raise SystemExit('no era folders (CLASSIC / PREQUEL / CAMPAIGN) in %s' % mapdir)
    if basemap is None:
        man = json.load(open(os.path.join(mapdir, eras[0], '.maptool', 'manifest.json'))); basemap = os.path.splitext(man['source'])[0]
    root = os.path.join(data, 'mods', 'maps'); mkdirs(root)
    for era in eras:
        b, rep = packdir(os.path.join(mapdir, era), log)
        for r in rep: log('  %s: %s' % (era, r))
        mkdirs(os.path.join(root, era)); open(os.path.join(root, era, mid + '.PSP'), 'wb').write(b)
        log('%s/%s/%s.PSP  %d bytes' % (root, era, mid, len(b)))
    open(os.path.join(root, mid + '.txt'), 'w').write(MAPDEF.format(id=mid, name=name, base=basemap.upper()))
    log('%s/%s.txt' % (root, mid))

# ------------------------------------------------------------------ main
def main(argv):
    if len(argv) < 2 or argv[1] in ('-h', '--help', 'help'): print(__doc__); return 0
    cmd = argv[1]; args = argv[2:]
    def opt(name, default=None):
        if name in args: i = args.index(name); v = args[i + 1]; del args[i:i + 2]; return v
        return default
    if cmd == 'list':
        e = envs_dir(args[0]); maps = {}
        for era in ERAS:
            d = os.path.join(e, era)
            for f in sorted(os.listdir(d)) if os.path.isdir(d) else []:
                if f.upper().endswith('.PSP'): maps.setdefault(f[:-4].upper(), []).append(era)
        for m in sorted(maps): print('%-26s %s' % (m, ' '.join(maps[m])))
    elif cmd == 'unpack':
        out = opt('-o', 'maps')
        if args[0].upper().endswith('.PSP'):
            print(args[0], '->', out); unpack(args[0], out)
        else:
            found = find_map(args[0], args[1])
            if not found: raise SystemExit('no map %s (maptool.py list shows the names)' % args[1])
            for era, f in found:
                o = os.path.join(out, args[1].upper(), era); print(f, '->', o); unpack(f, o)
    elif cmd == 'pack':
        folder = args[0]; man = json.load(open(os.path.join(folder, '.maptool', 'manifest.json')))
        out = opt('-o', os.path.join(folder, man['source']))
        b, rep = packdir(folder)
        for r in rep: print(' ', r)
        open(out, 'wb').write(b); print(out, len(b), 'bytes')
    elif cmd == 'verify':
        folder = args[0]; b, rep = packdir(folder); base = open(os.path.join(folder, '.maptool', 'base.PSP'), 'rb').read()
        for r in rep: print(' ', r)
        print('identical to the original' if b == base else 'differs from the original (%d -> %d bytes)' % (len(base), len(b)))
        return 0 if (b == base or rep) else 1
    elif cmd == 'install':
        mid = opt('--id'); name = opt('--name'); data = opt('--data'); basemap = opt('--base')
        if not (mid and name and data and args): raise SystemExit('usage: install <map folder> --id NEWID --name "Name" --data <data folder>')
        install(args[0], mid.upper(), name, data, basemap)
    else:
        print(__doc__); return 1
    return 0

if __name__ == '__main__':
    sys.exit(main(sys.argv))
