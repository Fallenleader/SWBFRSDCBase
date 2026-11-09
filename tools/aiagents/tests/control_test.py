"""Checks that the game obeys the trainer (needs a game started with RS_AI_BRIDGE_SYNC=1 RS_AI_BRIDGE_CONTROL=1).
One team's bots are held at a point: their own start position, or that + RS_TEST_OFFSET="dx dy dz".  The game's own AI leaves the
start to take command posts; held bots stay.  Prints the two teams' distance to the point every 10 s, and PASS when at least 60%
of the held team ends within 30 units of it.  (Checked 2026-11-08, Tatooine: held team 7 -> 21 units after 90 s, 75% within 30,
while the game's team left its own start; sent 60 units away, the held team closed from 65 to 26-35 units within 20 s.)
    python tests/control_test.py --port 47800 --seconds 60"""
import argparse, os, sys, time
import numpy as np
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from rsai.bridge import Bridge

ap = argparse.ArgumentParser(); ap.add_argument("--port", type=int, default=47800); ap.add_argument("--seconds", type=float, default=60)
a = ap.parse_args()
b = Bridge(a.port); print("[test] waiting for the game"); b.accept()
team = dest = None; start = {}; t_end = None; s = None
while True:
    s = b.read(); r = s.recs
    if len(r) < 12:
        b.reply(r["id"], np.zeros(len(r), np.uint32)); continue
    if team is None:
        if not s.actions_applied:
            print("FAIL: this game build or setting does not apply actions (RS_AI_BRIDGE_SYNC=1 RS_AI_BRIDGE_CONTROL=1)"); sys.exit(1)
        team = int(np.unique(r["team"])[0]); other = r["team"] != team
        own = r["pos"][~other].mean(0); dest = own + np.array([float(x) for x in os.environ.get("RS_TEST_OFFSET", "0 0 0").split()], np.float32); t_end = time.time() + a.seconds
        start = {int(i): float(np.hypot(*(p - dest)[[0, 2]])) for i, p in zip(r["id"], r["pos"])}
        print(f"[test] team {team}: {int((r['team'] == team).sum())} bots sent to {np.round(dest, 1)} for {a.seconds:.0f} s")
    mine = r["team"] == team
    par = np.zeros((len(r), 4), np.float32); par[mine, :3] = dest; par[mine, 3] = 1
    b.reply(r["id"], np.zeros(len(r), np.uint32), par)
    if time.time() > t_end:
        break
    if int(time.time()) % 10 == 0 and int(time.time()) != globals().get("_lt"):
        _lt = int(time.time()); dd = np.hypot(r["pos"][:, 0] - dest[0], r["pos"][:, 2] - dest[2])
        print(f"  t-{t_end - time.time():3.0f}s  controlled {dd[mine].mean():6.1f}  game's {dd[~mine].mean():6.1f}", flush=True)
r = s.recs; d = np.hypot(r["pos"][:, 0] - dest[0], r["pos"][:, 2] - dest[2])
mine = r["team"] == team
def rep(m, name):
    d1 = d[m]; print(f"  {name}: {m.sum()} bots, mean distance to the point at the end {np.mean(d1):.1f}, policy flag {int(r['policy'][m].sum())}")
    return 0.0, float(np.mean(d1))
c0, c1 = rep(mine, "controlled team"); rep(~mine, "game's team")
near_c = float(np.mean(d[mine] < 30)); near_g = float(np.mean(d[~mine] < 30))
print(f"  within 30 units of the point: controlled {near_c * 100:.0f}%, game's {near_g * 100:.0f}%")
ok = near_c >= 0.6 and c1 < 30 and r["policy"][mine].sum() > 0
print("PASS" if ok else "FAIL"); b.close(); sys.exit(0 if ok else 1)
