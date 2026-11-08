"""Train the infantry policy with PPO (Stable-Baselines3).

    python train.py --config configs/infantry_v0.yaml [--seed 1] [--timesteps N] [--env pipeline_check|game]

Writes runs/<name>_s<seed>/: config.yaml, checkpoints/, best/, progress.csv, tensorboard/, final.zip, available_rewards.txt"""
import argparse, os, sys, yaml
import torch
from stable_baselines3 import PPO
from stable_baselines3.common.env_util import make_vec_env
from stable_baselines3.common.callbacks import CheckpointCallback, EvalCallback
from stable_baselines3.common.logger import configure
from rsai import config, rewards
from rsai.envs.pipeline_check import PipelineCheckEnv
from rsai.envs.game_env import GameBridgeEnv


def make_env(cfg, kind):
    if kind == "pipeline_check":
        return PipelineCheckEnv
    if kind == "game":
        return lambda: GameBridgeEnv(port=cfg["game"]["port"])
    raise SystemExit(f"unknown env {kind}")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--config", default="configs/infantry_v0.yaml"); ap.add_argument("--seed", type=int)
    ap.add_argument("--timesteps", type=int); ap.add_argument("--env"); ap.add_argument("--out", default="runs")
    a = ap.parse_args(); cfg = config.load(a.config)
    seed = a.seed if a.seed is not None else cfg["seeds"][0]; kind = a.env or cfg["env"]
    steps = a.timesteps or cfg["total_timesteps"]
    run = os.path.join(a.out, f"{cfg['name']}_{kind}_s{seed}"); os.makedirs(run, exist_ok=True)
    config.seed_everything(seed); torch.set_num_threads(max(1, os.cpu_count() // 2))
    with open(os.path.join(run, "config.yaml"), "w") as f:
        yaml.safe_dump({**cfg, "seed": seed, "env": kind, "total_timesteps": steps}, f)
    with open(os.path.join(run, "available_rewards.txt"), "w") as f:
        f.write("\n".join(rewards.available_terms()) + "\n")
    n_envs = cfg["n_envs"] if kind == "pipeline_check" else 1
    env = make_vec_env(make_env(cfg, kind), n_envs=n_envs, seed=seed)
    eval_env = make_vec_env(make_env(cfg, kind), n_envs=1, seed=seed + 10000) if kind == "pipeline_check" else None
    act = {"tanh": torch.nn.Tanh, "relu": torch.nn.ReLU}[cfg["policy"]["activation"]]
    model = PPO("MlpPolicy", env, seed=seed, verbose=0, device="cpu",
                policy_kwargs=dict(net_arch=dict(pi=cfg["policy"]["hidden"], vf=cfg["policy"]["hidden"]), activation_fn=act),
                **cfg["ppo"])
    model.set_logger(configure(run, ["csv", "tensorboard", "stdout"]))
    cbs = [CheckpointCallback(max(1, cfg["checkpoint_every"] // n_envs), os.path.join(run, "checkpoints"), name_prefix="ppo")]
    if eval_env is not None:
        cbs.append(EvalCallback(eval_env, best_model_save_path=os.path.join(run, "best"), log_path=os.path.join(run, "eval"),
                                eval_freq=max(1, cfg["eval_every"] // n_envs), n_eval_episodes=cfg["eval_episodes"], deterministic=True))
    model.learn(steps, callback=cbs, progress_bar=False)
    model.save(os.path.join(run, "final"))
    print(f"[train] done: {run}/final.zip")


if __name__ == "__main__":
    sys.exit(main())
