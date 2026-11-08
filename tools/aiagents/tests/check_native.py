"""Checks the exported model three ways: Python reference, native C (rsnn.c, built here with the host compiler) fp32 and int8.
    python tests/check_native.py runs/<run>/final.zip"""
import os, subprocess, sys, tempfile
import numpy as np
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
import export
from stable_baselines3 import PPO
from rsai import spaces

m = PPO.load(sys.argv[1], device="cpu"); layers, act = export.policy_layers(m)
d = tempfile.mkdtemp(); here = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
exe = os.path.join(d, "rsnn_test")
subprocess.check_call([os.environ.get("CC", "cc"), "-O2", "-o", exe, os.path.join(here, "native/rsnn.c"), os.path.join(here, "native/rsnn_test.c"), "-lm"])
rng = np.random.default_rng(0); n = 256; x = rng.normal(0, 1, (n, spaces.OBS_DIM)).astype(np.float32)
x.tofile(os.path.join(d, "in.f32"))
import torch
with torch.no_grad():
    ref = m.policy.action_net(m.policy.mlp_extractor.forward_actor(torch.from_numpy(x))).numpy()
ok = True
for q in (0, 1):
    p = os.path.join(d, f"m{q}.rsnn"); export.write_rsnn(p, layers, act, q)
    print(subprocess.check_output([exe, p, os.path.join(d, "in.f32"), str(n), os.path.join(d, "out.f32")]).decode().strip())
    out = np.fromfile(os.path.join(d, "out.f32"), np.float32).reshape(n, -1)
    err = float(np.abs(out - ref).max()); agree = float(np.mean(out.argmax(1) == ref.argmax(1)))
    print(f"  {'int8' if q else 'fp32'}: max logit error {err:.2e}, same action {agree * 100:.1f}%")
    ok &= (err < 1e-4 and agree == 1.0) if q == 0 else agree >= 0.95
print("PASS" if ok else "FAIL"); sys.exit(0 if ok else 1)
