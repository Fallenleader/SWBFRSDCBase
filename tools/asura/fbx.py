"""FBX 7.4 ASCII writer for the Asura rigid models (model.py) with their skeleton (skeleton.py): one mesh, one joint per bone
(LimbNode, bind pose = the skeleton's), and a skin with one cluster per bone in which the vertices of the part riding that bone have
weight 1 (the PSP models are rigid: each part follows exactly one bone).  Opens in Maya, Blender, 3ds Max, MotionBuilder.
Axes: as the OBJ export, Y up (the game's Y points down: positions, normals and joints are mirrored in Y, winding reversed); 1 unit = 1 m."""
import math
from skeleton import qrot, world

def _mirror_q(q): return (-q[0], q[1], -q[2], q[3])           # reflection y -> -y applied to a rotation
def _qmat(q):
    x, y, z, w = q
    return [[1 - 2*(y*y + z*z), 2*(x*y - z*w), 2*(x*z + y*w)],
            [2*(x*y + z*w), 1 - 2*(x*x + z*z), 2*(y*z - x*w)],
            [2*(x*z - y*w), 2*(y*z + x*w), 1 - 2*(x*x + y*y)]]
def _euler_xyz(q):
    """FBX rotation order XYZ (R = Rz * Ry * Rx), degrees"""
    m = _qmat(q); sy = -m[2][0]; sy = max(-1.0, min(1.0, sy)); ry = math.asin(sy)
    if abs(sy) < 0.99999: rx = math.atan2(m[2][1], m[2][2]); rz = math.atan2(m[1][0], m[0][0])
    else: rx = math.atan2(-m[1][2], m[1][1]); rz = 0.0
    return tuple(math.degrees(a) for a in (rx, ry, rz))
def _mat4(q, t):
    """column-major 4x4 (FBX matrices are row vectors: rows = basis axes, last row = translation)"""
    m = _qmat(q)
    return [m[0][0], m[1][0], m[2][0], 0, m[0][1], m[1][1], m[2][1], 0, m[0][2], m[1][2], m[2][2], 0, t[0], t[1], t[2], 1]
def _arr(vals, fmt='%.6f'): return ','.join(fmt % v if isinstance(v, float) else str(v) for v in vals)

def write(path, name, m, sk, texture_png=None, strip_tris=None):
    """m: model.parse() result, sk: skeleton.parse() result (or None: one joint per part at the origin)"""
    import model as _model
    strip_tris = strip_tris or _model.strip_tris
    nb = len(m['parts'])
    bones = sk['bones'] if sk else [{'parent': -1, 't': (0, 0, 0), 'q': (0, 0, 0, 1)} for _ in range(nb)]
    names = (sk.get('bone_names') if sk else None) or []
    bname = lambda i: (names[i] if i < len(names) else 'bone%02d' % i).replace(' ', '_')
    W = world(sk) if sk else [((0, 0, 0, 1), (0, 0, 0))] * nb
    # mesh in the bind pose (world space), one vertex per (part, used vertex)
    pos, nrm, uv, polys, clusters = [], [], [], [], {}
    for i, pt in enumerate(m['parts']):
        if not pt['tris']: continue
        q, t = W[i] if i < len(W) else ((0, 0, 0, 1), (0, 0, 0))
        tris = strip_tris(m['indices'], pt['i0'], pt['tris']); used = sorted(set(x for tr in tris for x in tr)); mp = {}
        for x in used:
            u, v, nx, ny, nz, px, py, pz = m['verts'][pt['v0'] + x]
            p = qrot(q, (px, py, pz)); n = qrot(q, (nx, ny, nz))
            mp[x] = len(pos); pos.append((p[0] + t[0], -(p[1] + t[1]), p[2] + t[2])); nrm.append((n[0], -n[1], n[2])); uv.append((u, 1 - v))
            clusters.setdefault(min(i, len(bones) - 1), []).append(mp[x])
        for a, b, c in tris: polys.append((mp[a], mp[c], mp[b]))
    ids = iter(range(100000, 10000000)); nid = lambda: next(ids)
    geo, mesh, mat, skin, pose = nid(), nid(), nid(), nid(), nid()
    tex, vid = (nid(), nid()) if texture_png else (None, None)
    joint = [nid() for _ in bones]; attr = [nid() for _ in bones]; clus = {b: nid() for b in clusters}
    L = []; o = L.append
    o('; FBX 7.4.0 project file\n; %s - Star Wars Battlefront: Renegade Squadron (PSP), exported by tools/asura/fbx.py\n' % name)
    o('FBXHeaderExtension:  {\n\tFBXHeaderVersion: 1003\n\tFBXVersion: 7400\n\tCreator: "SWBFRSDCBase tools/asura"\n}\n')
    o('GlobalSettings:  {\n\tVersion: 1000\n\tProperties70:  {\n\t\tP: "UpAxis", "int", "Integer", "",1\n\t\tP: "UpAxisSign", "int", "Integer", "",1\n'
      '\t\tP: "FrontAxis", "int", "Integer", "",2\n\t\tP: "FrontAxisSign", "int", "Integer", "",1\n\t\tP: "CoordAxis", "int", "Integer", "",0\n'
      '\t\tP: "CoordAxisSign", "int", "Integer", "",1\n\t\tP: "UnitScaleFactor", "double", "Number", "",100\n\t}\n}\n')
    nmodels = 1 + len(bones); ndef = 1 + len(clusters)
    o('Definitions:  {\n\tVersion: 100\n\tCount: %d\n' % (1 + nmodels + 1 + len(bones) + ndef + 1 + (2 if tex else 0)))
    o('\tObjectType: "GlobalSettings" {\n\t\tCount: 1\n\t}\n\tObjectType: "Model" {\n\t\tCount: %d\n\t}\n\tObjectType: "Geometry" {\n\t\tCount: 1\n\t}\n' % nmodels)
    o('\tObjectType: "NodeAttribute" {\n\t\tCount: %d\n\t}\n\tObjectType: "Deformer" {\n\t\tCount: %d\n\t}\n\tObjectType: "Material" {\n\t\tCount: 1\n\t}\n' % (len(bones), ndef))
    o('\tObjectType: "Pose" {\n\t\tCount: 1\n\t}\n')
    if tex: o('\tObjectType: "Texture" {\n\t\tCount: 1\n\t}\n\tObjectType: "Video" {\n\t\tCount: 1\n\t}\n')
    o('}\nObjects:  {\n')
    pvi = []
    for a, b, c in polys: pvi += [a, b, -c - 1]
    o('\tGeometry: %d, "Geometry::%s", "Mesh" {\n\t\tVertices: *%d {\n\t\t\ta: %s\n\t\t}\n' % (geo, name, 3 * len(pos), _arr([c for p in pos for c in p])))
    o('\t\tPolygonVertexIndex: *%d {\n\t\t\ta: %s\n\t\t}\n\t\tGeometryVersion: 124\n' % (len(pvi), _arr(pvi, '%d')))
    o('\t\tLayerElementNormal: 0 {\n\t\t\tVersion: 101\n\t\t\tName: ""\n\t\t\tMappingInformationType: "ByVertice"\n\t\t\tReferenceInformationType: "Direct"\n'
      '\t\t\tNormals: *%d {\n\t\t\t\ta: %s\n\t\t\t}\n\t\t}\n' % (3 * len(nrm), _arr([c for n in nrm for c in n])))
    o('\t\tLayerElementUV: 0 {\n\t\t\tVersion: 101\n\t\t\tName: "map1"\n\t\t\tMappingInformationType: "ByVertice"\n\t\t\tReferenceInformationType: "Direct"\n'
      '\t\t\tUV: *%d {\n\t\t\t\ta: %s\n\t\t\t}\n\t\t}\n' % (2 * len(uv), _arr([c for t in uv for c in t])))
    o('\t\tLayerElementMaterial: 0 {\n\t\t\tVersion: 101\n\t\t\tName: ""\n\t\t\tMappingInformationType: "AllSame"\n\t\t\tReferenceInformationType: "IndexToDirect"\n'
      '\t\t\tMaterials: *1 {\n\t\t\t\ta: 0\n\t\t\t}\n\t\t}\n')
    o('\t\tLayer: 0 {\n\t\t\tVersion: 100\n\t\t\tLayerElement:  {\n\t\t\t\tType: "LayerElementNormal"\n\t\t\t\tTypedIndex: 0\n\t\t\t}\n'
      '\t\t\tLayerElement:  {\n\t\t\t\tType: "LayerElementUV"\n\t\t\t\tTypedIndex: 0\n\t\t\t}\n\t\t\tLayerElement:  {\n\t\t\t\tType: "LayerElementMaterial"\n\t\t\t\tTypedIndex: 0\n\t\t\t}\n\t\t}\n\t}\n')
    o('\tModel: %d, "Model::%s", "Mesh" {\n\t\tVersion: 232\n\t\tProperties70:  {\n\t\t}\n\t\tShading: T\n\t\tCulling: "CullingOff"\n\t}\n' % (mesh, name))
    for i, bn in enumerate(bones):
        q = _mirror_q(bn['q']); t = (bn['t'][0], -bn['t'][1], bn['t'][2]); r = _euler_xyz(q)
        o('\tNodeAttribute: %d, "NodeAttribute::%s", "LimbNode" {\n\t\tTypeFlags: "Skeleton"\n\t}\n' % (attr[i], bname(i)))
        o('\tModel: %d, "Model::%s", "LimbNode" {\n\t\tVersion: 232\n\t\tProperties70:  {\n'
          '\t\t\tP: "Lcl Translation", "Lcl Translation", "", "A",%.6f,%.6f,%.6f\n\t\t\tP: "Lcl Rotation", "Lcl Rotation", "", "A",%.6f,%.6f,%.6f\n'
          '\t\t}\n\t\tShading: Y\n\t\tCulling: "CullingOff"\n\t}\n' % (joint[i], bname(i), t[0], t[1], t[2], r[0], r[1], r[2]))
    o('\tMaterial: %d, "Material::%s_mat", "" {\n\t\tVersion: 102\n\t\tShadingModel: "lambert"\n\t\tProperties70:  {\n\t\t\tP: "DiffuseColor", "Color", "", "A",1,1,1\n\t\t}\n\t}\n' % (mat, name))
    if tex:
        o('\tVideo: %d, "Video::%s_img", "Clip" {\n\t\tType: "Clip"\n\t\tFileName: "%s"\n\t\tRelativeFilename: "%s"\n\t}\n' % (vid, name, texture_png, texture_png))
        o('\tTexture: %d, "Texture::%s_tex", "" {\n\t\tType: "TextureVideoClip"\n\t\tVersion: 202\n\t\tTextureName: "Texture::%s_tex"\n'
          '\t\tFileName: "%s"\n\t\tRelativeFilename: "%s"\n\t}\n' % (tex, name, name, texture_png, texture_png))
    o('\tDeformer: %d, "Deformer::%s_skin", "Skin" {\n\t\tVersion: 101\n\t\tLink_DeformAcuracy: 50\n\t}\n' % (skin, name))
    Wm = [(_mirror_q(q), (t[0], -t[1], t[2])) for q, t in W]
    for b, vs in sorted(clusters.items()):
        q, t = Wm[b]
        o('\tDeformer: %d, "SubDeformer::%s", "Cluster" {\n\t\tVersion: 100\n\t\tUserData: "", ""\n\t\tIndexes: *%d {\n\t\t\ta: %s\n\t\t}\n'
          '\t\tWeights: *%d {\n\t\t\ta: %s\n\t\t}\n\t\tTransform: *16 {\n\t\t\ta: %s\n\t\t}\n\t\tTransformLink: *16 {\n\t\t\ta: %s\n\t\t}\n\t}\n'
          % (clus[b], bname(b), len(vs), _arr(vs, '%d'), len(vs), ','.join(['1'] * len(vs)), _arr(_inv(_mat4(q, t))), _arr(_mat4(q, t))))
    o('\tPose: %d, "Pose::BindPose", "BindPose" {\n\t\tType: "BindPose"\n\t\tVersion: 100\n\t\tNbPoseNodes: %d\n' % (pose, 1 + len(bones)))
    o('\t\tPoseNode:  {\n\t\t\tNode: %d\n\t\t\tMatrix: *16 {\n\t\t\t\ta: 1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1\n\t\t\t}\n\t\t}\n' % mesh)
    for i in range(len(bones)):
        q, t = Wm[i]
        o('\t\tPoseNode:  {\n\t\t\tNode: %d\n\t\t\tMatrix: *16 {\n\t\t\t\ta: %s\n\t\t\t}\n\t\t}\n' % (joint[i], _arr(_mat4(q, t))))
    o('\t}\n}\nConnections:  {\n')
    o('\tC: "OO",%d,0\n\tC: "OO",%d,%d\n\tC: "OO",%d,%d\n' % (mesh, geo, mesh, mat, mesh))
    if tex: o('\tC: "OP",%d,%d, "DiffuseColor"\n\tC: "OO",%d,%d\n' % (tex, mat, vid, tex))
    for i, bn in enumerate(bones):
        o('\tC: "OO",%d,%d\n' % (attr[i], joint[i]))
        o('\tC: "OO",%d,%d\n' % (joint[i], joint[bn['parent']] if bn['parent'] >= 0 else 0))
    o('\tC: "OO",%d,%d\n' % (skin, geo))
    for b in sorted(clusters): o('\tC: "OO",%d,%d\n\tC: "OO",%d,%d\n' % (clus[b], skin, joint[b], clus[b]))
    o('}\n')
    with open(path, 'w') as f: f.write(''.join(L))

def _inv(m):
    """inverse of a rigid column-major 4x4"""
    r = [[m[0], m[4], m[8]], [m[1], m[5], m[9]], [m[2], m[6], m[10]]]           # rows of R
    t = (m[12], m[13], m[14])
    rt = [[r[j][i] for j in range(3)] for i in range(3)]
    ti = tuple(-(rt[i][0] * t[0] + rt[i][1] * t[1] + rt[i][2] * t[2]) for i in range(3))
    return [rt[0][0], rt[1][0], rt[2][0], 0, rt[0][1], rt[1][1], rt[2][1], 0, rt[0][2], rt[1][2], rt[2][2], 0, ti[0], ti[1], ti[2], 1]
