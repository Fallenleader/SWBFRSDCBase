#!/usr/bin/env python3
"""Run the original game (build/linux64/rs_linux64) from boot with a timed pad schedule, keeping each step's frame - for tracing the
boot sequence (movies, skip rules) and menus against Aurek.

  boot_probe.py --game ~/gd/GAME --out /tmp/boot [--frames 2400] [--pad 300:4000,302:0] [--every 10] [--keep]

--pad F:HEX[,F:HEX...]  from frame F on, hold buttons HEX (PSP bits: 0x4000 CROSS, 0x2000 CIRCLE, 0x8 START, 0x10 UP ...)
Writes out/steps.txt: "frame mean_r mean_g mean_b" per step (the screen's average colour - enough to see movies start and end),
and with --keep every step's frame as out/f_<frame>.png.
"""
import argparse, os, subprocess, tempfile, time, shutil, sys

def mean_rgb(ppm):
    with open(ppm, 'rb') as f:
        data = f.read()
    # P6 header: magic, width height, maxval
    parts = data.split(b'\n', 3)
    w, h = (int(x) for x in parts[1].split())
    px = parts[3]
    n = w * h; s = [0, 0, 0]
    step = max(1, n // 4096)
    cnt = 0
    for i in range(0, n, step):
        o = i * 3; s[0] += px[o]; s[1] += px[o + 1]; s[2] += px[o + 2]; cnt += 1
    return [v / cnt for v in s]

ap = argparse.ArgumentParser()
ap.add_argument('--game', required=True); ap.add_argument('--out', required=True)
ap.add_argument('--bin', default=os.path.join(os.path.dirname(os.path.abspath(__file__)), '../../build/linux64/rs_linux64'))
ap.add_argument('--frames', type=int, default=2400); ap.add_argument('--every', type=int, default=10)
ap.add_argument('--pad', default=''); ap.add_argument('--keep', action='store_true')
ap.add_argument('--env', action='append', default=[])
a = ap.parse_args()
sched = sorted((int(f), int(h, 16)) for f, h in (e.split(':') for e in a.pad.split(',') if e))
shutil.rmtree(a.out, ignore_errors=True); os.makedirs(a.out)
drv = tempfile.mkdtemp(prefix='rsboot_'); save = tempfile.mkdtemp(prefix='rssave_')
env = dict(os.environ, LIBGL_ALWAYS_SOFTWARE='1', RS_FAST='1', RS_VCLOCK='1', RS_DRIVE=drv, RS_DRIVE_EVERY=str(a.every), RS_SAVEDIR=save)
for kv in a.env: k, v = kv.split('=', 1); env[k] = v
log = open(os.path.join(a.out, 'game.log'), 'w')
p = subprocess.Popen(['xvfb-run', '-a', 'setarch', '-R', os.path.abspath(a.bin)], cwd=a.game, env=env, stdout=log, stderr=log)
out = open(os.path.join(a.out, 'steps.txt'), 'w'); last = -1
try:
    while p.poll() is None:
        try: fr = int(open(os.path.join(drv, 'frame.txt')).read())
        except (OSError, ValueError): time.sleep(0.002); continue
        if fr == last: time.sleep(0.001); continue
        last = fr; img = os.path.join(drv, 'frame.ppm')
        try:
            m = mean_rgb(img); out.write('%d %.1f %.1f %.1f\n' % (fr, m[0], m[1], m[2])); out.flush()
            if a.keep: subprocess.run(['ffmpeg', '-v', 'error', '-y', '-i', img, os.path.join(a.out, 'f_%05d.png' % fr)])
        except Exception as e: out.write('%d ? %s\n' % (fr, e))
        btn = 0
        for f_, h_ in sched:
            if fr >= f_: btn = h_
        if fr >= a.frames: open(os.path.join(drv, 'pad.txt'), 'w').write('-1\n'); break
        tmp = os.path.join(drv, 'pad.tmp'); open(tmp, 'w').write('%d %x 128 128 128 128 %d\n' % (fr, btn, a.every)); os.replace(tmp, os.path.join(drv, 'pad.txt'))
    p.wait(timeout=60)
finally:
    if p.poll() is None: p.kill()
