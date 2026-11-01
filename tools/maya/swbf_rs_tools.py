"""SWBF Renegade Squadron tools for Maya 2025: a plug-in that adds the "SWBF" menu to Maya's main window.

    SWBF > Import RS Map...        a level of the game (map + era) -> unpacked into the work folder, its geometry and collision imported
    SWBF > Export Map...           the imported level's meshes -> rebuilt level file (as a new custom map, or replacing the original)
    SWBF > Bake Nav Mesh           the AI navigation graph baked from the level's col_ meshes (preview discs imported)
    SWBF > Import RS Character...  a character -> mesh, joints, skin weights, texture, hit boxes (col_<joint>)
    SWBF > Export Character        the selected character -> every level that has it (mods/files in the data folder)
    SWBF > Import RS Weapon... / Export Weapon      the same for weapons
    SWBF > Settings...             the game folder, the data folder (where mods/ goes), the work folder

Install: see INSTALL.md (Plug-in Manager > Browse > this file; the lib folder must stay next to the maya folder).
Everything runs the command-line tools in ../lib (maptool.py, chartool.py), so every step can also be done without Maya."""
import os, sys, json, traceback
import maya.api.OpenMaya as om
import maya.cmds as cmds
import maya.mel as mel

_here = os.path.dirname(os.path.abspath(__file__))
for _p in (os.path.join(_here, '..', 'lib'), os.path.join(_here, '..', 'asura'), os.path.join(_here, 'lib')):
    _p = os.path.normpath(_p)
    if os.path.isdir(_p) and _p not in sys.path: sys.path.insert(0, _p)

def maya_useNewAPI(): pass
MENU = 'swbfRsMenu'

# ------------------------------------------------------------------ settings
def _opt(k, d=''): return cmds.optionVar(q=k) if cmds.optionVar(exists=k) else d
def _set(k, v): cmds.optionVar(sv=(k, v))
def game_dir(): return _opt('swbfGameDir')
def data_dir(): return _opt('swbfDataDir')
def work_dir():
    d = _opt('swbfWorkDir') or os.path.join(os.path.expanduser('~'), 'SWBF_RS_work')
    if not os.path.isdir(d): os.makedirs(d)
    return d
def settings(*_):
    w = 'swbfSettingsWin'
    if cmds.window(w, exists=True): cmds.deleteUI(w)
    cmds.window(w, title='SWBF Renegade Squadron - Settings', widthHeight=(560, 230)); cmds.columnLayout(adj=True, rs=6, cat=('both', 8))
    f = {}
    for key, label in (('swbfGameDir', 'Game folder (the extracted game: contains PSP_GAME)'),
                       ('swbfDataDir', 'Data folder (gets mods/: copy it to ux0:data/SWBFRS or /data/SWBFRS)'),
                       ('swbfWorkDir', 'Work folder (unpacked levels and models)')):
        cmds.text(l=label, al='left'); f[key] = cmds.textFieldButtonGrp(tx=_opt(key), bl='Browse...', adj=1)
        cmds.textFieldButtonGrp(f[key], e=True, bc=lambda k=key: _browse(f[k]))
    def save(*_):
        for k, fld in f.items(): _set(k, cmds.textFieldButtonGrp(fld, q=True, tx=True))
        cmds.deleteUI(w)
    cmds.button(l='Save', c=save); cmds.showWindow(w)
def _browse(fld):
    r = cmds.fileDialog2(fm=3, ds=2)
    if r: cmds.textFieldButtonGrp(fld, e=True, tx=r[0])
def _need(*what):
    for k, label in what:
        if not _opt(k): cmds.confirmDialog(t='SWBF', m='Set the %s first (SWBF > Settings).' % label, b='OK'); settings(); return False
    return True

def _log(msg): om.MGlobal.displayInfo('[SWBF] ' + str(msg)); print('[SWBF] ' + str(msg))
def _run(fn, *a, **k):
    try: return fn(*a, **k)
    except SystemExit as e: cmds.confirmDialog(t='SWBF', m=str(e), b='OK')
    except Exception: traceback.print_exc(); cmds.confirmDialog(t='SWBF', m='Failed - see the Script Editor for details.', b='OK')

def _pick(title, items, multi=False):
    """a list window -> the chosen item (or None)"""
    res = cmds.layoutDialog(t=title, ui=lambda: _pick_ui(items))
    return None if res in ('dismiss', 'Cancel', '') else res
def _pick_ui(items):
    f = cmds.setParent(q=True); cmds.formLayout(f, e=True, width=420)
    lst = cmds.textScrollList(numberOfRows=22, allowMultiSelection=False, append=items, height=380)
    ok = cmds.button(l='OK', c=lambda *_: cmds.layoutDialog(dismiss=(cmds.textScrollList(lst, q=True, si=True) or ['Cancel'])[0]))
    ca = cmds.button(l='Cancel', c=lambda *_: cmds.layoutDialog(dismiss='Cancel'))
    cmds.formLayout(f, e=True, attachForm=[(lst, 'top', 6), (lst, 'left', 6), (lst, 'right', 6), (ok, 'left', 6), (ca, 'right', 6), (ok, 'bottom', 6), (ca, 'bottom', 6)],
                    attachControl=[(lst, 'bottom', 6, ok)], attachPosition=[(ok, 'right', 3, 50), (ca, 'left', 3, 50)])

# ------------------------------------------------------------------ FBX in / out
def _fbx_plugin():
    if not cmds.pluginInfo('fbxmaya', q=True, loaded=True): cmds.loadPlugin('fbxmaya')
def _import_fbx(path, group):
    _fbx_plugin(); before = set(cmds.ls(assemblies=True))
    mel.eval('FBXResetImport'); mel.eval('FBXImportSkins -v true'); mel.eval('FBXImportShapes -v true')
    cmds.file(path, i=True, type='FBX', ignoreVersion=True, mergeNamespacesOnClash=False, options='fbx')
    new = [a for a in cmds.ls(assemblies=True) if a not in before]
    g = cmds.group(empty=True, name=group)
    for a in new:
        try: cmds.parent(a, g)
        except Exception: pass
    return g
def _export_fbx(path, nodes):
    _fbx_plugin(); cmds.select(nodes, r=True, hi=True)
    mel.eval('FBXResetExport'); mel.eval('FBXExportSkins -v true'); mel.eval('FBXExportShapes -v false'); mel.eval('FBXExportSmoothingGroups -v false')
    mel.eval('FBXExportInAscii -v false'); mel.eval('FBXExportUpAxis y'); mel.eval('FBXExportInputConnections -v false'); mel.eval('FBXExportAnimationOnly -v false')
    mel.eval('FBXExportBakeComplexAnimation -v false')
    mel.eval('FBXExport -f "%s" -s' % path.replace('\\', '/'))
def _tag(g, key, val):
    if not cmds.attributeQuery(key, node=g, exists=True): cmds.addAttr(g, ln=key, dt='string')
    cmds.setAttr(g + '.' + key, val, type='string')
def _tagged(key):
    """the group with attribute key: the selected one (or the one a selected node is under), else the only one in the scene"""
    sel = cmds.ls(sl=True, long=True) or []
    for s in sel:
        p = s
        while p:
            if cmds.attributeQuery(key, node=p, exists=True): return p
            par = cmds.listRelatives(p, parent=True, fullPath=True); p = par[0] if par else None
    allg = [a for a in cmds.ls(assemblies=True, long=True) if cmds.attributeQuery(key, node=a, exists=True)]
    return allg[0] if len(allg) == 1 else None

# ------------------------------------------------------------------ maps
def import_map(*_):
    if not _need(('swbfGameDir', 'game folder')): return
    import maptool
    e = maptool.envs_dir(game_dir()); items = []
    for era in maptool.ERAS:
        d = os.path.join(e, era)
        for f in sorted(os.listdir(d)) if os.path.isdir(d) else []:
            if f.upper().endswith('.PSP'): items.append('%s  (%s)' % (f[:-4].upper(), era))
    ch = _pick('Import RS Map', items)
    if not ch: return
    mp, era = ch.split('  (')[0], ch.split('(')[1].rstrip(')')
    folder = os.path.join(work_dir(), 'maps', mp, era)
    if not os.path.exists(os.path.join(folder, '.maptool', 'manifest.json')):
        _log('unpacking %s %s -> %s' % (mp, era, folder)); _run(maptool.unpack, os.path.join(e, era, mp + '.PSP'), folder, _log)
    g = _import_fbx(os.path.join(folder, 'env', 'Env.fbx'), 'RS_Map_%s_%s' % (mp, era)); _tag(g, 'swbfMapFolder', folder)
    _log('%s %s imported (meshes o<N>_... = level objects, col_... = collision).  Folder: %s' % (mp, era, folder))

def _map_group():
    g = _tagged('swbfMapFolder')
    if not g: cmds.confirmDialog(t='SWBF', m='Select the imported map (its RS_Map_... group) first.', b='OK')
    return g
def _write_env(g):
    folder = cmds.getAttr(g + '.swbfMapFolder')
    kids = [k for k in (cmds.listRelatives(g, allDescendents=True, type='transform', fullPath=True) or []) if not k.split('|')[-1].lower().startswith('nav_')]
    if not kids: raise SystemExit('the map group is empty')
    _export_fbx(os.path.join(folder, 'env', 'Env.fbx'), kids); return folder

def bake_nav(*_):
    g = _map_group()
    if not g: return
    import maptool
    folder = _run(_write_env, g)
    if not folder: return
    _run(maptool.bake, folder, _log)
    old = cmds.ls('RS_NavPreview*', assemblies=True)
    if old: cmds.delete(old)
    pv = os.path.join(folder, 'nav', 'navmesh_preview.fbx')
    if os.path.exists(pv): _import_fbx(pv, 'RS_NavPreview'); _log('the baked nodes are shown in RS_NavPreview (not exported with the map)')

def export_map(*_):
    g = _map_group()
    if not g or not _need(('swbfDataDir', 'data folder')): return
    import maptool
    res = cmds.confirmDialog(t='Export Map', m='Install the level as a new custom map (it keeps the original),\nor replace the original level?',
                             b=['New custom map', 'Replace the original', 'Cancel'], db='New custom map', cb='Cancel', ds='Cancel')
    if res == 'Cancel': return
    folder = _run(_write_env, g)
    if not folder: return
    if not os.path.exists(os.path.join(folder, 'nav', 'navmesh.nav')):
        if cmds.confirmDialog(t='Export Map', m='The navigation graph has not been baked: bake it now?\n(No: the original graph is kept)', b=['Yes', 'No'], db='Yes') == 'Yes':
            _run(maptool.bake, folder, _log)
    man = json.load(open(os.path.join(folder, '.maptool', 'manifest.json')))
    b, rep = _run(maptool.packdir, folder, _log) or (None, [])
    if b is None: return
    for r in rep: _log(r)
    era = os.path.basename(folder); mp = os.path.basename(os.path.dirname(folder))
    if res == 'Replace the original':
        out = os.path.join(data_dir(), 'mods', 'files', 'PSP_GAME', 'USRDIR', 'ENVS', era, man['source'].upper())
        if not os.path.isdir(os.path.dirname(out)): os.makedirs(os.path.dirname(out))
        open(out, 'wb').write(b); _log('%s (%d bytes): the game plays it in place of %s %s' % (out, len(b), mp, era))
    else:
        r = cmds.promptDialog(t='New custom map', m='Map ID (letters, digits, _), then the name shown in the game, separated by |', tx='%s_MOD|%s (Modded)' % (mp, mp.title()), b=['OK', 'Cancel'])
        if r != 'OK': return
        mid, _, name = cmds.promptDialog(q=True, tx=True).partition('|')
        _run(maptool.install, os.path.dirname(folder), mid.strip().upper(), name.strip() or mid.strip(), data_dir(), mp, _log)
    cmds.confirmDialog(t='Export Map', m='Done - see the Script Editor for the files written.', b='OK')

# ------------------------------------------------------------------ characters / weapons
def _import_model(kind):
    if not _need(('swbfGameDir', 'game folder')): return
    import chartool
    root, lv = chartool.levels(game_dir()); seen = set()
    for f in lv:
        L = chartool.Level(f)
        for nm in L.models:
            if '#' not in nm and chartool.kind_of(nm, L.skeleton_of(nm)) == kind: seen.add(nm)
    ch = _pick('Import RS ' + ('Character' if kind == 'characters' else 'Weapon'), sorted(seen))
    if not ch: return
    folder = _run(chartool.cmd_export, game_dir(), ch, os.path.join(work_dir(), kind), _log)
    if not folder: return
    man = json.load(open(os.path.join(folder, 'chartool.json')))
    g = _import_fbx(os.path.join(folder, man['lods'][0]['fbx']), 'RS_%s_%s' % ('Char' if kind == 'characters' else 'Weapon', chartool.safe(ch)))
    _tag(g, 'swbfModelFolder', folder)
    _log('%s imported: joints, skin (each vertex follows one joint), hit boxes col_<joint>.  The lower details (%s) are in %s'
         % (ch, ', '.join(l['fbx'] for l in man['lods'][1:]) or 'none', folder))
def _export_model(kind):
    g = _tagged('swbfModelFolder')
    if not g: cmds.confirmDialog(t='SWBF', m='Select the imported %s (its RS_... group) first.' % kind[:-1], b='OK'); return
    if not _need(('swbfGameDir', 'game folder'), ('swbfDataDir', 'data folder')): return
    import chartool
    folder = cmds.getAttr(g + '.swbfModelFolder'); man = json.load(open(os.path.join(folder, 'chartool.json')))
    kids = cmds.listRelatives(g, children=True, fullPath=True) or []
    _export_fbx(os.path.join(folder, man['lods'][0]['fbx']), kids)
    _run(chartool.cmd_import, game_dir(), folder, data_dir(), _log)
    cmds.confirmDialog(t='SWBF', m='%s written into every level that has it (see the Script Editor).' % man['name'], b='OK')

import_character = lambda *_: _import_model('characters')
export_character = lambda *_: _export_model('characters')
import_weapon = lambda *_: _import_model('weapons')
export_weapon = lambda *_: _export_model('weapons')

# ------------------------------------------------------------------ plug-in
def _menu():
    if cmds.menu(MENU, exists=True): cmds.deleteUI(MENU)
    main = mel.eval('$t = $gMainWindow')
    cmds.menu(MENU, parent=main, label='SWBF', tearOff=True)
    cmds.menuItem(divider=True, dividerLabel='Maps')
    cmds.menuItem(label='Import RS Map...', c=import_map)
    cmds.menuItem(label='Bake Nav Mesh', c=bake_nav)
    cmds.menuItem(label='Export Map...', c=export_map)
    cmds.menuItem(divider=True, dividerLabel='Characters')
    cmds.menuItem(label='Import RS Character...', c=import_character)
    cmds.menuItem(label='Export Character', c=export_character)
    cmds.menuItem(divider=True, dividerLabel='Weapons')
    cmds.menuItem(label='Import RS Weapon...', c=import_weapon)
    cmds.menuItem(label='Export Weapon', c=export_weapon)
    cmds.menuItem(divider=True)
    cmds.menuItem(label='Settings...', c=settings)

def initializePlugin(obj):
    om.MFnPlugin(obj, 'SWBFRSDCBase', '1.0', 'Any')
    if not cmds.about(batch=True): cmds.evalDeferred(_menu)
def uninitializePlugin(obj):
    if cmds.menu(MENU, exists=True): cmds.deleteUI(MENU)
