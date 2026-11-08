"""Reward terms for the infantry policy.  Each term says whether the game gives us what it needs yet; terms that are not
available contribute 0 and are listed by `available_terms()` so a training run states what it was actually trained on."""
import numpy as np

# name: (default weight, available from the bridge now?, what it needs)
TERMS = {
    "survival":        (0.01,  True,  "alive flag per snapshot"),
    "death":           (-1.0,  True,  "the bot's record leaving the AI table (dead bots respawn with a new id)"),
    "inactivity":      (-0.02, True,  "position change between snapshots"),
    "kill":            (1.0,   False, "kill events with the killer's id"),
    "damage_dealt":    (0.02,  False, "damage events with the source id"),
    "damage_taken":    (-0.02, False, "health, or damage events"),
    "friendly_fire":   (-0.5,  False, "damage events with the source's team"),
    "team_support":    (0.05,  False, "damage to enemies that are attacking a teammate"),
    "flank":           (0.2,   False, "facing of the target (hit from its side/back)"),
    "positioning":     (0.01,  False, "cover / line-of-sight data"),
    "objective":       (0.05,  False, "command post positions and capture state"),
}


def available_terms():
    return [k for k, (_, ok, _) in TERMS.items() if ok]


def step_rewards(prev, cur, moved, weights=None, idle_dist=0.5):
    """Per-agent reward between two snapshots for the terms available now.

    prev / cur: alive flags (0/1) aligned to the same agents; moved: distance moved since the last snapshot."""
    w = {k: v[0] for k, v in TERMS.items()}
    if weights:
        w.update(weights)
    prev = np.asarray(prev, np.float32); cur = np.asarray(cur, np.float32); moved = np.asarray(moved, np.float32)
    r = w["survival"] * cur
    r += w["death"] * ((prev > 0) & (cur == 0))      # cur = 0 also for a bot whose record has gone (the caller's job)
    r += w["inactivity"] * ((cur > 0) & (moved < idle_dist))
    return r.astype(np.float32)
