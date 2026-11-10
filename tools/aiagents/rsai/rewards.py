"""Reward terms for the infantry policy (v3: play the objective aggressively, fight on the way, stay alive).

Scale, at 5 decisions a second (300 steps a bot-minute): the events are the big terms - a post taken or lost (+-5, shared by the
side), a death (-3), a kill (+1) - and the per-step shaping adds up to at most ~1-3 a bot-minute, so it guides without outweighing
them (v2's per-step terms were worth 10-50x the events: the policy learned to keep moving and nothing else).
  * approach: potential-based shaping toward the nearest post the side does not own (reward per metre closer, the same back when
    moving away), so the shortest way to the next post is the rewarded way; what it adds over a life is bounded by the distance.
  * engaging is rewarded through damage, kills and assists, worth less than a capture, so a bot fights what is in its way but is
    not paid to leave the objective to hunt.
  * dying costs more than a kill earns, and damage taken costs: no trading lives for kills.
Each term says where it comes from; terms whose source the game does not give contribute 0 and are left out of
`available_terms()`, so a run records what it was trained on."""

# name: (default weight, available now?, source)
TERMS = {
    "objective":      (5.0,   True,  "its side takes (+) or loses (-) a command post (shared by the side's agents)"),
    "approach":       (0.05,  True,  "per metre closer to the nearest post its side does not own (negative when moving away; at most 3 m a step)"),
    "capturing":      (0.01,  True,  "per step within the capture radius of a post its side does not own"),
    "death":          (-3.0,  True,  "the bot is killed (a hit takes its health to 0, or its record ends)"),
    "damage_taken":   (-0.5,  True,  "health fraction lost (hit events / soldier sub-object +0x28)"),
    "kill":           (1.0,   True,  "hit events: a hit by this bot that takes an enemy's health to 0"),
    "assist":         (0.4,   True,  "an enemy this bot hit in the last 5 s is killed by someone else"),
    "damage_dealt":   (0.3,   True,  "hit events: damage this bot did to enemies, as a fraction of their health"),
    "friendly_fire":  (-0.5,  True,  "hit events: damage this bot did to its own side, as a fraction of their health"),
    "range_keeping":  (0.002, True,  "per step with an enemy in sight within 50% of its weapon's ideal range (rsai/weapons.py)"),
    "inactivity":     (-0.005, True, "moved < 0.5 units with no enemy within 50 units and not on a post it is taking"),
    "posts_held":     (0.0,   True,  "per step, the fraction of posts its side owns (off: the same for every bot of the side, no signal)"),
    "survival":       (0.0,   True,  "per decision step alive (off: dying is what costs)"),
    "flank":          (0.2,   False, "facing of the target (hit from its side/back): the soldiers' facing is not traced yet"),
}


def weights(overrides=None):
    w = {k: v[0] for k, v in TERMS.items()}
    if overrides:
        w.update(overrides)
    return w


def available_terms():
    return [k for k, (_, ok, _) in TERMS.items() if ok]
