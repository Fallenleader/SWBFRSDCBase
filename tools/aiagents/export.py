"""Export a trained policy for the game.

    python export.py --model runs/<run>/final.zip --out exports/infantry_v0 [--onnx]

Writes <out>.rsnn (fp32), <out>.int8.rsnn (int8 weights, one scale per output row) and optionally <out>.onnx.
.rsnn (little-endian): "RSNN", u32 version=1, u32 n_layers, u32 activation (1 tanh, 2 relu), u32 quant (0 fp32, 1 int8);
then per layer: u32 in, u32 out, [int8: f32 scale[out]], weights[out][in] (f32, or i8 padded to 4 bytes), f32 bias[out].
Hidden layers use the activation; the last layer gives the action logits (the action is the largest)."""
import argparse, os, struct
import numpy as np
import torch


def policy_layers(model):
    p = model.policy
    lin = [m for m in p.mlp_extractor.policy_net if isinstance(m, torch.nn.Linear)] + [p.action_net]
    acts = [m for m in p.mlp_extractor.policy_net if not isinstance(m, torch.nn.Linear)]
    act = 1 if (acts and isinstance(acts[0], torch.nn.Tanh)) else 2
    return [(l.weight.detach().numpy().astype(np.float32), l.bias.detach().numpy().astype(np.float32)) for l in lin], act


def write_rsnn(path, layers, act, quant):
    with open(path, "wb") as f:
        f.write(b"RSNN" + struct.pack("<4I", 1, len(layers), act, quant))
        for W, b in layers:
            f.write(struct.pack("<2I", W.shape[1], W.shape[0]))
            if quant:
                sc = np.maximum(np.abs(W).max(1), 1e-12) / 127.0
                f.write(sc.astype("<f4").tobytes()); f.write(np.clip(np.round(W / sc[:, None]), -127, 127).astype(np.int8).tobytes()); f.write(b"\0" * (-W.size % 4))
            else:
                f.write(W.astype("<f4").tobytes())
            f.write(b.astype("<f4").tobytes())
    return os.path.getsize(path)


def reference_logits(layers, act, x):
    for i, (W, b) in enumerate(layers):
        x = x @ W.T + b
        if i < len(layers) - 1:
            x = np.tanh(x) if act == 1 else np.maximum(x, 0)
    return x


def main():
    ap = argparse.ArgumentParser(); ap.add_argument("--model", required=True); ap.add_argument("--out", required=True)
    ap.add_argument("--onnx", action="store_true"); a = ap.parse_args()
    from stable_baselines3 import PPO
    m = PPO.load(a.model, device="cpu"); layers, act = policy_layers(m)
    os.makedirs(os.path.dirname(a.out) or ".", exist_ok=True)
    print("fp32", write_rsnn(a.out + ".rsnn", layers, act, 0), "bytes;", "int8", write_rsnn(a.out + ".int8.rsnn", layers, act, 1), "bytes")
    if a.onnx:
        class Logits(torch.nn.Module):
            def __init__(s, p): super().__init__(); s.p = p
            def forward(s, x): return s.p.action_net(s.p.mlp_extractor.forward_actor(x))
        torch.onnx.export(Logits(m.policy), torch.zeros(1, layers[0][0].shape[1]), a.out + ".onnx", input_names=["obs"],
                          output_names=["logits"], dynamic_axes={"obs": {0: "agents"}, "logits": {0: "agents"}}, dynamo=False)
        print("onnx", a.out + ".onnx")


if __name__ == "__main__":
    main()
