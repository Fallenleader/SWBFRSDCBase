"""Renegade Squadron (PSP, Asura engine) <-> Maya 2020 bridge.  Loaded by rs_asura.mel; everything here also works from the Script Editor:

    import rs_maya; rs_maya.import_model()            # pick a .PSP level file, then a model
    import rs_maya; rs_maya.import_level()            # level geometry ('Env') of a .PSP
    import rs_maya; rs_maya.export_selected()         # selected imported model -> mod folder (model + textures)
    import rs_maya; rs_maya.export_level()            # edited level geometry -> mod folder

Needs the tools/asura folder next to this file (or on sys.path).  Settings (Renegade Squadron > Settings):
    rsDiscRoot  - the extracted game folder that contains PSP_GAME (used to find every level that contains a model)
    rsWorkDir   - where imported textures are written (default: ~/rs_mod_work)
    rsModDir    - the mod being built, e.g. .../mods/my_mod  (copy it to ux0:data/RS/mods/ on the Vita or <game>/mods/ on PC)

Conventions: 1 Maya unit = 1 game unit (metre); Y up (the game's Y axis points down - mirrored on import/export).  A model's parts are
rigid: each vertex follows exactly one joint (its strongest influence on export).  Keep the imported skeleton (same joints, same
order, bind pose) - the game's animations drive it.  Add, delete or reshape geometry freely; re-UV freely.
PBR in Maya: the importer builds a standardSurface (baseColor <- colour PNG).  On export, a file texture whose name ends in _mr.png
connected to specularRoughness / metalness, and one ending in _n.png behind a bump2d (tangent-space normals) on normalCamera, are
shipped as the PBR maps of that texture."""
from __future__ import print_function
import os, sys, json, struct, shutil, glob
_here = os.path.dirname(os.path.abspath(__file__))
for _p in (os.path.join(_here, 'asura'), os.path.join(_here, '..', 'asura')):
    if os.path.isdir(_p) and _p not in sys.path: sys.path.insert(0, _p)
import maya.cmds as cmds
import maya.api.OpenMaya as om
import maya.api.OpenMayaAnim as oma
from chunks import chunks
from rscf import rscf
import texture, model, skeleton, env, lists, pngw, fnv, pack, rigid_io

# ------------------------------------------------------------------ settings
def _opt(name, default=''):
    return cmds.optionVar(q=name) if cmds.optionVar(exists=name) else default
def _setopt(name, val): cmds.optionVar(sv=(name, val))
def work_dir():
    d = _opt('rsWorkDir') or os.path.join(os.path.expanduser('~'), 'rs_mod_work')
    if not os.path.isdir(d): os.makedirs(d)
    return d
def settings():
    """small settings window"""
    w = 'rsSettingsWin'
    if cmds.window(w, exists=True): cmds.deleteUI(w)
    cmds.window(w, title='Renegade Squadron - settings'); cmds.columnLayout(adj=True, rs=4)
    f = {}
    for key, label in (('rsDiscRoot', 'Game folder (contains PSP_GAME)'), ('rsWorkDir', 'Work folder (imported textures)'), ('rsModDir', 'Mod folder being built')):
        cmds.text(l=label, al='left'); f[key] = cmds.textFieldButtonGrp(tx=_opt(key), bl='...', adj=1)
        cmds.textFieldButtonGrp(f[key], e=True, bc=lambda k=key: _browse_into(f[k]))
    def save(*_):
        for k, fld in f.items(): _setopt(k, cmds.textFieldButtonGrp(fld, q=True, tx=True))
        cmds.deleteUI(w)
    cmds.button(l='Save', c=save); cmds.showWindow(w)
def _browse_into(fld):
    r = cmds.fileDialog2(fm=3, ds=2)
    if r: cmds.textFieldButtonGrp(fld, e=True, tx=r[0])
def _pick_psp():
    r = cmds.fileDialog2(fm=1, ds=2, ff='Asura levels (*.PSP *.psp *.ASR *.asr);;All files (*.*)', dir=_opt('rsDiscRoot'))
    return r[0] if r else None
def _mod_dir():
    d = _opt('rsModDir')
    if not d:
        r = cmds.fileDialog2(fm=3, ds=2, cap='Choose (or create) the mod folder, e.g. .../mods/my_mod')
        if not r: return None
        d = r[0]; _setopt('rsModDir', d)
    return d

# ------------------------------------------------------------------ reading a container
class Level(object):
    """everything the tools need from one .PSP: models (+ the TEXT list in front of each), skeletons, textures, env + its materials"""
    def __init__(self, path):
        self.path = path; self.data = d = open(path, 'rb').read()
        self.models = {}; self.skels = {}; self.textures = {}; self.env = None; self.env_text = []; self.env_mtrl = []; self.frags = {}
        last_text = []
        for p, t, s, v, fl in chunks(d):
            body = d[p + 16:p + s]
            if t == 'TEXT':
                last_text = lists.text(body)
                if len(last_text) > 8 and any('environments' in x for x in last_text) and not self.env_text: self.env_text = last_text
            elif t == 'MTRL':
                m = lists.mtrl(body)
                if self.env_text and len(m) > 8 and not self.env_mtrl: self.env_mtrl = m
            elif t == 'HSKN' and v == 8:
                try: sk = skeleton.parse(body); self.skels[sk['name']] = sk
                except Exception: pass
            elif t == 'RSCF':
                typ, unk, dsz, name, q = rscf(d, p, s, v); blob = d[q:q + dsz]
                if typ == 2: self.textures[name] = blob
                elif typ == 0 and v == 1 and unk == 5: self.models[name] = (blob, last_text[0] if last_text else None)
                elif typ == 0 and v == 1 and name == 'Env': self.env = blob
    def skeleton_for(self, name): return self.skels.get(name.split('#')[-1])
    def texture_png(self, tname):
        """write the texture (resource name like '\\graphics\\vehicles\\at_at.tga') under the work folder; -> (png path, key)"""
        if not tname: return None, None
        cands = [tname, '\\graphics' + tname if not tname.lower().startswith('\\graphics') else tname]
        blob = None
        for c in cands:
            for n, b in self.textures.items():
                if n.lower() == c.lower(): blob = b; tname = n; break
            if blob: break
        if blob is None: return None, None
        t = texture.parse(blob); w, h, px = texture.to_rgba(t); sz = texture.level_sizes(t['width'], t['height'], t['bpp'], t['mips'])[0][2]
        key = fnv.texkey(blob[8:8 + sz])
        rel = os.path.splitext(tname.replace('\\', '/').lstrip('/'))[0] + '.png'
        out = os.path.join(work_dir(), 'textures', rel)
        if not os.path.isdir(os.path.dirname(out)): os.makedirs(os.path.dirname(out))
        if not os.path.isfile(out): pngw.write(out, w, h, bytearray(px))
        _remember_key(out, key, tname)
        return out, key

def _keys_file(): return os.path.join(work_dir(), 'texture_keys.json')
def _remember_key(png, key, tname):
    f = _keys_file(); m = json.load(open(f)) if os.path.isfile(f) else {}
    m[os.path.normcase(os.path.abspath(png))] = {'key': key, 'name': tname}; json.dump(m, open(f, 'w'), indent=1, sort_keys=True)
def _key_of(png):
    f = _keys_file(); m = json.load(open(f)) if os.path.isfile(f) else {}
    return m.get(os.path.normcase(os.path.abspath(png)))

def _choose(title, items):
    """modal list picker -> chosen item or None"""
    res = {'v': None}
    def ui():
        cmds.columnLayout(adj=True); flt = cmds.textField(pht='filter'); lst = cmds.textScrollList(nr=24, w=420, append=items, ams=False)
        def refilter(*_):
            s = cmds.textField(flt, q=True, tx=True).lower(); cmds.textScrollList(lst, e=True, ra=True); cmds.textScrollList(lst, e=True, append=[i for i in items if s in i.lower()])
        cmds.textField(flt, e=True, cc=refilter, ec=refilter)
        def ok(*_):
            sel = cmds.textScrollList(lst, q=True, si=True)
            if sel: res['v'] = sel[0]
            cmds.layoutDialog(dismiss='ok')
        cmds.textScrollList(lst, e=True, dcc=ok); cmds.button(l='Import', c=ok); cmds.button(l='Cancel', c=lambda *_: cmds.layoutDialog(dismiss='cancel'))
    cmds.layoutDialog(ui=ui, t=title)
    return res['v']

# ------------------------------------------------------------------ materials
def _material(name, png):
    sh = cmds.shadingNode('standardSurface', asShader=True, n=name + '_mat')
    sg = cmds.sets(renderable=True, noSurfaceShader=True, empty=True, n=name + '_SG'); cmds.connectAttr(sh + '.outColor', sg + '.surfaceShader')
    cmds.setAttr(sh + '.specular', 0.5); cmds.setAttr(sh + '.specularRoughness', 0.7)
    if png:
        fn = cmds.shadingNode('file', asTexture=True, n=name + '_col'); cmds.setAttr(fn + '.fileTextureName', png, type='string')
        cmds.connectAttr(fn + '.outColor', sh + '.baseColor')
        base = os.path.splitext(png)[0]
        if os.path.isfile(base + '_mr.png'):
            mr = cmds.shadingNode('file', asTexture=True, n=name + '_mr'); cmds.setAttr(mr + '.fileTextureName', base + '_mr.png', type='string'); cmds.setAttr(mr + '.colorSpace', 'Raw', type='string')
            cmds.connectAttr(mr + '.outColorG', sh + '.specularRoughness'); cmds.connectAttr(mr + '.outColorB', sh + '.metalness')
        if os.path.isfile(base + '_n.png'):
            nm = cmds.shadingNode('file', asTexture=True, n=name + '_nrm'); cmds.setAttr(nm + '.fileTextureName', base + '_n.png', type='string'); cmds.setAttr(nm + '.colorSpace', 'Raw', type='string')
            b = cmds.shadingNode('bump2d', asUtility=True, n=name + '_bump'); cmds.setAttr(b + '.bumpInterp', 1)
            cmds.connectAttr(nm + '.outAlpha', b + '.bumpValue'); cmds.connectAttr(b + '.outNormal', sh + '.normalCamera')
            cmds.addAttr(b, ln='rsNormalMap', dt='string'); cmds.setAttr(b + '.rsNormalMap', base + '_n.png', type='string')
    return sg

def _shading_textures(shape):
    """-> (colour png, mr png or None, normal png or None) of the first material on a shape"""
    for sg in cmds.listConnections(shape, type='shadingEngine') or []:
        r = _sg_textures(sg)
        if r[0]: return r
    return None, None, None
def _sg_textures(sg):
    for sh in cmds.listConnections(sg + '.surfaceShader') or []:
        def file_of(attr):
            if not cmds.attributeQuery(attr.split('.')[-1], node=sh, exists=True): return None
            src = cmds.listConnections(sh + '.' + attr, s=True, d=False) or []
            for n in src:
                if cmds.nodeType(n) == 'file': return cmds.getAttr(n + '.fileTextureName')
                if cmds.nodeType(n) == 'bump2d':
                    if cmds.attributeQuery('rsNormalMap', node=n, exists=True): return cmds.getAttr(n + '.rsNormalMap')
                    f = cmds.listConnections(n + '.bumpValue', s=True, d=False) or []
                    if f and cmds.nodeType(f[0]) == 'file': return cmds.getAttr(f[0] + '.fileTextureName')
            return None
        col = file_of('baseColor') or file_of('color')
        mr = file_of('specularRoughness') or file_of('metalness')
        nrm = file_of('normalCamera')
        return col, mr, nrm
    return None, None, None
    return None, None, None

# ------------------------------------------------------------------ import
def _mesh(name, points, polys, uvs, normals, parent=None):
    """points [(x,y,z)], polys [(a,b,c)], uvs per vertex [(u,v)], normals per vertex -> transform name"""
    fn = om.MFnMesh()
    pts = om.MPointArray([om.MPoint(*p) for p in points]); counts = [3] * len(polys); conn = [i for t in polys for i in t]
    us = [u for u, v in uvs]; vs = [v for u, v in uvs]
    obj = fn.create(pts, counts, conn, us, vs, parent if parent else om.MObject())
    fn.assignUVs(counts, conn)
    fn.setVertexNormals([om.MVector(*n) for n in normals], list(range(len(points))))
    t = cmds.listRelatives(fn.fullPathName(), p=True, f=True)[0]; t = cmds.rename(t, name)
    return t

def import_model(path=None, name=None, lods=False):
    path = path or _pick_psp()
    if not path: return
    L = Level(path)
    if not name:
        names = sorted(n for n in L.models if lods or '#' not in n)
        name = _choose('Import model from ' + os.path.basename(path), names)
        if not name: return
    blob, tname = L.models[name]; m = model.parse(blob); sk = L.skeleton_for(name)
    w = rigid_io.to_world(m, sk); safe = name.replace('#', '_')
    grp = cmds.group(em=True, n='rs_' + safe)
    # joints
    joints = []
    bones = rigid_io.bones_maya(sk) if sk else []
    for i in range(len(bones), len(m['parts'])):                    # parts without a skeleton bone: one joint each at the origin
        bones.append({'index': i, 'name': 'part%02d' % i, 'parent': -1, 'pos': (0, 0, 0), 'quat': (0, 0, 0, 1)})
    for b in bones:
        cmds.select(cl=True); j = cmds.joint(n=(safe + '_' + b['name']).replace(' ', '_'))
        joints.append(j)
    for b, j in zip(bones, joints):
        if b['parent'] >= 0: cmds.parent(j, joints[b['parent']])
        else: cmds.parent(j, grp)
    for b, j in zip(bones, joints):
        q = om.MQuaternion(*b['quat']); mt = om.MTransformationMatrix(q.asMatrix()); mt.setTranslation(om.MVector(*b['pos']), om.MSpace.kWorld)
        M = mt.asMatrix(); cmds.xform(j, ws=True, m=[M[i] for i in range(16)])
        cmds.addAttr(j, ln='rsBoneIndex', at='long'); cmds.setAttr(j + '.rsBoneIndex', b['index'])
    for j in joints: cmds.makeIdentity(j, apply=True, r=True)       # rotations -> jointOrient: clean bind pose
    # mesh
    pts = [v[0] for v in w['verts']]; nrm = [v[1] for v in w['verts']]; uv = [v[2] for v in w['verts']]
    mesh = _mesh(safe, pts, w['tris'], uv, nrm); cmds.parent(mesh, grp)
    for a, t, v in (('rsSource', 'string', path), ('rsResource', 'string', name), ('rsTexture', 'string', tname or '')):
        cmds.addAttr(mesh, ln=a, dt=t); cmds.setAttr(mesh + '.' + a, v, type=t)
    cmds.addAttr(mesh, ln='rsHash', at='long'); cmds.setAttr(mesh + '.rsHash', struct.unpack('<i', struct.pack('<I', m['hash']))[0])
    cmds.addAttr(mesh, ln='rsPartFlags', dt='string'); cmds.setAttr(mesh + '.rsPartFlags', json.dumps(w['flags']), type='string')
    # rigid skin: every vertex 100% on its part's joint
    sc = cmds.skinCluster(joints, mesh, tsb=True, mi=1, n=safe + '_skin')[0]
    sel = om.MSelectionList(); sel.add(sc); sel.add(mesh); scf = oma.MFnSkinCluster(sel.getDependNode(0))
    dag = sel.getDagPath(1).extendToShape(); comp = om.MFnSingleIndexedComponent(); co = comp.create(om.MFn.kMeshVertComponent); comp.addElements(list(range(len(pts))))
    infl = om.MIntArray(list(range(len(joints)))); wts = om.MDoubleArray()
    for v in w['verts']:
        part = v[3] if v[3] < len(joints) else 0
        for k in range(len(joints)): wts.append(1.0 if k == part else 0.0)
    scf.setWeights(dag, co, infl, wts, False)
    png, key = L.texture_png(tname)
    sg = _material(safe, png); cmds.sets(mesh, e=True, forceElement=sg)
    cmds.select(mesh); print('[RS] imported %s: %d vertices, %d triangles, %d joints, texture %s (key %s)' % (name, len(pts), len(w['tris']), len(joints), png, key))
    return mesh

def import_level(path=None):
    path = path or _pick_psp()
    if not path: return
    L = Level(path)
    if not L.env: cmds.warning('no level geometry in ' + path); return
    e = env.parse(L.env); V = e['verts']
    # merge vertices by position so the terrain can be edited without tearing; remember where every game vertex came from
    index = {}; pts = []; vmap = []
    for v in V:
        k = (round(v[6], 4), round(-v[7], 4), round(v[8], 4))
        if k not in index: index[k] = len(pts); pts.append((v[6], -v[7], v[8]))
        vmap.append(index[k])
    grp = cmds.group(em=True, n='rs_level_' + os.path.splitext(os.path.basename(path))[0])
    for layer in (False, True):
        tris = []; fv = []; mats = []
        for st in e['strips']:
            if st['layer'] != layer: continue
            for a, b, c in env.strip_tris(st['v0'], st['n']):
                tris.append((a, c, b)); mats.append(st['mat'])
        if not tris: continue
        # per face-vertex uv / colour / normal from the game vertex (corner references kept for export)
        fn = om.MFnMesh(); counts = [3] * len(tris); conn = [vmap[i] for t in tris for i in t]
        us = [V[i][0] for t in tris for i in t]; vs = [1.0 - V[i][1] for t in tris for i in t]
        obj = fn.create(om.MPointArray([om.MPoint(*p) for p in pts]), counts, conn, us, vs)
        fn.assignUVs(counts, list(range(len(conn))))
        cols = om.MColorArray(); faces = []; fverts = []
        for fi, t in enumerate(tris):
            st_vt = 0x1DA if layer else 0x1D2
            for i in t:
                r, g, b, a = env.colour(st_vt, V[i][2]); cols.append(om.MColor((r / 255.0, g / 255.0, b / 255.0, a / 255.0))); faces.append(fi); fverts.append(vmap[i])
        fn.createColorSetWithName('rs_colour'); fn.setCurrentColorSetName('rs_colour'); fn.setFaceVertexColors(cols, faces, fverts)
        t = cmds.listRelatives(fn.fullPathName(), p=True, f=True)[0]; t = cmds.rename(t, 'Env_layers' if layer else 'Env'); cmds.parent(t, grp)
        corner = [i for tt in tris for i in tt]                     # game vertex of every face-vertex
        cmds.addAttr(t, ln='rsCorners', dt='Int32Array'); cmds.setAttr(t + '.rsCorners', corner, type='Int32Array')
        for a, v in (('rsSource', path), ('rsResource', 'Env')): cmds.addAttr(t, ln=a, dt='string'); cmds.setAttr(t + '.' + a, v, type='string')
        cmds.setAttr(cmds.listRelatives(t, s=True, f=True)[0] + '.displayColors', 1)
        # materials: one shading group per game material
        byMat = {}
        for fi, m_ in enumerate(mats): byMat.setdefault(m_, []).append(fi)
        for m_, fl in sorted(byMat.items()):
            png = None
            if m_ < len(L.env_mtrl):
                ti = L.env_mtrl[m_]['tex'][3 if layer else 0] if layer else L.env_mtrl[m_]['tex'][0]
                if 0 <= ti < len(L.env_text): png, _ = L.texture_png(L.env_text[ti])
            sg = _material('env_mat%03d%s' % (m_, '_layer' if layer else ''), png)
            cmds.sets(['%s.f[%d]' % (t, f) for f in fl], e=True, forceElement=sg)
    print('[RS] imported level geometry of %s: %d game vertices -> %d editable vertices' % (os.path.basename(path), len(V), len(pts)))

# ------------------------------------------------------------------ export
def _disc_rel(path):
    """absolute .PSP path -> path relative to the folder that contains PSP_GAME"""
    p = os.path.abspath(path).replace('\\', '/'); i = p.upper().find('/PSP_GAME/')
    return p[i + 1:] if i >= 0 else os.path.basename(p)
def _levels_with(resource, source):
    root = _opt('rsDiscRoot'); out = [source]
    if root and os.path.isdir(root):
        for f in glob.glob(os.path.join(root, 'PSP_GAME', 'USRDIR', '*', '*', '*.PSP')) + glob.glob(os.path.join(root, 'PSP_GAME', 'USRDIR', '*', '*.PSP')):
            if os.path.abspath(f) == os.path.abspath(source): continue
            try:
                if resource.encode('latin1') + b'\0' in open(f, 'rb').read(): out.append(f)
            except Exception: pass
    return out
def _write_into_mod(mod, src, new):
    """apply {resource: bytes} to level src, writing <mod>/files/<disc path> (starting from an earlier edit of the same file if present)"""
    dst = os.path.join(mod, 'files', _disc_rel(src))
    base = dst if os.path.isfile(dst) else src
    d = open(base, 'rb').read(); res = pack.resources(d); new = dict((k, v) for k, v in new.items() if k in res)
    if not new: return None
    out = pack.replace(d, new)
    if not os.path.isdir(os.path.dirname(dst)): os.makedirs(os.path.dirname(dst))
    open(dst, 'wb').write(out); return dst

def _ship_textures(mod, maps, fallback_key=None):
    """maps = (colour, mr, normal) file paths -> copies into <mod>/textures named by the texture key"""
    col, mr, nrm = maps
    if not col: return []
    info = _key_of(col) or ({'key': fallback_key} if fallback_key else None)
    if not info:
        cmds.warning('colour texture %s: unknown game texture (paint over the imported PNG, or keep the imported file node and change its path)' % col); return []
    out = []; td = os.path.join(mod, 'textures')
    if not os.path.isdir(td): os.makedirs(td)
    for src, suffix in ((col, ''), (mr, '_mr'), (nrm, '_n')):
        if src and os.path.isfile(src): shutil.copyfile(src, os.path.join(td, info['key'] + suffix + '.png')); out.append(info['key'] + suffix + '.png')
    return out

def _skin_data(mesh):
    sc = cmds.ls(cmds.listHistory(mesh), type='skinCluster')
    if not sc: raise RuntimeError('%s has no skinCluster - bind it to the imported joints first' % mesh)
    sel = om.MSelectionList(); sel.add(sc[0]); scf = oma.MFnSkinCluster(sel.getDependNode(0))
    infl = scf.influenceObjects(); bone_of = []
    for j in infl:
        n = j.fullPathName(); bone_of.append(cmds.getAttr(n + '.rsBoneIndex') if cmds.attributeQuery('rsBoneIndex', node=n, exists=True) else 0)
    shape = cmds.listRelatives(mesh, s=True, ni=True, f=True)[0]; sel.add(shape); dag = sel.getDagPath(1)
    weights, ninf = scf.getWeights(dag, om.MObject())
    return [bone_of[max(range(ninf), key=lambda k: weights[v * ninf + k])] for v in range(len(weights) // ninf)]

def export_selected(all_levels=True, lods=True):
    """export the selected imported model(s) into the mod folder"""
    mod = _mod_dir()
    if not mod: return
    sel = cmds.ls(sl=True, tr=True) or []
    if not sel: cmds.warning('select an imported Renegade Squadron model'); return
    for mesh in sel:
        if not cmds.attributeQuery('rsResource', node=mesh, exists=True): cmds.warning('%s was not imported by these tools - skipped' % mesh); continue
        res = cmds.getAttr(mesh + '.rsResource'); src = cmds.getAttr(mesh + '.rsSource')
        if res == 'Env': export_level(mesh); continue
        L = Level(src); blob, tname = L.models[res]; m = model.parse(blob); sk = L.skeleton_for(res)
        flags = json.loads(cmds.getAttr(mesh + '.rsPartFlags'))
        part_of = _skin_data(mesh)
        # geometry as seen at the bind pose (includes edits made after skinning)
        try:
            infl = cmds.skinCluster(cmds.ls(cmds.listHistory(mesh), type='skinCluster')[0], q=True, inf=True)
            cmds.dagPose(infl, restore=True, g=True, bindPose=True)
        except Exception as ex: cmds.warning('could not restore the bind pose (%s) - export the model in its bind pose' % ex)
        shp = cmds.listRelatives(mesh, s=True, ni=True, f=True)[0]
        sl = om.MSelectionList(); sl.add(shp); fn = om.MFnMesh(sl.getDagPath(0))
        pts = fn.getPoints(om.MSpace.kWorld); us, vs = fn.getUVs(); norms = fn.getNormals(om.MSpace.kWorld)
        counts, conn = fn.getVertices(); tcount, tcorner = fn.getTriangleOffsets(); uvc, uvids = fn.getAssignedUVs(); nc, nids = fn.getNormalIds()
        verts, tris = rigid_io.gather([(p.x, p.y, p.z) for p in pts], list(us), list(vs), [(n.x, n.y, n.z) for n in norms], list(counts), list(conn),
                                      list(tcount), list(tcorner), list(uvc), list(uvids), list(nids), part_of, len(flags))
        parts = rigid_io.from_world(m['hash'], flags, sk, verts, tris)
        data = pack.build_rigid(m['hash'], parts)
        base = res.split('#')[-1]
        names = set([res] + ([base] + [p + base for p in ('L1#', 'L2#', 'L3#')] if lods else []))
        new = dict((n, data) for n in names if n in L.models)
        written = []
        for lvl in (_levels_with(base, src) if all_levels else [src]):
            r = _write_into_mod(mod, lvl, new)
            if r: written.append(r)
        png0, key0 = L.texture_png(tname)
        tex = _ship_textures(mod, _shading_textures(cmds.listRelatives(mesh, s=True, ni=True, f=True)[0]), key0)
        print('[RS] %s -> %d vertices, %d triangles; written: %s; textures: %s' % (res, len(verts), len(tris), ', '.join(written) or 'nothing', ', '.join(tex) or 'unchanged'))
    _write_readme(mod)

def export_level(mesh=None):
    """edited Env (positions / UVs / vertex colours; same topology as imported) -> mod folder"""
    mod = _mod_dir()
    if not mod: return
    mesh = mesh or (cmds.ls(sl=True, tr=True) or [None])[0]
    if not mesh or not cmds.attributeQuery('rsCorners', node=mesh, exists=True): cmds.warning('select the imported Env mesh'); return
    src = cmds.getAttr(mesh + '.rsSource'); L = Level(src); blob = bytearray(L.env); e = env.parse(L.env)
    grp = cmds.listRelatives(mesh, p=True, f=True); meshes = [x for x in (cmds.listRelatives(grp[0], c=True, f=True) or []) if cmds.attributeQuery('rsCorners', node=x, exists=True)] if grp else [mesh]
    done = 0
    for msh in meshes:
        corners = cmds.getAttr(msh + '.rsCorners'); sl = om.MSelectionList(); sl.add(msh); fn = om.MFnMesh(sl.getDagPath(0))
        if fn.numFaceVertices != len(corners): cmds.warning('%s: topology changed (only moving / re-UVing / painting is supported for level geometry)' % msh); continue
        pts = fn.getPoints(om.MSpace.kWorld); us, vs = fn.getUVs(); norms = fn.getVertexNormals(False, om.MSpace.kWorld)
        try: fn.setCurrentColorSetName('rs_colour'); cols = fn.getFaceVertexColors('rs_colour')
        except Exception: cols = None
        layer = msh.split('|')[-1].startswith('Env_layers'); fvi = 0
        for f in range(fn.numPolygons):
            vl = fn.getPolygonVertices(f)
            for k, mv in enumerate(vl):
                gv = corners[fvi]; o = e['vertex_offset'] + 24 * gv; p = pts[mv]; n = norms[mv]
                uid = fn.getPolygonUVid(f, k); u = us[uid]; v = 1.0 - vs[uid]
                struct.pack_into('<hh', blob, o, max(-32768, min(32767, int(round(u * 256)))), max(-32768, min(32767, int(round(v * 256)))))
                if cols is not None:
                    c = cols[fvi]; r, g, b, a = [max(0, min(255, int(round(x * 255)))) for x in (c.r, c.g, c.b, c.a)]
                    q4 = lambda x: int(round(x * 15 / 255.0)); q5 = lambda x: int(round(x * 31 / 255.0)); q6 = lambda x: int(round(x * 63 / 255.0))
                    cv = (q4(r) | (q4(g) << 4) | (q4(b) << 8) | (q4(a) << 12)) if layer else (q5(r) | (q6(g) << 5) | (q5(b) << 11))
                    struct.pack_into('<H', blob, o + 4, cv)
                ox, oy, oz = struct.unpack_from('<3f', blob, o + 12)
                if abs(ox - p.x) + abs(-oy - p.y) + abs(oz - p.z) > 1e-4:          # moved: the normal follows the edit
                    struct.pack_into('<3h', blob, o + 6, *[max(-32768, min(32767, int(round(x * 32767)))) for x in (n.x, -n.y, n.z)])
                struct.pack_into('<3f', blob, o + 12, p.x, -p.y, p.z)
                fvi += 1
        done += 1
    if done:
        r = _write_into_mod(mod, src, {'Env': bytes(blob)}); print('[RS] level geometry -> %s' % r)
        for msh in meshes: _ship_textures_all(mod, msh)
    _write_readme(mod)

def _ship_textures_all(mod, mesh):
    out = []
    for sg in set(cmds.listConnections(cmds.listRelatives(mesh, s=True, ni=True, f=True)[0], type='shadingEngine') or []): out += _ship_textures(mod, _sg_textures(sg))
    return out

def _write_readme(mod):
    p = os.path.join(mod, 'README.txt')
    if os.path.isfile(p): return
    open(p, 'w').write('Renegade Squadron mod made with the Maya tools.\nInstall: copy this folder to ux0:data/RS/mods/ (Vita) or <game folder>/mods/ (PC).\n'
                       'files/    replaced game files (same layout as the disc)\ntextures/ replaced textures (<key>.png, <key>_mr.png, <key>_n.png)\n')

def export_textures_only():
    """ship the textures of the selected objects (no geometry)"""
    mod = _mod_dir()
    if not mod: return
    for m in cmds.ls(sl=True, tr=True) or []: print('[RS] %s: %s' % (m, ', '.join(_ship_textures_all(mod, m)) or 'nothing changed'))
