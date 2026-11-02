#!/usr/bin/env python3
"""RS master: the GameSpy services Renegade Squadron's online mode talks to, for the RS server (the game's own protocols, so the
original matchmaking keeps working; game name "swbfffpsp").

  UDP 27950  LAN discovery: a game on the LAN that has no server address asks "RSSRV?" by broadcast; this answers "RSSRV!".
  UDP 27900  QR2 (query & reporting 2): the availability check, and the hosts' heartbeats (a host registers its match here).
  TCP 28910  server browsing 2: the match list, encrypted with the game's key (GOA cipher), and single-match info.
  TCP 29900  GameSpy Presence (gpcm): GameSpy ID login and account creation.  Accounts live in accounts.json (next to this
             file, or --data): a GameSpy ID is created from the game's "Create New GameSpy ID", then used to log in.
  TCP 29901  GameSpy search (gpsp): e-mail / nickname checks for the account screens.
  TCP 80     HTTP: the message of the day and version check (motd.gamespy.com), the stats pages (gamestats.gamespy.com).
             Port 80 needs administrator rights on Linux (or --http-port with a redirect); Windows allows it.

The game (built with platform/common/net.c) resolves every *.gamespy.com name to this machine: found on the LAN first, else the
address in its settings.txt (RS_SERVER=).  Run on the machine of the dedicated host (rsserver), or anywhere both can reach.

    python3 rsmaster.py [--bind 0.0.0.0] [-v]
Python 3.7+, no other packages."""
import argparse, base64, hashlib, http.server, json, os, re, random, socket, socketserver, struct, sys, threading, time

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


# ------------------------------------------------------------------ GameSpy Presence (TCP 29900) and search (TCP 29901)
DATA_DIR = os.path.dirname(os.path.abspath(__file__))
ACC_LOCK = threading.Lock()
def acc_path(): return os.path.join(DATA_DIR, 'accounts.json')
def accounts():
    try: return json.load(open(acc_path()))
    except (OSError, ValueError): return {'next': 100000, 'users': []}
def acc_save(a):
    tmp = acc_path() + '.tmp'; json.dump(a, open(tmp, 'w'), indent=1); os.replace(tmp, acc_path())
def acc_find(a, nick=None, email=None, uniquenick=None, pid=None):
    for u in a['users']:
        if pid is not None and u['pid'] == pid: return u
        if uniquenick is not None and u.get('uniquenick', '').lower() == uniquenick.lower(): return u
        if nick is not None and u['nick'].lower() == nick.lower() and (email is None or u['email'].lower() == email.lower()): return u
        if nick is None and uniquenick is None and pid is None and email is not None and u['email'].lower() == email.lower(): return u
    return None

def gs_b64dec(t):
    t = t.replace('[', '+').replace(']', '/').replace('_', '=')
    t += '=' * (-len(t) % 4)
    return base64.b64decode(t)
def gslame(num):
    c = (num >> 16) & 0xffff; a = num & 0xffff
    c = (c * 0x41a7) & 0xffffffff; a = (a * 0x41a7) & 0xffffffff
    a = (a + ((c & 0x7fff) << 16)) & 0xffffffff
    if a & 0x80000000: a = (a & 0x7fffffff) + 1
    a = (a + (c >> 15)) & 0xffffffff
    if a & 0x80000000: a = (a & 0x7fffffff) + 1
    return a
def gspassenc(b):
    num = 0x79707367 & 0x7fffffff; out = bytearray(b)
    for i in range(len(out)):
        num = gslame(num); out[i] ^= num % 0xff
    return bytes(out)
def gs_password(enc): return gspassenc(gs_b64dec(enc)).split(b'\0')[0].decode('latin1')
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
    def out(self, m): vlog('%s -> %s' % (self.tag, m)); self.request.sendall((m + '\\final\\').encode('latin1'))
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
            m = m.decode('latin1'); vlog('%s <- %s' % (self.tag, re.sub(r'(\\pass\w*\\)[^\\]*', r'\1...', m)))
            yield m

class GPCM(GPBase):
    def handle(self):
        self.tag = 'GP %s' % self.client_address[0]; self.user = None
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
        with ACC_LOCK: a = accounts()
        user_str = None; u = None
        if 'uniquenick' in d: user_str = d['uniquenick']; u = acc_find(a, uniquenick=user_str) or acc_find(a, nick=user_str)
        elif 'user' in d:
            user_str = d['user']; nick, _, email = user_str.partition('@')
            u = acc_find(a, nick=nick, email=email or None)
        if not u:
            log('GP: login %s: no such GameSpy ID on this server' % user_str)
            return self.error(258 if 'user' in d else 265, 'There is no GameSpy ID with that name on this server - choose Create New GameSpy ID first.', oid, True)
        h = md5(u['password'])
        names = [user_str]
        if d.get('partnerid', '0') not in ('0', ''): names = ['%s@%s' % (d['partnerid'], user_str), user_str]
        for name in names:
            if md5(h + SPACES + name + cchal + self.chal + h) == resp: proof = md5(h + SPACES + name + self.chal + cchal + h); break
            if md5(h + SPACES + name + self.chal + cchal + h) == resp: proof = md5(h + SPACES + name + cchal + self.chal + h); break
        else:
            log('GP: login %s: wrong password' % user_str)
            return self.error(260, 'The password provided was incorrect.', oid, True)
        self.user = u; sess = random.randint(100000, 999999)
        log('GP: %s logged in (profile %d)' % (u['nick'], u['pid']))
        self.out('\\lc\\2\\sesskey\\%d\\proof\\%s\\userid\\%d\\profileid\\%d\\uniquenick\\%s\\lt\\%s\\id\\%s' % (
            sess, proof, u['uid'], u['pid'], u.get('uniquenick') or u['nick'], ''.join(random.choice('abcdefghijklmnopqrstuvwxyz0123456789') for _ in range(22)) + '__', oid))
    def newuser(self, d, oid):
        nick = d.get('nick', ''); email = d.get('email', ''); un = d.get('uniquenick', '') or nick
        pw = gs_password(d['passwordenc']) if 'passwordenc' in d else d.get('password', '')
        if not nick or not pw: return self.error(513, 'A nickname and a password are needed.', oid)
        with ACC_LOCK:
            a = accounts()
            if acc_find(a, nick=nick, email=email) or acc_find(a, uniquenick=un): return self.error(513, 'A GameSpy ID with that name already exists on this server.', oid)
            u = {'uid': a['next'], 'pid': a['next'] + 1, 'nick': nick, 'uniquenick': un, 'email': email, 'password': pw, 'created': time.strftime('%Y-%m-%d %H:%M:%S')}
            a['next'] += 2; a['users'].append(u); acc_save(a)
        log('GP: new GameSpy ID %s (%s), profile %d' % (nick, email, u['pid']))
        self.out('\\nur\\0\\userid\\%d\\profileid\\%d\\id\\%s' % (u['uid'], u['pid'], oid))
    def getprofile(self, d):
        pid = int(d.get('profileid', '0') or 0)
        with ACC_LOCK: u = acc_find(accounts(), pid=pid)
        if not u: return self.out('\\pi\\\\profileid\\%d\\nick\\\\uniquenick\\\\id\\%s' % (pid, d.get('id', '1')))
        self.out('\\pi\\\\profileid\\%d\\nick\\%s\\uniquenick\\%s\\email\\%s\\sig\\%s\\id\\%s' % (pid, u['nick'], u.get('uniquenick') or u['nick'], u['email'], md5(str(pid)), d.get('id', '1')))

class GPSP(GPBase):
    def handle(self):
        self.tag = 'GPSP %s' % self.client_address[0]
        try:
            for m in self.messages():
                cmd, d = kv_parse(m)
                with ACC_LOCK: a = accounts()
                if cmd == 'valid': self.out('\\vr\\%d' % (1 if acc_find(a, email=d.get('email', '')) else 0))
                elif cmd == 'nicks':
                    us = [u for u in a['users'] if u['email'].lower() == d.get('email', '').lower()]
                    self.out('\\nr\\%d' % len(us) + ''.join('\\nick\\%s\\uniquenick\\%s' % (u['nick'], u.get('uniquenick') or u['nick']) for u in us) + '\\ndone\\')
                elif cmd == 'check':
                    u = acc_find(a, nick=d.get('nick', ''), email=d.get('email') or None)
                    self.out('\\cur\\0\\pid\\%d' % u['pid'] if u else '\\cur\\265')
                elif cmd == 'uniquesearch': self.out('\\us\\1\\nick\\%s\\usdone\\' % d.get('preferrednick', ''))
                elif cmd == 'search': self.out('\\bsrdone\\')
                elif cmd == 'newuser': GPCM.newuser(self, d, d.get('id', '1'))
                else: vlog('%s: %s not handled' % (self.tag, cmd)); self.out('\\error\\\\err\\0\\errmsg\\not supported')
        except (OSError, ValueError) as ex: vlog('%s: %r' % (self.tag, ex))

# ------------------------------------------------------------------ HTTP (TCP 80): message of the day, version check, stats
MOTD = 'Welcome to the Renegade Squadron server.'
class HTTPHandler(http.server.BaseHTTPRequestHandler):
    protocol_version = 'HTTP/1.0'
    def do_GET(self):
        log('HTTP: %s %s (%s)' % (self.client_address[0], self.path, self.headers.get('Host', '')))
        path = self.path.split('?')[0].lower()
        body = b''
        if path.endswith('/motd.asp'): body = MOTD.encode('latin1', 'replace')
        elif path.endswith('/vercheck.asp'): body = b''                 # empty: no newer version
        self.send_response(200); self.send_header('Content-Type', 'text/plain'); self.send_header('Content-Length', str(len(body))); self.end_headers()
        self.wfile.write(body)
    do_POST = do_GET
    def log_message(self, *a): pass

class TCPServer(socketserver.ThreadingTCPServer):
    allow_reuse_address = True; daemon_threads = True

def main():
    global VERBOSE
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('--data', default=None, help='folder for accounts.json (default: next to this file)')
    ap.add_argument('--bind', default='0.0.0.0'); ap.add_argument('--http-port', type=int, default=80); ap.add_argument('-v', action='store_true')
    a = ap.parse_args(); VERBOSE = a.v
    global DATA_DIR
    if a.data: DATA_DIR = a.data; os.makedirs(DATA_DIR, exist_ok=True)
    threading.Thread(target=udp_loop, args=(27950, lan_packet, a.bind), daemon=True).start()
    threading.Thread(target=udp_loop, args=(27900, qr2_packet, a.bind), daemon=True).start()
    sb = TCPServer((a.bind, 28910), SBHandler); log('TCP 28910 listening')
    threading.Thread(target=sb.serve_forever, daemon=True).start()
    for port, h in ((29900, GPCM), (29901, GPSP)):
        srv = TCPServer((a.bind, port), h); log('TCP %d listening' % port); threading.Thread(target=srv.serve_forever, daemon=True).start()
    try:
        hs = http.server.ThreadingHTTPServer((a.bind, a.http_port), HTTPHandler); log('TCP %d (HTTP) listening' % a.http_port)
        threading.Thread(target=hs.serve_forever, daemon=True).start()
    except OSError as ex: log('HTTP port %d: %s (the game\'s news and version check will fail)' % (a.http_port, ex))
    log('RS master for %s running (Ctrl+C stops)' % GAME)
    try:
        while True: time.sleep(3600)
    except KeyboardInterrupt: pass

if __name__ == '__main__':
    main()
