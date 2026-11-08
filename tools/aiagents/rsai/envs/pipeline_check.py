"""PipelineCheckEnv: NOT the game.  An abstract stand-in with the infantry policy's observation and action spaces, used only to
check that the tooling works end to end (training, seeds, checkpoints, metrics, evaluation, export, native inference parity)
before the game can apply actions.  Its numbers say nothing about how a policy plays Renegade Squadron.

The task: points on a plane; the agent picks a tactical action each step; it is rewarded for keeping 15-30 units from the nearest
"enemy" point and for not standing still.  Built only from the shared observation builder, so the feature code is exercised."""
import numpy as np
import gymnasium as gym
from .. import protocol, spaces


class PipelineCheckEnv(gym.Env):
    metadata = {"render_modes": []}

    def __init__(self, n_enemies=4, n_allies=3, max_steps=200):
        self.observation_space = gym.spaces.Box(-np.inf, np.inf, (spaces.OBS_DIM,), np.float32)
        self.action_space = gym.spaces.Discrete(spaces.N_ACTIONS)
        self.ne, self.na, self.max_steps = n_enemies, n_allies, max_steps

    def _recs(self):
        n = 1 + self.na + self.ne; r = np.zeros(n, protocol.REC)
        r["id"] = np.arange(1, n + 1); r["alive"] = 1; r["team"] = [0] * (1 + self.na) + [1] * self.ne
        r["pos"] = self.pos; r["health"] = 100.0; return r

    def reset(self, seed=None, options=None):
        super().reset(seed=seed)
        n = 1 + self.na + self.ne
        self.pos = np.zeros((n, 3), np.float32); self.pos[:, [0, 2]] = self.np_random.uniform(-60, 60, (n, 2))
        self.t = 0; self.tr = spaces.Tracker(); r = self._recs(); obs = spaces.build_obs(r, self.posts(), self.tr, 0.2); self.tr.update(r)
        return obs[0], {}

    def posts(self):
        return np.zeros(0, protocol.POST)

    def step(self, a):
        me = self.pos[0]; en = self.pos[1 + self.na:]
        d = en[:, [0, 2]] - me[[0, 2]]; j = int(np.argmin(np.hypot(d[:, 0], d[:, 1]))); v = d[j] / (np.hypot(*d[j]) + 1e-6)
        side = np.array([-v[1], v[0]])
        move = {1: v, 2: -v, 3: side, 4: -side, 6: (v + side) * 0.7, 7: (v - side) * 0.7}.get(int(a), np.zeros(2))   # a toy; not spaces.destination
        old = me.copy(); me[[0, 2]] += 3.0 * move
        en[:, [0, 2]] += self.np_random.normal(0, 1.0, (len(en), 2))
        self.t += 1
        dist = float(np.min(np.hypot(*(en[:, [0, 2]] - me[[0, 2]]).T)))
        r = (0.05 if 15 <= dist <= 30 else -0.01) - (0.01 if np.hypot(*(me - old)[[0, 2]]) < 0.5 else 0.0)
        rec = self._recs(); obs = spaces.build_obs(rec, self.posts(), self.tr, 0.2); self.tr.update(rec)
        return obs[0], r, False, self.t >= self.max_steps, {"dist": dist}
