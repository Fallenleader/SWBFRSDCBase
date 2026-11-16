#!/usr/bin/env python3
"""Side-by-side test: the original game and Aurek, same level, same start, same input; the player's path compared.

  compare_walk.py --planet 3 --level "CLASSIC HOTH" [--program walk_forward] [--frames 600] [--out /tmp/cmp]

1. The original (drive.py) is driven into the match and runs the program; its player's position is logged every 10 frames.
2. Aurek starts its player where the original's was at the match start, facing the same way (AK_TEST_SPAWN), holds the same
   input (AK_TEST_MOVE) at a fixed 1/60 s step, and logs the same way (AK_TEST_TRACE).
3. The report: per second, both positions, their gap, ground speed and height (game axes).  Exit code 0 always; read the report.
"""
import argparse, math, os, subprocess, sys
HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, '../..'))
MOVES = {'jump_back': '0,1,0,0', 'still_jump_fwd': '0,0,0,0', 'run_jump': '0,1,0,0', 'walk_forward': '0,1,0,0', 'idle': '0,0,0,0', 'walk_stop': '0,1,0,0', 'walk_half': '0,0.63,0,0'}
DRIVE = {'walk_half': ['--program', 'hold', '--hold', '128,48'], 'walk_stop': ['--program', 'walk_stop']}           # (the original's pad for the same stick: 48 = 0.63 up)
UNTIL = {'walk_stop': 60}
EXTRA = {'run_jump': {'AK_TEST_JUMP': '63'}, 'jump_back': {'AK_TEST_JUMP': '63', 'AK_TEST_MOVE_AT': '75:0,-1,0,0'},
         'still_jump_fwd': {'AK_TEST_JUMP': '63', 'AK_TEST_MOVE_AT': '75:0,1,0,0'}}                                # (L held 60-63 in the original: let go at 64)                                                  # frames before the stick is let go

def original(a):
    out = os.path.join(a.out, 'original')
    if not a.reuse: subprocess.run([sys.executable, os.path.join(HERE, 'drive.py'), '--planet', str(a.planet), '--out', out, *(DRIVE.get(a.program) or ['--program', a.program]),
                    '--frames', str(a.frames), '--fine', str(a.frames)], check=True, stdout=subprocess.DEVNULL)   # (every frame logged from the start)
    path, frame = [], None
    for line in open(os.path.join(out, 'state.log')):
        w = line.split()
        if w[0] == 'frame': frame = int(w[1])
        elif w[0] == 'obj' and w[7] == '1':
            m = [float(x) for x in w[9:18]] if len(w) >= 18 else None
            path.append((frame, float(w[3]), float(w[4]), float(w[5]), m))
    if not path: raise SystemExit('the original reported no player')
    f0 = path[0][0]
    return [(f - f0, x, y, z) for f, x, y, z, _ in path], path[0]

def aurek(a, start):
    _, x, y, z, m = start
    fx, fz = (m[2], m[8]) if m else (0.0, 1.0)                 # forward = the matrix's third column (game axes)
    trace = os.path.join(a.out, 'aurek_trace.txt')
    env = dict(os.environ, AK_LEVEL=a.level, AK_PLAY='1', AK_BOTS='0', AK_FIXED_DT='0.0166667', AK_TEST_MOVE=MOVES[a.program], AK_TEST_MOVE_UNTIL=str(UNTIL.get(a.program, -1)),
               AK_TEST_SPAWN='%f,%f,%f,%f,%f' % (x, y, z, fx, fz), AK_TEST_TRACE=trace, AK_TEST_TRACE_EVERY='1', **EXTRA.get(a.program, {}),
               AK_SCREENSHOT=os.path.join(a.out, 'aurek_end.ppm'), AK_SCREENSHOT_FRAME=str(a.frames + 30))
    subprocess.run(['xvfb-run', '-a', os.path.join(ROOT, 'build/engine/aurek_viewer')], cwd=a.data, env=env,
                   stdout=open(os.path.join(a.out, 'aurek.log'), 'w'), stderr=subprocess.STDOUT, timeout=900)
    path = []
    for line in open(trace):
        f, x, y, z, g = line.split(); path.append((int(f), float(x), float(y), float(z)))
    f0 = path[0][0] - a.lag
    return [(f - f0, x, y, z) for f, x, y, z in path]

def at(path, f):
    """the position at frame f, interpolated between the logged ones (the logs need not share frame numbers)"""
    if f <= path[0][0]: return path[0]
    for p, q in zip(path, path[1:]):
        if q[0] >= f:
            u = (f - p[0]) / max(1, q[0] - p[0])
            return (f,) + tuple(p[k] + (q[k] - p[k]) * u for k in (1, 2, 3))
    return path[-1]

def report(a, orig, ak):
    lines = ['# %s, program %s, %d frames (60 per second); game axes (y down)' % (a.level, a.program, a.frames),
             '#  t(s) | original x y z | speed | aurek x y z | speed | gap(m) | dy(m)']
    worst = 0.0
    for s in range(0, a.frames // 60 + 1):
        f = s * 60; o, k = at(orig, f), at(ak, f)
        o1, k1 = at(orig, max(0, f - 60)), at(ak, max(0, f - 60))
        so = math.hypot(o[1] - o1[1], o[3] - o1[3]) / max(1e-6, (o[0] - o1[0]) / 60.0) if o[0] > o1[0] else 0.0
        sk = math.hypot(k[1] - k1[1], k[3] - k1[3]) / max(1e-6, (k[0] - k1[0]) / 60.0) if k[0] > k1[0] else 0.0
        gap = math.dist(o[1:], k[1:]); worst = max(worst, gap)
        lines.append('%5.1f | %8.2f %7.2f %8.2f | %5.2f | %8.2f %7.2f %8.2f | %5.2f | %6.2f | %+6.2f' %
                     (s, o[1], o[2], o[3], so, k[1], k[2], k[3], sk, gap, k[2] - o[2]))
    lines.append('# largest gap %.2f m' % worst)
    open(os.path.join(a.out, 'report.txt'), 'w').write('\n'.join(lines) + '\n')
    print('\n'.join(lines))

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--planet', type=int, default=3)
    ap.add_argument('--level', default='CLASSIC HOTH')
    ap.add_argument('--program', default='walk_forward', choices=sorted(MOVES))
    ap.add_argument('--lag', type=int, default=0, help="frames to delay Aurek's trace by: from standing, the original starts its "
                    "crossfade a frame after the pad asks (a latency Aurek does not copy: about 0.1 m ahead from then on)")
    ap.add_argument('--frames', type=int, default=600)
    ap.add_argument('--out', default='/tmp/cmp')
    ap.add_argument('--data', default='/home/claude/gd', help="the folder Aurek runs in (its game data)")
    ap.add_argument('--reuse', action='store_true', help='reuse the original run already in --out (only Aurek runs again)')
    a = ap.parse_args(); os.makedirs(a.out, exist_ok=True)
    orig, start = original(a)
    ak = aurek(a, start)
    report(a, orig, ak)

if __name__ == '__main__':
    main()
