"""Unattended training against the real game.  Runs until you type  stop  (then Enter) in its window, or press Ctrl+C; either way
it saves the model first.  Starting it again continues from the last save.

    python run_training.py --config configs/infantry_game.yaml

What it does, by itself:
  - starts the game headless on a fixed game clock as fast as the PC allows, in an offline match over the configured maps;
  - gives one side's bots to the policy and leaves the other side to the game's original AI (the sides swap every match);
  - restarts the game if it crashes, hangs or stops reporting;
  - every `report_every_steps`: compares the policy's side with the original AI's side over that stretch of play (deaths per
    bot-minute, command posts held and taken, enemies downed nearby, standing idle) and writes it to progress_game.csv;
  - saves a checkpoint every `checkpoint_every_steps`, keeps latest.zip (to resume) and best.zip (the best score so far, only
    once the policy has played a minimum of game time in that window).
Files: runs/<name>/ (latest.zip, best.zip, checkpoints/, progress_game.csv, tensorboard/, train_log.txt, game/ = the game's
data folder with its log.txt).
"""
import argparse, csv, os, signal, sys, threading, time
os.environ.setdefault("OMP_NUM_THREADS", "1")       # a 10k-weight network: one thread is fastest; more spin on every step (Windows)
os.environ.setdefault("MKL_NUM_THREADS", "1")
import numpy as np
import torch
import yaml
from stable_baselines3 import PPO
from stable_baselines3.common.callbacks import BaseCallback
from stable_baselines3.common.logger import configure
from rsai import config, rewards, spaces
from rsai.game import GameProcess
from rsai.gamevec import GameVecEnv, MultiGameVecEnv, ProcGameVecEnv, StopTraining

STOP = threading.Event()


def watch_stdin():
    """'stop' + Enter in the window ends training (after saving)."""
    for line in sys.stdin:
        if line.strip().lower() in ("stop", "quit", "exit", "q"):
            print("[train] stop requested: finishing this step, saving..."); STOP.set(); return


class Supervisor(BaseCallback):
    def __init__(self, run, cfg, venv, log):
        super().__init__(); self.run, self.cfg, self.venv, self.log = run, cfg, venv, log
        self.best = -1e9; self.next_report = None; self.next_ckpt = None      # set from the model's step count at the first step (resumed runs)
        self.csv = os.path.join(run, "progress_game.csv"); self.t0 = time.time()
        bp = os.path.join(run, "best_score.txt")
        if os.path.exists(bp):
            self.best = float(open(bp).read().strip() or -1e9)

    def _on_step(self):
        n = self.num_timesteps
        if self.next_report is None:
            self.next_report = n + self.cfg["report_every_steps"]; self.next_ckpt = n + self.cfg["checkpoint_every_steps"]
        if n >= self.next_ckpt:
            self.next_ckpt += self.cfg["checkpoint_every_steps"]
            os.makedirs(os.path.join(self.run, "checkpoints"), exist_ok=True)
            self.model.save(os.path.join(self.run, "checkpoints", f"ppo_{n}"))
            self.model.save(os.path.join(self.run, "latest"))
        if n >= self.next_report:
            self.next_report += self.cfg["report_every_steps"]
            s = self.venv.stats.summary(); self.venv.stats.reset()
            s.update(steps=n, wall_hours=(time.time() - self.t0) / 3600, matches=self.venv.matches, game_restarts=self.venv.restarts, game_speed_x=self.venv.game_speed())
            tw, tp = self.venv.timing(); s.update(ms_wait_game=tw, ms_trainer_step=tp)
            new = not os.path.exists(self.csv)
            with open(self.csv, "a", newline="") as f:
                wr = csv.DictWriter(f, fieldnames=list(s.keys()))
                if new:
                    wr.writeheader()
                wr.writerow({k: (round(v, 4) if isinstance(v, float) else v) for k, v in s.items()})
            for k, v in s.items():
                if isinstance(v, (int, float)):
                    self.logger.record(f"game/{k}", v)
            line = (f"[train] {n} steps, {s['wall_hours']:.2f} h, {s['matches']} matches, game {s['game_speed_x']:.1f}x real time (per decision: {s['ms_wait_game']:.1f} ms waiting for the game, {s['ms_trainer_step']:.1f} ms in the trainer) | deaths/bot-min policy {s['policy_deaths_per_bot_min']:.2f}"
                    f" vs original {s['game_deaths_per_bot_min']:.2f} | posts held {s['policy_posts_held']:.2f} vs {s['game_posts_held']:.2f}"
                    f" | enemies downed nearby/bot-min {s['policy_enemy_down_nearby_per_bot_min']:.2f} vs {s['game_enemy_down_nearby_per_bot_min']:.2f}"
                    f" | score {s['score']:+.2f} (best {'none yet' if self.best < -1e8 else format(self.best, '+.2f')})")
            self.log(line)
            if s["game_minutes"] >= self.cfg["min_game_minutes_for_best"] and s["score"] > self.best:
                self.best = s["score"]; self.model.save(os.path.join(self.run, "best"))
                open(os.path.join(self.run, "best_score.txt"), "w").write(f"{self.best}\n")
                self.log(f"[train] new best (score {self.best:+.2f}): best.zip")
        if os.path.exists(os.path.join(self.run, "STOP")):                 # stop_training.bat (or any program) asks it to finish
            try:
                os.remove(os.path.join(self.run, "STOP"))
            except OSError:
                pass
            self.log("[train] STOP file found: saving and finishing"); STOP.set()
        if STOP.is_set() and hasattr(self.venv, "set_stop"):
            self.venv.set_stop()
        return not STOP.is_set()


def main():
    ap = argparse.ArgumentParser(); ap.add_argument("--config", default="configs/infantry_game.yaml"); ap.add_argument("--fresh", action="store_true",
        help="start a new model instead of continuing from latest.zip")
    a = ap.parse_args(); here = os.path.dirname(os.path.abspath(__file__)); os.chdir(here)
    cfg = config.load(a.config)
    run = os.path.join("runs", cfg["name"]); os.makedirs(run, exist_ok=True)
    logf = open(os.path.join(run, "train_log.txt"), "a", buffering=1)
    def log(msg):
        line = time.strftime("%Y-%m-%d %H:%M:%S ") + msg; print(line, flush=True); logf.write(line + "\n")
    exe = os.path.abspath(cfg["game"]["exe"]); gdir = os.path.abspath(cfg["game"]["game_dir"])
    if not os.path.exists(exe):
        log(f"[train] the game was not found: {exe} (configs: game.exe)"); return 1
    if not os.path.isdir(os.path.join(gdir, "GAME")):
        log(f"[train] no GAME folder in {gdir} (configs: game.game_dir = the PC game folder that has GAME\\)"); return 1
    seed = int(cfg.get("seed", 1)); config.seed_everything(seed); torch.set_num_threads(int(cfg.get("torch_threads", 1)))
    with open(os.path.join(run, "config.yaml"), "w") as f:
        yaml.safe_dump(cfg, f)
    open(os.path.join(run, "available_rewards.txt"), "w").write("\n".join(rewards.available_terms()) + "\n")
    g = cfg["game"]
    # several games at once, one per CPU core (game_instances: auto = about half the logical processors, up to 8); each starts on a
    # different map of the rotation and has its own port and data folder (game/, game2/, ...)
    n = g.get("game_instances", "auto")
    n = max(1, min(8, ((os.cpu_count() or 2) - 2) // 2)) if str(n).lower() == "auto" else max(1, int(n))
    def game_args(i):
        maps = g["maps"][i % len(g["maps"]):] + g["maps"][:i % len(g["maps"])]
        return (exe, gdir, os.path.abspath(os.path.join(run, "game" if i == 0 else f"game{i + 1}")), g["port"] + i, maps,
                g["decision_hz"], g.get("fast", True), g.get("window", False), g.get("extra_env"))
    if n == 1:
        venv = GameVecEnv(GameProcess(*game_args(0), log), slots=g["agents"], port=g["port"], reward_weights=cfg.get("reward_weights"), log=log, stop=STOP.is_set)
    else:                                   # each game with its own Python process (game_processes: false = threads, the older way)
        if g.get("game_processes", True):
            import gymnasium as gym
            venv = ProcGameVecEnv([dict(index=i, game_args=game_args(i), slots=g["agents"], port=g["port"] + i, reward_weights=cfg.get("reward_weights"),
                                        log_file=os.path.abspath(os.path.join(run, "train_log.txt"))) for i in range(n)], g["agents"],
                                  gym.spaces.Box(-np.inf, np.inf, (spaces.OBS_DIM,), np.float32), gym.spaces.Discrete(spaces.N_ACTIONS))
        else:
            envs = []
            for i in range(n):
                game = GameProcess(*game_args(i), (lambda m, i=i: log(m.replace("[train]", f"[train g{i + 1}]", 1))))
                envs.append(GameVecEnv(game, slots=g["agents"], port=g["port"] + i, reward_weights=cfg.get("reward_weights"), log=game.log, stop=STOP.is_set))
            venv = MultiGameVecEnv(envs)
    # the same amount of play per policy update however many games: n_steps (per agent slot) is divided among the games
    n_steps = max(64, int(cfg["ppo"]["n_steps"]) // n); cfg["ppo"]["n_steps"] = n_steps
    log(f"[train] {n} game{'s' if n > 1 else ''} at once ({n * g['agents']} policy agents, {n_steps} steps each per update)")
    latest = os.path.join(run, "latest.zip")
    act = {"tanh": torch.nn.Tanh, "relu": torch.nn.ReLU}[cfg["policy"]["activation"]]
    if os.path.exists(latest) and not a.fresh:
        model = PPO.load(latest, env=venv, device="cpu", n_steps=n_steps); log(f"[train] continuing from {latest} ({model.num_timesteps} steps so far)")
    else:
        model = PPO("MlpPolicy", venv, seed=seed, verbose=0, device="cpu",
                    policy_kwargs=dict(net_arch=dict(pi=cfg["policy"]["hidden"], vf=cfg["policy"]["hidden"]), activation_fn=act), **cfg["ppo"])
        log(f"[train] new model: {spaces.OBS_DIM} inputs -> {cfg['policy']['hidden']} -> {spaces.N_ACTIONS} actions")
    model.set_logger(configure(run, ["csv", "tensorboard"]))
    threading.Thread(target=watch_stdin, daemon=True).start()
    signal.signal(signal.SIGINT, lambda *_: (print("\n[train] Ctrl+C: saving..."), STOP.set()))
    try:
        os.remove(os.path.join(run, "STOP"))                                # a leftover request from before
    except OSError:
        pass
    log("[train] training: type  stop  and press Enter, press Ctrl+C, or run stop_training.bat to save and finish")
    try:
        model.learn(total_timesteps=int(cfg.get("total_timesteps", 10 ** 12)), callback=Supervisor(run, cfg, venv, log), reset_num_timesteps=False, progress_bar=False)
    except StopTraining:
        pass
    except Exception:
        import traceback; log("[train] stopped by an error:\n" + traceback.format_exc())
    finally:
        model.save(os.path.join(run, "latest")); log(f"[train] saved {latest} ({model.num_timesteps} steps)")
        venv.close()
    log("[train] finished"); return 0


if __name__ == "__main__":
    sys.exit(main())
