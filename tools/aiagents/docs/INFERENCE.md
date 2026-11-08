# Running a trained policy in the game (no Python)

## Choice: `native/rsnn.c`

`native/rsnn.c` is a plain C99 MLP runner of about 100 lines. It reads `.rsnn` files written by `export.py`.

| Option | Why it was or wasn't chosen |
|---|---|
| **rsnn.c (chosen)** | No dependencies, CPU only. About 1 KB of code on the 3DS (compiled with `-march=armv6k`). Batches all agents in one call. Works the same on 3DS, Vita, PS5, Deck and PC. |
| ONNX Runtime | Several MB of C++ with threading and allocator requirements. Not practical on 3DS or Vita. Kept only as an exchange format: `export.py --onnx` writes `.onnx` for inspection and other tools. |
| TensorFlow Lite Micro | Small and portable, but C++. It would add a second training stack (TensorFlow) or a conversion step for a three-layer MLP. |
| ggml / llama.cpp-style runtimes | Built for large models. Unnecessary here. |

## Model format and size (default `infantry_v0`)

- The network is 66 inputs → 64 → 64 → 10 logits, with tanh. That is about 9,000 weights.
- The file is 36 KB in fp32, or 10 KB in int8 (one scale per output row).
- int8 matched every action of fp32 on 256 random inputs (largest logit error 0.007). Run `tests/check_native.py` to repeat this check.
- Measured cost: 6.5 µs per agent (fp32) on the build machine's x86 CPU.
- On the 3DS ARM11 (268 MHz, VFP) the cost is **estimated** at roughly 0.1–0.3 ms per agent per decision. At 5 decisions a second for 15 bots that is about 1–2% of one core. It must be measured on hardware before it's relied on.
- int8 mostly saves memory and bandwidth. The arithmetic stays float, because the ARM11 has no fast int8 dot product.

## Configurable

- Network size: `policy.hidden` in the config. Export and the runner follow the file.
- Agent count: the bots given to the policy.
- Decision rate: `RS_AI_BRIDGE_HZ` while training, and the same rate in the game.

## Deployment workflow (planned; the in-game part is written once a policy has beaten the original AI)

1. `python train.py ...` gives `runs/<run>/final.zip`.
2. `python evaluate.py ...` compares the policy with the original AI over several seeds and scenarios.
3. `python export.py --model runs/<run>/best/best_model.zip --out exports/infantry_v1` gives `.rsnn` (fp32) and `.int8.rsnn`.
4. `python tests/check_native.py <model>` checks that the C runner and PyTorch agree.
5. Ship the model as `mods/ai/infantry.rsnn`, read through the game's file system (so a mod can replace it).
6. In-game: the same observation builder in C (a port of `rsai/spaces.py build_obs`), `rsnn_forward` over all policy bots at the decision rate, and the tactical action applied through the same goal path the trainer uses. A setting such as `RS_AI_POLICY=0/1` switches between the original AI and the policy.

Keep `spaces.py` and the C observation builder in step: same feature order, same scaling. The export should carry a hash of `OBS_NAMES` so the game can refuse a model built for a different observation layout.
