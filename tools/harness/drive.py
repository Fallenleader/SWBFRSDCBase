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
    if screen == 'single_player' and state.get('route') == 'cmpn':                                 # Campaign (second item)
        state['launched'] = True
        return press(DOWN) + press(CROSS)
    if screen == 'single_player' and state.get('route') == 'gc':                                   # Galactic Conquest (third item)
        state['launched'] = True
        return press(DOWN) + press(DOWN) + press(CROSS)
    if screen in ('difficulty', 'save_choice', 'save_slots', 'profile_saved', 'main_menu', 'single_player', 'mode', 'era'):
        return press(CROSS)
    if screen == 'planet':
        seq = []
        if not state.get('planet_picked'): seq += sum((press(DOWN) for _ in range(planet)), []); state['planet_picked'] = True
        return seq + press(CROSS)
    if screen == 'planet_playlist': return press(RIGHT) + press(DOWN) + press(DOWN) + press(CROSS)   # Launch
    if screen in ('team_select', 'team_select_space'):                                             # Auto, or --team rebel/empire
        seq = []
        if not state.get('team_picked'): seq += sum((press(DOWN) for _ in range(state.get('team', 0))), []); state['team_picked'] = True
        return seq + press(CROSS)
    if screen in ('spawn_map', 'spawn_map_space'):                                                 # the default spawn point, or --spawn N down
        state['launched'] = True
        return sum((press(DOWN) for _ in range(state.get('spawn', 0))), []) + press(CROSS)
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
def prog_cluster(i, fr):                                                         # (with --hp 30:-1) customisation: explosive -> cluster grenades, spawn, throw at 2 s
    t = [(220, CROSS), (270, SQUARE), (300, DOWN), (330, DOWN), (360, CROSS), (390, DOWN), (420, DOWN), (450, DOWN), (480, CROSS), (520, CIRCLE), (560, CROSS), (600, CROSS), (640, CROSS)]
    for at, b in t:
        if at <= i < at + 4: return (b, 128, 128)
    if 800 <= i < 804: return (SQUARE, 128, 128)
    return (0, 128, 128)
def prog_detpack(i, fr):                                                         # (with --hp 30:-1) customisation: explosive -> det packs (the second), spawn, square at 800 and 920 frames
    t = [(220, CROSS), (270, SQUARE), (300, DOWN), (330, DOWN), (360, CROSS), (390, DOWN), (480, CROSS), (520, CIRCLE), (560, CROSS), (600, CROSS), (640, CROSS)]
    for at, b in t:
        if at <= i < at + 4: return (b, 128, 128)
    if 800 <= i < 804 or 920 <= i < 924: return (SQUARE, 128, 128)
    return (0, 128, 128)
def prog_powerup(i, fr):                                                         # (with --hp 30:-1) customisation: power-up -> Rage (two down), spawn, then try buttons every 100 frames from 800
    t = [(220, CROSS), (270, SQUARE), (300, DOWN), (330, DOWN), (360, DOWN), (390, DOWN), (420, CROSS), (450, DOWN), (480, DOWN), (510, CROSS), (550, CIRCLE), (590, CROSS), (630, CROSS), (670, CROSS)]
    for at, b in t:
        if at <= i < at + 4: return (b, 128, 128)
    if 700 <= i < 780 or 1000 <= i < 2400: return (RTRIG, 128, 128)          # fire before and after the power-up
    if 800 <= i < 804: return (RIGHT, 128, 128)                                  # the lower slot: the power-up
    if 900 <= i < 904: return (SQUARE, 128, 128)                                 # use it
    return (0, 128, 128)
def prog_sniper(i, fr):                                                          # (with --hp 30:-1) customisation: weapon 1 -> Sniper Rifle (five down), spawn, triangle at 800 / 900 / 1000 (zoom levels)
    t = [(220, CROSS), (270, SQUARE), (300, CROSS), (330, DOWN), (360, DOWN), (390, DOWN), (420, DOWN), (450, DOWN), (480, CROSS), (520, CIRCLE), (560, CROSS), (600, CROSS), (640, CROSS)]
    for at, b in t:
        if at <= i < at + 4: return (b, 128, 128)
    if i >= 800 and (i - 800) % 100 < 4 and i < 1300: return (TRIANGLE, 128, 128)
    return (0, 128, 128)
def prog_hero(i, fr):                                                            # (with RS_HERO_FAST=5) accept the hero offer (d-pad left) at 400, then cross (the saber) single at 900 and 1000, mashed 1100-1250
    if 400 <= i < 404: return (LEFT, 128, 128)
    if 900 <= i < 904 or 1000 <= i < 1004: return (CROSS, 128, 128)
    if 1100 <= i < int(os.environ.get("RS_HERO_MASH_END", "1250")) and (i - 1100) % 10 < 4: return (CROSS, 128, 128)
    return (0, 128, 128)
def prog_respawn(i, fr):                                                         # (with --hp 30:-1) back in at the next wave, standing still
    for at in (220, 260, 300, 340, 380, 420, 460, 500, 540):
        if at <= i < at + 4: return (CROSS, 128, 128)
    return (0, 128, 128)
def prog_respawn_up(i, fr):                                                      # respawn, then d-pad up at 12 s (change equipment at the post?)
    if 720 <= i < 724: return (UP, 128, 128)
    return prog_respawn(i, fr)
def prog_drive_late(i, fr):                                                      # get in 3 s into the match, full forward from 4 s
    if 90 <= i < 94: return (UP, 128, 128)
    return (0, 128, 0) if i >= 120 else (0, 128, 128)
def prog_board_try(i, fr):                                                       # tap UP every 0.5 s from 1.5 s to 6 s, then full forward
    if 90 <= i < 360 and (i - 90) % 30 < 4: return (UP, 128, 128)
    return (0, 128, 0) if i >= 400 else (0, 128, 128)
def prog_fly(i, fr):                                                             # (--tp beside a parked flyer) get in at 1.5 s, hold R (take off,
    b = UP if 90 <= i < 94 else 0                                                 #  then accelerate) from 3 s to 8 s, release; stick per --fly
    if 180 <= i < 480: b |= RTRIG
    return (b, 128, 128)
def prog_fly_tap(i, fr):                                                         # get in, tap R to take off, then nothing (the cruise)
    b = UP if 90 <= i < 94 else 0
    if 180 <= i < 186: b |= RTRIG
    return (b, 128, 128)
def prog_fly_slow(i, fr):                                                        # take off, cruise 5 s, then hold L (slow down) 4 s
    b = UP if 90 <= i < 94 else 0
    if 180 <= i < 186: b |= RTRIG
    if 480 <= i < 720: b |= LTRIG
    return (b, 128, 128)
def prog_fly_stick(i, fr):                                                       # take off, cruise 4 s, stick right 2 s, stick forward 2 s, back 2 s
    b = UP if 90 <= i < 94 else 0
    if 180 <= i < 186: b |= RTRIG
    lx, ly = 128, 128
    if 420 <= i < 540: lx = 255
    elif 600 <= i < 720: ly = 0
    elif 780 <= i < 900: ly = 255
    return (b, lx, ly)
def prog_fly_rl(i, fr):                                                          # take off, cruise 2 s, R 0.5 s, wait 2 s, L 0.5 s, wait 2 s, L 2 s, R 2 s
    b = UP if 90 <= i < 94 else 0
    if 180 <= i < 186 or 420 <= i < 450 or 840 <= i < 960: b |= RTRIG
    if 570 <= i < 600 or 720 <= i < 840: b |= LTRIG
    return (b, 128, 128)
def prog_fly_pitch(i, fr):                                                       # take off, cruise 5 s (out of the hangar), stick forward 1 s, let go
    b = UP if 90 <= i < 94 else 0                                                 #  2 s, stick back 1 s, let go
    if 180 <= i < 186: b |= RTRIG
    ly = 0 if 540 <= i < 600 else 255 if 720 <= i < 780 else 128
    return (b, 128, ly)
def prog_fly_boost(i, fr):                                                       # take off, R to cruise, then R tapped twice quickly, later R + L
    b = UP if 90 <= i < 94 else 0
    if 180 <= i < 186 or 300 <= i < 306 or 420 <= i < 424 or 430 <= i < 434: b |= RTRIG
    if 600 <= i < 720: b |= RTRIG | LTRIG
    return (b, 128, 128)
def prog_fly_climb(i, fr):                                                       # take off, cruise 4 s, stick back 1 s, let go 3 s, stick forward 0.5 s
    b = UP if 90 <= i < 94 else 0
    if 180 <= i < 186: b |= RTRIG
    ly = 255 if 480 <= i < 540 else 0 if 720 <= i < 750 else 128
    return (b, 128, ly)
def prog_walker(i, fr):                                                          # get in at 1.5 s; forward 4 s from 5 s, let go 2 s, forward + right
    b = UP if 90 <= i < 94 else 0                                                 #  3 s, right alone 2 s, let go
    if 300 <= i < 540: return (b, 128, 0)
    if 660 <= i < 840: return (b, 255, 0)
    if 840 <= i < 960: return (b, 255, 128)
    return (b, 128, 128)
def prog_veh_fire(i, fr):                                                        # get in at 1.5 s; cross held 2 s from 3.5 s; square tapped at 7 s;
    b = UP if 90 <= i < 94 else 0                                                 #  square held 2 s from 9 s
    if 210 <= i < 330: b |= CROSS
    if 420 <= i < 424 or 540 <= i < 660: b |= SQUARE
    return (b, 128, 128)
def prog_fly_space(i, fr):                                                       # (space) get in, R to lift off, R held 1 s later (cruise), straight
    b = UP if 90 <= i < 94 else 0                                                 #  out; stick right 2 s at 15 s, stick forward 1 s at 19 s
    if 180 <= i < 186 or 420 <= i < 480: b |= RTRIG
    lx = 255 if 900 <= i < 1020 else 128
    ly = 0 if 1140 <= i < 1200 else 128
    return (b, lx, ly)
BOOST_TRY = [RTRIG, LTRIG, TRIANGLE, CIRCLE, SQUARE, DOWN, LEFT, RIGHT]
def prog_fly_boost2(i, fr):                                                      # take off, then for each candidate button every 2 s from 6 s:
    b = UP if 90 <= i < 94 else 0                                                 #  tap 4 frames, 6 frames off, hold 30 frames
    if 180 <= i < 186: b |= RTRIG
    k, t = divmod(i - 360, 120)
    if i >= 360 and k < len(BOOST_TRY) and (t < 4 or 10 <= t < 40): b |= BOOST_TRY[k]
    return (b, 128, 128)
def prog_fly_boost3(i, fr):                                                      # take off, R+L together 1 s at 6 s; R tap then L held 1 s at 9 s;
    b = UP if 90 <= i < 94 else 0                                                 #  L tap then R held 1 s at 12 s
    if 180 <= i < 186: b |= RTRIG
    if 360 <= i < 420: b |= RTRIG | LTRIG
    if 540 <= i < 546: b |= RTRIG
    if 552 <= i < 612: b |= LTRIG
    if 720 <= i < 726: b |= LTRIG
    if 732 <= i < 792: b |= RTRIG
    return (b, 128, 128)
def prog_fly_boost4(i, fr):                                                      # take off; R double tap + hold: 6 on / 6 off / 60 held at 6.7 s,
    b = UP if 90 <= i < 94 else 0                                                 #  10 on / 15 off / 60 held at 10 s
    if 180 <= i < 186: b |= RTRIG
    if 400 <= i < 406 or 412 <= i < 472: b |= RTRIG
    if 600 <= i < 610 or 625 <= i < 685: b |= RTRIG
    return (b, 128, 128)
def prog_fly_space_boost(i, fr):                                                 # (space) get in, lift off, R held 1 s (cruise), out of the hangar;
    b = UP if 90 <= i < 94 else 0                                                 #  R double tap + hold 2 s at 15 s
    if 180 <= i < 186 or 420 <= i < 480: b |= RTRIG
    if 900 <= i < 906 or 912 <= i < 1032: b |= RTRIG
    return (b, 128, 128)
def prog_gc(i, fr):                                                              # (--route gc) after Galactic Conquest: cross every 3 s, the d-pad between
    k = i // 180; t = i % 180
    if t < 4: return (CROSS, 128, 128)
    if 60 <= t < 64 and k >= 3: return (RIGHT, 128, 128)
    return (0, 128, 128)
def prog_gc_tech(i, fr):                                                         # (--route gc) cross at 0 / 3 / 6 s (to purchase), square at 9 s (the tech page), then
    k = i // 180; t = i % 180                                                    #   every 3 s: right, right, down, cross, circle, then down / right
    if k < 3: return (CROSS, 128, 128) if t < 4 else (0, 128, 128)
    if k == 3: return (SQUARE, 128, 128) if t < 4 else (0, 128, 128)
    seq = [RIGHT, RIGHT, DOWN, CROSS, CIRCLE, DOWN, RIGHT, LEFT]
    b = seq[(k - 4) % len(seq)]
    return (b, 128, 128) if t < 4 else (0, 128, 128)
def prog_gc_attack(i, fr):                                                       # (--route gc) cross 0-9 s, triangle 18 s (end purchase), then every 3 s:
    k = i // 180; t = i % 180                                                    #   cross (source), right, cross (destination), cross (confirm), square
    seq = {0: CROSS, 1: CROSS, 2: CROSS, 3: CROSS, 6: TRIANGLE, 7: CROSS, 8: RIGHT, 9: CROSS, 10: CROSS, 11: SQUARE}   # (auto-resolve),
    b = seq.get(k, CROSS if k > 11 else 0)                                                                                #   then cross every 3 s
    return (b, 128, 128) if t < 4 else (0, 128, 128)
def prog_gc_ai(i, fr):                                                           # (--route gc) cross 0-9 s, select 15 s (troops overview), circle 18 s,
    k = i // 180; t = i % 180                                                    #   triangle 24 / 30 / 36 s (end each phase: the AI's turn), cross every 6 s after
    seq = {0: CROSS, 1: CROSS, 2: CROSS, 3: CROSS, 5: SELECT, 6: CIRCLE, 8: TRIANGLE, 10: TRIANGLE, 12: TRIANGLE}
    b = seq.get(k, CROSS if k > 12 and k % 2 == 0 else 0)
    return (b, 128, 128) if t < 4 else (0, 128, 128)
def prog_gc_overview(i, fr):                                                     # (--route gc) cross 0-9 s, then R1 at 15 s, L1 at 21 s, select held 27-30 s,
    k = i // 180; t = i % 180                                                    #   select tapped 36 s, select tapped 42 s
    if k < 4: return (CROSS, 128, 128) if t < 4 else (0, 128, 128)
    if k == 5 and t < 4: return (0x200, 128, 128)
    if k == 7 and t < 4: return (0x100, 128, 128)
    if k == 9: return (SELECT, 128, 128)
    if k in (12, 14) and t < 4: return (SELECT, 128, 128)
    return (0, 128, 128)
def prog_slow_cross(i, fr):                                                      # cross every 10 s (menus and dialogues; cut-scenes mostly left to play)
    return (CROSS, 128, 128) if i % 600 < 4 else (0, 128, 128)
def prog_cmpn_train(i, fr):                                                      # (--route cmpn) the campaign menu's New and the intro as slow_cross, forward 1.5 s
    if i < 1300: return prog_slow_cross(i, fr)                                   # at 24.5 s (into the first marker, straight ahead of the spawn), idle to 40 s,
    if 1470 <= i < 1560: return (0, 128, 0)                                      # forward 3 s, forward + L held 4 s (the sprint), idle 4 s, forward with L tapped
    if i < 2400: return (0, 128, 128)                                            # (jump) every 2 s to 55 s (the cut-scene), idle; cross tapped at 66.7 s and 68.3 s
    if i < 2580: return (0, 128, 0)                                              # (the lock-on page, after its 'Press X'), R held 69-82 s (lock on the droid), then cross held
    if i < 2820: return (0x100, 128, 0)                                          # 82-90 s (fire)
    if i < 3060: return (0, 128, 128)
    if i < 3300: return (0x100 if i % 120 < 4 else 0, 128, 0)
    if i in range(4000, 4004) or i in range(4100, 4104): return (CROSS, 128, 128)
    if 4150 <= i < 4900: return (0x200, 128, 128)
    if 4900 <= i < 5050: return (0x200 | CROSS, 128, 128)
    if 5150 <= i < 5800: return (CROSS if i % 120 < 4 else 0, 128, 128)      # the pages after the droid (X every 2 s), then (--tp 5800:..) at the post
    if 5900 <= i < 7000: return (0, 128, 128)                                # stand 18 s (the capture), then X every 2 s (the jetpack page) and d-pad up
    if 7000 <= i < 7600: return (CROSS if i % 120 < 4 else 0, 128, 128)      # at 7700 (the customisation menu)
    if i in range(7700, 7704): return (0x10, 128, 128)
    if any(i in range(k, k + 4) for k in (7820, 7850, 7880)): return (0x40, 128, 128)   # the menu: down x3 (Special Item), X, X, circle, circle
    if i in range(7960, 7964): return (0x10, 128, 128)                       # (in the list: up to the JETPACK above None)
    if any(i in range(k, k + 4) for k in (7920, 8000)): return (CROSS, 128, 128)
    if any(i in range(k, k + 4) for k in (8080, 8160)): return (CIRCLE, 128, 128)
    if 8300 <= i < 9000: return (0x100 if i % 60 < 4 or i % 60 in range(8, 12) else 0, 128, 128)   # L double-taps (the jetpack, page 0x8B)
    return (0, 128, 128)
def prog_zoom(i, fr):                                                            # triangle tapped at 2 s, 4 s, 6 s, 8 s (zoom levels in and out)
    return (TRIANGLE if i in range(120, 124) or i in range(240, 244) or i in range(360, 364) or i in range(480, 484) else 0, 128, 128)
def prog_drive(i, fr):                                                           # (with --tp next to a vehicle) get in, then full forward
    if 40 <= i < 44: return (UP, 128, 128)
    return (0, 128, 0) if i >= 90 else (0, 128, 128)
def prog_drive_turn(i, fr):                                                      # get in, forward 3 s, then forward + full right 3 s, then release
    if 40 <= i < 44: return (UP, 128, 128)
    if i < 90: return (0, 128, 128)
    if i < 270: return (0, 128, 0)
    if i < 450: return (0, 255, 0)
    return (0, 128, 0)
def prog_drive_cam(i, fr):                                                       # (--tp at 1 s beside a vehicle) get in at 1.5 s; forward 3 s from 3 s,
    if 90 <= i < 94: return (UP, 128, 128)                                       #  forward + full right 3 s, let go 2 s, full back 2 s, let go
    if 180 <= i < 360: return (0, 128, 0)
    if 360 <= i < 540: return (0, 255, 0)
    if 660 <= i < 780: return (0, 128, 255)
    return (0, 128, 128)
PROGRAMS = {'cmpn_train': prog_cmpn_train, 'gc': prog_gc, 'slow_cross': prog_slow_cross, 'gc_overview': prog_gc_overview, 'gc_ai': prog_gc_ai, 'gc_attack': prog_gc_attack, 'gc_tech': prog_gc_tech, 'hero': prog_hero, 'sniper': prog_sniper, 'powerup': prog_powerup, 'detpack': prog_detpack, 'respawn_up': prog_respawn_up, 'respawn': prog_respawn, 'cluster': prog_cluster, 'zoom': prog_zoom, 'drive_cam': prog_drive_cam, 'fly_space_boost': prog_fly_space_boost, 'fly_boost4': prog_fly_boost4, 'fly_boost3': prog_fly_boost3, 'fly_boost2': prog_fly_boost2, 'fly_space': prog_fly_space, 'veh_fire': prog_veh_fire, 'walker': prog_walker, 'fly_climb': prog_fly_climb, 'fly_pitch': prog_fly_pitch, 'fly_boost': prog_fly_boost, 'fly_rl': prog_fly_rl, 'fly': prog_fly, 'fly_tap': prog_fly_tap, 'fly_slow': prog_fly_slow, 'fly_stick': prog_fly_stick, 'board_try': prog_board_try, 'drive_late': prog_drive_late, 'drive_turn': prog_drive_turn, 'drive': prog_drive, 'custom_menu': prog_custom_menu, 'strafe_circle': prog_strafe_circle, 'jump_back': prog_jump_back, 'still_jump_fwd': prog_still_jump_fwd, 'run_jump': prog_run_jump, 'stand_jump': prog_stand_jump, 'hold': None, 'walk_stop': prog_walk_stop, 'half_stick': prog_half_stick, 'strafe_switch': prog_strafe_switch, 'idle': prog_idle, 'walk_forward': prog_walk_forward, 'cross_mash': prog_cross_mash}

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--game', default='/home/claude/gd/GAME')
    ap.add_argument('--bin', default=os.path.join(os.path.dirname(os.path.abspath(__file__)), '../../build/linux64/rs_linux64'))
    ap.add_argument('--planet', type=int, default=3)
    ap.add_argument('--route', default='ia', choices=['ia', 'gc', 'cmpn'], help='ia: Instant Action into a match; gc: Galactic Conquest (the "match" starts at its first screen)')
    ap.add_argument('--team', choices=['auto', 'rebel', 'empire'], default='auto')
    ap.add_argument('--spawn', type=int, default=0, help='spawn list entry (0: the first; space: 1 = the first craft)')
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
    ap.add_argument('--hp', action='append', default=[], help="F:H - set the player's health to H F frames into the match (repeatable)")
    ap.add_argument('--fine', type=int, default=0, help='after the match starts, step every frame for this many frames')
    a = ap.parse_args()
    shutil.rmtree(a.out, ignore_errors=True); os.makedirs(a.out)
    drv = tempfile.mkdtemp(prefix='rsdrive_'); save = tempfile.mkdtemp(prefix='rssave_')
    env = dict(os.environ, LIBGL_ALWAYS_SOFTWARE='1', RS_FAST='1', RS_VCLOCK='1', RS_DRIVE=drv, RS_DRIVE_EVERY=str(STEP), RS_SAVEDIR=save)
    for kv in a.env: k, v = kv.split('=', 1); env[k] = v
    log = open(os.path.join(a.out, 'game.log'), 'w')
    p = subprocess.Popen(['xvfb-run', '-a', 'setarch', '-R', os.path.abspath(a.bin)], cwd=a.game, env=env, stdout=log, stderr=log)
    queue, state, last, start, trace = [], {'team': ['auto', 'rebel', 'empire'].index(a.team), 'spawn': a.spawn, 'route': a.route}, -1, None, open(os.path.join(a.out, 'trace.txt'), 'w')
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
                    if scr and not os.path.exists(os.path.join(a.out, 'menu_%s.ppm' % scr)): shutil.copy(img, os.path.join(a.out, 'menu_%s.ppm' % scr))
                    if state.get('launched') and scr is None:
                        start = fr; trace.write('%d match\n' % fr); shutil.copy(img, os.path.join(a.out, 'match_start.ppm'))
                        if a.hp:
                            with open(os.path.join(drv, 'hp.txt'), 'w') as hf:
                                for e in a.hp: f_, h_ = e.split(':'); hf.write('%d %s\n' % (fr + int(f_), h_))
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
