"""SWBF1 / SWBF2 .msh reader (Pandemic's mesh format, as written by the XSI exporter and by swbf-unmunge).

Chunks are [4CC, u32 size, data, padded to 4].  HEDR > MSH2 > (MATL > MATD..., MODL...).
  MATD:  NAME, DATA (diffuse rgba, specular rgba, ambient rgba, f32 sharpness), ATRB (u8 flags, u8 render type, u8 data0, u8 data1),
         TX0D..TX3D (texture names: 0 = diffuse)
  MODL:  MTYP (0 null, 1 skinned, 3 envelope, 4 static, 6 shadow volume), MNDX, NAME, PRNT, FLGS (1 = hidden),
         TRAN (scale xyz, rotation quaternion xyzw, translation xyz), GEOM > SEGM (MATI, POSL, NRML, UV0L, CLRL / CLRB, NDXT, STRP),
         SWCI (collision primitive: type 0 sphere, 1 ?, 2 cylinder, 4 box; then 3 floats: box half extents, or radius/height)
Result: list of models {name, parent, type, hidden, matrix (local 4x4), world (4x4), segments [{mat, pos, nrm, uv, col, tris}], prim}
and materials [{name, texture, flags, rendertype}]."""
import struct, math

CONTAINERS = (b'HEDR', b'MSH2', b'MATL', b'MATD', b'MODL', b'GEOM', b'SEGM', b'SKL2', b'BLN2', b'ANM2', b'CLTH')

def _chunks(d, o, end):
    while o + 8 <= end:
        t = d[o:o + 4]; n = struct.unpack_from('<I', d, o + 4)[0]
        if n > end - o - 8: n = end - o - 8
        yield t, o + 8, n
        o += 8 + n + ((4 - n % 4) % 4)

def _str(b): return b.split(b'\0')[0].decode('latin1')

def quat_mat(x, y, z, w):
    n = math.sqrt(x * x + y * y + z * z + w * w) or 1.0; x, y, z, w = x / n, y / n, z / n, w / n
    return [[1 - 2 * (y * y + z * z), 2 * (x * y - z * w), 2 * (x * z + y * w)],
            [2 * (x * y + z * w), 1 - 2 * (x * x + z * z), 2 * (y * z - x * w)],
            [2 * (x * z - y * w), 2 * (y * z + x * w), 1 - 2 * (x * x + y * y)]]

def mat4(rot3, t, s=(1, 1, 1)):
    return [[rot3[0][0] * s[0], rot3[0][1] * s[1], rot3[0][2] * s[2], t[0]],
            [rot3[1][0] * s[0], rot3[1][1] * s[1], rot3[1][2] * s[2], t[1]],
            [rot3[2][0] * s[0], rot3[2][1] * s[1], rot3[2][2] * s[2], t[2]],
            [0, 0, 0, 1]]

def mul(a, b): return [[sum(a[i][k] * b[k][j] for k in range(4)) for j in range(4)] for i in range(4)]
IDENT = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]]
def xform(m, p, w=1.0): return tuple(m[i][0] * p[0] + m[i][1] * p[1] + m[i][2] * p[2] + m[i][3] * w for i in range(3))

def _strip_tris(idx):
    """STRP: u16 indices; a strip starts where two indices carry the 0x8000 flag"""
    tris = []; cur = []
    i = 0
    while i < len(idx):
        if idx[i] & 0x8000 and i + 1 < len(idx) and idx[i + 1] & 0x8000:
            cur = [idx[i] & 0x7FFF, idx[i + 1] & 0x7FFF]; i += 2; continue
        cur.append(idx[i] & 0x7FFF); i += 1
        if len(cur) >= 3:
            a, b, c = cur[-3], cur[-2], cur[-1]
            if (len(cur) - 3) % 2 == 0: tris.append((a, b, c))
            else: tris.append((b, a, c))
    return [t for t in tris if len(set(t)) == 3]

def _segm(d, o, end):
    s = {'mat': 0, 'pos': [], 'nrm': [], 'uv': [], 'col': [], 'tris': [], 'colour': None}
    strp = None
    for t, p, n in _chunks(d, o, end):
        if t == b'MATI': s['mat'] = struct.unpack_from('<I', d, p)[0]
        elif t == b'POSL':
            c = struct.unpack_from('<I', d, p)[0]; s['pos'] = [struct.unpack_from('<3f', d, p + 4 + 12 * i) for i in range(c)]
        elif t == b'NRML':
            c = struct.unpack_from('<I', d, p)[0]; s['nrm'] = [struct.unpack_from('<3f', d, p + 4 + 12 * i) for i in range(c)]
        elif t == b'UV0L':
            c = struct.unpack_from('<I', d, p)[0]; s['uv'] = [struct.unpack_from('<2f', d, p + 4 + 8 * i) for i in range(c)]
        elif t == b'CLRL':
            c = struct.unpack_from('<I', d, p)[0]
            s['col'] = [tuple(x / 255.0 for x in (d[p + 4 + 4 * i + 2], d[p + 4 + 4 * i + 1], d[p + 4 + 4 * i], d[p + 4 + 4 * i + 3])) for i in range(c)]   # BGRA
        elif t == b'CLRB':
            s['colour'] = (d[p + 2] / 255.0, d[p + 1] / 255.0, d[p] / 255.0, d[p + 3] / 255.0)
        elif t == b'NDXT':
            c = struct.unpack_from('<I', d, p)[0]; s['tris'] = [struct.unpack_from('<3H', d, p + 4 + 6 * i) for i in range(c)]
        elif t == b'STRP':
            c = struct.unpack_from('<I', d, p)[0]; strp = list(struct.unpack_from('<%dH' % c, d, p + 4))
    if not s['tris'] and strp: s['tris'] = _strip_tris(strp)
    if s['colour'] and not s['col']: s['col'] = [s['colour']] * len(s['pos'])
    return s

def load(path):
    d = open(path, 'rb').read()
    out = {'materials': [], 'models': []}
    def walk(o, end):
        for t, p, n in _chunks(d, o, end):
            if t in (b'HEDR', b'MSH2'): walk(p, p + n)
            elif t == b'MATL':
                for t2, p2, n2 in _chunks(d, p + 4, p + n):
                    if t2 != b'MATD': continue
                    m = {'name': '', 'texture': '', 'flags': 0, 'rendertype': 0, 'diffuse': (1, 1, 1, 1)}
                    for t3, p3, n3 in _chunks(d, p2, p2 + n2):
                        if t3 == b'NAME': m['name'] = _str(d[p3:p3 + n3])
                        elif t3 == b'TX0D': m['texture'] = _str(d[p3:p3 + n3])
                        elif t3 == b'ATRB': m['flags'], m['rendertype'] = d[p3], d[p3 + 1]
                        elif t3 == b'DATA' and n3 >= 16: m['diffuse'] = struct.unpack_from('<4f', d, p3)
                    out['materials'].append(m)
            elif t == b'MODL':
                m = {'name': '', 'parent': '', 'type': 0, 'hidden': False, 'segments': [], 'prim': None,
                     'scale': (1, 1, 1), 'rot': (0, 0, 0, 1), 'trans': (0, 0, 0)}
                for t2, p2, n2 in _chunks(d, p, p + n):
                    if t2 == b'MTYP': m['type'] = struct.unpack_from('<I', d, p2)[0]
                    elif t2 == b'NAME': m['name'] = _str(d[p2:p2 + n2])
                    elif t2 == b'PRNT': m['parent'] = _str(d[p2:p2 + n2])
                    elif t2 == b'FLGS': m['hidden'] = bool(struct.unpack_from('<I', d, p2)[0] & 1)
                    elif t2 == b'TRAN' and n2 >= 40:
                        v = struct.unpack_from('<10f', d, p2); m['scale'], m['rot'], m['trans'] = v[0:3], v[3:7], v[7:10]
                    elif t2 == b'GEOM':
                        for t3, p3, n3 in _chunks(d, p2, p2 + n2):
                            if t3 == b'SEGM': m['segments'].append(_segm(d, p3, p3 + n3))
                    elif t2 == b'SWCI' and n2 >= 16: m['prim'] = struct.unpack_from('<I3f', d, p2)
                out['models'].append(m)
    walk(0, len(d))
    byname = dict((m['name'].lower(), m) for m in out['models'])
    for m in out['models']:
        m['matrix'] = mat4(quat_mat(*m['rot']), m['trans'], m['scale'])
    def world(m, depth=0):
        if 'world' in m: return m['world']
        p = byname.get(m['parent'].lower()) if m['parent'] else None
        m['world'] = mul(world(p, depth + 1), m['matrix']) if p is not None and p is not m and depth < 32 else m['matrix']
        return m['world']
    for m in out['models']: world(m)
    return out

SKIP_PARTS = ('terraincutter', 'shadowvolume', 'sv_', 'hp_', 'lowrez', 'lowres', '_lod', 'lod1', 'lod2', 'fx_', 'dummyroot', 'bone_', 'root_')
def classify(m):
    """'render', 'collision', 'prim' or None for one model of a mesh"""
    n = m['name'].lower()
    if m['prim'] is not None and n.startswith('p_'): return 'prim'
    if 'collision' in n: return 'collision'
    if m['type'] == 6 or any(s in n for s in SKIP_PARTS): return None
    if m['hidden'] or not m['segments']: return None
    return 'render'
