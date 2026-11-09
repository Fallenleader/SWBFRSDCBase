"""A small FBX 7.4 ASCII writer for triangle meshes (Maya 2025 and earlier, 3ds Max, Blender, and tools/asura/fbxread.py).

mesh = {'name', 'pos': [(x, y, z)], 'tris': [(a, b, c, material index)], 'nrm': [(x, y, z)] or None (per vertex), 'uv': [(u, v)] or None,
        'col': [(r, g, b, a)] or None, 'materials': [(material name, texture path or None)]}
Axes Y up, 1 unit = 1 m (written as centimetres scale 100, as the RS tools do). Polygons counter-clockwise seen from the front."""
import os

def _arr(vals, fmt): return ','.join(fmt % v for v in vals)

def write(path, meshes, comment='written by ToolsCrossTest'):
    ids = iter(range(2000000, 900000000)); nid = lambda: next(ids)
    mats = {}                                                  # (name, tex) -> (material id, texture id, video id)
    for m in meshes:
        for nm, tex in m['materials']:
            if (nm, tex) not in mats: mats[(nm, tex)] = (nid(), nid() if tex else None, nid() if tex else None)
    ntex = sum(1 for v in mats.values() if v[1])
    L = []; o = L.append
    o('; FBX 7.4.0 project file\n; %s\n' % comment)
    o('FBXHeaderExtension:  {\n\tFBXHeaderVersion: 1003\n\tFBXVersion: 7400\n\tCreator: "ToolsCrossTest"\n}\n')
    o('GlobalSettings:  {\n\tVersion: 1000\n\tProperties70:  {\n\t\tP: "UpAxis", "int", "Integer", "",1\n\t\tP: "UpAxisSign", "int", "Integer", "",1\n'
      '\t\tP: "FrontAxis", "int", "Integer", "",2\n\t\tP: "FrontAxisSign", "int", "Integer", "",1\n\t\tP: "CoordAxis", "int", "Integer", "",0\n'
      '\t\tP: "CoordAxisSign", "int", "Integer", "",1\n\t\tP: "OriginalUpAxis", "int", "Integer", "",1\n\t\tP: "OriginalUpAxisSign", "int", "Integer", "",1\n'
      '\t\tP: "UnitScaleFactor", "double", "Number", "",100\n\t\tP: "OriginalUnitScaleFactor", "double", "Number", "",100\n\t}\n}\n')
    o('Definitions:  {\n\tVersion: 100\n\tCount: %d\n' % (1 + 2 * len(meshes) + len(mats) + 2 * ntex))
    o('\tObjectType: "GlobalSettings" {\n\t\tCount: 1\n\t}\n\tObjectType: "Model" {\n\t\tCount: %d\n\t}\n\tObjectType: "Geometry" {\n\t\tCount: %d\n\t}\n' % (len(meshes), len(meshes)))
    o('\tObjectType: "Material" {\n\t\tCount: %d\n\t}\n' % len(mats))
    if ntex: o('\tObjectType: "Texture" {\n\t\tCount: %d\n\t}\n\tObjectType: "Video" {\n\t\tCount: %d\n\t}\n' % (ntex, ntex))
    o('}\nObjects:  {\n')
    conns = []
    for m in meshes:
        pos = [c for p in m['pos'] for c in p]
        pvi = []; cidx = []
        for a, b, c, _ in m['tris']: pvi += [a, b, -c - 1]; cidx += [a, b, c]
        g, mdl = nid(), nid()
        o('\tGeometry: %d, "Geometry::%s", "Mesh" {\n\t\tVertices: *%d {\n\t\t\ta: %s\n\t\t}\n' % (g, m['name'], len(pos), _arr(pos, '%.7g')))
        o('\t\tPolygonVertexIndex: *%d {\n\t\t\ta: %s\n\t\t}\n\t\tGeometryVersion: 124\n' % (len(pvi), _arr(pvi, '%d')))
        layers = []
        if m.get('nrm'):
            o('\t\tLayerElementNormal: 0 {\n\t\t\tVersion: 101\n\t\t\tName: ""\n\t\t\tMappingInformationType: "ByPolygonVertex"\n\t\t\tReferenceInformationType: "Direct"\n'
              '\t\t\tNormals: *%d {\n\t\t\t\ta: %s\n\t\t\t}\n\t\t}\n' % (3 * len(cidx), _arr([m['nrm'][i][k] for i in cidx for k in range(3)], '%.6g')))
            layers.append('LayerElementNormal')
        if m.get('col'):
            col = [c for p in m['col'] for c in p]
            o('\t\tLayerElementColor: 0 {\n\t\t\tVersion: 101\n\t\t\tName: "colorSet1"\n\t\t\tMappingInformationType: "ByPolygonVertex"\n\t\t\tReferenceInformationType: "IndexToDirect"\n'
              '\t\t\tColors: *%d {\n\t\t\t\ta: %s\n\t\t\t}\n\t\t\tColorIndex: *%d {\n\t\t\t\ta: %s\n\t\t\t}\n\t\t}\n' % (len(col), _arr(col, '%.4g'), len(cidx), _arr(cidx, '%d')))
            layers.append('LayerElementColor')
        if m.get('uv'):
            uv = [c for p in m['uv'] for c in p]
            o('\t\tLayerElementUV: 0 {\n\t\t\tVersion: 101\n\t\t\tName: "map1"\n\t\t\tMappingInformationType: "ByPolygonVertex"\n\t\t\tReferenceInformationType: "IndexToDirect"\n'
              '\t\t\tUV: *%d {\n\t\t\t\ta: %s\n\t\t\t}\n\t\t\tUVIndex: *%d {\n\t\t\t\ta: %s\n\t\t\t}\n\t\t}\n' % (len(uv), _arr(uv, '%.6g'), len(cidx), _arr(cidx, '%d')))
            layers.append('LayerElementUV')
        o('\t\tLayerElementMaterial: 0 {\n\t\t\tVersion: 101\n\t\t\tName: ""\n\t\t\tMappingInformationType: "ByPolygon"\n\t\t\tReferenceInformationType: "IndexToDirect"\n'
          '\t\t\tMaterials: *%d {\n\t\t\t\ta: %s\n\t\t\t}\n\t\t}\n' % (len(m['tris']), _arr([t[3] for t in m['tris']], '%d')))
        layers.append('LayerElementMaterial')
        o('\t\tLayer: 0 {\n\t\t\tVersion: 100\n')
        for t in layers: o('\t\t\tLayerElement:  {\n\t\t\t\tType: "%s"\n\t\t\t\tTypedIndex: 0\n\t\t\t}\n' % t)
        o('\t\t}\n\t}\n')
        o('\tModel: %d, "Model::%s", "Mesh" {\n\t\tVersion: 232\n\t\tProperties70:  {\n\t\t\tP: "DefaultAttributeIndex", "int", "Integer", "",0\n'
          '\t\t}\n\t\tShading: T\n\t\tCulling: "CullingOff"\n\t}\n' % (mdl, m['name']))
        conns.append((mdl, 0, None)); conns.append((g, mdl, None))
        for key in m['materials']: conns.append((mats[key][0], mdl, None))
    for (nm, tex), (mid, tid, vid) in mats.items():
        o('\tMaterial: %d, "Material::%s", "" {\n\t\tVersion: 102\n\t\tShadingModel: "lambert"\n\t\tMultiLayer: 0\n\t\tProperties70:  {\n'
          '\t\t\tP: "DiffuseColor", "Color", "", "A",1,1,1\n\t\t\tP: "Diffuse", "Vector3D", "Vector", "",1,1,1\n\t\t}\n\t}\n' % (mid, nm))
        if tid:
            ab = tex.replace('\\', '/'); rel = os.path.relpath(tex, os.path.dirname(os.path.abspath(path))).replace('\\', '/')
            o('\tVideo: %d, "Video::%s_img", "Clip" {\n\t\tType: "Clip"\n\t\tProperties70:  {\n\t\t\tP: "Path", "KString", "XRefUrl", "", "%s"\n\t\t}\n'
              '\t\tUseMipMap: 0\n\t\tFilename: "%s"\n\t\tRelativeFilename: "%s"\n\t}\n' % (vid, nm, ab, ab, rel))
            o('\tTexture: %d, "Texture::%s_tex", "" {\n\t\tType: "TextureVideoClip"\n\t\tVersion: 202\n\t\tTextureName: "Texture::%s_tex"\n'
              '\t\tMedia: "Video::%s_img"\n\t\tFileName: "%s"\n\t\tRelativeFilename: "%s"\n\t\tModelUVTranslation: 0,0\n\t\tModelUVScaling: 1,1\n'
              '\t\tTexture_Alpha_Source: "None"\n\t\tCropping: 0,0,0,0\n\t}\n' % (tid, nm, nm, nm, ab, rel))
            conns.append((tid, mid, 'DiffuseColor')); conns.append((vid, tid, None))
    o('}\nConnections:  {\n')
    for a, b, p in conns: o('\tC: "OO",%d,%d\n' % (a, b) if not p else '\tC: "OP",%d,%d, "%s"\n' % (a, b, p))
    o('}\n')
    with open(path, 'w') as f: f.write(''.join(L))
