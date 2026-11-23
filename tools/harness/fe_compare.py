#!/usr/bin/env python3
"""Front-end side by side (the original run without the port's own game patches: RS_GAME_PATCHES=0, RS_TWIN_STICK=0): the original (boot_probe.py, movies skipped) and Aurek (the desktop build) given the same timed buttons,
their frames at the same moments in one picture (left Aurek, right the original).

  fe_compare.py --events 200:S,320:X --shots 330,360,420 --out /tmp/cmp [--offset 30] [--frames 700]

Events and shots are in the original's frames (60 a second from boot; the splash's animations start at about frame 30, Aurek's
front end at its frame 0, hence --offset).  Keys: X cross, O circle, S start, Q square, T triangle, U D L R.
"""
import argparse, os, subprocess, sys, tempfile
from PIL import Image

HERE = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.abspath(os.path.join(HERE, '../..'))
PSP = {'X': 0x4000, 'O': 0x2000, 'S': 0x8, 'Q': 0x8000, 'T': 0x1000, 'U': 0x10, 'D': 0x40, 'L': 0x80, 'R': 0x20}
ap = argparse.ArgumentParser()
ap.add_argument('--events', default=''); ap.add_argument('--shots', required=True); ap.add_argument('--out', required=True)
ap.add_argument('--offset', type=int, default=30); ap.add_argument('--frames', type=int, default=0)
ap.add_argument('--game', default=os.path.join(ROOT, '..', 'gd', 'GAME')); ap.add_argument('--data', default='/tmp/mvA')
ap.add_argument('--env', action='append', default=[])
ap.add_argument('--henv', action='append', default=[], help="extra environment for the original (K=V)")
ap.add_argument('--hsave', default='', help="the original's save folder (kept between runs)")
a = ap.parse_args()
ev = [(int(f), k) for f, k in (e.split(':') for e in a.events.split(',') if e)]
shots = [int(s) for s in a.shots.split(',')]
os.makedirs(a.out, exist_ok=True)
last = max(shots) + 4 if not a.frames else a.frames
pad = []
for f, k in ev: pad += ['%d:%x' % (f, PSP[k]), '%d:0' % (f + 4)]
orig = os.path.join(a.out, 'orig')
subprocess.run([sys.executable, os.path.join(HERE, 'boot_probe.py'), '--game', a.game, '--out', orig, '--frames', str(last), '--every', '2',
                '--keep', '--pad', ','.join(sorted(pad, key=lambda s: int(s.split(':')[0])))] + (['--env', 'RS_SAVEDIR=' + a.hsave] if a.hsave else []) + sum((['--env', kv] for kv in a.henv), []) + ['--env', 'RS_GAME_PATCHES=0', '--env', 'RS_TWIN_STICK=0', '--env', 'RS_CREDITS=100', '--env', 'RS_ANY_SLOT=0', '--env', 'RS_SAVE_MANAGER=1'], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
aur_pad = ','.join('%d:%s' % (f - a.offset, k) for f, k in ev)
env = dict(os.environ, AK_FIXED_DT='0.0166667', AK_INTRO_MOVIES='', AK_AUDIO='0', AK_VSYNC='0', AK_WIDTH='480', AK_HEIGHT='272',
           AK_DATA_DIR=a.data, AK_FE_PAD=aur_pad)
for kv in a.env: k, v = kv.split('=', 1); env[k] = v
procs = []
for s in shots:
    e = dict(env, AK_SAVE_DIR=env.get('AK_SAVE_DIR') or tempfile.mkdtemp(prefix='aksave_'), AK_SCREENSHOT=os.path.join(a.out, 'a_%d.ppm' % s), AK_SCREENSHOT_FRAME=str(s - a.offset))
    procs.append(subprocess.Popen(['xvfb-run', '-a', '-s', '-screen 0 1280x720x24', os.path.join(ROOT, 'build/engine/aurek_viewer')], cwd=a.data, env=e,
                                  stdout=open(os.path.join(a.out, 'a_%d.log' % s), 'w'), stderr=subprocess.STDOUT))
for p in procs: p.wait()
W, H = 480, 272
m = Image.new('RGB', (W * 2, H * len(shots)))
for i, s in enumerate(shots):
    ap_ = os.path.join(a.out, 'a_%d.ppm' % s)
    if os.path.exists(ap_): m.paste(Image.open(ap_).resize((W, H)), (0, i * H))
    f = s if s % 2 == 0 else s + 1
    op = os.path.join(orig, 'f_%05d.png' % f)
    if os.path.exists(op): m.paste(Image.open(op).resize((W, H)), (W, i * H))
m.save(os.path.join(a.out, 'cmp.png')); print(os.path.join(a.out, 'cmp.png'))
keep = {'f_%05d.png' % (s if s % 2 == 0 else s + 1) for s in shots}            # (only the frames shown: the rest would fill the disk)
for f in os.listdir(orig):
    if f.startswith('f_') and f not in keep: os.remove(os.path.join(orig, f))
