"""Wire format of the game's AI bridge (platform/common/ai_bridge.h).  Keep in step with RS_AI_BRIDGE_VERSION."""
import numpy as np

VERSION = 3
HDR = np.dtype([("magic", "S4"), ("version", "<u4"), ("frame", "<u4"), ("time_s", "<f4"), ("n", "<u4"),
                ("rec_size", "<u4"), ("raw_size", "<u4"), ("caps", "<u4")])
REC = np.dtype([("id", "<u4"), ("obj", "<u4"), ("team", "<u4"), ("alive", "<u4"), ("pos", "<f4", 3), ("goal", "<i4"),
                ("squad_order", "<u4"), ("squad_post", "<u4"), ("has_squad", "<u4"), ("vehicle", "<u4"), ("ctl", "<u4"),
                ("flags", "<u4"), ("health", "<f4"), ("policy", "<u4"),
                # v3
                ("kit", "<u4", 3), ("fired", "<u4"), ("near_id", "<u4", 3), ("near_los", "u1", 4), ("cover", "<f4", 3), ("cover_ok", "<u4")])
EVT = np.dtype([("target", "<u4"), ("source", "<u4"), ("amount", "<f4"), ("before", "<f4"), ("after", "<f4"), ("weapon", "<u4")])
VEH = np.dtype([("pos", "<f4", 3), ("id", "<u4"), ("side", "<i4")])
POST = np.dtype([("pos", "<f4", 3), ("id", "<u4"), ("owner", "<u4")])
ACT = np.dtype([("id", "<u4"), ("action", "<u4"), ("param", "<f4", 4)])
CAP_ACTIONS_APPLIED = 1
assert HDR.itemsize == 32 and REC.itemsize == 112 and ACT.itemsize == 24 and POST.itemsize == 20 and EVT.itemsize == 24 and VEH.itemsize == 20


class Snapshot:
    """One snapshot of the game: header fields, the bots' records (numpy structured array), the optional raw object bytes and the
    command posts (position, owner team), the hits since the previous snapshot and the vehicles."""
    def __init__(self, hdr, recs, raw, posts=None, events=None, vehicles=None):
        self.frame = int(hdr["frame"]); self.time_s = float(hdr["time_s"]); self.caps = int(hdr["caps"])
        self.recs = recs; self.raw = raw; self.posts = posts if posts is not None else np.zeros(0, POST)
        self.events = events if events is not None else np.zeros(0, EVT); self.vehicles = vehicles if vehicles is not None else np.zeros(0, VEH)
        self.game_s = self.frame / 60.0          # game time (frames at 60 per second; with RS_VCLOCK=1 exactly the game's clock)

    @property
    def actions_applied(self):
        return bool(self.caps & CAP_ACTIONS_APPLIED)


def read_exact(sock, n):
    b = bytearray()
    while len(b) < n:
        c = sock.recv(n - len(b))
        if not c:
            raise ConnectionError("game closed the bridge")
        b += c
    return bytes(b)


def read_snapshot(sock):
    hdr = np.frombuffer(read_exact(sock, HDR.itemsize), HDR)[0]
    if hdr["magic"] != b"RSAI" or hdr["version"] != VERSION or hdr["rec_size"] != REC.itemsize:
        raise ValueError(f"bridge format mismatch: {hdr}")
    n = int(hdr["n"]); recs = np.frombuffer(read_exact(sock, n * REC.itemsize), REC) if n else np.zeros(0, REC)
    raw = None
    if hdr["raw_size"] and n:
        raw = np.frombuffer(read_exact(sock, n * int(hdr["raw_size"])), np.uint8).reshape(n, int(hdr["raw_size"]))
    npost = int(np.frombuffer(read_exact(sock, 4), "<u4")[0])
    posts = np.frombuffer(read_exact(sock, npost * POST.itemsize), POST) if npost else np.zeros(0, POST)
    ne = int(np.frombuffer(read_exact(sock, 4), "<u4")[0])
    events = np.frombuffer(read_exact(sock, ne * EVT.itemsize), EVT) if ne else np.zeros(0, EVT)
    nv = int(np.frombuffer(read_exact(sock, 4), "<u4")[0])
    vehicles = np.frombuffer(read_exact(sock, nv * VEH.itemsize), VEH) if nv else np.zeros(0, VEH)
    return Snapshot(hdr, recs, raw, posts, events, vehicles)


def write_actions(sock, ids, actions, params=None):
    """params[:, 0:3] = destination, params[:, 3] = 1 to send the bot there (RS_AI_BRIDGE_CONTROL=1), 0 to leave it"""
    a = np.zeros(len(ids), ACT); a["id"] = ids; a["action"] = actions
    if params is not None:
        a["param"] = params
    sock.sendall(b"RSAA" + np.uint32(len(ids)).tobytes() + a.tobytes())
