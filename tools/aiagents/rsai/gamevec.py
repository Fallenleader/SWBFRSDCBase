"""GameVecEnv: the real game as a Stable-Baselines3 vector environment.

One side's bots are the policy's agents (K slots, one shared policy); the other side is the game's original AI - the opponent and,
in the same match, the baseline.  The controlled side alternates each match.  Each slot holds one bot life: when the bot dies its
episode ends and the slot takes the next bot of that side.  The game runs in lockstep (RS_AI_BRIDGE_SYNC=1), headless and on a
fixed game clock as fast as the PC allows (game.py).
"""
import time
import numpy as np
from stable_baselines3.common.vec_env import VecEnv
import gymnasium as gym
from . import spaces, rewards, weapons
from .bridge import Bridge


class Stats:
    """Per-side counters over a window of game time: the policy's side vs the game's side."""
    def __init__(self):
        self.reset()

    def reset(self):
        self.t0 = None; self.t1 = None
        self.bot_s = {"policy": 0.0, "game": 0.0}; self.deaths = {"policy": 0, "game": 0}
        self.posts = {"policy": 0.0, "game": 0.0}; self.post_samples = 0; self.captures = {"policy": 0, "game": 0}
        self.enemy_down = {"policy": 0, "game": 0}; self.kills = {"policy": 0, "game": 0}; self.idle = {"policy": [0, 0], "game": [0, 0]}

    def summary(self):
        mins = lambda k: self.bot_s[k] / 60.0
        out = {"game_minutes": ((self.t1 or 0) - (self.t0 or 0)) / 60.0}
        for k in ("policy", "game"):
            out[f"{k}_deaths_per_bot_min"] = self.deaths[k] / max(mins(k), 1e-6)
            out[f"{k}_posts_held"] = self.posts[k] / max(self.post_samples, 1)
            out[f"{k}_captures"] = self.captures[k]
            out[f"{k}_enemy_down_nearby_per_bot_min"] = self.enemy_down[k] / max(mins(k), 1e-6)
            out[f"{k}_kills_per_bot_min"] = self.kills[k] / max(mins(k), 1e-6)
            out[f"{k}_idle_frac"] = self.idle[k][0] / max(self.idle[k][1], 1)
        # higher is better for the policy: fewer deaths than the original AI, more posts, more kills (credited by the game's hits)
        out["score"] = (out["game_deaths_per_bot_min"] - out["policy_deaths_per_bot_min"]) + 2.0 * (out["policy_posts_held"] - out["game_posts_held"]) \
            + 0.5 * (out["policy_kills_per_bot_min"] - out["game_kills_per_bot_min"])
        return out


class StopTraining(Exception):
    pass


class GameVecEnv(VecEnv):
    def __init__(self, game, slots=8, port=47800, reward_weights=None, read_timeout=180, log=print, stop=None):
        obs_space = gym.spaces.Box(-np.inf, np.inf, (spaces.OBS_DIM,), np.float32)
        super().__init__(slots, obs_space, gym.spaces.Discrete(spaces.N_ACTIONS))
        self.game, self.port, self.timeout, self.log = game, port, read_timeout, log
        self.w = rewards.weights(reward_weights)
        self.bridge = None; self.slot_id = [None] * slots; self.side_index = 0; self.side = None
        self.tracker = spaces.Tracker(); self.last = None; self.prev_owner = {}; self.prev_alive_ids = set()
        self.stats = Stats(); self.matches = 0; self.no_bots_since = None; self.actions = None
        self.t_wait = 0.0; self.n_read = 0; self.t_step = 0.0
        self.restarts = 0; self.stop_flag = stop or (lambda: False); self.speed = [None, None]   # (game s, real s) at the window start

    # ---------------------------------------------------------------- game connection
    def _connect(self):
        if self.bridge:
            self.bridge.close()
        self.bridge = Bridge(self.port, timeout=self.timeout)
        self.game.start()
        try:
            self.bridge.accept(); self.bridge.conn.settimeout(self.timeout)
        except Exception as e:
            raise RuntimeError(f"the game did not connect within {self.timeout} s: {e}")
        self.slot_id = [None] * self.num_envs; self.last = None; self.side = None; self.tracker = spaces.Tracker()

    def _restart(self, why):
        if self.stop_flag():
            raise StopTraining()
        import os, subprocess
        for _ in range(20):                         # a game that has just died: give it a moment to report its exit code
            if self.game.exit_code() is not None:
                break
            time.sleep(0.1)
        code = self.game.exit_code()
        if os.environ.get("RS_AI_DEBUG_GDB") and code is None and self.game.proc:      # development: where the game was stuck
            subprocess.run(["gdb", "-p", str(self.game.proc.pid), "-batch", "-ex", "thread apply all bt 25"], stdout=open(os.path.join(self.game.home, f"stuck_{self.restarts}.txt"), "w"), stderr=subprocess.STDOUT, timeout=120)
        self.restarts += 1; self.log(f"[train] restarting the game ({why}{'' if code is None else f'; it exited with code {code}'}; its log: game/log_previous.txt)")
        self.game.stop(); self._connect()

    def _read(self):
        while True:
            if self.stop_flag():
                raise StopTraining()
            try:
                t = time.perf_counter(); s = self.bridge.read(); self.t_wait += time.perf_counter() - t; self.n_read += 1
                return s
            except Exception as e:
                self._restart(f"bridge: {e}")

    def _reply_idle(self, s):
        try:
            self.bridge.reply(s.recs["id"], np.zeros(len(s.recs), np.uint32))
        except Exception as e:
            self._restart(f"reply: {e}")

    def _wait_for_match(self):
        """Read (and answer) snapshots until the match has bots of both sides."""
        while True:
            s = self._read()
            teams = np.unique(s.recs["team"][(s.recs["health"] > 0)]) if len(s.recs) else []
            if len(teams) >= 2:
                if self.no_bots_since is not None or self.side is None:     # a new match: switch sides
                    self.matches += 1; self.side_index ^= 1; self.no_bots_since = None
                    self.side = int(sorted(teams)[self.side_index]); self.slot_id = [None] * self.num_envs
                    self.tracker = spaces.Tracker(); self.prev_owner = {}; self.prev_alive_ids = set()
                    self.log(f"[train] match {self.matches}: the policy plays team {self.side}, the original AI the other")
                return s
            if self.no_bots_since is None:
                self.no_bots_since = time.time()
            elif time.time() - self.no_bots_since > 600:
                self._restart("no match for 10 minutes"); self.no_bots_since = time.time()
            self._reply_idle(s)

    # ---------------------------------------------------------------- slots
    def _assign(self, s):
        recs = s.recs; ids = [int(i) for i in recs["id"]]
        alive_ours = [int(r["id"]) for r in recs if r["team"] == self.side and r["health"] > 0]
        taken = set(i for i in self.slot_id if i is not None)
        new = [False] * self.num_envs
        for k in range(self.num_envs):
            if self.slot_id[k] is None or self.slot_id[k] not in ids:
                free = [i for i in alive_ours if i not in taken]
                self.slot_id[k] = free[0] if free else None
                if free:
                    taken.add(free[0])
                new[k] = True
        return new

    def _obs(self, s):
        dt = (s.game_s - self.last.game_s) if self.last else 0.0
        allobs = spaces.build_obs(s, self.tracker, dt)
        idx = {int(i): j for j, i in enumerate(s.recs["id"])}
        out = np.zeros((self.num_envs, spaces.OBS_DIM), np.float32)
        for k, i in enumerate(self.slot_id):
            if i is not None and i in idx:
                out[k] = allobs[idx[i]]
        return out, idx

    # ---------------------------------------------------------------- VecEnv API
    def game_speed(self):
        """game seconds per real second since the last call (the game's speed-up)"""
        s = self._pending_snapshot if hasattr(self, "_pending_snapshot") else None
        if s is None:
            return 0.0
        g0, r0 = self.speed; self.speed = [s.game_s, time.time()]
        return 0.0 if g0 is None or time.time() <= r0 else max(s.game_s - g0, 0.0) / (time.time() - r0)

    def reset(self):
        if self.bridge is None:
            self._connect()
        s = self._wait_for_match(); self._assign(s); obs, _ = self._obs(s); self.last = s; self.tracker.update(s.recs, s.events, s.game_s)
        self._pending_snapshot = s
        return obs

    def step_async(self, actions):
        self.actions = np.asarray(actions)

    def _send(self, s):
        recs = s.recs; idx = {int(i): j for j, i in enumerate(recs["id"])}
        par = np.zeros((len(recs), 4), np.float32); act = np.zeros(len(recs), np.uint32)
        for k, i in enumerate(self.slot_id):
            if i is not None and i in idx:
                j = idx[i]; par[j, :3] = spaces.destination(self.actions[k], j, s, self.tracker); par[j, 3] = 1.0; act[j] = self.actions[k]
        try:
            self.bridge.reply(recs["id"], act, par)
        except Exception as e:
            self._restart(f"reply: {e}")

    def timing(self):
        """per snapshot: ms waiting for the game, ms in the trainer's step (since the last call)"""
        n = max(self.n_read, 1); out = (1000 * self.t_wait / n, 1000 * max(self.t_step - self.t_wait, 0.0) / n)
        self.t_wait = self.t_step = 0.0; self.n_read = 0; return out

    def step_wait(self):
        t0 = time.perf_counter()
        try:
            return self._step_wait()
        finally:
            self.t_step += time.perf_counter() - t0

    def _step_wait(self):
        prev = self._pending_snapshot
        self._send(prev)
        s = self._read()
        if not len(s.recs) or len(np.unique(s.recs["team"][s.recs["health"] > 0])) < 2:
            # the match ended (or the game restarted): every slot's episode ends; wait for the next match
            self.no_bots_since = time.time()
            self._reply_idle(s)                     # lockstep: every snapshot is answered before the next is read
            s = self._wait_for_match()
            obs_prev = np.zeros((self.num_envs, spaces.OBS_DIM), np.float32)
            dones = np.ones(self.num_envs, bool); rews = np.zeros(self.num_envs, np.float32)
            self._assign(s); obs, _ = self._obs(s); self.last = s; self.tracker.update(s.recs, s.events, s.game_s); self._pending_snapshot = s
            return obs, rews, dones, [{"terminal_observation": obs_prev[k]} for k in range(self.num_envs)]
        rews, dones, infos, term_obs = self._rewards(prev, s)
        new = self._assign(s)
        obs, _ = self._obs(s)
        for k in range(self.num_envs):
            if dones[k]:
                infos[k]["terminal_observation"] = term_obs[k]
        self.last = s; self.tracker.update(s.recs, s.events, s.game_s); self._pending_snapshot = s
        return obs, rews, dones, infos

    def _rewards(self, prev, s):
        w = self.w; n = self.num_envs
        rews = np.zeros(n, np.float32); dones = np.zeros(n, bool); infos = [{} for _ in range(n)]
        pidx = {int(i): j for j, i in enumerate(prev.recs["id"])}; cidx = {int(i): j for j, i in enumerate(s.recs["id"])}
        old_obs = spaces.build_obs(prev, self.tracker, 0.0)
        term_obs = np.zeros((n, spaces.OBS_DIM), np.float32)
        dt = max(s.game_s - prev.game_s, 0.0)
        # deaths of each side since the last snapshot (records gone or health <= 0), and where they were
        died = [j for i, j in pidx.items() if prev.recs["health"][j] > 0 and (i not in cidx or s.recs["health"][cidx[i]] <= 0)]
        # posts: captures
        owner = {int(p["id"]): int(p["owner"]) for p in s.posts}
        gained = sum(1 for p, o in owner.items() if o == self.side and self.prev_owner.get(p, o) != self.side)
        lost = sum(1 for p, o in owner.items() if o != self.side and self.prev_owner.get(p) == self.side)
        other_gained = sum(1 for p, o in owner.items() if o not in (0, self.side) and self.prev_owner.get(p, o) != o)
        held = np.mean([o == self.side for o in owner.values()]) if owner else 0.0
        held_other = np.mean([o not in (0, self.side) for o in owner.values()]) if owner else 0.0
        self.prev_owner = owner
        # stats for both sides
        st = self.stats; st.t0 = st.t0 if st.t0 is not None else prev.game_s; st.t1 = s.game_s
        for side_name, is_ours in (("policy", True), ("game", False)):
            m = (s.recs["team"] == self.side) if is_ours else (s.recs["team"] != self.side)
            st.bot_s[side_name] += dt * float(np.sum(m & (s.recs["health"] > 0)))
            st.deaths[side_name] += sum(1 for j in died if (prev.recs["team"][j] == self.side) == is_ours)
            for j in np.where(m & (s.recs["health"] > 0))[0]:
                i = int(s.recs["id"][j])
                if i in pidx:
                    mv = float(np.hypot(*(s.recs["pos"][j] - prev.recs["pos"][pidx[i]])[[0, 2]])); st.idle[side_name][1] += 1; st.idle[side_name][0] += mv < 0.5
        st.posts["policy"] += held; st.posts["game"] += held_other; st.post_samples += 1
        st.captures["policy"] += gained; st.captures["game"] += other_gained
        for j in died:   # enemies downed near a living bot of the other side (both sides counted, for the comparison)
            dp = prev.recs["pos"][j]; dteam = prev.recs["team"][j]
            for side_name, is_ours in (("policy", True), ("game", False)):
                m = ((prev.recs["team"] == self.side) if is_ours else (prev.recs["team"] != self.side)) & (prev.recs["team"] != dteam) & (prev.recs["health"] > 0)
                if np.any(np.hypot(*(prev.recs["pos"][m] - dp)[:, [0, 2]].T) < 35.0):
                    st.enemy_down[side_name] += 1
        # hits since the last snapshot (the game's damage events): kills, damage dealt / taken, friendly fire, assists
        team_of = {int(r["id"]): int(r["team"]) for r in prev.recs}; team_of.update({int(r["id"]): int(r["team"]) for r in s.recs})
        hmax = lambda i: max(self.tracker.hmax.get(i, 0.0), 1.0)
        dealt, ff, killsby, taken, killed_ids = {}, {}, {}, {}, set()
        for e in s.events:
            tg, src, am = int(e["target"]), int(e["source"]), float(min(e["amount"], e["before"]))
            tt, ts = team_of.get(tg), team_of.get(src)
            if tt is None:
                continue
            taken[tg] = taken.get(tg, 0.0) + am / hmax(tg)
            if e["before"] > 0 >= e["after"]:
                killed_ids.add(tg)
                if ts is not None and ts != tt:
                    killsby[src] = killsby.get(src, 0) + 1
                    st.kills["policy" if ts == self.side else "game"] += 1
            if ts is None or src == tg:
                continue
            if ts == tt:
                ff[src] = ff.get(src, 0.0) + am / hmax(tg)
            else:
                dealt[src] = dealt.get(src, 0.0) + am / hmax(tg)
        assist = {}
        for (t, tg, src, am, kl) in self.tracker.recent(5.0):
            if tg in killed_ids and team_of.get(src) is not None and team_of.get(src) != team_of.get(tg):
                assist[src] = assist.get(src, 0) + 1
        # per-slot rewards
        for k, i in enumerate(self.slot_id):
            if i is None or i not in pidx:
                continue
            j = pidx[i]; me = prev.recs["pos"][j]
            dead = j in died or i in killed_ids
            if dead or i not in cidx or prev.recs["health"][j] <= 0:
                rews[k] += (w["death"] if dead else 0.0) + w["kill"] * killsby.get(i, 0) + w["damage_dealt"] * dealt.get(i, 0.0)
                dones[k] = True; term_obs[k] = old_obs[j]; continue
            c = cidx[i]; h0, h1 = float(prev.recs["health"][j]), float(s.recs["health"][c]); hm = max(self.tracker.hmax.get(i, h0), h0, 1e-3)
            r = w["survival"] + w["damage_taken"] * max(h0 - h1, 0.0) / hm
            r += w["kill"] * killsby.get(i, 0) + w["damage_dealt"] * dealt.get(i, 0.0) + w["friendly_fire"] * ff.get(i, 0.0)
            r += w["assist"] * max(assist.get(i, 0) - killsby.get(i, 0), 0)
            r += w["objective"] * (gained - lost) + w["posts_held"] * held
            on_post = False
            if len(s.posts):
                theirs = s.posts["owner"] != self.side
                pd = np.hypot(s.posts["pos"][:, 0] - s.recs["pos"][c][0], s.posts["pos"][:, 2] - s.recs["pos"][c][2])
                if np.any((pd < spaces.POST_RADIUS) & theirs):
                    r += w["capturing"]; on_post = True
                if np.any(theirs) and w.get("approach", 0.0):     # potential-based: metres closer to the nearest post to take
                    p0 = np.hypot(s.posts["pos"][:, 0] - me[0], s.posts["pos"][:, 2] - me[2])
                    r += w["approach"] * float(np.clip(np.min(p0[theirs]) - np.min(pd[theirs]), -3.0, 3.0))
            # range keeping: an enemy in sight within 50% of my weapon's ideal range
            ideal = weapons.ideal_range(s.recs["kit"][c][0]); nid = [int(x) for x in s.recs["near_id"][c]]; nlos = s.recs["near_los"][c]
            for q, eid in enumerate(nid):
                if eid and nlos[q] and eid in cidx:
                    de = float(np.hypot(*(s.recs["pos"][cidx[eid]] - s.recs["pos"][c])[[0, 2]]))
                    if abs(de - ideal) < 0.5 * ideal:
                        r += w["range_keeping"]; break
            mv = float(np.hypot(*(s.recs["pos"][c] - me)[[0, 2]]))
            enemies = prev.recs["pos"][(prev.recs["team"] != self.side) & (prev.recs["health"] > 0)]
            if mv < 0.5 and not on_post and (not len(enemies) or np.min(np.hypot(*(enemies - me)[:, [0, 2]].T)) > 50.0):
                r += w["inactivity"]
            rews[k] = r
        return rews, dones, infos, term_obs

    def close(self):
        if self.bridge:
            self.bridge.close()
        self.game.stop()

    # the rest of the VecEnv interface (single process: nothing to forward)
    def get_attr(self, attr_name, indices=None):
        return [getattr(self, attr_name)] * self.num_envs

    def set_attr(self, attr_name, value, indices=None):
        setattr(self, attr_name, value)

    def env_method(self, method_name, *args, indices=None, **kw):
        return [None] * self.num_envs

    def env_is_wrapped(self, wrapper_class, indices=None):
        return [False] * self.num_envs

    def seed(self, seed=None):
        return [seed] * self.num_envs


def merge_stats(parts):
    """one Stats over several games' windows (game time adds up: two games for a minute = two game minutes)"""
    m = Stats(); m.t0 = 0.0; m.t1 = 0.0
    for p in parts:
        m.t1 += (p.t1 or 0) - (p.t0 or 0); m.post_samples += p.post_samples
        for k in ("policy", "game"):
            m.bot_s[k] += p.bot_s[k]; m.deaths[k] += p.deaths[k]; m.posts[k] += p.posts[k]; m.captures[k] += p.captures[k]
            m.enemy_down[k] += p.enemy_down[k]; m.kills[k] += p.kills[k]; m.idle[k][0] += p.idle[k][0]; m.idle[k][1] += p.idle[k][1]
    return m


class MultiGameVecEnv(VecEnv):
    """Several games at once (one per CPU core), each a GameVecEnv on its own port, stepped in parallel: the policy's slots of every
    game side by side.  The games run in lockstep with the trainer as before, so they all wait while the policy is updated."""
    def __init__(self, envs):
        from concurrent.futures import ThreadPoolExecutor
        self.envs = envs; self.k = envs[0].num_envs
        super().__init__(self.k * len(envs), envs[0].observation_space, envs[0].action_space)
        self.pool = ThreadPoolExecutor(len(envs))

    class _Stats:
        def __init__(self, outer): self.o = outer
        def summary(self): return merge_stats([e.stats for e in self.o.envs]).summary()
        def reset(self):
            for e in self.o.envs:
                e.stats.reset()

    @property
    def stats(self): return MultiGameVecEnv._Stats(self)
    @property
    def matches(self): return sum(e.matches for e in self.envs)
    @property
    def restarts(self): return sum(e.restarts for e in self.envs)

    def game_speed(self):
        return sum(e.game_speed() for e in self.envs)          # game seconds played per real second, all games together

    def timing(self):
        t = [e.timing() for e in self.envs]
        return sum(a for a, _ in t) / len(t), sum(b for _, b in t) / len(t)

    def _all(self, fn):
        return [f.result() for f in [self.pool.submit(fn, e) for e in self.envs]]

    def reset(self):
        return np.concatenate(self._all(lambda e: e.reset()))

    def step_async(self, actions):
        a = np.asarray(actions)
        for i, e in enumerate(self.envs):
            e.step_async(a[i * self.k:(i + 1) * self.k])

    def step_wait(self):
        r = self._all(lambda e: e.step_wait())
        return (np.concatenate([x[0] for x in r]), np.concatenate([x[1] for x in r]), np.concatenate([x[2] for x in r]),
                [i for x in r for i in x[3]])

    def close(self):
        self._all(lambda e: e.close()); self.pool.shutdown(wait=False)

    def get_attr(self, attr_name, indices=None):
        return [getattr(self, attr_name, None)] * self.num_envs

    def set_attr(self, attr_name, value, indices=None):
        pass

    def env_method(self, method_name, *args, indices=None, **kw):
        return [None] * self.num_envs

    def env_is_wrapped(self, wrapper_class, indices=None):
        return [False] * self.num_envs

    def seed(self, seed=None):
        return [seed] * self.num_envs


# ---------------------------------------------------------------- one Python process per game
def _game_worker(conn, spec, stop_event):
    """runs one game and its GameVecEnv in its own process, so the per-step Python work of the games runs on separate cores"""
    import os, signal as _sig, time as _time
    _sig.signal(_sig.SIGINT, _sig.SIG_IGN)                       # Ctrl+C is the main process's business
    os.environ["OMP_NUM_THREADS"] = "1"
    from rsai.game import GameProcess
    logf = open(spec["log_file"], "a", buffering=1)
    def log(msg):
        line = _time.strftime("%Y-%m-%d %H:%M:%S ") + msg.replace("[train]", f"[train g{spec['index'] + 1}]", 1)
        print(line, flush=True); logf.write(line + "\n")
    game = GameProcess(*spec["game_args"], log)
    env = GameVecEnv(game, slots=spec["slots"], port=spec["port"], reward_weights=spec["reward_weights"], log=log, stop=stop_event.is_set)
    while True:
        cmd, arg = conn.recv()
        try:
            if cmd == "reset":
                conn.send(("ok", env.reset()))
            elif cmd == "step":
                env.step_async(arg); conn.send(("ok", env.step_wait()))
            elif cmd == "info":
                conn.send(("ok", (env.stats, env.matches, env.restarts, env.game_speed(), env.timing())))
            elif cmd == "reset_stats":
                env.stats.reset(); conn.send(("ok", None))
            elif cmd == "close":
                env.close(); conn.send(("ok", None)); return
        except StopTraining:
            conn.send(("stop", None))
        except Exception as e:
            import traceback; conn.send(("error", traceback.format_exc()))


class ProcGameVecEnv(VecEnv):
    """Several games, each with its own Python process (the game connection, observations and rewards of each game are computed in
    parallel; with threads they shared one Python interpreter and took turns).  The policy's slots of every game side by side."""
    def __init__(self, specs, slots, obs_space, act_space):
        import multiprocessing as mp
        ctx = mp.get_context("fork" if hasattr(__import__("os"), "fork") else "spawn")
        self.stop_event = ctx.Event(); self.k = slots; self.conns = []; self.procs = []
        for sp in specs:
            a, b = ctx.Pipe()
            p = ctx.Process(target=_game_worker, args=(b, sp, self.stop_event), daemon=True); p.start()
            self.conns.append(a); self.procs.append(p)
        super().__init__(slots * len(specs), obs_space, act_space)
        self._info = None; self._speed = 0.0; self._timing = (0.0, 0.0)

    def _ask(self, cmds):
        for c, x in zip(self.conns, cmds):
            c.send(x)
        out = []; stop = False; err = None
        for c in self.conns:
            st, v = c.recv()
            if st == "stop":
                stop = True
            elif st == "error":
                err = v
            out.append(v)
        if err:
            raise RuntimeError("a game worker failed:\n" + err)
        if stop:
            raise StopTraining()
        return out

    def set_stop(self):
        self.stop_event.set()

    def reset(self):
        return np.concatenate(self._ask([("reset", None)] * len(self.conns)))

    def step_async(self, actions):
        a = np.asarray(actions); self._acts = [("step", a[i * self.k:(i + 1) * self.k]) for i in range(len(self.conns))]

    def step_wait(self):
        r = self._ask(self._acts)
        return (np.concatenate([x[0] for x in r]), np.concatenate([x[1] for x in r]), np.concatenate([x[2] for x in r]),
                [i for x in r for i in x[3]])

    def _refresh(self):
        self._info = self._ask([("info", None)] * len(self.conns))

    class _Stats:
        def __init__(self, outer): self.o = outer
        def summary(self):
            self.o._refresh(); return merge_stats([i[0] for i in self.o._info]).summary()
        def reset(self):
            self.o._ask([("reset_stats", None)] * len(self.o.conns))

    @property
    def stats(self): return ProcGameVecEnv._Stats(self)
    @property
    def matches(self): return sum(i[1] for i in (self._info or [])) if self._info else 0
    @property
    def restarts(self): return sum(i[2] for i in (self._info or [])) if self._info else 0
    def game_speed(self): return sum(i[3] for i in (self._info or [])) if self._info else 0.0
    def timing(self):
        if not self._info:
            return 0.0, 0.0
        t = [i[4] for i in self._info]; return sum(a for a, _ in t) / len(t), sum(b for _, b in t) / len(t)

    def close(self):
        self.stop_event.set()
        for c in self.conns:
            try:
                c.send(("close", None))
            except Exception:
                pass
        for c, p in zip(self.conns, self.procs):
            try:
                if c.poll(60):
                    c.recv()
            except Exception:
                pass
            p.join(10)
            if p.is_alive():
                p.terminate()

    def get_attr(self, attr_name, indices=None):
        return [getattr(self, attr_name, None)] * self.num_envs

    def set_attr(self, attr_name, value, indices=None):
        pass

    def env_method(self, method_name, *args, indices=None, **kw):
        return [None] * self.num_envs

    def env_is_wrapped(self, wrapper_class, indices=None):
        return [False] * self.num_envs

    def seed(self, seed=None):
        return [seed] * self.num_envs
