#!/usr/bin/env python3
"""Munged Battlefront levels (.lvl, the games' own files: SWBF1 _LVL_PC/<MAP>/<map>1.lvl, SWBF2 _lvl_pc/<map>/<map>1.lvl) -> the
source files the Battlefront tools read (.wld world, .ter terrain, .msh meshes, .odf objects, .tga textures, .lyr layers, .rgn, .pth),
with swbf-unmunge (github.com/PrismaticFlower/swbf-unmunge, a Windows program: put swbf-unmunge.exe next to this file or on the PATH;
on Linux / Steam Deck it is run with Wine).

  bf_unmunge.py <level.lvl> [--version swbf|swbf_ii] [-o OUT]       -> OUT/<level>/ (world/, msh/, odf/, textures/ ...)
Used by bf2rs.py, which takes a .lvl directly."""
import os, sys, shutil, subprocess, argparse, glob
HERE = os.path.dirname(os.path.abspath(__file__))

def tool():
    for p in (os.path.join(HERE, 'swbf-unmunge.exe'), shutil.which('swbf-unmunge.exe') or '', shutil.which('swbf-unmunge') or ''):
        if p and os.path.exists(p): return p
    raise SystemExit('swbf-unmunge.exe not found: put it next to %s (or on the PATH)' % os.path.basename(__file__))

def guess_version(lvl):
    """SWBF1 levels sit in _LVL_PC (upper case) and its worlds are named <map>1.lvl too; ask when unsure: the default is SWBF2"""
    return 'swbf' if '_LVL_PC' in os.path.abspath(lvl) else 'swbf_ii'

def unmunge(lvl, out, version=None, log=print):
    version = version or guess_version(lvl)
    os.makedirs(out, exist_ok=True)
    name = os.path.splitext(os.path.basename(lvl))[0]; dst = os.path.join(out, name)
    if os.path.isdir(os.path.join(dst, 'world')) or glob.glob(os.path.join(dst, '**', '*.wld'), recursive=True):
        return dst
    local = os.path.join(out, os.path.basename(lvl))
    if os.path.abspath(local) != os.path.abspath(lvl): shutil.copyfile(lvl, local)
    cmd = [tool(), '-file', os.path.basename(local), '-version', version, '-imgfmt', 'tga']
    if os.name != 'nt': cmd = ['wine'] + cmd
    log('unmunging %s (%s) ...' % (lvl, version))
    env = dict(os.environ, WINEDEBUG='-all')
    r = subprocess.run(cmd, cwd=out, env=env, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True, errors='replace')
    if local != lvl and os.path.exists(local): os.remove(local)
    if not os.path.isdir(dst): raise SystemExit('swbf-unmunge made nothing for %s:\n%s' % (lvl, r.stdout[-2000:]))
    return dst

def world_of(folder):
    w = sorted(glob.glob(os.path.join(folder, '**', '*.wld'), recursive=True))
    if not w: raise SystemExit('no world (.wld) in %s: not a map level? (the map\'s world is <map>1.lvl / <map>2.lvl, not its sides or sounds)' % folder)
    return w[0]

if __name__ == '__main__':
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('lvl'); ap.add_argument('--version', choices=('swbf', 'swbf_ii')); ap.add_argument('-o', '--out', default='bf_unmunged')
    a = ap.parse_args(); d = unmunge(a.lvl, a.out, a.version); print(d); print('world:', world_of(d))
