"""Reward terms for the infantry policy (v2).  Each says where it comes from; terms whose source the game does not give contribute 0
and are left out of `available_terms()`, so a run records what it was trained on."""

# name: (default weight, available now?, source)
TERMS = {
    "survival":       (0.002, True,  "per decision step alive"),
    "death":          (-1.0,  True,  "the bot is killed (a hit takes its health to 0, or its record ends)"),
    "damage_taken":   (-0.4,  True,  "health fraction lost (hit events / soldier sub-object +0x28)"),
    "kill":           (1.0,   True,  "hit events: a hit by this bot that takes an enemy's health to 0"),
    "assist":         (0.3,   True,  "an enemy this bot hit in the last 5 s is killed by someone else"),
    "damage_dealt":   (0.4,   True,  "hit events: damage this bot did to enemies, as a fraction of their health"),
    "friendly_fire":  (-0.5,  True,  "hit events: damage this bot did to its own side, as a fraction of their health"),
    "objective":      (1.0,   True,  "its side takes (+) or loses (-) a command post (shared by the side's agents)"),
    "posts_held":     (0.01,  True,  "per step, the fraction of posts its side owns"),
    "capturing":      (0.01,  True,  "per step within 15 units of a post its side does not own (taking it)"),
    "range_keeping":  (0.003, True,  "per step with an enemy in sight within 50% of its weapon's ideal range (rsai/weapons.py)"),
    "inactivity":     (-0.01, True,  "moved < 0.5 units with no enemy within 50 units"),
    "flank":          (0.2,   False, "facing of the target (hit from its side/back): the soldiers' facing is not traced yet"),
}


def weights(overrides=None):
    w = {k: v[0] for k, v in TERMS.items()}
    if overrides:
        w.update(overrides)
    return w


def available_terms():
    return [k for k, (_, ok, _) in TERMS.items() if ok]
