"""Hosted sessions: serversession<N>.txt files next to rsmaster.py (or in --data), one public match each.

Each valid file starts one copy of the game (the PC build, --game) in dedicated mode: no window, nothing drawn, no sound; it hosts
the session's match as the game's own host does, and the RS master lists it in the game's server browser under the session's name.

Files:
  serversession<N>.txt       the session's settings (format below).  N = 1, 2, 3 ... (gaps are allowed: serversession1.txt and
                             serversession5.txt are two sessions, numbered 1 and 5).  Names that do not match exactly
                             (serversession01.txt, serversession1.txt.bak, serversessionA.txt) are reported and not used.
  mods_serversession<N>/     that session's mods, in the game's own mods folder layout (maps/, files/, textures/, lights/, mod_maps.txt,
                             Weapons_Mod.txt ...).  Only that session reads them.
  sessions/serversession<N>/ made by the server: the session's game settings, log (log.txt), saves and patched files.

serversession<N>.txt (one "Key = value" per line; # starts a comment):
  Name         = Sequel Era Rotation       required: the name shown in the server browser (1-31 characters)
  MaxPlayers   = 16                        players who can join, 2..16
  Bots         = 32                        AI soldiers in total (the game fills the teams to this with bots), 0..64
  AIDifficulty = 1                         0 easy, 1 medium, 2 hard
  Tickets      = 300                       reinforcements per team, 50..1000
  TimeLimit    = 20                        minutes per match, 0 = none, up to 60
  HeroTime     = 60                        seconds before heroes unlock, 0..600
  AutoBalance  = 1                         0 / 1
  Map          = HOTH CLASSIC CQST         one line per map of the rotation, in order: map, era (CLASSIC / PREQUEL), mode
                                           (CQST Conquest, CTF1 1-flag CTF, CTF2 2-flag CTF, HCTF hero CTF); 1 to 16 lines
A file with any error is not started (so nothing is advertised for it); the errors are printed.  A changed file is read when its
session starts again: /restart <N> in the server window, or when its game ends (it is restarted).  A new file is started when it
appears."""
import os, re, subprocess, sys, threading, time

# the game's own maps: eras (C classic, P prequel) and modes (CQST CTF1 CTF2 HCTF), from the game's map table (mods/original_maps.txt)
GAME_MAPS = {
    'BOZ_PITY': ('C', 'CQST'), 'ENDOR': ('C', 'CQST CTF1 HCTF'), 'GEONOSIS': ('CP', 'CQST CTF1 HCTF'), 'HOTH': ('C', 'CQST'),
    'HOTH_ION_CANNON': ('C', 'CQST CTF2 HCTF'), 'KASHYYYK': ('CP', 'CQST CTF2 HCTF'), 'KORRIBAN': ('CP', 'CQST CTF2 HCTF'),
    'MUSTAFAR': ('CP', 'CQST CTF2 HCTF'), 'MYGEETO': ('CP', 'CQST CTF2 HCTF'), 'NABOO': ('CP', 'CQST CTF2 HCTF'),
    'ORD_MANTELL': ('CP', 'CQST CTF2 HCTF'), 'SALEUCAMI': ('CP', 'CQST CTF2 HCTF'), 'SULLUST': ('CP', 'CQST CTF1 HCTF'),
    'TATOOINE': ('CP', 'CQST CTF2 HCTF'), 'YAVIN_IV': ('CP', 'CQST CTF1 HCTF'), 'SPACE_ALDERAAN': ('C', 'CQST CTF1'),
    'SPACE_CORUSCANT_CLONE': ('P', 'CQST CTF1'), 'SPACE_HOTH': ('C', 'CQST CTF1'), 'SPACE_KASHYYYK_CIVIL': ('CP', 'CQST CTF1'),
    'SPACE_KESSEL': ('C', 'CQST CTF1'), 'SPACE_MYGEETO': ('P', 'CQST CTF1'), 'SPACE_YAVIN': ('C', 'CQST CTF1'),
}
NUMERIC = {  # key: (game setting, low, high, default)
    'MaxPlayers': ('RS_SESSION_MAX_PLAYERS', 2, 16, 16), 'Bots': ('RS_SESSION_BOTS', 0, 64, 16), 'AIDifficulty': ('RS_SESSION_AI_DIFFICULTY', 0, 2, 1),
    'Tickets': ('RS_SESSION_TICKETS', 50, 1000, 200), 'TimeLimit': ('RS_SESSION_TIME_LIMIT', 0, 60, 20), 'HeroTime': ('RS_SESSION_HERO_TIME', 0, 600, 60),
    'AutoBalance': ('RS_SESSION_AUTO_BALANCE', 0, 1, 1)}
FILE_RE = re.compile(r'^serversession([1-9][0-9]{0,2})\.txt$')

def custom_maps(mods):
    """custom maps of a session's mods folder: id -> (eras, modes) (mods/maps/<ERA>/<ID>.PSP; modes from mods/maps/<ID>.txt or Base)"""
    out = {}; root = os.path.join(mods, 'maps')
    for era, ch in (('CLASSIC', 'C'), ('PREQUEL', 'P')):
        d = os.path.join(root, era)
        if not os.path.isdir(d): continue
        for f in os.listdir(d):
            if f.upper().endswith('.PSP'):
                mid = f[:-4].upper(); e, m = out.get(mid, ('', None)); out[mid] = (e + ch, m)
    for mid in list(out):
        modes = 'CQST'; base = 'HOTH'
        try:
            for ln in open(os.path.join(root, mid + '.txt'), encoding='utf-8', errors='replace'):
                k, _, v = ln.split('#')[0].partition('=')
                if k.strip().lower() == 'modes':
                    bits = v.split(); modes = ' '.join(n for n, b in zip(('CQST', 'CTF1', 'CTF2', 'HCTF'), bits) if b == '1') or 'CQST'
                elif k.strip().lower() == 'base': base = v.strip().upper()
        except OSError: modes = GAME_MAPS.get(base, ('', 'CQST'))[1]
        out[mid] = (out[mid][0], modes)
    return out

def parse(path, mods):
    """-> (settings dict, [errors]); settings: Name, the numeric keys, Maps [(map, era, mode)]"""
    cfg = {'Maps': []}; err = []; seen = set()
    maps = dict(GAME_MAPS); maps.update(custom_maps(mods))
    try: lines = open(path, encoding='utf-8', errors='replace').read().splitlines()
    except OSError as ex: return None, ['cannot be read: %s' % ex]
    for no, ln in enumerate(lines, 1):
        ln = ln.split('#')[0].strip()
        if not ln: continue
        if '=' not in ln: err.append('line %d: "%s" is not Key = value' % (no, ln)); continue
        k, v = (x.strip() for x in ln.split('=', 1))
        key = next((x for x in list(NUMERIC) + ['Name', 'Map'] if x.lower() == k.lower()), None)
        if not key: err.append('line %d: unknown setting %s (known: Name, Map, %s)' % (no, k, ', '.join(NUMERIC))); continue
        if key == 'Map':
            f = v.upper().split()
            if len(f) != 3: err.append('line %d: Map = <map> <CLASSIC|PREQUEL> <CQST|CTF1|CTF2|HCTF>' % no); continue
            m, era, mode = f
            if m not in maps: err.append('line %d: map %s is not a game map nor a custom map in %s' % (no, m, os.path.join(mods, 'maps'))); continue
            if era not in ('CLASSIC', 'PREQUEL'): err.append('line %d: era %s (CLASSIC or PREQUEL)' % (no, era)); continue
            if era[0] not in maps[m][0]: err.append('line %d: %s has no %s level' % (no, m, era)); continue
            if mode not in maps[m][1].split(): err.append('line %d: %s offers %s, not %s' % (no, m, maps[m][1], mode)); continue
            cfg['Maps'].append((m, era, mode)); continue
        if key in seen: err.append('line %d: %s given twice' % (no, key)); continue
        seen.add(key)
        if key == 'Name':
            if not 1 <= len(v) <= 31 or '\\' in v: err.append('line %d: Name must be 1-31 characters, no backslash' % no); continue
            cfg['Name'] = v; continue
        _, lo, hi, _ = NUMERIC[key]
        if not re.fullmatch(r'-?\d+', v): err.append('line %d: %s must be a whole number' % (no, key)); continue
        n = int(v)
        if not lo <= n <= hi: err.append('line %d: %s = %d is outside %d..%d' % (no, key, n, lo, hi)); continue
        cfg[key] = n
    if 'Name' not in cfg: err.append('Name is missing')
    if not cfg['Maps']: err.append('no Map lines (1 to 16 are needed)')
    if len(cfg['Maps']) > 16: err.append('%d maps: the rotation holds 16 at most' % len(cfg['Maps']))
    for k, (_, _, _, d) in NUMERIC.items(): cfg.setdefault(k, d)
    return cfg, err

class Session:
    def __init__(self, n, path): self.n, self.path, self.proc, self.cfg, self.state, self.started, self.mtime = n, path, None, None, 'stopped', 0, 0

class Manager:
    def __init__(self, data, game, log):
        self.data, self.game, self.log = data, game, log; self.list = {}; self.lock = threading.Lock(); self.stopping = False
    def discover(self):
        found = {}
        for f in sorted(os.listdir(self.data)):
            if not f.lower().startswith('serversession'): continue
            m = FILE_RE.match(f)
            if not m: self.log('SESSIONS: %s is not named serversession<N>.txt (N = 1..999, no leading zero): not used' % f); continue
            n = int(m.group(1))
            if n in found: self.log('SESSIONS: session %d is given twice: not used' % n); found[n] = None; continue
            found[n] = os.path.join(self.data, f)
        return {n: p for n, p in found.items() if p}
    def start_all(self):
        for n, p in self.discover().items(): self.start(n, p)
        if not self.list: self.log('SESSIONS: no serversession<N>.txt: nothing hosted (see tools/rsserver/README.md)')
        threading.Thread(target=self.watch, daemon=True).start()
    def mods_dir(self, n): return os.path.join(self.data, 'mods_serversession%d' % n)
    def start(self, n, path):
        with self.lock:
            s = self.list.get(n) or Session(n, path); self.list[n] = s; s.path = path
            os.makedirs(self.mods_dir(n), exist_ok=True)
            cfg, err = parse(path, self.mods_dir(n)); s.mtime = os.path.getmtime(path)
            if err:
                s.state = 'invalid'; self.log('SESSIONS: %s not started:' % os.path.basename(path))
                for e in err: self.log('    ' + e)
                return
            s.cfg = cfg
            if not self.game:
                s.state = 'valid (not hosted: no --game)'; self.log('SESSIONS: %d "%s": valid, %d map(s) - not hosted (start rsmaster with --game <the PC game folder>)' % (n, cfg['Name'], len(cfg['Maps']))); return
            home = os.path.join(self.data, 'sessions', 'serversession%d' % n); os.makedirs(home, exist_ok=True)
            settings = ['# written by the RS server for serversession%d.txt (rewritten at every start)' % n,
                        'RS_DEDICATED=1', 'RS_SESSION_NAME=%s' % cfg['Name'],
                        'RS_SESSION_MAPS=%s' % ','.join('%s:%s:%s' % m for m in cfg['Maps'])]
            settings += ['%s=%d' % (NUMERIC[k][0], cfg[k]) for k in NUMERIC]
            open(os.path.join(home, 'settings.txt'), 'w').write('\n'.join(settings) + '\n')
            exe = self.game_exe()
            env = dict(os.environ, RS_DATA_DIR=home, RS_GAME_DIR=os.path.join(self.game, 'GAME'), RS_MODS_DIR=self.mods_dir(n), RS_DEDICATED='1',
                       SDL_AUDIODRIVER='dummy', SDL_VIDEODRIVER='dummy' if sys.platform != 'win32' else os.environ.get('SDL_VIDEODRIVER', ''))
            try:
                flags = 0x08000000 if sys.platform == 'win32' else 0                 # CREATE_NO_WINDOW: no console either
                s.proc = subprocess.Popen([exe], cwd=self.game, env=env, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, creationflags=flags)
                s.state = 'starting'; s.started = time.time()
                self.log('SESSIONS: %d "%s" started (%d map(s), %d bots, log %s)' % (n, cfg['Name'], len(cfg['Maps']), cfg['Bots'], os.path.join(home, 'log.txt')))
            except OSError as ex: s.state = 'failed'; self.log('SESSIONS: %d could not start %s: %s' % (n, exe, ex))
    def game_exe(self):
        for f in ('SWBFRS.exe', 'swbfrs'):
            p = os.path.join(self.game, f)
            if os.path.exists(p): return p
        return os.path.join(self.game, 'SWBFRS.exe' if sys.platform == 'win32' else 'swbfrs')
    def stop(self, s):
        if s.proc and s.proc.poll() is None:
            s.proc.terminate()
            try: s.proc.wait(10)
            except subprocess.TimeoutExpired: s.proc.kill()
        s.proc = None; s.state = 'stopped'
    def restart(self, arg):
        try: n = int(arg)
        except ValueError: print('usage: /restart <session number>'); return
        s = self.list.get(n); path = s.path if s else os.path.join(self.data, 'serversession%d.txt' % n)
        if not os.path.exists(path): print('no serversession%d.txt' % n); return
        if s: self.stop(s)
        self.start(n, path)
    def stop_all(self):
        self.stopping = True
        for s in list(self.list.values()): self.stop(s)
    def status(self):
        if not self.list: print('no sessions'); return
        for n, s in sorted(self.list.items()):
            alive = s.proc and s.proc.poll() is None
            print('  %d  %-32s %s%s' % (n, (s.cfg or {}).get('Name', os.path.basename(s.path)), s.state if not alive else 'running', ' (pid %d)' % s.proc.pid if alive else ''))
    def watch(self):
        """a session whose game ended is started again (at most once a minute); a changed file is read again when its session restarts"""
        while not self.stopping:
            time.sleep(5)
            for n, s in list(self.list.items()):
                if s.proc and s.proc.poll() is not None and not self.stopping:
                    self.log('SESSIONS: %d "%s" ended (code %s): %s' % (n, s.cfg['Name'], s.proc.returncode, 'restarting' if time.time() - s.started > 60 else 'restarting in a minute'))
                    s.proc = None; s.state = 'restarting'
                    threading.Timer(0 if time.time() - s.started > 60 else 60, self.start, (n, s.path)).start()
            for n, p in self.discover().items():                                                    # new files
                if n not in self.list: self.log('SESSIONS: new file serversession%d.txt' % n); self.start(n, p)
