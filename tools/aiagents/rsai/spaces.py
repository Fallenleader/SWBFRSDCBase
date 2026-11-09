"""Observation and action definitions for the infantry policy (v2).

What the game gives (bridge v3, platform/common/ai_bridge.h), per soldier: position, team, health, squad, vehicle, its weapons (blueprint
hashes: weapon 1, weapon 2, explosive) and the weapon of its last hit; for the policy's own bots also the three nearest enemies with a
line-of-sight test each (the game's level ray) and the nearest point hidden from the nearest enemy.  Per snapshot: the command posts
(owner), every hit since the last snapshot (target, source, amount, health before / after, weapon) and the vehicles (who is aboard).

The observation (OBS_NAMES) is built from that and a per-match memory (Tracker): velocities, the highest health seen (health
fractions), who hit whom and when (threats, attackers), damage dealt and kills.  The weapons are seen as classes with the range each is
good at (rsai/weapons.py), so a sniper can learn to keep its distance and a flamethrower to close in.

Actions are tactical decisions the game carries out: each becomes a destination for the bot's own squad (game_patches.c
rs_ai_command); the game walks there, aims and fires as usual.  They are chosen with the weapon in mind (engage = go to the weapon's
own range), the objective (which post to take or hold) and the threats (who is shooting at me, where is cover).
"""
import numpy as np
from . import weapons

K_ENEMIES = 5
K_ALLIES = 4
K_POSTS = 4
D = 100.0                     # distance scale
NEAR = 20.0
POST_RADIUS = 15.0            # within this a post counts as contested / being taken
MEMORY_S = 4.0                # hits remembered this long (game seconds) as "recent"
VERSION = 2

NC = weapons.N_CLASSES
OWN = (["alive", "health_frac", "health_abs", "vel_x", "vel_z", "speed", "in_vehicle", "has_squad"]
       + [f"w1_{c}" for c in weapons.CLASS_NAMES] + [f"w2_{c}" for c in weapons.CLASS_NAMES]
       + ["has_explosive", "w1_ideal_range", "w1_max_range",
          "dmg_taken_recent", "hits_taken_recent", "dmg_dealt_recent", "kills_recent", "since_hit", "under_fire",
          "cover_ok", "cover_dx", "cover_dz", "cover_dist"])
PER_ENEMY = ["dx", "dz", "dy", "dist", "present", "los", "los_known", "health_frac", "ideal_range", "is_sniper", "is_close",
             "is_launcher", "hit_me_recent", "approach", "in_vehicle", "range_ratio"]
PER_ALLY = ["dx", "dz", "dist", "present", "health_frac", "under_fire"]
COUNTS = ["enemies_in_my_range", "enemies_near", "allies_near", "enemies_in_sight"]
PER_POST = ["dx", "dz", "dist", "present", "ours", "theirs", "neutral", "enemies_near", "allies_near"]
GLOBAL = ["posts_ours_frac", "posts_theirs_frac"]
VEH = ["empty_veh_dx", "empty_veh_dz", "empty_veh_dist", "empty_veh_present",
       "enemy_veh_dx", "enemy_veh_dz", "enemy_veh_dist", "enemy_veh_present"]

OBS_NAMES = (OWN + [f"enemy{i}_{f}" for i in range(K_ENEMIES) for f in PER_ENEMY]
             + [f"ally{i}_{f}" for i in range(K_ALLIES) for f in PER_ALLY] + COUNTS
             + [f"post{i}_{f}" for i in range(K_POSTS) for f in PER_POST] + GLOBAL + VEH)
OBS_DIM = len(OBS_NAMES)
_O = {n: i for i, n in enumerate(OBS_NAMES)}

ACTIONS = [
    "hold",              # stay (the game's AI still aims and fires)
    "engage_nearest",    # to my weapon's ideal range from the nearest enemy
    "engage_visible",    # the same for the nearest enemy in sight (else the nearest)
    "engage_attacker",   # the same for whoever hit me last (else the nearest)
    "retreat",           # 15 units away from the nearest enemy
    "take_cover",        # the nearest point hidden from the nearest enemy (the game's ray test); else back toward an ally
    "strafe_left",       # 8 units sideways around the nearest enemy
    "strafe_right",
    "flank_left",        # to the nearest enemy's side, at my weapon's range
    "flank_right",
    "capture_nearest",   # the nearest post not ours
    "capture_second",    # the second nearest post not ours
    "defend_post",       # our post with enemies near it (else our nearest)
    "support_ally",      # to the ally under fire (else the one closest to an enemy)
    "regroup",           # to the middle of the allies within 40 units
    "get_vehicle",       # to the nearest empty vehicle
]
N_ACTIONS = len(ACTIONS)


class Tracker:
    """Per-match memory: last position (velocity), the highest health seen per soldier, and the hits (who hit whom, when)."""
    def __init__(self):
        self.pos, self.hmax = {}, {}
        self.hits = []            # (time, target, source, amount, killed)
        self.now = 0.0

    def update(self, recs, events=None, t=None):
        if t is not None:
            self.now = t
        for r in recs:
            i = int(r["id"]); self.pos[i] = r["pos"].copy(); self.hmax[i] = max(self.hmax.get(i, 0.0), float(r["health"]))
        if events is not None and len(events):
            for e in events:
                self.hits.append((self.now, int(e["target"]), int(e["source"]), float(e["amount"]), bool(e["before"] > 0 >= e["after"])))
        self.hits = [h for h in self.hits if self.now - h[0] <= 10.0]

    def recent(self, horizon=MEMORY_S):
        return [h for h in self.hits if self.now - h[0] <= horizon]


def _fill_class(o, base, h):
    c = weapons.class_index(h)
    if c >= 0:
        o[base + c] = 1.0


def vehicle_state(s):
    """who is in which vehicle: a soldier aboard sits exactly at the vehicle's position (measured on Kashyyyk: the original AI's
    bots in vehicles are within 0.05 units of one; the bridge's own vehicle field stays 0).  Returns (in_vehicle[n] bool,
    side per vehicle: the team aboard, -1 empty)."""
    recs, vehs = s.recs, s.vehicles
    inv = np.zeros(len(recs), bool); side = np.full(len(vehs), -1, np.int64)
    if len(vehs) and len(recs):
        alive = (recs["alive"] != 0) & (recs["health"] > 0)
        d = np.hypot(recs["pos"][:, None, 0] - vehs["pos"][None, :, 0], recs["pos"][:, None, 2] - vehs["pos"][None, :, 2])
        hit = (d < 0.1) & alive[:, None]
        inv = hit.any(1)
        for v in range(len(vehs)):
            w = np.where(hit[:, v])[0]
            if len(w):
                side[v] = int(recs["team"][w[0]])
    return inv, side


def _xz(v):
    return np.array([v[0], v[2]], np.float32)


def build_obs(s, tracker, dt):
    """Observations for every record of snapshot s.  Returns obs[n, OBS_DIM] float32 (rows of soldiers that are not the policy's
    get the parts that do not need the policy-only fields)."""
    recs, posts, vehs = s.recs, s.posts, s.vehicles
    n = len(recs)
    obs = np.zeros((n, OBS_DIM), np.float32)
    if n == 0:
        return obs
    pos = recs["pos"].astype(np.float32); team = recs["team"]; alive = (recs["alive"] != 0) & (recs["health"] > 0)
    ids = recs["id"].astype(np.int64); idx = {int(i): j for j, i in enumerate(ids)}
    in_veh, veh_side = vehicle_state(s)
    diff = pos[None, :, :] - pos[:, None, :]
    dist = np.sqrt(diff[..., 0] ** 2 + diff[..., 2] ** 2)
    hfrac = np.array([float(recs["health"][j]) / max(tracker.hmax.get(int(ids[j]), 0.0), float(recs["health"][j]), 1e-3) for j in range(n)], np.float32)
    vel = np.zeros((n, 3), np.float32)
    if dt > 0:
        for j in range(n):
            pp = tracker.pos.get(int(ids[j]))
            if pp is not None:
                vel[j] = (pos[j] - pp) / dt
    rec = tracker.recent()
    taken_amt, taken_n, dealt_amt, kills, last_hit_t, attacker, hit_by = {}, {}, {}, {}, {}, {}, {}
    for (t, tg, src, am, killed) in rec:
        taken_amt[tg] = taken_amt.get(tg, 0.0) + am; taken_n[tg] = taken_n.get(tg, 0) + 1
        dealt_amt[src] = dealt_amt.get(src, 0.0) + am
        if killed:
            kills[src] = kills.get(src, 0) + 1
        if t >= last_hit_t.get(tg, -1e9):
            last_hit_t[tg] = t; attacker[tg] = src
        hit_by.setdefault(tg, set()).add(src)
    under_fire = np.array([float(taken_n.get(int(i), 0) > 0) for i in ids], np.float32)
    owners = posts["owner"] if len(posts) else np.zeros(0)
    for i in range(n):
        o = obs[i]; me = pos[i]; rid = int(ids[i]); tm = team[i]
        o[_O["alive"]] = float(alive[i]); o[_O["health_frac"]] = hfrac[i]; o[_O["health_abs"]] = float(recs["health"][i]) / 200.0
        o[_O["vel_x"]] = vel[i, 0] / 10.0; o[_O["vel_z"]] = vel[i, 2] / 10.0; o[_O["speed"]] = float(np.hypot(vel[i, 0], vel[i, 2])) / 10.0
        o[_O["in_vehicle"]] = float(in_veh[i]); o[_O["has_squad"]] = float(recs["has_squad"][i] != 0)
        kit = recs["kit"][i]
        _fill_class(o, _O["w1_close"], kit[0]); _fill_class(o, _O["w2_close"], kit[1]); o[_O["has_explosive"]] = float(kit[2] != 0)
        ideal = weapons.ideal_range(kit[0]); mx = weapons.max_range(kit[0])
        o[_O["w1_ideal_range"]] = ideal / D; o[_O["w1_max_range"]] = mx / D
        hm = max(tracker.hmax.get(rid, 1.0), 1.0)
        o[_O["dmg_taken_recent"]] = taken_amt.get(rid, 0.0) / hm; o[_O["hits_taken_recent"]] = min(taken_n.get(rid, 0), 10) / 5.0
        o[_O["dmg_dealt_recent"]] = min(dealt_amt.get(rid, 0.0), 400.0) / 100.0; o[_O["kills_recent"]] = min(kills.get(rid, 0), 4) / 2.0
        o[_O["since_hit"]] = min(tracker.now - last_hit_t.get(rid, -1e9), 10.0) / 10.0; o[_O["under_fire"]] = under_fire[i]
        if recs["cover_ok"][i]:
            cv = recs["cover"][i] - me
            o[_O["cover_ok"]] = 1.0; o[_O["cover_dx"]] = cv[0] / 20.0; o[_O["cover_dz"]] = cv[2] / 20.0; o[_O["cover_dist"]] = float(np.hypot(cv[0], cv[2])) / 20.0
        others = np.arange(n) != i
        en = others & alive & (team != tm); al = others & alive & (team == tm)
        near_ids = [int(x) for x in recs["near_id"][i]]; near_los = [int(x) for x in recs["near_los"][i][:3]]
        eidx = np.where(en)[0]; eidx = eidx[np.argsort(dist[i, eidx])][:K_ENEMIES]
        for k, t in enumerate(eidx):
            b = _O[f"enemy{k}_dx"]; tid = int(ids[t]); tk = recs["kit"][t]
            o[b] = diff[i, t, 0] / D; o[b + 1] = diff[i, t, 2] / D; o[b + 2] = diff[i, t, 1] / D; o[b + 3] = dist[i, t] / D; o[b + 4] = 1.0
            if tid in near_ids:
                o[b + 5] = float(near_los[near_ids.index(tid)]); o[b + 6] = 1.0
            o[b + 7] = hfrac[t]; o[b + 8] = weapons.ideal_range(tk[0]) / D
            cls = weapons.CLASS_OF.get(int(tk[0]), "other")
            o[b + 9] = float(cls == "sniper"); o[b + 10] = float(cls == "close"); o[b + 11] = float(cls == "launcher")
            o[b + 12] = float(tid in hit_by.get(rid, ()))
            to_me = -diff[i, t] / max(dist[i, t], 1e-3)
            o[b + 13] = float(vel[t, 0] * to_me[0] + vel[t, 2] * to_me[2]) / 10.0
            o[b + 14] = float(in_veh[t]); o[b + 15] = float(np.clip(dist[i, t] / ideal - 1.0, -1.0, 3.0))
        aidx = np.where(al)[0]; aidx = aidx[np.argsort(dist[i, aidx])][:K_ALLIES]
        for k, t in enumerate(aidx):
            b = _O[f"ally{k}_dx"]
            o[b] = diff[i, t, 0] / D; o[b + 1] = diff[i, t, 2] / D; o[b + 2] = dist[i, t] / D; o[b + 3] = 1.0; o[b + 4] = hfrac[t]; o[b + 5] = under_fire[t]
        o[_O["enemies_in_my_range"]] = np.sum(en & (dist[i] < mx)) / 8.0; o[_O["enemies_near"]] = np.sum(en & (dist[i] < NEAR)) / 8.0
        o[_O["allies_near"]] = np.sum(al & (dist[i] < NEAR)) / 8.0; o[_O["enemies_in_sight"]] = sum(near_los) / 3.0
        if len(posts):
            pd = posts["pos"] - me; pdist = np.hypot(pd[:, 0], pd[:, 2])
            order = np.argsort(pdist)[:K_POSTS]
            for k, p in enumerate(order):
                b = _O[f"post{k}_dx"]; ow = int(owners[p])
                pp = posts["pos"][p]; dpe = np.hypot(pos[:, 0] - pp[0], pos[:, 2] - pp[2])
                o[b] = pd[p, 0] / D; o[b + 1] = pd[p, 2] / D; o[b + 2] = pdist[p] / D; o[b + 3] = 1.0
                o[b + 4] = float(ow == tm); o[b + 5] = float(ow not in (0, tm)); o[b + 6] = float(ow == 0)
                o[b + 7] = np.sum(alive & (team != tm) & (dpe < POST_RADIUS)) / 8.0; o[b + 8] = np.sum(alive & (team == tm) & (dpe < POST_RADIUS)) / 8.0
            o[_O["posts_ours_frac"]] = float(np.mean(owners == tm)); o[_O["posts_theirs_frac"]] = float(np.mean((owners != tm) & (owners != 0)))
        if len(vehs):
            vd = vehs["pos"] - me; vdist = np.hypot(vd[:, 0], vd[:, 2])
            for sel, b in ((veh_side < 0, _O["empty_veh_dx"]), ((veh_side >= 0) & (veh_side != tm), _O["enemy_veh_dx"])):
                w = np.where(sel)[0]
                if len(w):
                    j = w[np.argmin(vdist[w])]; o[b] = vd[j, 0] / D; o[b + 1] = vd[j, 2] / D; o[b + 2] = vdist[j] / D; o[b + 3] = 1.0
    return obs


def destination(action, i, s, tracker):
    """The point a tactical action sends bot i to (world x, y, z)."""
    recs, posts, vehs = s.recs, s.posts, s.vehicles
    pos = recs["pos"].astype(np.float32); me = pos[i].copy(); team = recs["team"]; tm = team[i]
    ids = recs["id"].astype(np.int64)
    alive = (recs["alive"] != 0) & (recs["health"] > 0)
    others = np.arange(len(recs)) != i
    enemies = np.where(alive & (team != tm))[0]; allies = np.where(alive & (team == tm) & others)[0]
    a = ACTIONS[int(action)]
    ideal = weapons.ideal_range(recs["kit"][i][0])

    def at(xz):
        return np.array([xz[0], me[1], xz[1]], np.float32)

    def nearest(cands):
        if not len(cands):
            return None
        d = np.hypot(*(pos[cands] - me)[:, [0, 2]].T); return cands[np.argmin(d)]

    def engage(t):
        e = _xz(pos[t]); m = _xz(me); v = m - e; L = float(np.hypot(*v)) or 1.0
        return at(e + v / L * ideal)                       # on my side of it, at my weapon's range

    if a == "hold":
        return me
    if a in ("capture_nearest", "capture_second", "defend_post"):
        if not len(posts):
            return me
        pd = np.hypot(*(posts["pos"] - me)[:, [0, 2]].T); own = posts["owner"] == tm
        if a == "defend_post":
            cand = np.where(own)[0]
            if not len(cand):
                return me
            contested = [p for p in cand if np.any(alive & (team != tm) & (np.hypot(pos[:, 0] - posts["pos"][p][0], pos[:, 2] - posts["pos"][p][2]) < POST_RADIUS * 2))]
            pick = min(contested, key=lambda p: pd[p]) if contested else cand[np.argmin(pd[cand])]
            return posts["pos"][pick].copy()
        cand = np.where(~own)[0]
        if not len(cand):
            return me
        order = cand[np.argsort(pd[cand])]
        return posts["pos"][order[min(1, len(order) - 1) if a == "capture_second" else 0]].copy()
    if a == "get_vehicle":
        if len(vehs):
            w = np.where(vehicle_state(s)[1] < 0)[0]
            if len(w):
                vd = np.hypot(*(vehs["pos"][w] - me)[:, [0, 2]].T); return vehs["pos"][w[np.argmin(vd)]].copy()
        return me
    if a == "regroup":
        if len(allies):
            d = np.hypot(*(pos[allies] - me)[:, [0, 2]].T); near = allies[d < 40.0]
            if len(near):
                return pos[near].mean(0)
        return me
    if a == "support_ally":
        if len(allies):
            hit = {h[1] for h in tracker.recent()}
            uf = [j for j in allies if int(ids[j]) in hit]
            if uf:
                return pos[min(uf, key=lambda j: np.hypot(*(pos[j] - me)[[0, 2]]))].copy()
            if len(enemies):
                best = min(allies, key=lambda j: np.min(np.hypot(*(pos[enemies] - pos[j])[:, [0, 2]].T)))
                return pos[best].copy()
        return me
    if not len(enemies):
        return me
    t = nearest(enemies)
    if a == "engage_visible":
        near_ids = [int(x) for x in recs["near_id"][i]]; los = recs["near_los"][i]
        vis = [idx for idx in enemies if int(ids[idx]) in near_ids and los[near_ids.index(int(ids[idx]))]]
        if vis:
            t = nearest(np.array(vis))
    if a == "engage_attacker":
        mine = [h for h in tracker.recent() if h[1] == int(ids[i])]
        if mine:
            src = mine[-1][2]; jj = [j for j in enemies if int(ids[j]) == src]
            if jj:
                t = jj[0]
    if a in ("engage_nearest", "engage_visible", "engage_attacker"):
        return engage(t)
    e = _xz(pos[t]); m = _xz(me); to = e - m; L = float(np.hypot(*to)) or 1.0; to /= L; side = np.array([-to[1], to[0]], np.float32)
    if a == "retreat":
        return at(m - to * 15.0)
    if a == "take_cover":
        if recs["cover_ok"][i]:
            return recs["cover"][i].copy()
        if len(allies):
            al = _xz(pos[nearest(allies)]); return at(al - to * 5.0)
        return at(m - to * 10.0)
    if a == "strafe_left":
        return at(m + side * 8.0)
    if a == "strafe_right":
        return at(m - side * 8.0)
    if a == "flank_left":
        return at(e + side * ideal)
    if a == "flank_right":
        return at(e - side * ideal)
    return me
