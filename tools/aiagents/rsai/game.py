"""Starting and stopping the game for training (the AIAgents PC build).

The game runs headless (RS_DEDICATED=2: no window, no sound; an offline instant-action match that it starts by itself, through
team selection and the results screens), on a fixed game clock as fast as the PC allows (RS_FAST=1 RS_VCLOCK=1), in lockstep with
the trainer, which controls one side's bots (RS_AI_BRIDGE_SYNC=1 RS_AI_BRIDGE_CONTROL=1).  RS_AI_WINDOW=1 (config: window: true)
shows it in a window instead.  Its data folder (settings, log.txt) is the run's game/ folder; the game files come from game_dir.
"""
import os, subprocess, sys, time


class GameProcess:
    def __init__(self, exe, game_dir, home, port, maps, decision_hz=5, fast=True, window=False, extra_env=None, log=print):
        self.exe, self.game_dir, self.home, self.port = exe, game_dir, home, port
        self.maps, self.hz, self.fast, self.window, self.extra, self.log = maps, decision_hz, fast, window, extra_env or {}, log
        self.proc = None

    def env(self):
        e = dict(os.environ)
        e.update(RS_DATA_DIR=self.home, RS_GAME_DIR=os.path.join(self.game_dir, "GAME"), RS_MODS_DIR=os.path.join(self.home, "mods"),
                 RS_DEDICATED="2", RS_SESSION_MAPS=",".join(self.maps), RS_SESSION_HOST_DELAY="8", RS_MOVIES="0",
                 RS_AI_BRIDGE=f"127.0.0.1:{self.port}", RS_AI_BRIDGE_HZ=str(self.hz), RS_AI_BRIDGE_SYNC="1", RS_AI_BRIDGE_CONTROL="1",
                 RS_AI_WINDOW="1" if self.window else "0")
        if self.fast:
            e.update(RS_FAST="1", RS_VCLOCK="2")      # the fixed game clock only during matches (hle.c guest_us)
        if not self.window:
            e.update(SDL_AUDIODRIVER="dummy")
            if sys.platform != "win32":
                e.update(SDL_VIDEODRIVER="dummy")
        e.update({k: str(v) for k, v in self.extra.items()})
        return e

    def start(self):
        self.stop()
        os.makedirs(os.path.join(self.home, "mods"), exist_ok=True)
        lp = os.path.join(self.home, "log.txt")                         # keep the last run's log (crash reports)
        if os.path.exists(lp):
            try:
                os.replace(lp, os.path.join(self.home, "log_previous.txt"))
            except OSError:
                pass
        flags = 0x08000000 if (sys.platform == "win32" and not self.window) else 0          # CREATE_NO_WINDOW
        out = open(os.path.join(self.home, "game_console.txt"), "ab")
        self.proc = subprocess.Popen([self.exe], cwd=os.path.dirname(os.path.abspath(self.exe)), env=self.env(), stdout=out, stderr=subprocess.STDOUT, creationflags=flags)
        self.log(f"[train] game started (pid {self.proc.pid}, maps {', '.join(self.maps)})")

    def alive(self):
        return self.proc is not None and self.proc.poll() is None

    def exit_code(self):
        return None if self.proc is None else self.proc.poll()

    def stop(self):
        if self.proc and self.proc.poll() is None:
            self.proc.terminate()
            try:
                self.proc.wait(10)
            except subprocess.TimeoutExpired:
                self.proc.kill()
        self.proc = None
