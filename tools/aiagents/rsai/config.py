import yaml, random, os
import numpy as np


def load(path):
    with open(path) as f:
        return yaml.safe_load(f)


def seed_everything(seed):
    import torch
    random.seed(seed); np.random.seed(seed); torch.manual_seed(seed)
    os.environ["PYTHONHASHSEED"] = str(seed)
    torch.use_deterministic_algorithms(True, warn_only=True)
