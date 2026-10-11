"""Rigid (bone-per-part) models <-> world-space meshes in Maya's convention, shared by the Maya tools and the tests.

Game space -> Maya space: (x, y, z) -> (x, -y, z) (the engine's Y axis points down).  The mirror flips handedness, so triangle winding is
reversed on the way in and again on the way out.  UV v -> 1 - v.  A part rides one bone: world = bind_rotation(bone) * local + bind_pos(bone).
Python 2.7 (Maya 2020) and 3.x, no Maya imports here."""
import skeleton, model

def _mirror_q(q): return (-q[0], q[1], -q[2], q[3])          # S R S with S = diag(1, -1, 1)
def _qconj(q): return (-q[0], -q[1], -q[2], q[3])

def bind_world(sk, nparts):
    """per part: (quaternion, translation) of its bone in game space; parts beyond the skeleton (or no skeleton) are identity"""
    W = skeleton.world(sk) if sk else []
    return [W[i] if i < len(W) else ((0.0, 0.0, 0.0, 1.0), (0.0, 0.0, 0.0)) for i in range(nparts)]

def bones_maya(sk):
    """skeleton -> [{name, parent, pos (Maya world), quat (Maya world)}] for building joints"""
    out = []
    if not sk: return out
    names = sk.get('bone_names') or []
    for i, (q, t) in enumerate(skeleton.world(sk)):
        out.append({'index': i, 'name': names[i] if i < len(names) and names[i] else 'bone%02d' % i, 'parent': sk['bones'][i]['parent'],
                    'pos': (t[0], -t[1], t[2]), 'quat': _mirror_q(q)})
    return out

def to_world(m, sk):
    """model.parse() result + skeleton -> {'verts': [(pos, normal, uv, part)], 'tris': [(a, b, c)] (Maya winding), 'flags': [...]}"""
    B = bind_world(sk, len(m['parts'])); verts = []; tris = []
    for i, pt in enumerate(m['parts']):
        end = m['parts'][i + 1]['v0'] if i + 1 < len(m['parts']) else len(m['verts'])
        q, t = B[i]; base = len(verts)
        for (u, v, nx, ny, nz, x, y, z) in m['verts'][pt['v0']:end]:
            p = skeleton.qrot(q, (x, y, z)); n = skeleton.qrot(q, (nx, ny, nz))
            verts.append(((p[0] + t[0], -(p[1] + t[1]), p[2] + t[2]), (n[0], -n[1], n[2]), (u, 1.0 - v), i))
        for a, b, c in model.strip_tris(m['indices'], pt['i0'], pt['tris']):
            tris.append((base + a, base + c, base + b))
    return {'verts': verts, 'tris': tris, 'flags': [p['flags'] for p in m['parts']]}

def from_world(hash_, flags, sk, verts, tris):
    """inverse of to_world.  verts: [(pos, normal, uv, part)] Maya world space, tris: [(a, b, c)] Maya winding (all three corners must
    belong to one part - the exporter splits by dominant influence).  -> build_rigid() parts list"""
    nparts = len(flags); B = bind_world(sk, nparts)
    parts = [{'flags': flags[i], 'verts': [], 'tris': [], 'map': {}} for i in range(nparts)]
    for a, b, c in tris:
        pi = verts[a][3]
        if verts[b][3] != pi or verts[c][3] != pi: pi = verts[a][3]   # mixed-part triangle: the first corner decides
        P = parts[pi]; q, t = B[pi]; qi = _qconj(q); loc = []
        for k in (a, c, b):                                            # undo the winding flip
            if k not in P['map']:
                (px, py, pz), (nx, ny, nz), (u, v), _ = verts[k]
                g = (px - t[0], -py - t[1], pz - t[2]); l = skeleton.qrot(qi, g); n = skeleton.qrot(qi, (nx, -ny, nz))
                P['map'][k] = len(P['verts']); P['verts'].append((u, 1.0 - v, n[0], n[1], n[2], l[0], l[1], l[2]))
            loc.append(P['map'][k])
        P['tris'].append(tuple(loc))
    for P in parts: del P['map']
    return parts

def gather(points, us, vs, normals, counts, connects, tri_counts, tri_corners, uv_counts, uv_ids, normal_ids, part_of, nparts):
    """Maya mesh arrays (MFnMesh.getPoints / getUVs / getNormals / getVertices / getTriangleOffsets / getAssignedUVs / getNormalIds)
    -> (verts, tris) for from_world.  A game vertex is split wherever Maya has a UV or normal seam."""
    verts = []; tris = []; key = {}; fv0 = 0; uv0 = 0; tc0 = 0
    glob = len(tri_corners) > 0 and max(tri_corners) >= max(counts)      # face-vertex offsets (global) or face-relative corners
    for f, n in enumerate(counts):
        has_uv = uv_counts[f] == n
        for t in range(tri_counts[f]):
            corner = []
            for c in range(3):
                lk = tri_corners[tc0 + 3 * t + c] - (fv0 if glob else 0); vid = connects[fv0 + lk]
                ui = uv_ids[uv0 + lk] if has_uv else -1; ni = normal_ids[fv0 + lk]
                k = (vid, ui, ni)
                if k not in key:
                    p = points[vid]; nn = normals[ni]; uv = (us[ui], vs[ui]) if ui >= 0 else (0.0, 0.0)
                    part = part_of[vid] if 0 <= part_of[vid] < nparts else 0
                    key[k] = len(verts); verts.append(((p[0], p[1], p[2]), (nn[0], nn[1], nn[2]), uv, part))
                corner.append(key[k])
            tris.append(tuple(corner))
        tc0 += 3 * tri_counts[f]; fv0 += n; uv0 += uv_counts[f]
    return verts, tris
