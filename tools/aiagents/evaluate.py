"""Evaluate policies over several seeds and write metrics JSON.

    python evaluate.py --model runs/<run>/final.zip [--env pipeline_check] [--seeds 1 2 3] [--episodes 20]
    python evaluate.py --baseline random|hold ...                  (reference policies)
    python evaluate.py --recording runs/rec.npz                    (the original game AI, from a bridge recording)

Game metrics (K/D, damage, cover use, flanking, objective) need the instrumentation listed in docs/INTEGRATION.md; the ones the
bridge gives now (survival time, deaths, inactivity, spacing to enemies and allies) are computed from recordings."""
import argparse, json, time
import numpy as np


def eval_env_policy(policy, env_kind, seeds, episodes):
    from rsai.envs.pipeline_check import PipelineCheckEnv
    out = []
    for s in seeds:
        env = PipelineCheckEnv(); rets = []
        for e in range(episodes):
            obs, _ = env.reset(seed=s * 1000 + e); done = False; R = 0.0
            while not done:
                obs, r, term, trunc, _ = env.step(policy(obs)); R += r; done = term or trunc
            rets.append(R)
        out.append({"seed": s, "mean_return": float(np.mean(rets)), "std_return": float(np.std(rets))})
    return out


def eval_recording(path, idle_dist=0.5):
    from rsai import protocol
    d = np.load(path); recs = d["recs"]; counts = d["counts"]; t = d["frame"].astype(np.float64) / 60.0   # game time
    offs = np.concatenate([[0], np.cumsum(counts)]); life, deaths, idle, spacing_e, spacing_a = {}, 0, [], [], []
    prev, last_seen = {}, {}
    for k in range(len(counts)):
        r = recs[offs[k]:offs[k + 1]]
        for x in r:
            i = int(x["id"]); p = x["pos"]; al = int(x["alive"])
            if i in prev:
                pp, pa, pt = prev[i]
                if pa and al:
                    life[i] = life.get(i, 0) + (t[k] - pt); idle.append(float(np.hypot(*(p - pp)[[0, 2]]) < idle_dist))
            prev[i] = (p, al, t[k])
            last_seen[i] = k
        alive = r[r["alive"] != 0]
        if len(alive) > 1:
            P = alive["pos"]; D = np.sqrt(((P[:, None] - P[None]) ** 2).sum(-1)); np.fill_diagonal(D, np.inf)
            same = alive["team"][:, None] == alive["team"][None]
            spacing_e.append(float(np.mean(np.min(np.where(~same, D, np.inf), 1)[np.isfinite(np.min(np.where(~same, D, np.inf), 1))])) if (~same).any() else np.nan)
            spacing_a.append(float(np.mean(np.min(np.where(same, D, np.inf), 1)[np.isfinite(np.min(np.where(same, D, np.inf), 1))])) if same.sum() > len(alive) else np.nan)
    # a bot that dies leaves the game's AI table (its record stops; the respawn is a new id), so a death is a record that stops
    # before the end of the recording.  (The alive flag stays 1 in practice.)
    deaths = sum(1 for k in last_seen.values() if k < len(counts) - 3)
    secs = float(t[-1] - t[0]) if len(t) > 1 else 0.0
    return {"recording": path, "seconds": secs, "snapshots": int(len(counts)), "bots": len(prev), "deaths": deaths,
            "deaths_per_bot_minute": deaths / max(1, len(prev)) / max(secs / 60, 1e-9),
            "inactivity_fraction": float(np.mean(idle)) if idle else None,
            "mean_nearest_enemy": float(np.nanmean(spacing_e)) if spacing_e else None,
            "mean_nearest_ally": float(np.nanmean(spacing_a)) if spacing_a else None,
            "not_measured_yet": ["kill_death_ratio", "damage_dealt", "damage_taken", "cover_utilisation", "flanking",
                                 "team_support", "objective_contribution"]}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--model"); ap.add_argument("--baseline", choices=["random", "hold"]); ap.add_argument("--recording")
    ap.add_argument("--env", default="pipeline_check"); ap.add_argument("--seeds", type=int, nargs="+", default=[1, 2, 3])
    ap.add_argument("--episodes", type=int, default=20); ap.add_argument("--out")
    a = ap.parse_args()
    if a.recording:
        res = eval_recording(a.recording)
    else:
        if a.model:
            from stable_baselines3 import PPO
            m = PPO.load(a.model, device="cpu"); pol = lambda o: int(m.predict(o, deterministic=True)[0]); name = a.model
        elif a.baseline == "random":
            rng = np.random.default_rng(0); pol = lambda o: int(rng.integers(10)); name = "random"
        else:
            pol = lambda o: 0; name = "hold"
        t0 = time.time(); per = eval_env_policy(pol, a.env, a.seeds, a.episodes)
        res = {"policy": name, "env": a.env, "per_seed": per, "mean_return": float(np.mean([p["mean_return"] for p in per])),
               "wall_s": time.time() - t0}
    s = json.dumps(res, indent=2); print(s)
    if a.out:
        open(a.out, "w").write(s)


if __name__ == "__main__":
    main()
