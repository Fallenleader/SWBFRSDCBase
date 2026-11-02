"""Cross-game map import for Maya 2020: Star Wars Battlefront (BF1), Battlefront II (BF2) and Elite Squadron (ES) maps -> Maya / Renegade Squadron.

Loaded by rs_crosstest.mel (menu "RS Cross-Game Maps").  Maya 2020's Python is 2.7, so the converters (bf2rs.py / es2rs.py, Python 3)
run as an outside process; this file only asks for the inputs, runs them and imports the FBX they write.

    import rs_crosstest; rs_crosstest.import_bf()      # a BF1/BF2 .wld (mod tools world) or munged .lvl -> FBX in the scene
    import rs_crosstest; rs_crosstest.import_es()      # an Elite Squadron map folder (ENVS/<ERA>/<MAP>) -> FBX in the scene
    import rs_crosstest; rs_crosstest.build_map()      # either of them -> a Renegade Squadron map installed into a mods folder

Settings (menu > Settings...): Python 3 command, RS game folder (contains PSP_GAME), work folder, mods folder."""
from __future__ import print_function
import os, sys, subprocess
import maya.cmds as cmds

HERE = os.path.dirname(os.path.abspath(__file__))

def _opt(name, default=''):
    return cmds.optionVar(q=name) if cmds.optionVar(exists=name) else default
def _setopt(name, val): cmds.optionVar(sv=(name, val))
def _py(): return _opt('rsxPython') or ('py -3' if os.name == 'nt' else 'python3')
def _work():
    d = _opt('rsxWork') or os.path.join(os.path.expanduser('~'), 'rs_crosstest_work')
    if not os.path.isdir(d): os.makedirs(d)
    return d

def settings():
    w = 'rsxSettingsWin'
    if cmds.window(w, exists=True): cmds.deleteUI(w)
    cmds.window(w, title='Cross-game maps - settings'); cmds.columnLayout(adj=True, rs=4)
    f = {}
    for key, label, dflt in (('rsxPython', 'Python 3 command', _py()), ('rsxGame', 'Renegade Squadron game folder (contains PSP_GAME)', ''),
                             ('rsxWork', 'Work folder (converted files)', _work()), ('rsxData', 'Data folder to install maps into (holds mods/)', '')):
        cmds.text(l=label, al='left'); f[key] = cmds.textFieldButtonGrp(tx=_opt(key) or dflt, bl='...', adj=1)
        cmds.textFieldButtonGrp(f[key], e=True, bc=lambda k=key: _browse(f[k], 3))
    def save(*_):
        for k, fld in f.items(): _setopt(k, cmds.textFieldButtonGrp(fld, q=True, tx=True))
        cmds.deleteUI(w)
    cmds.button(l='Save', c=save); cmds.showWindow(w)
def _browse(fld, mode):
    r = cmds.fileDialog2(fm=mode, ds=2)
    if r: cmds.textFieldButtonGrp(fld, e=True, tx=r[0])

def _run(script, args):
    cmd = _py().split() + [os.path.join(HERE, script)] + args
    print('running:', ' '.join('"%s"' % c if ' ' in c else c for c in cmd))
    cmds.waitCursor(state=True)
    try:
        p = subprocess.Popen(cmd, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, cwd=HERE)
        out = p.communicate()[0].decode('utf-8', 'replace')
    finally:
        cmds.waitCursor(state=False)
    print(out)
    if p.returncode:
        cmds.confirmDialog(t='Conversion failed', m=out[-1500:] or 'exit code %d' % p.returncode, b=['OK']); return False
    return True

def _import_fbx(path):
    if not cmds.pluginInfo('fbxmaya', q=True, loaded=True): cmds.loadPlugin('fbxmaya')
    ns = os.path.splitext(os.path.basename(os.path.dirname(path)))[0].replace('-', '_')
    cmds.file(path, i=True, type='FBX', ignoreVersion=True, mergeNamespacesOnClash=False, namespace=ns, options='fbx')
    print('imported', path)

def _out_for(src):
    base = os.path.splitext(os.path.basename(src.rstrip('/\\')))[0]
    return os.path.join(_work(), base)

def _pick_bf():
    r = cmds.fileDialog2(fm=1, ds=2, ff='Battlefront worlds (*.wld *.lvl);;All files (*.*)')
    return r[0] if r else None
def _pick_es():
    r = cmds.fileDialog2(fm=3, ds=2, cap='Elite Squadron map folder (ENVS/<ERA>/<MAP>)')
    return r[0] if r else None

def import_bf(path=None):
    """BF1 / BF2 world (.wld from the mod tools' Worlds folder, or a munged .lvl) -> bf_world.fbx in the scene"""
    path = path or _pick_bf()
    if not path: return
    out = _out_for(path)
    if _run('bf2rs.py', ['fbx', path, '-o', out]): _import_fbx(os.path.join(out, 'bf_world.fbx'))

def import_es(folder=None, part='GR'):
    """Elite Squadron map part (GR ground, SP space, IN interiors, HV heroes) -> its level FBX in the scene"""
    folder = folder or _pick_es()
    if not folder: return
    out = _out_for(folder)
    if _run('es2rs.py', ['fbx', folder, '--part', part, '-o', out]): _import_fbx(os.path.join(out, '_es', part.upper(), 'env', 'Env.fbx'))

def build_map():
    """BF1 / BF2 / ES map -> a Renegade Squadron custom map (built on a base RS map's gameplay), installed into <data>/mods/maps"""
    game, data = _opt('rsxGame'), _opt('rsxData')
    if not game: cmds.confirmDialog(t='Settings', m='Set the Renegade Squadron game folder in Settings first.', b=['OK']); return
    kind = cmds.confirmDialog(t='Build map', m='Source map:', b=['BF1 / BF2 (.wld / .lvl)', 'Elite Squadron folder', 'Cancel'], cb='Cancel', ds='Cancel')
    if kind == 'Cancel': return
    src = _pick_bf() if kind.startswith('BF') else _pick_es()
    if not src: return
    if cmds.promptDialog(t='Build map', m='Base RS map (gameplay, sounds) and era, e.g.  HOTH CLASSIC   or   GEONOSIS PREQUEL', tx='HOTH CLASSIC',
                         b=['OK', 'Cancel'], db='OK', cb='Cancel', ds='Cancel') != 'OK': return
    words = cmds.promptDialog(q=True, tx=True).split() + ['HOTH', 'CLASSIC']
    if cmds.promptDialog(t='Build map', m='Map id (letters, digits, _), e.g. MY_HOTH', tx='MY_MAP', b=['OK', 'Cancel'], db='OK', cb='Cancel', ds='Cancel') != 'OK': return
    mid = cmds.promptDialog(q=True, tx=True).strip().upper()
    out = _out_for(src) + '_rs'
    args = ['rsmap', src, '--game', game, '--base', words[0].upper(), '--era', words[1].upper(), '-o', out]
    if data: args += ['--install', data, '--id', mid, '--name', mid.replace('_', ' ').title()]
    if _run('bf2rs.py' if kind.startswith('BF') else 'es2rs.py', args):
        cmds.confirmDialog(t='Build map', m=('Installed as %s in %s/mods/maps.' % (mid, data)) if data else ('Era folder written to %s (set a data folder in Settings to install).' % out), b=['OK'])
