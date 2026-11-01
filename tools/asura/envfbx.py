"""The level geometry (RSCF 'Env', see env.py) as an FBX 7.4 file for Maya (2025 and earlier), Blender, 3ds Max, and back.

Export (write): one mesh per level object (EMOD), named  o<object number>_<object name>; the object's strips drawn with blending
(the second texture layer, vertex alpha = blend weight) are a second mesh  o<number>_<name>__blend.  Every material of the map's
material list (MTRL) used by the geometry is a Lambert material named  m<material number>_<texture name>, its colour texture the
PNG the map tool wrote (../textures/...).  Per vertex: position, normal, UV, colour (RGBA).  Axes as the other tools: Y up (the
game's Y points down, so Y is mirrored and the winding reversed), 1 unit = 1 m.  Degenerate triangles (the strips' joins) are left out.

Import (read): every mesh of the file; the object comes from the mesh name's o<number> (a mesh without one joins the object whose
bounds are nearest), __blend in the name selects the blend layer, the material from the material name's m<number> (a material
without one: a new material for the texture it uses, see maptool), polygons are triangulated, transforms and units applied.
Result: the Env resource bytes and the per-object bounds."""
from __future__ import print_function
import struct, re, math, os
import env, fbxread
from pack import tris_to_strip

MAX_STRIP = 160                       # vertices per strip (the game's own are up to 175)

def _arr(vals, fmt): return ','.join(fmt % v for v in vals)
def _f(v):
    s = '%.9g' % v
    return s
def _name(s): return re.sub(r'[^A-Za-z0-9_]', '_', s)

def write(path, e, objects, materials):
    """e: env.parse() result; objects: [object name] (EMOD order); materials: {material number: (name, texture png path or None)}"""
    V = e['verts']; groups = {}
    for st in e['strips']:
        key = (st['flag'], st['layer'])
        for a, b, c in env.strip_tris(st['v0'], st['n']):
            pa, pb, pc = V[a][6:9], V[b][6:9], V[c][6:9]
            if pa == pb or pb == pc or pa == pc: continue
            groups.setdefault(key, []).append((a, c, b, st['mat']))                          # mirrored: reversed winding
    ids = iter(range(1000000, 100000000)); nid = lambda: next(ids)
    used_mats = sorted(set(t[3] for g in groups.values() for t in g))
    mat_id = dict((m, nid()) for m in used_mats); tex_id = {}; vid_id = {}
    for m in used_mats:
        if materials.get(m, (None, None))[1]: tex_id[m] = nid(); vid_id[m] = nid()
    L = []; o = L.append
    o('; FBX 7.4.0 project file\n; Star Wars Battlefront: Renegade Squadron (PSP) level geometry, exported by tools/asura/maptool.py\n'
      '; mesh o<N>_<name> = level object N (EMOD), __blend = its blended second-texture layer; material m<N>_<texture> = material N (MTRL)\n')
    o('FBXHeaderExtension:  {\n\tFBXHeaderVersion: 1003\n\tFBXVersion: 7400\n\tCreator: "SWBFRSDCBase tools/asura/maptool.py"\n}\n')
    o('GlobalSettings:  {\n\tVersion: 1000\n\tProperties70:  {\n\t\tP: "UpAxis", "int", "Integer", "",1\n\t\tP: "UpAxisSign", "int", "Integer", "",1\n'
      '\t\tP: "FrontAxis", "int", "Integer", "",2\n\t\tP: "FrontAxisSign", "int", "Integer", "",1\n\t\tP: "CoordAxis", "int", "Integer", "",0\n'
      '\t\tP: "CoordAxisSign", "int", "Integer", "",1\n\t\tP: "OriginalUpAxis", "int", "Integer", "",1\n\t\tP: "OriginalUpAxisSign", "int", "Integer", "",1\n'
      '\t\tP: "UnitScaleFactor", "double", "Number", "",100\n\t\tP: "OriginalUnitScaleFactor", "double", "Number", "",100\n\t}\n}\n')
    keys = sorted(groups)
    o('Definitions:  {\n\tVersion: 100\n\tCount: %d\n' % (1 + 2 * len(keys) + len(used_mats) + 2 * len(tex_id)))
    o('\tObjectType: "GlobalSettings" {\n\t\tCount: 1\n\t}\n\tObjectType: "Model" {\n\t\tCount: %d\n\t}\n\tObjectType: "Geometry" {\n\t\tCount: %d\n\t}\n' % (len(keys), len(keys)))
    o('\tObjectType: "Material" {\n\t\tCount: %d\n\t}\n' % len(used_mats))
    if tex_id: o('\tObjectType: "Texture" {\n\t\tCount: %d\n\t}\n\tObjectType: "Video" {\n\t\tCount: %d\n\t}\n' % (len(tex_id), len(tex_id)))
    o('}\nObjects:  {\n')
    conns = []; mesh_of = {}
    for key in keys:
        obj, layer = key; tris = groups[key]
        nm = 'o%03d_%s%s' % (obj, _name(objects[obj]) if obj < len(objects) else 'object', '__blend' if layer else '')
        used = sorted(set(x for t in tris for x in t[:3])); mp = dict((x, i) for i, x in enumerate(used))
        mats = sorted(set(t[3] for t in tris)); mi = dict((m, i) for i, m in enumerate(mats))
        pos = []; nrm = []; uv = []; col = []
        for x in used:
            u, v, c, nx, ny, nz, px, py, pz = V[x]
            pos += [px, -py, pz]; nrm += [nx, -ny, nz]; uv += [u, 1.0 - v]
            vt = 0x1DA if layer else 0x1D2; cc = env.colour(vt, c); col += [cc[0] / 255.0, cc[1] / 255.0, cc[2] / 255.0, cc[3] / 255.0]
        pvi = []; cidx = []
        for a, b, c, m in tris: pvi += [mp[a], mp[b], -mp[c] - 1]; cidx += [mp[a], mp[b], mp[c]]
        g, mdl = nid(), nid(); mesh_of[key] = mdl
        o('\tGeometry: %d, "Geometry::%s", "Mesh" {\n\t\tVertices: *%d {\n\t\t\ta: %s\n\t\t}\n' % (g, nm, len(pos), _arr(pos, '%.9g')))
        o('\t\tPolygonVertexIndex: *%d {\n\t\t\ta: %s\n\t\t}\n\t\tGeometryVersion: 124\n' % (len(pvi), _arr(pvi, '%d')))
        o('\t\tLayerElementNormal: 0 {\n\t\t\tVersion: 101\n\t\t\tName: ""\n\t\t\tMappingInformationType: "ByPolygonVertex"\n\t\t\tReferenceInformationType: "Direct"\n'
          '\t\t\tNormals: *%d {\n\t\t\t\ta: %s\n\t\t\t}\n\t\t}\n' % (3 * len(cidx), _arr([nrm[3 * i + k] for i in cidx for k in range(3)], '%.9g')))
        o('\t\tLayerElementColor: 0 {\n\t\t\tVersion: 101\n\t\t\tName: "colorSet1"\n\t\t\tMappingInformationType: "ByPolygonVertex"\n\t\t\tReferenceInformationType: "IndexToDirect"\n'
          '\t\t\tColors: *%d {\n\t\t\t\ta: %s\n\t\t\t}\n\t\t\tColorIndex: *%d {\n\t\t\t\ta: %s\n\t\t\t}\n\t\t}\n' % (len(col), _arr(col, '%.9g'), len(cidx), _arr(cidx, '%d')))
        o('\t\tLayerElementUV: 0 {\n\t\t\tVersion: 101\n\t\t\tName: "map1"\n\t\t\tMappingInformationType: "ByPolygonVertex"\n\t\t\tReferenceInformationType: "IndexToDirect"\n'
          '\t\t\tUV: *%d {\n\t\t\t\ta: %s\n\t\t\t}\n\t\t\tUVIndex: *%d {\n\t\t\t\ta: %s\n\t\t\t}\n\t\t}\n' % (len(uv), _arr(uv, '%.9g'), len(cidx), _arr(cidx, '%d')))
        o('\t\tLayerElementMaterial: 0 {\n\t\t\tVersion: 101\n\t\t\tName: ""\n\t\t\tMappingInformationType: "ByPolygon"\n\t\t\tReferenceInformationType: "IndexToDirect"\n'
          '\t\t\tMaterials: *%d {\n\t\t\t\ta: %s\n\t\t\t}\n\t\t}\n' % (len(tris), _arr([mi[t[3]] for t in tris], '%d')))
        o('\t\tLayer: 0 {\n\t\t\tVersion: 100\n')
        for t in ('LayerElementNormal', 'LayerElementColor', 'LayerElementUV', 'LayerElementMaterial'):
            o('\t\t\tLayerElement:  {\n\t\t\t\tType: "%s"\n\t\t\t\tTypedIndex: 0\n\t\t\t}\n' % t)
        o('\t\t}\n\t}\n')
        o('\tModel: %d, "Model::%s", "Mesh" {\n\t\tVersion: 232\n\t\tProperties70:  {\n\t\t\tP: "DefaultAttributeIndex", "int", "Integer", "",0\n'
          '\t\t}\n\t\tShading: T\n\t\tCulling: "CullingOff"\n\t}\n' % (mdl, nm))
        conns.append((mdl, 0, None)); conns.append((g, mdl, None))
        for m in mats: conns.append((mat_id[m], mdl, None))
    for m in used_mats:
        nm, png = materials.get(m, ('mat', None))
        o('\tMaterial: %d, "Material::%s", "" {\n\t\tVersion: 102\n\t\tShadingModel: "lambert"\n\t\tMultiLayer: 0\n\t\tProperties70:  {\n'
          '\t\t\tP: "DiffuseColor", "Color", "", "A",1,1,1\n\t\t\tP: "Diffuse", "Vector3D", "Vector", "",1,1,1\n\t\t}\n\t}\n' % (mat_id[m], nm))
        if m in tex_id:
            ab = png.replace('\\', '/')
            o('\tVideo: %d, "Video::%s_img", "Clip" {\n\t\tType: "Clip"\n\t\tProperties70:  {\n\t\t\tP: "Path", "KString", "XRefUrl", "", "%s"\n\t\t}\n'
              '\t\tUseMipMap: 0\n\t\tFilename: "%s"\n\t\tRelativeFilename: "%s"\n\t}\n' % (vid_id[m], nm, ab, ab, ab))
            o('\tTexture: %d, "Texture::%s_tex", "" {\n\t\tType: "TextureVideoClip"\n\t\tVersion: 202\n\t\tTextureName: "Texture::%s_tex"\n'
              '\t\tMedia: "Video::%s_img"\n\t\tFileName: "%s"\n\t\tRelativeFilename: "%s"\n\t\tModelUVTranslation: 0,0\n\t\tModelUVScaling: 1,1\n'
              '\t\tTexture_Alpha_Source: "None"\n\t\tCropping: 0,0,0,0\n\t}\n' % (tex_id[m], nm, nm, nm, ab, ab))
            conns.append((tex_id[m], mat_id[m], 'DiffuseColor')); conns.append((vid_id[m], tex_id[m], None))
    o('}\nConnections:  {\n')
    for a, b, p in conns: o('\tC: "OO",%d,%d\n' % (a, b) if not p else '\tC: "OP",%d,%d, "%s"\n' % (a, b, p))
    o('}\n')
    with open(path, 'w') as f: f.write(''.join(L))

# ------------------------------------------------------------------ import
def _q(v, lo, hi): return lo if v < lo else (hi if v > hi else v)
def _enc565(c): return (int(round(_q(c[0], 0, 1) * 31))) | (int(round(_q(c[1], 0, 1) * 63)) << 5) | (int(round(_q(c[2], 0, 1) * 31)) << 11)
def _enc4444(c): return sum(int(round(_q(c[k], 0, 1) * 15)) << (4 * k) for k in range(4))
def _s16(v): return int(_q(round(v * 32768.0), -32768, 32767))
def _uv(v): return int(_q(round(v * 256.0), -32768, 32767))

def read(path, nobjects, bounds, material_for):
    """-> (Env bytes, {object: [minx, miny, minz, maxx, maxy, maxz] of its new geometry (game axes)}, warnings)
    bounds: {object: (centre x, y, z)} to place meshes that do not name an object;
    material_for(fbx material name, texture path or None) -> material number (maptool adds new materials)"""
    sc = fbxread.load(path); unit = sc['unit']; up = sc['up']; warn = []
    groups = {}                      # (object, layer, material) -> [(corner, corner, corner)]
    corners = {}; clist = []
    for me in sc['meshes']:
        nm = (me['model'] or me['name']).split(':')[-1]
        m = re.match(r'o(\d+)', nm); layer = '__blend' in nm
        M = me['matrix']; pos = [fbxread.transform(M, p) for p in me['pos']]
        ident = all(abs(M[i][j] - (1.0 if i == j else 0.0)) < 1e-9 for i in range(3) for j in range(3)) and up != 2
        def game(p):
            x, y, z = (p[0] * unit, p[1] * unit, p[2] * unit)
            if up == 2: x, y, z = x, z, -y
            return (x, -y, z)
        gp = [game(p) for p in pos]
        if m and int(m.group(1)) < nobjects: obj = int(m.group(1))
        else:
            if not gp: continue
            c = [sum(p[k] for p in gp) / len(gp) for k in range(3)]
            obj = min(bounds, key=lambda i: sum((bounds[i][k] - c[k]) ** 2 for k in range(3)))
            warn.append('mesh %s has no o<number> in its name: added to object %d (the nearest)' % (nm, obj))
        mats = [material_for(n, me.get('textures', {}).get(n)) for n in me['materials']] or [material_for('', None)]
        k = 0
        for pi, poly in enumerate(me['polys']):
            cs = []
            for j, v in enumerate(poly):
                nn = me['normals'][k + j] if me['normals'] else None
                if nn is not None:
                    n = fbxread.transform(M, nn, 0.0)
                    if up == 2: n = (n[0], n[2], -n[1])
                    if ident: n = (n[0], -n[1], n[2])                                              # as stored (the game's are not all unit length)
                    else: l = math.sqrt(sum(a * a for a in n)) or 1.0; n = (n[0] / l, -n[1] / l, n[2] / l)
                else: n = (0.0, -1.0, 0.0)
                uv = me['uvs'][k + j] if me['uvs'] else None; uv = uv or (0.0, 0.0)
                col = me['colors'][k + j] if me['colors'] else None; col = col or (1.0, 1.0, 1.0, 1.0)
                if len(col) < 4: col = tuple(col) + (1.0,)
                vt = 0x1DA if layer else 0x1D2
                cenc = _enc4444(col) if layer else _enc565(col)
                p = gp[v]
                key = (_uv(uv[0]), _uv(1.0 - uv[1]), cenc, _s16(n[0]), _s16(n[1]), _s16(n[2]),
                       struct.unpack('<f', struct.pack('<f', p[0]))[0], struct.unpack('<f', struct.pack('<f', p[1]))[0], struct.unpack('<f', struct.pack('<f', p[2]))[0])
                ci = corners.get(key)
                if ci is None: ci = corners[key] = len(clist); clist.append(key)
                cs.append(ci)
            k += len(poly)
            mat = mats[me['mat'][pi]] if me['mat'] and me['mat'][pi] < len(mats) else mats[0]
            for j in range(1, len(cs) - 1):
                tri = (cs[0], cs[j + 1], cs[j])                                                       # mirrored back: reversed winding
                if len(set(clist[x][6:9] for x in tri)) < 3: continue
                groups.setdefault((obj, layer, mat), []).append(tri)
    # strips: opaque first, then the blend layer; each run of vertices is the strip's own copy
    strips = []; verts = []; newb = {}
    for layer in (False, True):
        for key in sorted(k for k in groups if k[1] == layer):
            obj, _, mat = key; s = tris_to_strip(groups[key])
            b = newb.setdefault(obj, [1e30, 1e30, 1e30, -1e30, -1e30, -1e30])
            for x in set(s):
                p = clist[x][6:9]
                for a in range(3): b[a] = min(b[a], p[a]); b[a + 3] = max(b[a + 3], p[a])
            i = 0
            while i < len(s) - 2:
                piece = s[i:i + MAX_STRIP]
                strips.append(((0x1DA if layer else 0x1D2), len(piece), len(verts), mat, obj))
                verts += [clist[x] for x in piece]
                i += MAX_STRIP - 2                                                                      # keep even: same winding
    nopq = sum(1 for st in strips if st[0] == 0x1D2); nlay = len(strips) - nopq
    out = bytearray(struct.pack('<5I', nobjects, nopq, nlay, len(verts), 0))
    for vt, n, v0, mat, obj in strips: out += struct.pack('<5I', (vt << 16) | n, v0, v0, mat & 0xFFFFFFFF, obj)
    for u, v, c, nx, ny, nz, x, y, z in verts: out += struct.pack('<hhH3h3f', u, v, c, nx, ny, nz, x, y, z)
    return bytes(out), newb, warn
