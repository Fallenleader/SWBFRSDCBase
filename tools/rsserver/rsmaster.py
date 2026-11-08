#!/usr/bin/env python3
"""RS master: the GameSpy services Renegade Squadron's online mode talks to, for the RS server (the game's own protocols, so the
original matchmaking keeps working; game name "swbfffpsp").

  UDP 27950  LAN discovery: a game on the LAN that has no server address asks "RSSRV?" by broadcast; this answers "RSSRV!".
  UDP 27900  QR2 (query & reporting 2): the availability check, and the hosts' heartbeats (a host registers its match here).
  TCP 28910  server browsing 2: the match list, encrypted with the game's key (GOA cipher), and single-match info.
  TCP 29900  GameSpy Presence (gpcm): log in and make accounts.  An account is a Username (shown in matches) and a Password
             (kept as a salted PBKDF2 hash).  User.txt holds them, with the install ids each account was used from.
  TCP 29901  GameSpy search (gpsp): the account screens' checks.
  TCP 29910  account recovery ("I Forgot" on the game's Login menu): the account last used from the asker's install; it then
             accepts a new password from that install for 10 minutes.
  TCP 80     HTTP: the message of the day and version check (motd.gamespy.com), the stats pages (gamestats.gamespy.com).
             Port 80 needs administrator rights on Linux (or --http-port with a redirect); Windows allows it.

The game (built with platform/common/net.c) resolves every *.gamespy.com name to this machine: found on the LAN first, else the
address in its settings.txt (RS_SERVER=).  Run on the machine of the dedicated host (rsserver), or anywhere both can reach.

    python3 rsmaster.py [--bind 0.0.0.0] [--data <folder>] [--game <PC game folder>] [-v]
The window it runs in takes commands: /ban <username>, /unban <username>, /users, /sessions, /restart <n>, /help, /quit.
    python3 rsmaster.py ban <username>      (the same, without the server running)
    python3 rsmaster.py unban <username>
Files (next to this file, or --data): User.txt, banned.txt, motd.txt (the message of the day the game shows), serversession<N>.txt
(hosted sessions, see sessions.py) with their mods_serversession<N>/ folders.
Python 3.7+, no other packages."""
import argparse, hashlib, hmac, http.server, os, re, random, socket, socketserver, struct, sys, threading, time

GAME = 'swbfffpsp'
SECRET = b'fytErP'                    # the game's secret key (func_08A6246C)
QUERY_PORT = 6500                     # the hosts' default query port (QR2 standard)
VERBOSE = False
def log(*a):
    print(time.strftime('%H:%M:%S'), *a, flush=True)
def vlog(*a):
    if VERBOSE: log(*a)

# ------------------------------------------------------------------ the GOA cipher (GameSpy SDK sb_crypt.c)
class GOACrypt:
    def __init__(self, key):
        cards = list(range(256)); rsum = 0; keypos = 0; mask = 255; ks = len(key)
        def keyrand(limit):
            nonlocal rsum, keypos
            if not limit: return 0
            retry = 0
            while True:
                rsum = (cards[rsum] + key[keypos]) & 255; keypos += 1
                if keypos >= ks: keypos = 0; rsum = (rsum + ks) & 255
                u = mask & rsum; retry += 1
                if retry > 11: u %= limit
                if u <= limit: return u
        for i in range(255, 0, -1):
            t = keyrand(i); cards[i], cards[t] = cards[t], cards[i]
            if (i & (i - 1)) == 0: mask >>= 1
        self.c = cards; self.rotor = cards[1]; self.ratchet = cards[3]; self.aval = cards[5]; self.lp = cards[7]; self.lc = cards[rsum]
    def encrypt(self, data):
        c = self.c; out = bytearray(data); ro, ra, av, lp, lc = self.rotor, self.ratchet, self.aval, self.lp, self.lc
        for i in range(len(out)):
            ra = (ra + c[ro]) & 255; ro = (ro + 1) & 255
            sw = c[lc]; c[lc] = c[ra]; c[ra] = c[lp]; c[lp] = c[ro]; c[ro] = sw
            av = (av + c[sw]) & 255
            b = out[i]
            lc = b ^ c[(c[av] + sw) & 255] ^ c[c[(c[lp] + c[lc] + c[ra]) & 255]]
            lp = b; out[i] = lc
        self.rotor, self.ratchet, self.aval, self.lp, self.lc = ro, ra, av, lp, lc
        return bytes(out)
    def decrypt(self, data):
        c = self.c; out = bytearray(data); ro, ra, av, lp, lc = self.rotor, self.ratchet, self.aval, self.lp, self.lc
        for i in range(len(out)):
            ra = (ra + c[ro]) & 255; ro = (ro + 1) & 255
            sw = c[lc]; c[lc] = c[ra]; c[ra] = c[lp]; c[lp] = c[ro]; c[ro] = sw
            av = (av + c[sw]) & 255
            b = out[i]
            lp = b ^ c[(c[av] + c[ro]) & 255] ^ c[c[(c[lp] + c[lc] + c[ra]) & 255]]
            lc = b; out[i] = lp
        self.rotor, self.ratchet, self.aval, self.lp, self.lc = ro, ra, av, lp, lc
        return bytes(out)

# ------------------------------------------------------------------ the match list (hosts registered through QR2)
class Server:
    def __init__(self, addr, ikey):
        self.addr = addr; self.ikey = ikey; self.keys = {}; self.players = {}; self.teams = {}; self.seen = time.time(); self.registered = False; self.challenge = ''
SERVERS = {}                          # (ip, port) -> Server
LOCK = threading.Lock()
def live_servers():
    now = time.time()
    with LOCK:
        for k in [k for k, s in SERVERS.items() if now - s.seen > 300]: log('QR2: %s:%d timed out' % k); del SERVERS[k]
        return [s for s in SERVERS.values() if s.registered and s.keys.get('statechanged') != '2']

def nts(b, p):
    e = b.index(b'\0', p); return b[p:e].decode('latin1'), e + 1

# ------------------------------------------------------------------ QR2 (UDP 27900)
def qr2_packet(sock, data, addr):
    if len(data) < 5: return
    t = data[0]; ikey = data[1:5]; body = data[5:]
    hdr = b'\xfe\xfd'
    if t == 0x09:                                                     # available?
        name = body.split(b'\0')[0].decode('latin1', 'replace')
        vlog('QR2: availability %s from %s:%d' % (name, *addr))
        sock.sendto(hdr + b'\x09' + struct.pack('>I', 0), addr)          # 0 = available
    elif t == 0x03:                                                   # heartbeat: keys, then players and teams
        with LOCK:
            s = SERVERS.get(addr)
            if not s: s = SERVERS[addr] = Server(addr, ikey); log('QR2: new host %s:%d' % addr)
            s.ikey = ikey; s.seen = time.time()
            p = 0; keys = {}
            try:
                while True:
                    k, p = nts(body, p)
                    if not k: break
                    v, p = nts(body, p); keys[k] = v
                players = {}; teams = {}
                while p + 2 <= len(body):
                    n = struct.unpack_from('>H', body, p)[0]; p += 2
                    if not n: break
                    names = []
                    while True:
                        k, p = nts(body, p)
                        if not k: break
                        names.append(k)
                    for i in range(n):
                        for k in names:
                            v, p = nts(body, p)
                            (teams if k.endswith('_t') else players).setdefault(i, {})[k] = v
                s.players, s.teams = players, teams
            except (ValueError, IndexError, struct.error): pass
            s.keys.update(keys)
            vlog('QR2: heartbeat %s:%d %s' % (addr[0], addr[1], keys))
            if not s.registered:
                ip = struct.unpack('>I', socket.inet_aton(addr[0]))[0]
                ch = ''.join(random.choice('0123456789abcdef') for _ in range(6)) + '%x%x' % (random.randint(0, 7), random.randint(0, 15)) + '%08X%04X' % (ip, addr[1])
                s.challenge = ch
                sock.sendto(hdr + b'\x01' + ikey + ch.encode() + b'\0', addr)
        if keys.get('statechanged') == '2':
            with LOCK: SERVERS.pop(addr, None)
            log('QR2: host %s:%d closed its match' % addr)
    elif t == 0x01:                                                   # challenge response: accepted (the key check is the game's)
        with LOCK:
            s = SERVERS.get(addr)
            if s: s.registered = True; s.seen = time.time()
        log('QR2: host %s:%d registered (%s)' % (addr[0], addr[1], (s.keys.get('hostname') if s else '?')))
        sock.sendto(hdr + b'\x0a' + ikey, addr)
    elif t == 0x08:                                                   # keepalive
        with LOCK:
            s = SERVERS.get(addr)
            if s: s.seen = time.time()
        sock.sendto(hdr + b'\x08' + ikey + struct.pack('>I', int(time.time())), addr)
    elif t == 0x07: pass                                              # client message ack
    else: vlog('QR2: packet type %d from %s:%d' % (t, *addr))

def udp_loop(port, handler, bind):
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM); s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    try: s.setsockopt(socket.SOL_SOCKET, socket.SO_BROADCAST, 1)
    except OSError: pass
    s.bind((bind, port)); log('UDP %d listening' % port)
    while True:
        try: d, a = s.recvfrom(4096); handler(s, d, a)
        except Exception as ex: log('UDP %d: %r' % (port, ex))

def lan_packet(sock, data, addr):
    if data.startswith(b'RSSRV?'): sock.sendto(b'RSSRV!' + GAME.encode(), addr); vlog('LAN: answered %s:%d' % addr)

# ------------------------------------------------------------------ server browsing 2 (TCP 28910)
class SBHandler(socketserver.BaseRequestHandler):
    def handle(self):
        c = self.request; c.settimeout(120); self.crypt = None; buf = b''; self.peer = self.client_address
        vlog('SB: %s:%d connected' % self.peer)
        try:
            while True:
                while len(buf) < 2 or len(buf) < struct.unpack('>H', buf[:2])[0]:
                    d = c.recv(4096)
                    if not d: return
                    buf += d
                n = struct.unpack('>H', buf[:2])[0]; pkt = buf[2:n]; buf = buf[n:]
                if not pkt: continue
                t = pkt[0]
                if t == 0: self.list_request(pkt[1:])
                elif t == 1: self.info_request(pkt[1:])
                elif t == 2: pass                                     # send message (natneg / direct): not needed on a LAN / public host
                elif t == 3: pass                                     # keepalive reply
                else: vlog('SB: request %d' % t)
        except (OSError, ValueError) as ex: vlog('SB: %s:%d %r' % (self.peer[0], self.peer[1], ex))
    def send(self, body):
        head = b''
        if self.crypt is None:
            cryptchal = bytes(random.getrandbits(8) for _ in range(10)); servchal = bytes(random.getrandbits(8) for _ in range(25))
            head = bytes([10 ^ 0xEC]) + cryptchal + bytes([25 ^ 0xEA]) + servchal
            ch = bytearray(self.challenge)
            for i in range(25): ch[(i * SECRET[i % len(SECRET)]) % 8] ^= (ch[i % 8] ^ servchal[i]) & 0xFF
            self.crypt = GOACrypt(bytes(ch))
        self.request.sendall(head + self.crypt.encrypt(body))
    def list_request(self, b):
        proto, enc = b[0], b[1]; gver = struct.unpack_from('>I', b, 2)[0]; p = 6
        for_game, p = nts(b, p); from_game, p = nts(b, p)
        self.challenge = b[p:p + 8]; p += 8
        filt, p = nts(b, p); fields, p = nts(b, p); opts = struct.unpack_from('>I', b, p)[0]; p += 4
        fl = [f for f in fields.split('\\') if f]
        servers = live_servers()
        log('SB: list for %s from %s:%d (%d hosts; fields %s; filter "%s")' % (for_game, self.peer[0], self.peer[1], len(servers), ','.join(fl), filt))
        out = bytearray(socket.inet_aton(self.peer[0])) + struct.pack('>H', QUERY_PORT)
        if not (opts & 2):                                            # NO_SERVER_LIST
            out += bytes([len(fl)])
            for f in fl: out += b'\0' + f.encode() + b'\0'            # every field as a string
            out += b'\0'                                              # no popular values
            for s in servers:
                ip, port = s.addr; flags = 64                          # HAS_KEYS
                if port != QUERY_PORT: flags |= 16                     # NONSTANDARD_PORT
                lip = s.keys.get('localip0'); lport = s.keys.get('localport')
                if lip: flags |= 2
                if lport and int(lport or 0) != QUERY_PORT: flags |= 32
                flags |= 1                                             # unsolicited UDP: query it directly
                out += bytes([flags]) + socket.inet_aton(ip)
                if flags & 16: out += struct.pack('>H', port)
                if flags & 2: out += socket.inet_aton(lip)
                if flags & 32: out += struct.pack('>H', int(lport))
                for f in fl: out += b'\xff' + self.value(s, f).encode('latin1', 'replace') + b'\0'
            out += b'\0' + b'\xff\xff\xff\xff'                         # end of the list
        self.send(bytes(out))
    def value(self, s, f):
        if f in s.keys: return s.keys[f]
        if f == 'numplayers': return str(len(s.players))
        return ''
    def info_request(self, b):
        ip = socket.inet_ntoa(b[0:4]); port = struct.unpack_from('>H', b, 4)[0]
        with LOCK: s = SERVERS.get((ip, port))
        if not s: return
        out = bytearray(b'\x02') + bytes([128 | 1]) + socket.inet_aton(ip) + struct.pack('>H', port)   # PUSH_SERVER, full rules
        for k, v in s.keys.items(): out += k.encode() + b'\0' + v.encode('latin1', 'replace') + b'\0'
        for i, kv in sorted(s.players.items()):
            for k, v in kv.items(): out += ('%s%d' % (k, i)).encode() + b'\0' + v.encode('latin1', 'replace') + b'\0'
        for i, kv in sorted(s.teams.items()):
            for k, v in kv.items(): out += ('%s%d' % (k, i)).encode() + b'\0' + v.encode('latin1', 'replace') + b'\0'
        out += b'\0'
        self.send(struct.pack('>H', len(out) + 2) + bytes(out))


# ------------------------------------------------------------------ accounts: User.txt
# Accounts.  In the game: Username (the old Nickname field: the name shown in matches) and Password (the old Email field; the game's
# GameSpy code sends it as <password>@rs.id).  The game also sends its install's id (\rsuuid\, platform/common/net.c): a random id
# made once per install and kept in the game's data folder; bans and "I Forgot" go by it (no addresses are kept).
# User.txt, one account per line:   profile id <TAB> username <TAB> password hash <TAB> install ids (comma-separated) <TAB> created
# Password hash: pbkdf2-sha256$<iterations>$<salt hex>$<hash hex>.  banned.txt: usernames, and uuid:<install id>, one per line.
DATA_DIR = os.path.dirname(os.path.abspath(__file__))
ACC_LOCK = threading.Lock()
GAME_PASSWORD = 'RS'                  # what the game hashes for the GameSpy login proof (platform/common/gamespy_ui.c)
USER_SUFFIX = '@rs.id'
PBKDF2_ITER = 120000
RESET_SECONDS = 600                   # "I Forgot": how long a found account accepts a new password from the same install
RESETS = {}                           # profile id -> (install id, time)
def dpath(n): return os.path.join(DATA_DIR, n)
def pw_hash(pw, salt=None):
    salt = salt or os.urandom(16)
    return 'pbkdf2-sha256$%d$%s$%s' % (PBKDF2_ITER, salt.hex(), hashlib.pbkdf2_hmac('sha256', pw.encode('utf-8'), salt, PBKDF2_ITER).hex())
def pw_check(pw, h):
    try:
        alg, it, salt, hx = h.split('$')
        return alg == 'pbkdf2-sha256' and hmac.compare_digest(hashlib.pbkdf2_hmac('sha256', pw.encode('utf-8'), bytes.fromhex(salt), int(it)).hex(), hx)
    except ValueError: return False
def valid_uuid(u): return bool(re.fullmatch(r'[0-9a-f]{32}', u or ''))
class User:
    def __init__(self, pid, name, pwh, uuids, created):
        self.pid, self.name, self.pwh, self.created = int(pid), name, pwh, created
        self.uuids = [x for x in uuids.split(',') if valid_uuid(x)]
def users():
    out = []; migrated = False
    try:
        for ln in open(dpath('User.txt'), encoding='utf-8'):
            if ln.startswith('#') or not ln.strip(): continue
            f = ln.rstrip('\n').split('\t')
            if len(f) < 5: continue
            if not f[2].startswith('pbkdf2-sha256$'):
                # an account of the earlier format (profile id, nickname, username, address hash, created): the nickname becomes the
                # username, the old username becomes the password (hashed now); the address hash is dropped
                f = [f[0], f[1], pw_hash(f[2]), '', f[4]]; migrated = True
            out.append(User(*f[:5]))
    except OSError: pass
    if migrated: users_save(out); log('User.txt: accounts of the earlier format converted (username = old nickname, password = old username)')
    return out
def users_save(us):
    tmp = dpath('User.txt.tmp')
    with open(tmp, 'w', encoding='utf-8') as f:
        f.write('# RS server accounts: profile id, username, password hash, install ids, created\n')
        for u in us: f.write('%d\t%s\t%s\t%s\t%s\n' % (u.pid, u.name, u.pwh, ','.join(u.uuids), u.created))
    os.replace(tmp, dpath('User.txt'))
def ban_list():
    try: return set(l.strip().lower() for l in open(dpath('banned.txt'), encoding='utf-8') if l.strip() and not l.startswith('#'))
    except OSError: return set()
def banned(u=None, uuid=None):
    bl = ban_list()
    if u is not None and (u.name.lower() in bl or any(('uuid:' + x) in bl for x in u.uuids)): return True
    return bool(uuid) and ('uuid:' + uuid.lower()) in bl
def find_user(us, name=None, pid=None, uuid=None):
    for u in reversed(us):                                            # the newest first ("I Forgot": the last account of an install)
        if name is not None and u.name.lower() == name.lower(): return u
        if pid is not None and u.pid == pid: return u
        if uuid is not None and uuid in u.uuids: return u
    return None
def strip_user(e):
    e = e.strip()
    return e[:-len(USER_SUFFIX)] if e.lower().endswith(USER_SUFFIX) else e
NAME_OK = re.compile(r'^[^\\\s@][^\\@]{2,19}$')                       # 3..20 characters, as the game's own check

def md5(s): return hashlib.md5(s.encode('latin1')).hexdigest()
SPACES = ' ' * 48

def kv_parse(msg):
    """\\key\\value\\key\\value... -> (command, dict)"""
    parts = msg.split('\\')[1:]
    cmd = parts[0] if parts else ''
    d = {}
    for i in range(0, len(parts) - 1, 2): d.setdefault(parts[i], parts[i + 1])
    return cmd, d

class GPBase(socketserver.BaseRequestHandler):
    def out(self, m): vlog('%s -> %s' % (self.tag, m)); self.request.sendall((m + '\\final\\').encode('latin1', 'replace'))
    def error(self, code, msg, oid='1', fatal=False):
        self.out('\\error\\\\err\\%d%s\\errmsg\\%s\\id\\%s' % (code, '\\fatal\\' if fatal else '', msg, oid))
    def messages(self):
        buf = b''; c = self.request; c.settimeout(600)
        while True:
            while b'\\final\\' not in buf:
                d = c.recv(4096)
                if not d: return
                buf += d
            m, buf = buf.split(b'\\final\\', 1)
            m = m.decode('latin1')
            vlog('%s <- %s' % (self.tag, re.sub(r'(\\(?:pass\w*|email)\\)[^\\]*', r'\1...', re.sub(r'(\\user\\[^@\\]*@)[^\\]*', r'\1...', m))))
            yield m

# ------------------------------------------------------------------ GameSpy Presence (TCP 29900): log in, make an account
class GPCM(GPBase):
    def handle(self):
        self.tag = 'GP %s' % self.client_address[0]; self.user = None; self.created = None
        self.chal = ''.join(random.choice('ABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(10))
        try:
            self.out('\\lc\\1\\challenge\\%s\\id\\1' % self.chal)
            for m in self.messages():
                cmd, d = kv_parse(m); oid = d.get('id', '1')
                if cmd == 'login': self.login(d, oid)
                elif cmd == 'newuser': self.newuser(d, oid)
                elif cmd == 'ka': self.out('\\ka\\')
                elif cmd == 'getprofile': self.getprofile(d)
                elif cmd == 'logout': return
                elif cmd in ('status', 'updatepro', 'updateui', 'addbuddy', 'delbuddy', 'authadd', 'bm', 'pinvite', 'revoke', 'registernick', 'registercdkey'): pass
                else: vlog('%s: %s not handled' % (self.tag, cmd))
        except (OSError, ValueError) as ex: vlog('%s: %r' % (self.tag, ex))
    def login(self, d, oid):
        cchal = d.get('challenge', ''); resp = d.get('response', '')[:32]
        uuid = d.get('rsuuid', '').lower(); uuid = uuid if valid_uuid(uuid) else ''
        user_str = d.get('user') or d.get('uniquenick') or ''
        with ACC_LOCK:
            us = users()
            if 'user' in d:                                           # Username @ password@rs.id
                name, _, pw = user_str.partition('@'); pw = strip_user(pw)
                u = find_user(us, name=name)
                if not u: log('GP: login %s: no such account' % name); return self.error(258, 'Incorrect username or password.', oid, True)
                if not pw_check(pw, u.pwh):
                    r = RESETS.get(u.pid)
                    if r and uuid and r[0] == uuid and time.time() - r[1] < RESET_SECONDS and pw:   # "I Forgot" from this install: new password
                        u.pwh = pw_hash(pw); RESETS.pop(u.pid, None); users_save(us); log('GP: %s set a new password (I Forgot, install %s)' % (u.name, uuid[:8]))
                    else:
                        log('GP: login %s: wrong password' % u.name); return self.error(260, 'Incorrect username or password.', oid, True)
            else:                                                     # by name only: right after making the account, or from its own install
                u = find_user(us, name=user_str)
                if not u: return self.error(265, 'Bad username.', oid, True)
                if not (self.created == u.pid or (uuid and uuid in u.uuids)):
                    log('GP: login %s by name refused (not this install)' % u.name); return self.error(260, 'Incorrect username or password.', oid, True)
            if banned(u, uuid): log('GP: login %s refused: banned' % u.name); return self.error(256, 'This account is banned from this server.', oid, True)
            if uuid and uuid not in u.uuids: u.uuids.append(uuid); users_save(us)
        h = md5(GAME_PASSWORD); proof = None
        names = [user_str] + (['%s@%s' % (d['partnerid'], user_str)] if d.get('partnerid', '0') not in ('0', '') else [])
        for name in names:
            if md5(h + SPACES + name + cchal + self.chal + h) == resp: proof = md5(h + SPACES + name + self.chal + cchal + h); break
            if md5(h + SPACES + name + self.chal + cchal + h) == resp: proof = md5(h + SPACES + name + cchal + self.chal + h); break
        if proof is None:
            log('GP: login %s: the game did not use the RS login (an unpatched game?)' % u.name)
            return self.error(260, 'This game is not set up for the RS server.', oid, True)
        self.user = u
        log('GP: %s logged in, profile %d%s' % (u.name, u.pid, '' if uuid else ' (no install id: an older game)'))
        self.out('\\lc\\2\\sesskey\\%d\\proof\\%s\\userid\\%d\\profileid\\%d\\uniquenick\\%s\\lt\\%s\\id\\%s' % (
            random.randint(100000, 999999), proof, u.pid - 1, u.pid, u.name, ''.join(random.choice('abcdefghijklmnopqrstuvwxyz0123456789') for _ in range(22)) + '__', oid))
    def newuser(self, d, oid):
        name = d.get('nick', '').strip(); pw = strip_user(d.get('email', ''))
        uuid = d.get('rsuuid', '').lower(); uuid = uuid if valid_uuid(uuid) else ''
        if not name or not pw: return self.error(516, 'A username and a password are needed.', oid)
        if not NAME_OK.match(name): return self.error(513, 'That username cannot be used.', oid)
        if banned(None, uuid): log('GP: new account %s refused: banned install' % name); return self.error(516, 'This game is banned from this server.', oid)
        with ACC_LOCK:
            us = users()
            if find_user(us, name=name): log('GP: new account: username %s taken' % name); return self.error(514, 'That username is already taken.', oid)
            pid = max([u.pid for u in us] + [100000]) + 2
            u = User(pid, name, pw_hash(pw), uuid, time.strftime('%Y-%m-%d %H:%M:%S')); us.append(u); users_save(us)
        self.created = pid
        log('GP: new account %s, profile %d%s' % (name, pid, '' if uuid else ' (no install id)'))
        self.out('\\nur\\0\\userid\\%d\\profileid\\%d\\id\\%s' % (pid - 1, pid, oid))
    def getprofile(self, d):
        pid = int(d.get('profileid', '0') or 0)
        with ACC_LOCK: u = find_user(users(), pid=pid)
        if not u: return self.out('\\pi\\\\profileid\\%d\\nick\\\\uniquenick\\\\id\\%s' % (pid, d.get('id', '1')))
        self.out('\\pi\\\\profileid\\%d\\nick\\%s\\uniquenick\\%s\\email\\hidden%s\\sig\\%s\\id\\%s' % (pid, u.name, u.name, USER_SUFFIX, md5(str(pid)), d.get('id', '1')))

# ------------------------------------------------------------------ GameSpy search (TCP 29901): the account screens' checks
class GPSP(GPBase):
    def handle(self):
        self.tag = 'GPSP %s' % self.client_address[0]; self.created = None
        try:
            for m in self.messages():
                cmd, d = kv_parse(m)
                with ACC_LOCK: us = users()
                if cmd == 'valid': self.out('\\vr\\0')                    # "is this e-mail registered": passwords are never looked up
                elif cmd == 'nicks':                                       # the names of an e-mail + password: the name typed, if it matches
                    u = find_user(us, name=d.get('nick', '')) if d.get('nick') else None
                    ok = u and pw_check(strip_user(d.get('email', '')), u.pwh)
                    self.out('\\nr\\%d' % (1 if ok else 0) + ('\\nick\\%s\\uniquenick\\%s' % (u.name, u.name) if ok else '') + '\\ndone\\')
                elif cmd == 'check':
                    u = find_user(us, name=d.get('nick', ''))
                    self.out('\\cur\\0\\pid\\%d' % u.pid if u else '\\cur\\265')
                elif cmd == 'uniquesearch': self.out('\\us\\1\\nick\\%s\\usdone\\' % d.get('preferrednick', ''))
                elif cmd == 'search': self.out('\\bsrdone\\')
                elif cmd == 'newuser': GPCM.newuser(self, d, d.get('id', '1'))
                else: vlog('%s: %s not handled' % (self.tag, cmd)); self.out('\\error\\\\err\\0\\errmsg\\not supported')
        except (OSError, ValueError) as ex: vlog('%s: %r' % (self.tag, ex))

# ------------------------------------------------------------------ RS account recovery (TCP 29910): "I Forgot"
class Recover(socketserver.BaseRequestHandler):
    """RSREC <install id> -> 'OK <username>' for the newest account used from that install (it then accepts a new password from it
    for RESET_SECONDS), or 'NONE' / 'BANNED'"""
    def handle(self):
        c = self.request; c.settimeout(10)
        try:
            ln = c.recv(128).decode('latin1', 'replace').split()
            if not ln or ln[0] != 'RSREC': return
            uuid = ln[1].lower() if len(ln) > 1 and valid_uuid(ln[1].lower()) else ''
            if not uuid: c.sendall(b'NONE\n'); log('RECOVER: no install id (an older game)'); return
            with ACC_LOCK: u = find_user(users(), uuid=uuid)
            if banned(u, uuid): c.sendall(b'BANNED\n'); log('RECOVER: install %s banned' % uuid[:8]); return
            if not u: c.sendall(b'NONE\n'); log('RECOVER: no account for install %s' % uuid[:8]); return
            RESETS[u.pid] = (uuid, time.time())
            c.sendall(('OK %s\t\n' % u.name).encode('utf-8')); log('RECOVER: %s (install %s): a new password can be set' % (u.name, uuid[:8]))
        except OSError: pass

# ------------------------------------------------------------------ HTTP (TCP 80): message of the day, version check, stats
def motd():
    p = dpath('motd.txt')
    if not os.path.exists(p): open(p, 'w', encoding='utf-8').write('This is a test\n')
    return open(p, encoding='utf-8').read().strip()
class HTTPHandler(http.server.BaseHTTPRequestHandler):
    protocol_version = 'HTTP/1.0'
    def do_GET(self):
        log('HTTP: %s %s (%s)' % (self.client_address[0], self.path, self.headers.get('Host', '')))
        path = self.path.split('?')[0].lower()
        body = b''
        if path.endswith('/motd.asp'): body = motd().encode('latin1', 'replace')
        elif path.endswith('/vercheck.asp'): body = b''                 # empty: no newer version
        self.send_response(200); self.send_header('Content-Type', 'text/plain'); self.send_header('Content-Length', str(len(body))); self.end_headers()
        self.wfile.write(body)
    do_POST = do_GET
    def log_message(self, *a): pass

class TCPServer(socketserver.ThreadingTCPServer):
    allow_reuse_address = True; daemon_threads = True

def set_ban(name, on):
    """ban / unban an account by username: the account and every install it was used from (banned.txt)"""
    with ACC_LOCK:
        u = find_user(users(), name=name)
        if not u: return 'no account %s' % name
        p = dpath('banned.txt')
        try: lines = [l.rstrip('\n') for l in open(p, encoding='utf-8')]
        except OSError: lines = ['# banned usernames, and installs (uuid:<install id>), one per line']
        keys = {u.name.lower()} | {'uuid:' + x for x in u.uuids}
        lines = [l for l in lines if l.strip().lower() not in keys]
        if on: lines += [u.name] + ['uuid:' + x for x in u.uuids]
        open(p, 'w', encoding='utf-8').write('\n'.join(lines) + '\n')
    log('%s %s (%d install%s)' % ('banned' if on else 'unbanned', u.name, len(u.uuids), '' if len(u.uuids) == 1 else 's'))
    return None

HELP = """commands:
  /ban <username>      ban an account and every install it was used from
  /unban <username>    lift it
  /users               list the accounts
  /sessions            the hosted sessions and their state
  /restart <n>         restart hosted session n (serversession<n>.txt read again)
  /help                this list
  /quit                stop the server (and its hosted sessions)"""
def console():
    """the command window: commands typed into the server's own window"""
    log('type /help for the commands')
    for ln in sys.stdin:
        ln = ln.strip()
        if not ln: continue
        cmd, _, arg = ln.partition(' '); cmd = cmd.lower().lstrip('/'); arg = arg.strip()
        try:
            if cmd in ('ban', 'unban'):
                if not arg: print('usage: /%s <username>' % cmd); continue
                err = set_ban(arg, cmd == 'ban')
                if err: print(err)
            elif cmd == 'users':
                us = users(); bl = ban_list()
                for u in us: print('  %-20s profile %d  %d install(s)%s' % (u.name, u.pid, len(u.uuids), '  BANNED' if banned(u) else ''))
                print('%d account(s)' % len(us))
            elif cmd == 'sessions': sessions.status()
            elif cmd == 'restart': sessions.restart(arg)
            elif cmd == 'help': print(HELP)
            elif cmd in ('quit', 'exit', 'stop'): sessions.stop_all(); os._exit(0)
            else: print('unknown command %s (/help)' % ln)
        except Exception as ex: print('error: %r' % ex)

sessions = None
def find_game():
    """the PC game folder (SWBFRS.exe and GAME/) when --game is not given: next to the server, or the project's Windows build"""
    here = os.path.dirname(os.path.abspath(__file__)); up = os.path.dirname(here); up2 = os.path.dirname(up)
    cands = [here, up, os.path.join(up, 'SWBFRS'), os.path.join(up2, 'Windows', 'SWBFRS_windows', 'SWBFRS'), os.path.join(up, 'Windows', 'SWBFRS_windows', 'SWBFRS')]
    for c in cands:
        if os.path.isdir(os.path.join(c, 'GAME')) and any(os.path.exists(os.path.join(c, e)) for e in ('SWBFRS.exe', 'swbfrs')): return c
    return None

def main():
    global VERBOSE, DATA_DIR, sessions
    if len(sys.argv) > 2 and sys.argv[1] in ('ban', 'unban'):
        args = sys.argv[2:]
        if '--data' in args: i = args.index('--data'); DATA_DIR = args[i + 1]; del args[i:i + 2]
        if not args: print('usage: rsmaster.py %s <username> [--data <folder>]' % sys.argv[1]); sys.exit(2)
        err = set_ban(args[0], sys.argv[1] == 'ban'); print(err or 'done'); sys.exit(1 if err else 0)
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('--data', default=None, help='folder for User.txt, banned.txt, motd.txt, serversession<N>.txt (default: next to this file)')
    ap.add_argument('--game', default=None, help='the PC game folder (SWBFRS.exe and GAME/): hosts the serversession<N>.txt sessions')
    ap.add_argument('--bind', default='0.0.0.0'); ap.add_argument('--http-port', type=int, default=80); ap.add_argument('-v', action='store_true')
    a = ap.parse_args(); VERBOSE = a.v
    if a.data: DATA_DIR = a.data; os.makedirs(DATA_DIR, exist_ok=True)
    threading.Thread(target=udp_loop, args=(27950, lan_packet, a.bind), daemon=True).start()
    threading.Thread(target=udp_loop, args=(27900, qr2_packet, a.bind), daemon=True).start()
    sb = TCPServer((a.bind, 28910), SBHandler); log('TCP 28910 listening')
    threading.Thread(target=sb.serve_forever, daemon=True).start()
    motd(); users()                                                    # motd.txt exists, User.txt of the earlier format converted
    for port, h in ((29900, GPCM), (29901, GPSP), (29910, Recover)):
        srv = TCPServer((a.bind, port), h); log('TCP %d listening' % port); threading.Thread(target=srv.serve_forever, daemon=True).start()
    try:
        hs = http.server.ThreadingHTTPServer((a.bind, a.http_port), HTTPHandler); log('TCP %d (HTTP) listening' % a.http_port)
        threading.Thread(target=hs.serve_forever, daemon=True).start()
    except OSError as ex: log('HTTP port %d: %s (the game\'s news and version check will fail)' % (a.http_port, ex))
    import sessions as sessmod
    game = os.path.abspath(a.game) if a.game else find_game()
    if game and not a.game: log('SESSIONS: no --game given: using the PC game found at %s' % game)
    sessions = sessmod.Manager(DATA_DIR, game, log); sessions.start_all()
    log('RS master for %s running' % GAME)
    try:
        if sys.stdin and sys.stdin.isatty(): console()
        else:
            while True: time.sleep(3600)
    except KeyboardInterrupt: pass
    sessions.stop_all()

if __name__ == '__main__':
    main()
