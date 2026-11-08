"""Wire format of the game's AI bridge (platform/common/ai_bridge.h).  Keep in step with RS_AI_BRIDGE_VERSION."""
import numpy as np

VERSION = 1
HDR = np.dtype([("magic", "S4"), ("version", "<u4"), ("frame", "<u4"), ("time_s", "<f4"), ("n", "<u4"),
                ("rec_size", "<u4"), ("raw_size", "<u4"), ("caps", "<u4")])
REC = np.dtype([("id", "<u4"), ("obj", "<u4"), ("team", "<u4"), ("alive", "<u4"), ("pos", "<f4", 3), ("goal", "<i4"),
                ("squad_order", "<u4"), ("squad_post", "<u4"), ("has_squad", "<u4"), ("vehicle", "<u4"), ("ctl", "<u4"),
                ("flags", "<u4")])
ACT = np.dtype([("id", "<u4"), ("action", "<u4"), ("param", "<f4", 4)])
CAP_ACTIONS_APPLIED = 1
assert HDR.itemsize == 32 and REC.itemsize == 56 and ACT.itemsize == 24


class Snapshot:
    """One snapshot of the game: header fields, the bots' records (numpy structured array) and the optional raw object bytes."""
    def __init__(self, hdr, recs, raw):
        self.frame = int(hdr["frame"]); self.time_s = float(hdr["time_s"]); self.caps = int(hdr["caps"])
        self.recs = recs; self.raw = raw

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
    return Snapshot(hdr, recs, raw)


def write_actions(sock, ids, actions, params=None):
    a = np.zeros(len(ids), ACT); a["id"] = ids; a["action"] = actions
    if params is not None:
        a["param"] = params
    sock.sendall(b"RSAA" + np.uint32(len(ids)).tobytes() + a.tobytes())
