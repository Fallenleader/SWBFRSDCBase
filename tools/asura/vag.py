"""PSP VAG ADPCM (RSCF type 3 '.wav' resources start with a 'VAGp' header) -> 16-bit PCM."""
import struct
F = [(0, 0), (60, 0), (115, -52), (98, -55), (122, -60)]
def decode(b):
    if b[:4] != b'VAGp': raise ValueError('not VAG')
    size, rate = struct.unpack_from('>II', b, 12); data = bytearray(b[48:48 + size])
    out = []; s1 = s2 = 0
    for o in range(0, len(data) - 15, 16):
        pr = data[o] >> 4; sh = data[o] & 15; fl = data[o + 1]
        if fl == 7: break
        if pr > 4: pr = 0
        c1, c2 = F[pr]
        for i in range(14):
            byte = data[o + 2 + i]
            for nib in (byte & 15, byte >> 4):
                s = (nib << 12) & 0xFFFF
                if s & 0x8000: s -= 0x10000
                s = (s >> sh) + ((s1 * c1 + s2 * c2) >> 6)
                s = -32768 if s < -32768 else (32767 if s > 32767 else s)
                out.append(s); s2 = s1; s1 = s
    return rate, out
def wav_bytes(rate, samples):
    pcm = struct.pack('<%dh' % len(samples), *samples)
    return b'RIFF' + struct.pack('<I', 36 + len(pcm)) + b'WAVEfmt ' + struct.pack('<IHHIIHH', 16, 1, 1, rate, rate * 2, 2, 16) + b'data' + struct.pack('<I', len(pcm)) + pcm
