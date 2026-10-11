"""Texture identity used by the runtime texture-replacement layer: CRC-32 (zlib) of the level-0 pixel bytes exactly as stored
(swizzled indices), printed as 8 hex digits.  runtime/texrep.c computes the same value from guest memory."""
import zlib
def texkey(level0_pixels): return '%08x' % (zlib.crc32(bytes(level0_pixels)) & 0xFFFFFFFF)
