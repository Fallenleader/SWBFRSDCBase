"""Reward terms for the infantry policy.  Each says whether the game gives what it needs yet; terms not available contribute 0 and
are listed by `available_terms()` so a run records what it was actually trained on."""

# name: (default weight, available now?, source)
TERMS = {
    "survival":          (0.002, True,  "per decision step alive"),
    "death":             (-1.0,  True,  "the bot's record leaving the AI table / health reaching 0"),
    "damage_taken":      (-0.5,  True,  "health fraction lost (soldier sub-object +0x28)"),
    "enemy_down_nearby": (0.5,   True,  "PROXY for kills: an enemy within 35 units of the agent dies (no killer id yet)"),
    "objective":         (1.0,   True,  "its side takes (+) or loses (-) a command post (shared by the side's agents)"),
    "posts_held":        (0.01,  True,  "per step, the fraction of posts its side owns"),
    "inactivity":        (-0.01, True,  "moved < 0.5 units with no enemy within 50 units"),
    "kill":              (1.0,   False, "kill events with the killer's id"),
    "damage_dealt":      (0.02,  False, "damage events with the source id"),
    "friendly_fire":     (-0.5,  False, "damage events with the source's team"),
    "flank":             (0.2,   False, "facing of the target (hit from its side/back)"),
    "positioning":       (0.01,  False, "cover / line-of-sight data"),
}


def weights(overrides=None):
    w = {k: v[0] for k, v in TERMS.items()}
    if overrides:
        w.update(overrides)
    return w


def available_terms():
    return [k for k, (_, ok, _) in TERMS.items() if ok]
