"""FBX reader (binary 7.x as Maya / Blender / 3ds Max save it, and ASCII 7.x) for the map tool: meshes with their transforms,
normals, UVs, vertex colours, per-polygon materials, and skin clusters.  Python 2.7 and 3.x, no extra modules.

  load(path) -> {'unit': metres per file unit, 'up': up axis (0 x, 1 y, 2 z), 'meshes': [mesh, ...]}
  mesh: {'name', 'model' (the Model node's name), 'matrix' (4x4 row-major, file units, the mesh's world transform),
         'pos': [(x, y, z)], 'polys': [[vertex index, ...]], 'normals' / 'uvs' / 'colors': per polygon corner (lists, may be None),
         'mat': per polygon material index (or None), 'materials': [material name], 'textures': {material name: texture file
         (relative as stored), material name + '\\0abs': absolute}, 'clusters': {joint name: {vertex: weight}}}"""
from __future__ import print_function
import struct, zlib, math, re

# ------------------------------------------------------------------ nodes
class Node(object):
    __slots__ = ('name', 'props', 'children')
    def __init__(self, name, props=None, children=None): self.name = name; self.props = props or []; self.children = children or []
    def find(self, name):
        for c in self.children:
            if c.name == name: return c
        return None
    def findall(self, name): return [c for c in self.children if c.name == name]
    def __repr__(self): return 'Node(%s, %r, %d children)' % (self.name, self.props[:3], len(self.children))

def _read_binary(d):
    ver = struct.unpack_from('<I', d, 23)[0]; big = ver >= 7500
    def node(p):
        if big: end, nprop, plen = struct.unpack_from('<QQQ', d, p); p += 24
        else: end, nprop, plen = struct.unpack_from('<III', d, p); p += 12
        if end == 0: return None, p
        nl = bytearray(d[p:p + 1])[0]; name = d[p + 1:p + 1 + nl].decode('latin1'); p += 1 + nl
        props = []
        for _ in range(nprop):
            t = d[p:p + 1]; p += 1
            if t == b'Y': props.append(struct.unpack_from('<h', d, p)[0]); p += 2
            elif t == b'C': props.append(bool(bytearray(d[p:p + 1])[0])); p += 1
            elif t == b'I': props.append(struct.unpack_from('<i', d, p)[0]); p += 4
            elif t == b'F': props.append(struct.unpack_from('<f', d, p)[0]); p += 4
            elif t == b'D': props.append(struct.unpack_from('<d', d, p)[0]); p += 8
            elif t == b'L': props.append(struct.unpack_from('<q', d, p)[0]); p += 8
            elif t in (b'f', b'd', b'l', b'i', b'b'):
                n, enc, cl = struct.unpack_from('<III', d, p); p += 12; raw = d[p:p + cl]; p += cl
                if enc == 1: raw = zlib.decompress(raw)
                fmt = {b'f': 'f', b'd': 'd', b'l': 'q', b'i': 'i', b'b': 'B'}[t]
                props.append(list(struct.unpack('<%d%s' % (n, fmt), raw)))
            elif t in (b'S', b'R'):
                n = struct.unpack_from('<I', d, p)[0]; p += 4; raw = d[p:p + n]; p += n
                props.append(raw.decode('latin1').replace('\x00\x01', '::') if t == b'S' else raw)
            else: raise ValueError('FBX: unknown property type %r' % t)
        kids = []
        while p < end:
            k, p2 = node(p)
            if k is None: p = p2; break
            kids.append(k); p = p2
        return Node(name, props, kids), end
    root = Node('root'); p = 27
    while p < len(d) - 13:
        n, p2 = node(p)
        if n is None: break
        root.children.append(n); p = p2
    return root

_TOK = re.compile(r'\s*(?:(;[^\n]*)|("(?:[^"\\]|\\.)*")|([A-Za-z_][A-Za-z0-9_|]*\s*:)|(\{)|(\})|(,)|([^\s,{}"]+))')
def _read_ascii(text):
    toks = []
    for m in _TOK.finditer(text):
        if m.group(1): continue
        if m.group(2) is not None: toks.append(('s', m.group(2)[1:-1]))
        elif m.group(3): toks.append(('k', m.group(3)[:-1].strip()))
        elif m.group(4): toks.append(('{', None))
        elif m.group(5): toks.append(('}', None))
        elif m.group(6): toks.append((',', None))
        else: toks.append(('v', m.group(7)))
    pos = [0]
    def val(t, v):
        if t == 's': return v
        if v.startswith('*'): return ('count', int(v[1:]))
        try: return int(v)
        except ValueError:
            try: return float(v)
            except ValueError: return v
    def parse_children():
        kids = []
        while pos[0] < len(toks):
            t, v = toks[pos[0]]
            if t == '}': pos[0] += 1; break
            if t != 'k': pos[0] += 1; continue
            pos[0] += 1; node = Node(v); props = []
            while pos[0] < len(toks):
                t2, v2 = toks[pos[0]]
                if t2 in ('s', 'v'): props.append(val(t2, v2)); pos[0] += 1
                elif t2 == ',': pos[0] += 1
                else: break
            if pos[0] < len(toks) and toks[pos[0]][0] == '{':
                pos[0] += 1; node.children = parse_children()
            if props and isinstance(props[0], tuple) and props[0][0] == 'count':      # array: *N { a: v,v,v }
                a = node.find('a'); node.props = [a.props if a else []]; node.children = []
            else: node.props = props
            kids.append(node)
        return kids
    return Node('root', [], parse_children())

def read(path):
    d = open(path, 'rb').read()
    if d[:20] == b'Kaydara FBX Binary  ': return _read_binary(d)
    return _read_ascii(d.decode('latin1'))

# ------------------------------------------------------------------ scene
def _props70(node):
    out = {}
    p = node.find('Properties70') if node else None
    for c in (p.children if p else []):
        if c.name == 'P' and c.props: out[c.props[0]] = c.props[4:]
    return out
def _mat_mul(a, b): return [[sum(a[i][k] * b[k][j] for k in range(4)) for j in range(4)] for i in range(4)]
def _tr(t): return [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [t[0], t[1], t[2], 1]]
def _sc(s): return [[s[0], 0, 0, 0], [0, s[1], 0, 0], [0, 0, s[2], 0], [0, 0, 0, 1]]
def _rot(r, order=0):
    """Euler degrees, FBX row-vector convention, order XYZ (Maya's default): v' = v Rx Ry Rz"""
    rx, ry, rz = [math.radians(a) for a in r]
    cx, sx, cy, sy, cz, sz = math.cos(rx), math.sin(rx), math.cos(ry), math.sin(ry), math.cos(rz), math.sin(rz)
    X = [[1, 0, 0, 0], [0, cx, sx, 0], [0, -sx, cx, 0], [0, 0, 0, 1]]
    Y = [[cy, 0, -sy, 0], [0, 1, 0, 0], [sy, 0, cy, 0], [0, 0, 0, 1]]
    Z = [[cz, sz, 0, 0], [-sz, cz, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]]
    return _mat_mul(_mat_mul(X, Y), Z)
def _local(model):
    p = _props70(model); g = lambda k, d: [float(x) for x in p.get(k, d)][:3] if k in p else d
    T = g('Lcl Translation', [0, 0, 0]); R = g('Lcl Rotation', [0, 0, 0]); S = g('Lcl Scaling', [1, 1, 1])
    pre = g('PreRotation', [0, 0, 0]); post = g('PostRotation', [0, 0, 0])
    rp = g('RotationPivot', [0, 0, 0]); sp = g('ScalingPivot', [0, 0, 0]); ro = g('RotationOffset', [0, 0, 0]); so = g('ScalingOffset', [0, 0, 0])
    # FBX: T * Roff * Rp * Rpre * R * Rpost^-1 * Rp^-1 * Soff * Sp * S * Sp^-1  (column form); row-vector form is the reverse product
    m = _tr([-x for x in sp]); m = _mat_mul(m, _sc(S)); m = _mat_mul(m, _tr(sp)); m = _mat_mul(m, _tr(so)); m = _mat_mul(m, _tr([-x for x in rp]))
    postm = _rot(post); postinv = [[postm[j][i] for j in range(4)] for i in range(4)]
    m = _mat_mul(m, postinv); m = _mat_mul(m, _rot(R)); m = _mat_mul(m, _rot(pre)); m = _mat_mul(m, _tr(rp)); m = _mat_mul(m, _tr(ro)); m = _mat_mul(m, _tr(T))
    gt = g('GeometricTranslation', [0, 0, 0]); gr = g('GeometricRotation', [0, 0, 0]); gs = g('GeometricScaling', [1, 1, 1])
    geo = _mat_mul(_mat_mul(_sc(gs), _rot(gr)), _tr(gt))
    return m, geo

def _layer(geo, kind, key, idxkey, n_corners, poly_of_corner, vert_of_corner, width):
    el = geo.find(kind)
    if el is None: return None
    data = el.find(key); data = data.props[0] if data and data.props else []
    idx = el.find(idxkey); idx = idx.props[0] if idx and idx.props else None
    mapping = (el.find('MappingInformationType').props[0] if el.find('MappingInformationType') else 'ByPolygonVertex')
    ref = (el.find('ReferenceInformationType').props[0] if el.find('ReferenceInformationType') else 'Direct')
    vals = [tuple(data[i * width:(i + 1) * width]) for i in range(len(data) // width)]
    out = []
    for c in range(n_corners):
        if mapping in ('ByPolygonVertex',): k = c
        elif mapping in ('ByVertice', 'ByVertex', 'ByControlPoint'): k = vert_of_corner[c]
        elif mapping == 'ByPolygon': k = poly_of_corner[c]
        else: k = 0
        if ref in ('IndexToDirect', 'Index') and idx is not None: k = idx[k] if k < len(idx) else 0
        out.append(vals[k] if 0 <= k < len(vals) else None)
    return out

def load(path):
    root = read(path)
    gs = _props70(root.find('GlobalSettings')); unit = float(gs.get('UnitScaleFactor', [1])[0]) / 100.0
    up = int(gs.get('UpAxis', [1])[0])
    objs = root.find('Objects'); conns = root.find('Connections')
    byid = {}
    for o in (objs.children if objs else []):
        if o.props: byid[o.props[0]] = o
    parent = {}; children = {}
    for c in (conns.children if conns else []):
        if c.name == 'C' and len(c.props) >= 3:
            a, b = c.props[1], c.props[2]; parent.setdefault(a, []).append(b); children.setdefault(b, []).append(a)
    def nm(o): return str(o.props[1]).split('::')[-1] if o and len(o.props) > 1 else ''
    def kind(o): return o.props[2] if o and len(o.props) > 2 else ''
    def world(mid):
        m = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]]; chain = []
        while mid in byid and byid[mid].name == 'Model':
            chain.append(mid); ps = [p for p in parent.get(mid, []) if p in byid and byid[p].name == 'Model']; mid = ps[0] if ps else None
        for x in chain: m = _mat_mul(m, _local(byid[x])[0])
        return m
    meshes = []
    for gid, g in byid.items():
        if g.name != 'Geometry' or kind(g) != 'Mesh': continue
        models = [p for p in parent.get(gid, []) if p in byid and byid[p].name == 'Model']
        model = byid[models[0]] if models else None
        verts = g.find('Vertices'); verts = verts.props[0] if verts and verts.props else []
        pos = [tuple(verts[i * 3:i * 3 + 3]) for i in range(len(verts) // 3)]
        pvi = g.find('PolygonVertexIndex'); pvi = pvi.props[0] if pvi and pvi.props else []
        polys = []; cur = []; poly_of = []; vert_of = []
        for x in pvi:
            if x < 0: cur.append(-x - 1); polys.append(cur); cur = []
            else: cur.append(x)
        for i, pl in enumerate(polys):
            for v in pl: poly_of.append(i); vert_of.append(v)
        nc = len(vert_of)
        normals = _layer(g, 'LayerElementNormal', 'Normals', 'NormalsIndex', nc, poly_of, vert_of, 3)
        uvs = _layer(g, 'LayerElementUV', 'UV', 'UVIndex', nc, poly_of, vert_of, 2)
        colors = _layer(g, 'LayerElementColor', 'Colors', 'ColorIndex', nc, poly_of, vert_of, 4)
        mat = None; me = g.find('LayerElementMaterial')
        if me is not None:
            mm = me.find('Materials'); mm = mm.props[0] if mm and mm.props else [0]
            mt = me.find('MappingInformationType').props[0] if me.find('MappingInformationType') else 'AllSame'
            mat = [mm[i] if mt == 'ByPolygon' and i < len(mm) else (mm[0] if mm else 0) for i in range(len(polys))]
        mats = []; texs = {}
        if model is not None:
            for c in children.get(model.props[0], []):
                if c in byid and byid[c].name == 'Material':
                    mats.append(nm(byid[c]))
                    for t in children.get(c, []):
                        tn = byid.get(t)
                        if tn is not None and tn.name == 'Texture':
                            f = tn.find('RelativeFilename') or tn.find('FileName')
                            if f is not None and f.props and f.props[0]: texs.setdefault(nm(byid[c]), str(f.props[0]))
                            f2 = tn.find('FileName')
                            if f2 is not None and f2.props and f2.props[0]: texs.setdefault(nm(byid[c]) + '\0abs', str(f2.props[0]))
        m = world(model.props[0]) if model is not None else [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]]
        if model is not None: m = _mat_mul(_local(model)[1], m)
        clusters = {}
        for skin in [c for c in children.get(gid, []) if c in byid and kind(byid[c]) == 'Skin']:
            for cl in [c for c in children.get(skin, []) if c in byid and kind(byid[c]) == 'Cluster']:
                node = byid[cl]; ix = node.find('Indexes'); wt = node.find('Weights')
                joints = [c for c in children.get(cl, []) if c in byid and byid[c].name == 'Model']
                jn = nm(byid[joints[0]]) if joints else nm(node)
                if ix and ix.props: clusters[jn] = dict(zip(ix.props[0], wt.props[0] if wt and wt.props else [1.0] * len(ix.props[0])))
        meshes.append({'name': nm(g), 'model': nm(model) if model is not None else nm(g), 'matrix': m, 'pos': pos, 'polys': polys,
                       'normals': normals, 'uvs': uvs, 'colors': colors, 'mat': mat, 'materials': mats, 'textures': texs, 'clusters': clusters})
    return {'unit': unit, 'up': up, 'meshes': meshes}

def transform(m, p, w=1.0):
    x, y, z = p
    return tuple(x * m[0][i] + y * m[1][i] + z * m[2][i] + w * m[3][i] for i in range(3))
