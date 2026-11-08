"""Observation and action definitions for the infantry policy (v0).

The observation is a fixed-length float vector per agent, egocentric where the game gives us enough to be.  Features the game
does not expose yet (see docs/INTEGRATION.md) have a slot and a mask bit already, so the network's input size does not change
when they arrive: the slot is 0 and its mask bit 0 until then.
"""
import numpy as np

K_ENEMIES = 4          # nearest enemies described
K_ALLIES = 4           # nearest teammates described
NEAR, FAR = 20.0, 50.0  # radii for the crowd counts (game units, ~metres)
DIST_SCALE = 100.0      # distances are divided by this

# features that have a slot but no source yet: (name, available now?)
PENDING = [("health", False), ("ammo", False), ("weapon", False), ("class", False),
           ("facing", False), ("line_of_sight", False), ("incoming_damage", False), ("cover_nearby", False)]

OWN = ["alive", "vel_x", "vel_z", "speed", "has_squad", "in_vehicle"]
PER_OTHER = ["dx", "dy", "dz", "dist", "present"]
COUNTS = ["enemies_near", "enemies_far", "allies_near", "allies_far"]

OBS_NAMES = (OWN + [f"enemy{i}_{f}" for i in range(K_ENEMIES) for f in PER_OTHER]
             + [f"ally{i}_{f}" for i in range(K_ALLIES) for f in PER_OTHER] + COUNTS
             + [p for p, _ in PENDING] + [f"has_{p}" for p, _ in PENDING])
OBS_DIM = len(OBS_NAMES)   # 66

# Tactical actions.  The policy picks one per decision step (RS_AI_BRIDGE_HZ); the game's own navigation and aiming carry it
# out (the planned execution path, docs/INTEGRATION.md).  The target is the nearest enemy / ally slot in the observation.
ACTIONS = [
    "hold",            # keep position, engage what is in front
    "advance",         # move toward the nearest enemy
    "retreat",         # move away from the nearest enemy
    "strafe_left",     # sidestep around the nearest enemy, left
    "strafe_right",    # ... right
    "seek_cover",      # move to the nearest cover point (needs cover data)
    "flank_left",      # wide move to the enemy's left side
    "flank_right",     # ... right side
    "suppress",        # fire at the nearest enemy's position without advancing
    "support_ally",    # move toward the nearest ally in combat
]
N_ACTIONS = len(ACTIONS)


def build_obs(recs, prev_pos, dt):
    """Observations for every record of one snapshot.

    recs: protocol.REC array; prev_pos: {id: pos} from the previous snapshot (velocity); dt: seconds between them.
    Returns (obs[n, OBS_DIM] float32, ids[n])."""
    n = len(recs)
    obs = np.zeros((n, OBS_DIM), np.float32)
    if n == 0:
        return obs, np.zeros(0, np.uint32)
    pos = recs["pos"].astype(np.float32)
    team = recs["team"]; alive = recs["alive"] != 0
    diff = pos[None, :, :] - pos[:, None, :]                     # [i, j] = j - i
    dist = np.sqrt((diff ** 2).sum(-1))
    for i in range(n):
        o = obs[i]; k = 0
        o[0] = float(alive[i])
        pp = prev_pos.get(int(recs["id"][i]))
        if pp is not None and dt > 0:
            v = (pos[i] - pp) / dt
            o[1], o[2], o[3] = v[0] / 10.0, v[2] / 10.0, np.hypot(v[0], v[2]) / 10.0
        o[4] = float(recs["has_squad"][i] != 0); o[5] = float(recs["vehicle"][i] != 0)
        k = len(OWN)
        others = np.arange(n) != i
        for want_enemy, K in ((True, K_ENEMIES), (False, K_ALLIES)):
            m = others & alive & ((team != team[i]) if want_enemy else (team == team[i]))
            idx = np.where(m)[0]; idx = idx[np.argsort(dist[i, idx])][:K]
            for j, t in enumerate(idx):
                b = k + j * len(PER_OTHER)
                o[b:b + 3] = diff[i, t] / DIST_SCALE; o[b + 3] = dist[i, t] / DIST_SCALE; o[b + 4] = 1.0
            k += K * len(PER_OTHER)
        en = others & alive & (team != team[i]); al = others & alive & (team == team[i])
        o[k:k + 4] = [np.sum(en & (dist[i] < NEAR)), np.sum(en & (dist[i] < FAR)),
                      np.sum(al & (dist[i] < NEAR)), np.sum(al & (dist[i] < FAR))]
        o[k:k + 4] /= 8.0
        # PENDING slots and their mask bits stay 0 until the game exposes them
    return obs, recs["id"].copy()
