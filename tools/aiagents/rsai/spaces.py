"""Observation and action definitions for the infantry policy (v1).

The observation is a fixed-length float vector per agent.  Features the game does not expose yet (docs/INTEGRATION.md) have a
slot and a mask bit already, so the network's input size does not change when they arrive: the slot is 0 and its mask bit 0.

Actions are tactical: each becomes a destination the bot's squad is sent to (game_patches.c rs_ai_command); the game's own
navigation, aiming and firing carry it out.
"""
import numpy as np

K_ENEMIES = 4
K_ALLIES = 4
NEAR, FAR = 20.0, 50.0
DIST_SCALE = 100.0

# features with a slot but no source yet
PENDING = ["ammo", "weapon", "class", "facing", "line_of_sight", "incoming_damage", "cover_nearby"]

OWN = ["alive", "vel_x", "vel_z", "speed", "has_squad", "in_vehicle", "health_frac", "health_abs"]
PER_OTHER = ["dx", "dy", "dz", "dist", "present"]
COUNTS = ["enemies_near", "enemies_far", "allies_near", "allies_far"]
POSTS = ["post_take_dx", "post_take_dy", "post_take_dz", "post_take_dist", "post_take_present",
         "post_ours_dx", "post_ours_dy", "post_ours_dz", "post_ours_dist", "post_ours_present", "posts_ours_frac"]

OBS_NAMES = (OWN + [f"enemy{i}_{f}" for i in range(K_ENEMIES) for f in PER_OTHER]
             + [f"ally{i}_{f}" for i in range(K_ALLIES) for f in PER_OTHER] + COUNTS + POSTS
             + PENDING + [f"has_{p}" for p in PENDING])
OBS_DIM = len(OBS_NAMES)   # 77

ACTIONS = [
    "hold",           # stay where it is (the game's AI still aims and fires)
    "advance",        # 15 units toward the nearest enemy
    "retreat",        # 15 units away from the nearest enemy
    "strafe_left",    # 10 units sideways around the nearest enemy
    "strafe_right",
    "seek_cover",     # until cover data exists: fall back behind the nearest ally (away from the enemy)
    "flank_left",     # to a point 20 units to the nearest enemy's side
    "flank_right",
    "suppress",       # hold and keep the nearest enemy engaged (same destination as hold)
    "support_ally",   # to the ally that is closest to an enemy
    "capture_post",   # to the nearest command post its side does not own
]
N_ACTIONS = len(ACTIONS)


class Tracker:
    """Per-bot memory between snapshots: last position (velocity) and the highest health seen (health fraction)."""
    def __init__(self):
        self.pos, self.hmax = {}, {}

    def update(self, recs):
        for r in recs:
            i = int(r["id"]); self.pos[i] = r["pos"].copy(); self.hmax[i] = max(self.hmax.get(i, 0.0), float(r["health"]))


def _flat(v):
    return np.array([v[0], v[2]], np.float32)


def build_obs(recs, posts, tracker, dt):
    """Observations for every record of one snapshot.  Returns obs[n, OBS_DIM] float32."""
    n = len(recs)
    obs = np.zeros((n, OBS_DIM), np.float32)
    if n == 0:
        return obs
    pos = recs["pos"].astype(np.float32); team = recs["team"]; alive = (recs["alive"] != 0) & (recs["health"] > 0)
    diff = pos[None, :, :] - pos[:, None, :]
    dist = np.sqrt((diff[..., 0] ** 2) + (diff[..., 2] ** 2))
    for i in range(n):
        o = obs[i]; rid = int(recs["id"][i])
        o[0] = float(alive[i])
        pp = tracker.pos.get(rid)
        if pp is not None and dt > 0:
            v = (pos[i] - pp) / dt; o[1], o[2], o[3] = v[0] / 10.0, v[2] / 10.0, np.hypot(v[0], v[2]) / 10.0
        o[4] = float(recs["has_squad"][i] != 0); o[5] = float(recs["vehicle"][i] != 0)
        h = float(recs["health"][i]); hm = max(tracker.hmax.get(rid, h), h, 1e-3)
        o[6] = h / hm; o[7] = h / 200.0
        k = len(OWN); others = np.arange(n) != i
        for want_enemy, K in ((True, K_ENEMIES), (False, K_ALLIES)):
            m = others & alive & ((team != team[i]) if want_enemy else (team == team[i]))
            idx = np.where(m)[0]; idx = idx[np.argsort(dist[i, idx])][:K]
            for j, t in enumerate(idx):
                b = k + j * len(PER_OTHER); o[b:b + 3] = diff[i, t] / DIST_SCALE; o[b + 3] = dist[i, t] / DIST_SCALE; o[b + 4] = 1.0
            k += K * len(PER_OTHER)
        en = others & alive & (team != team[i]); al = others & alive & (team == team[i])
        o[k:k + 4] = np.array([np.sum(en & (dist[i] < NEAR)), np.sum(en & (dist[i] < FAR)), np.sum(al & (dist[i] < NEAR)), np.sum(al & (dist[i] < FAR))]) / 8.0
        k += 4
        if len(posts):
            pd = posts["pos"] - pos[i]; pdist = np.hypot(pd[:, 0], pd[:, 2]); ours = posts["owner"] == team[i]
            for sel, b in ((~ours, k), (ours, k + 5)):
                idx = np.where(sel)[0]
                if len(idx):
                    j = idx[np.argmin(pdist[idx])]; o[b:b + 3] = pd[j] / DIST_SCALE; o[b + 3] = pdist[j] / DIST_SCALE; o[b + 4] = 1.0
            o[k + 10] = float(ours.mean())
        # PENDING slots and their mask bits stay 0 until the game exposes them
    return obs


def destination(action, i, recs, posts):
    """The point a tactical action sends bot i to (world x, y, z)."""
    pos = recs["pos"].astype(np.float32); me = pos[i]; team = recs["team"]
    alive = (recs["alive"] != 0) & (recs["health"] > 0)
    enemies = np.where(alive & (team != team[i]))[0]; allies = np.where(alive & (team == team[i]) & (np.arange(len(recs)) != i))[0]
    a = ACTIONS[int(action)]
    if a in ("hold", "suppress") or (len(enemies) == 0 and a != "capture_post"):
        return me.copy()
    if a == "capture_post":
        if len(posts):
            pd = np.hypot(*(posts["pos"] - me)[:, [0, 2]].T); idx = np.where(posts["owner"] != team[i])[0]
            if len(idx):
                return posts["pos"][idx[np.argmin(pd[idx])]].copy()
        return me.copy()
    ed = np.hypot(*(pos[enemies] - me)[:, [0, 2]].T); e = pos[enemies[np.argmin(ed)]]
    to = _flat(e - me); L = float(np.hypot(*to)) or 1.0; to /= L; side = np.array([-to[1], to[0]], np.float32)
    def at(xz):
        return np.array([xz[0], me[1], xz[1]], np.float32)
    m2 = _flat(me); e2 = _flat(e)
    if a == "advance":
        return at(m2 + to * min(15.0, max(L - 5.0, 0.0)))
    if a == "retreat":
        return at(m2 - to * 15.0)
    if a == "strafe_left":
        return at(m2 + side * 10.0)
    if a == "strafe_right":
        return at(m2 - side * 10.0)
    if a == "flank_left":
        return at(e2 + side * 20.0)
    if a == "flank_right":
        return at(e2 - side * 20.0)
    if a == "seek_cover":
        if len(allies):
            ad = np.hypot(*(pos[allies] - me)[:, [0, 2]].T); al = _flat(pos[allies[np.argmin(ad)]])
            return at(al - to * 5.0)
        return at(m2 - to * 15.0)
    if a == "support_ally":
        if len(allies) and len(enemies):
            best, bd = None, 1e9
            for j in allies:
                d = np.min(np.hypot(*(pos[enemies] - pos[j])[:, [0, 2]].T))
                if d < bd:
                    bd, best = d, j
            return pos[best].copy()
        return me.copy()
    return me.copy()
