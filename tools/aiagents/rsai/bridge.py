"""The trainer's end of the game's AI bridge: a TCP server the game connects to (RS_AI_BRIDGE=127.0.0.1:<port>).

    python -m rsai.bridge record --port 47800 --out runs/rec_tatooine.npz [--seconds 120]

records the original AI's bots from a real match (start the game with RS_AI_BRIDGE=127.0.0.1:47800) and prints a summary.
"""
import argparse, socket, time
import numpy as np
from . import protocol


class Bridge:
    def __init__(self, port, host="127.0.0.1", timeout=None):
        self.srv = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.srv.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        self.srv.bind((host, port)); self.srv.listen(1); self.srv.settimeout(timeout)
        self.conn = None

    def accept(self):
        self.conn, addr = self.srv.accept(); self.conn.settimeout(None)
        self.conn.setsockopt(socket.IPPROTO_TCP, socket.TCP_NODELAY, 1)
        return addr

    def read(self):
        return protocol.read_snapshot(self.conn)

    def reply(self, ids, actions, params=None):
        protocol.write_actions(self.conn, ids, actions, params)

    def close(self):
        for s in (self.conn, self.srv):
            if s:
                s.close()


def record(port, out, seconds, lockstep):
    b = Bridge(port); print(f"[bridge] waiting for the game on 127.0.0.1:{port} (RS_AI_BRIDGE=127.0.0.1:{port})")
    print("[bridge] game connected from", b.accept())
    frames, t_s, recs, raws = [], [], [], []
    t_end = time.time() + seconds
    try:
        while time.time() < t_end:
            s = b.read()
            frames.append(s.frame); t_s.append(s.time_s); recs.append(s.recs.copy())
            if s.raw is not None:
                raws.append(s.raw.copy())
            if lockstep:
                b.reply(s.recs["id"], np.zeros(len(s.recs), np.uint32))
    except ConnectionError as e:
        print("[bridge]", e)
    b.close()
    flat = np.concatenate(recs) if recs else np.zeros(0, protocol.REC)
    counts = np.array([len(r) for r in recs], np.int32)
    np.savez_compressed(out, frame=np.array(frames, np.uint32), time_s=np.array(t_s, np.float32), counts=counts,
                        recs=flat, **({"raw": np.concatenate(raws)} if raws else {}))
    print(f"[bridge] {len(recs)} snapshots, {int(counts.sum())} bot records -> {out}")
    return out


def main():
    ap = argparse.ArgumentParser(); sub = ap.add_subparsers(dest="cmd", required=True)
    r = sub.add_parser("record"); r.add_argument("--port", type=int, default=47800); r.add_argument("--out", required=True)
    r.add_argument("--seconds", type=float, default=120); r.add_argument("--lockstep", action="store_true")
    a = ap.parse_args()
    if a.cmd == "record":
        record(a.port, a.out, a.seconds, a.lockstep)


if __name__ == "__main__":
    main()
