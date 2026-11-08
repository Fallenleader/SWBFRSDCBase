"""GameBridgeEnv: the real game, through the AI bridge.  Each bot is one agent; one shared policy (parameter sharing).

The bridge streams real observations now.  Training needs the game to apply the policy's actions to its bots (header caps
bit 0); until the game build does that, this env refuses to train rather than learn from actions that do nothing.  See
docs/INTEGRATION.md for what is missing."""
import numpy as np
import gymnasium as gym
from .. import spaces, rewards
from ..bridge import Bridge


class ActionsNotApplied(RuntimeError):
    pass


class GameBridgeEnv(gym.Env):
    """Single-agent view of one bot slot.  Use GameBridgeEnv.agents(...) for a vectorised set over all bots (planned)."""

    def __init__(self, port=47800, agent_index=0, require_actions=True):
        self.observation_space = gym.spaces.Box(-np.inf, np.inf, (spaces.OBS_DIM,), np.float32)
        self.action_space = gym.spaces.Discrete(spaces.N_ACTIONS)
        self.port, self.k, self.require = port, agent_index, require_actions
        self.b = None; self.prev_pos = {}; self.prev_alive = {}; self.last = None

    def _obs(self, s):
        dt = (s.time_s - self.last.time_s) if self.last else 0.0
        obs, ids = spaces.build_obs(s.recs, self.prev_pos, dt)
        self.last = s
        return obs, ids

    def reset(self, seed=None, options=None):
        super().reset(seed=seed)
        if self.b is None:
            self.b = Bridge(self.port); self.b.accept()
        s = self.b.read()
        if self.require and not s.actions_applied:
            raise ActionsNotApplied("this game build streams observations but does not apply actions yet (docs/INTEGRATION.md)")
        obs, ids = self._obs(s); self.ids = ids
        return (obs[self.k] if len(obs) > self.k else np.zeros(spaces.OBS_DIM, np.float32)), {}

    def step(self, a):
        acts = np.zeros(len(self.ids), np.uint32)
        if len(acts) > self.k:
            acts[self.k] = a
        self.b.reply(self.ids, acts)
        s = self.b.read(); obs, ids = self._obs(s)
        i = self.k if len(ids) > self.k else None
        if i is None:
            return np.zeros(spaces.OBS_DIM, np.float32), 0.0, True, False, {}
        pid = int(ids[i]); p = s.recs["pos"][i]; pp = self.prev_pos.get(pid, p)
        r = float(rewards.step_rewards([self.prev_alive.get(pid, 1)], [s.recs["alive"][i]], [np.hypot(*(p - pp)[[0, 2]])])[0])
        self.prev_pos = {int(x): s.recs["pos"][j].copy() for j, x in enumerate(ids)}
        self.prev_alive = {int(x): int(s.recs["alive"][j]) for j, x in enumerate(ids)}
        self.ids = ids
        return obs[i], r, False, False, {}
