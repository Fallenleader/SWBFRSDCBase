#!/usr/bin/env python3
"""Drive the original game (the decompiled build, build/linux64/rs_linux64) through its menus into a match, then run a test program.

The harness runs in lock-step with this script (RS_DRIVE, platform/common/hle.c): every STEP vblanks it writes the screen and waits
for the pad state to use next.  Screens are recognised with screens.py; each known screen gets a short button sequence.  Because
the game waits for the answer, loading times no longer move the inputs around: the same command gives the same match start.

  drive.py --game ~/gd/GAME --planet 3 --out /tmp/run [--program walk_forward] [--frames 3000]

Planet rows (Instant Action list): 0 Boz Pity, 1 Endor, 2 Geonosis, 3 Hoth, 4 Echo Base, 5 Kashyyyk, 6 Korriban, 7 Mustafar ...
After the match starts, --program decides the input (programs below); every step's frame is kept as out/step_<frame>.ppm when
--keep is given.
"""
import argparse, os, subprocess, sys, tempfile, time, shutil
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import screens

STEP = 10                     # vblanks per lock-step (the driver answers every STEP frames)
CROSS, CIRCLE, SQUARE, TRIANGLE = 0x4000, 0x2000, 0x8000, 0x1000
UP, RIGHT, DOWN, LEFT, START, SELECT = 0x10, 0x20, 0x40, 0x80, 0x8, 0x1
LTRIG, RTRIG = 0x100, 0x200

def press(b, hold=1, gap=2):
    return [(b, 128, 128)] * hold + [(0, 128, 128)] * gap

def menu_actions(screen, planet, state):
    """The button sequence for a recognised menu screen (None: wait)."""
    if screen in ('profile_prompt', 'new_profile'): return press(DOWN) + press(CROSS)        # a fresh profile, default name
    if screen in ('difficulty', 'save_choice', 'save_slots', 'profile_saved', 'main_menu', 'single_player', 'mode', 'era'):
        return press(CROSS)
    if screen == 'planet':
        seq = []
        if not state.get('planet_picked'): seq += sum((press(DOWN) for _ in range(planet)), []); state['planet_picked'] = True
        return seq + press(CROSS)
    if screen == 'planet_playlist': return press(RIGHT) + press(DOWN) + press(DOWN) + press(CROSS)   # Launch
    if screen == 'team_select': return press(CROSS)                                               # Auto
    if screen == 'spawn_map': state['launched'] = True; return press(CROSS)                      # the default spawn point
    return None

# ---- test programs: (frames since the match began, frame) -> pad (buttons, lx, ly)
def prog_idle(i, fr): return (0, 128, 128)
def prog_walk_forward(i, fr): return (0, 128, 0)                                  # left stick full forward
def prog_cross_mash(i, fr): return (CROSS if (i // STEP) % 3 == 0 else 0, 128, 128)   # get through class / spawn screens
def prog_walk_stop(i, fr): return (0, 128, 0) if i < 60 else (0, 128, 128)       # run 1 s, then let go
def prog_half_stick(i, fr): return (0, 128, 64)                                    # left stick half forward
def prog_strafe_switch(i, fr): return (0, 128, 0) if i < 60 else (0, 255, 128)     # run forward 1 s, then strafe right
def prog_run_jump(i, fr): return (0x100 if 60 <= i < 64 else 0, 128, 0)         # run, tap L at 1 s (the PSP layout's jump)
def prog_stand_jump(i, fr): return (0x100 if 60 <= i < 64 else 0, 128, 128)     # stand, tap L at 1 s
def prog_jump_back(i, fr): return (0x100 if 60 <= i < 64 else 0, 128, 0 if i < 75 else 255)      # run, jump, pull back in the air
def prog_still_jump_fwd(i, fr): return (0x100 if 60 <= i < 64 else 0, 128, 128 if i < 75 else 0)  # stand, jump, push forward in the air
def prog_strafe_circle(i, fr): return (0, 128, 0) if (i // 120) % 2 == 0 else (0, 128, 255)   # run forward / back in 2 s turns
def prog_custom_menu(i, fr):                                                     # (with --hp 30:-1) the spawn screens, then the customisation menu
    if 220 <= i < 224: return (CROSS, 128, 128)
    if 270 <= i < 274: return (SQUARE, 128, 128)
    if i >= 300 and (i - 300) % 30 < 4 and i < 300 + 30 * 7: return (DOWN, 128, 128)   # then down through the categories
    return (0, 128, 128)
PROGRAMS = {'custom_menu': prog_custom_menu, 'strafe_circle': prog_strafe_circle, 'jump_back': prog_jump_back, 'still_jump_fwd': prog_still_jump_fwd, 'run_jump': prog_run_jump, 'stand_jump': prog_stand_jump, 'hold': None, 'walk_stop': prog_walk_stop, 'half_stick': prog_half_stick, 'strafe_switch': prog_strafe_switch, 'idle': prog_idle, 'walk_forward': prog_walk_forward, 'cross_mash': prog_cross_mash}

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--game', default='/home/claude/gd/GAME')
    ap.add_argument('--bin', default=os.path.join(os.path.dirname(os.path.abspath(__file__)), '../../build/linux64/rs_linux64'))
    ap.add_argument('--planet', type=int, default=3)
    ap.add_argument('--out', default='/tmp/drive')
    ap.add_argument('--program', default='idle', choices=sorted(PROGRAMS))
    ap.add_argument('--frames', type=int, default=3000, help='frames to run after the match starts')
    ap.add_argument('--limit', type=int, default=40000, help='give up after this frame')
    ap.add_argument('--keep', action='store_true', help='keep every step frame after the match starts')
    ap.add_argument('--env', action='append', default=[], help='extra NAME=VALUE for the game (logs)')
    ap.add_argument('--buttons', default='0', help="the 'hold' program's buttons (hex), held from --at frames into the match")
    ap.add_argument('--at', type=int, default=60)
    ap.add_argument('--until', type=int, default=100000, help="the 'hold' program's buttons are let go after this many frames")
    ap.add_argument('--hold', default='128,0', help="the 'hold' program's stick: LX,LY (0..255, 128 centred)")
    ap.add_argument('--tp', default='', help='F:X,Y,Z - move the player to X Y Z (game axes) F frames into the match')
    ap.add_argument('--hp', default='', help="F:H - set the player's health to H F frames into the match")
    ap.add_argument('--fine', type=int, default=0, help='after the match starts, step every frame for this many frames')
    a = ap.parse_args()
    shutil.rmtree(a.out, ignore_errors=True); os.makedirs(a.out)
    drv = tempfile.mkdtemp(prefix='rsdrive_'); save = tempfile.mkdtemp(prefix='rssave_')
    env = dict(os.environ, LIBGL_ALWAYS_SOFTWARE='1', RS_FAST='1', RS_VCLOCK='1', RS_DRIVE=drv, RS_DRIVE_EVERY=str(STEP), RS_SAVEDIR=save)
    for kv in a.env: k, v = kv.split('=', 1); env[k] = v
    log = open(os.path.join(a.out, 'game.log'), 'w')
    p = subprocess.Popen(['xvfb-run', '-a', 'setarch', '-R', os.path.abspath(a.bin)], cwd=a.game, env=env, stdout=log, stderr=log)
    queue, state, last, start, trace = [], {}, -1, None, open(os.path.join(a.out, 'trace.txt'), 'w')
    states = open(os.path.join(a.out, 'state.log'), 'w')        # every step after the match starts: "frame N" then the units
    try:
        while p.poll() is None:
            try: fr = int(open(os.path.join(drv, 'frame.txt')).read())
            except (OSError, ValueError): time.sleep(0.002); continue
            if fr == last: time.sleep(0.001); continue
            last = fr; img = os.path.join(drv, 'frame.ppm')
            if start is None:
                if not queue:
                    scr, d = screens.classify(img)
                    trace.write('%d %s %.1f\n' % (fr, scr, d))
                    if state.get('launched') and scr is None:
                        start = fr; trace.write('%d match\n' % fr); shutil.copy(img, os.path.join(a.out, 'match_start.ppm'))
                        if a.hp:
                            f_, h_ = a.hp.split(':'); open(os.path.join(drv, 'hp.txt'), 'w').write('%d %s\n' % (fr + int(f_), h_))
                        if a.tp:
                            f_, xyz = a.tp.split(':'); open(os.path.join(drv, 'tp.txt'), 'w').write('%d %s\n' % (fr + int(f_), xyz.replace(',', ' ')))
                    else:
                        act = menu_actions(scr, a.planet, state)
                        queue = act if act else [(0, 128, 128)] * 3
                pad = queue.pop(0) if queue else (0, 128, 128)
            else:
                i = fr - start
                pad = ((int(a.buttons, 16) if a.at <= i < a.until else 0),) + tuple(int(x) for x in a.hold.split(',')) if a.program == 'hold' else PROGRAMS[a.program](i, fr)
                if a.keep: shutil.copy(img, os.path.join(a.out, 'step_%05d.ppm' % fr))
                try: states.write(open(os.path.join(drv, 'state.txt')).read())
                except OSError: pass
                if fr - start >= a.frames: open(os.path.join(drv, 'pad.txt'), 'w').write('-1\n'); break
            if fr > a.limit: open(os.path.join(drv, 'pad.txt'), 'w').write('-1\n'); break
            ev = STEP
            if start is not None and a.fine: ev = 1 if fr - start < a.fine else STEP
            tmp = os.path.join(drv, 'pad.tmp'); open(tmp, 'w').write('%d %x %d %d 128 128 %d\n' % (fr, pad[0], pad[1], pad[2], ev)); os.replace(tmp, os.path.join(drv, 'pad.txt'))
        p.wait(timeout=60)
    finally:
        if p.poll() is None: p.kill()
        shutil.copy(os.path.join(drv, 'frame.ppm'), os.path.join(a.out, 'last.ppm')) if os.path.exists(os.path.join(drv, 'frame.ppm')) else None
        trace.close(); states.close()
    print('match started at frame', start, '- out:', a.out)

if __name__ == '__main__':
    main()
