# How the decompilation was produced, and what is proven

Input: the decrypted executable `EBOOT.BIN` of ULUS10292 v1.02, a relocatable PSP module (ELF type 0xFFA0). It has no
symbol table, but it has a full relocation table, `.eh_frame` and the import stub tables. All facts below were derived
from the executable by the tools in `tools/dc`. Nothing was taken from symbol names, because there are none.

## 1. Program model (`prog.py`, `isa.py`, `cfg.py`)

* **Decoding:** every instruction (MIPS32 + Allegrex extensions + FPU + VFPU) is decoded with its exact register
  reads and writes.
* **Relocations:** 58,309 R_MIPS_26, 23,563 HI16 and 30,238 LO16, and 30,099 R_MIPS_32.
  * Each HI16 instruction pairs with exactly one absolute address, and no LO16 is an `ori`, so every address constant
    in code is exact.
  * R_MIPS_32 cells identify every pointer stored in data.
* **Functions:** 14,760, taken from jal targets, code-address constants and code pointers in program data (vtables,
  callbacks, ctors/dtors).
  * No branch leaves its function, and every `j` stays inside its function.
  * 27 functions fall through into the next function, which is a real entry point; that becomes a tail call.
* **Jump tables:** 277 `jr` sites, all resolved. Each is `lw` from table + 4*index, sized by the range check that guards
  it (an `sltiu` whose result feeds a branch). Every table entry lies inside its function. They become `switch`.
* **Imports:** 242. 240 names are verified by NID = first 4 bytes of SHA-1(name), with candidate names taken from the
  PSPSDK headers and known SDK function names. Two have no known name and keep the PPSSPP-style NID names:
  `ModuleMgrForUser_8F2DF740`, `scePower_EBD177D6`.

## 2. Calling convention evidence (`abi.py`)

The checker is an abstract interpretation over every function's CFG. It tracks register values as entry value of
register r, entry sp + k, constant, or clobbered by a call, plus a stack-slot memory map. It checks three things:

* **preserve:** at every return or tail exit, s0-s8, f20-f31, sp and ra hold their entry values.
* **clobber:** no instruction reads a caller-saved register after a call before writing it. v0/v1/f0 are excepted, and
  lwl/lwr pairs count as full definitions.
* **callee:** no instruction uses the entry value of a callee-saved register, except to save it.

Result: every function conforms except 11. All 11 are statically linked library code at 0x08A85FC0-0x08A9F068:
newlib/libsupc++ startup and exit paths, a printf-family function that passes its own return address as an argument,
and one read of an uninitialised register on an impossible path. This is what allows guest registers to become C
locals and calls to become C calls.

## 3. Signatures (`sig.py`, `icall.py`)

This is a whole-program fixpoint over the PSP EABI: int arguments a0-a3, t0-t3; float arguments f12-f19; results
v0/v1 and f0.

* **Parameters:** the argument registers live at function entry.
  * A direct call uses its callee's parameters.
  * An indirect call uses the union over its candidate callees. 3,013 of 3,995 indirect calls are virtual calls whose
    vtable slot is known; their candidates are the functions at that slot in the 764 vtables. The others are assumed to
    use every argument register.
* **Filtering at the call site:** calls clobber every caller-saved register (proven above). So a call only passes
  registers written since the caller's last call, or passed through unchanged from its entry; other parameters
  receive 0.
* **Return values:** a register is returned if some caller reads it after the call AND the function can deliver it
  (written after its last call, or delivered by its last callee).
* **Address-taken functions:** pointers in program data and code constants; `.eh_frame` and module export tables
  don't count. These functions use one uniform prototype (`ifn_t`), so indirect calls are valid C.

## 4. Stack frames (`frame.py`)

* **Frame:** the frame size is the lowest stack offset reached, and each frame is a local array.
* **Saved registers:** a slot whose every store saves register r and whose every load restores r into r is removed,
  together with those stores and loads.
* **Stack-passed arguments:** 24 functions read their caller's outgoing-argument area. All are only called directly,
  so they receive the caller's stack pointer and copy that area. No function writes to its caller's area.
* **alloca:** one function uses a runtime-sized stack allocation; it becomes `alloca`.

## 5. VFPU (`vfpu_static.py`)

* **Translation:** every VFPU instruction is translated at generation time into straight-line C float code.
* **Prefixes:** prefix state (vpfxs/vpfxt/vpfxd) is solved per function. No prefix crosses a branch, label, call or
  return, so every prefix is applied at compile time.
* **The one untranslated encoding:** `mfvc $zero, $255` (12 sites) is a pipeline sync with no architectural effect.
* **Registers:** the game keeps vectors in VFPU registers across calls (380 of 684 VFPU functions read a register set
  by their caller). The register file is therefore a per-thread array `vfpu_v[128]`, with `vfpu_cc` for the
  condition bits.
* **Differential test:** checked against the earlier project's VFPU interpreter. Every distinct instruction in its
  prefix context (6,406 contexts) × 200 random register/memory states gave no mismatch except NaN payload bits.

## 6. PSP-specific idioms, rewritten

* **Uncached mirror (`p | 0x40000000`):** natively the same memory.
  * `tools/dc/uncached.py` classifies every OR with 0x40000000 by dataflow: the result is a pointer if it is used as
    a load/store base.
  * Pointers: 3 sites in game code and 1 in libgu `sceGuStart`.
  * Flag bits: all other sites, which accumulate flags such as 0x20000000/0x02000000 into flag words.
* **Cache-mode bits:** `ins` of a pointer into the constant 0x40000000 (Sony's VFPU memcpy/memset), `& 0x5FFFFFFF`
  (cache-mode bits) and `ins p, $zero, 29, 3` (= `p & 0x1FFFFFFF`, the cached address; 2 sites, both libgu: `sceGuInit`'s
  list handed to `sceGeListEnQueue` and the matrix-stack base of the context setup) all become the plain pointer.
* **Scratchpad:** the PSP's 16 KB scratchpad RAM sits at the fixed address 0x00010000. The game reaches it through one
  accessor (`func_088F7660`, `lui v0, 1` in a return delay slot); it becomes the support symbol `rs_scratchpad`.
* **`$k0` (3 newlib functions):** becomes the per-thread `psp_k0` block that the platform provides.
* **Weak symbol:** a call to address 0 (weak `_Jv_RegisterClasses`, behind a test that is always false) becomes a trap.

## 7. Data (`mkdata.py`)

* **Layout:** the data segment is reproduced with the original layout (offset = address - 0x08804000). That keeps
  distances between symbols, which the code relies on, for example when one HI16 serves several LO16s.
* **Pointer cells:** cells pointing to data become addresses inside the segment, and cells pointing to functions
  become the C function's address.
* **Kept as-is:** jump-table cells and other code labels keep their original values; the `switch` statements compare
  against them.
* **Not stored:** code bytes and `.bss`.

## 8. Validation (`platform/linux_test`)

The harness implements the SDK interface on 32-bit Linux. It reuses the earlier project's firmware, graphics and audio
code, switched to native pointers. GPU command lists carry 28-bit addresses, so the harness keeps GPU-visible memory
below 0x10000000:
* the non-PIE image;
* VRAM at 0x04000000;
* the game heap at 0x0A000000;
* game thread stacks at 0x0E000000.

Runs with the same scripted input as the earlier recompiled build reach the same screens and play the same matches.

**High memory layout (`make linux_test LAYOUT=high`).** Native targets such as the PS Vita place user memory above
0x80000000, where pointers are negative as signed integers and no longer fit the PSP's 28-bit GPU addresses. This
build links the executable at 0x81000000 and maps VRAM, the game heap and the thread stacks at 0x86000000-0x9E000000.
The GPU-visible blocks are registered as regions, and `GADDR` (platform/common/psp_impl.h) translates the 28-bit
addresses in GPU command lists back to them. It also keeps the game's per-thread processor state in one block
(`RS_TLS_STRUCT`). Two decompiler issues were found this way and fixed in `tools/dc/gen.py`, both described above: the
KSEG-clearing `ins` sites and the scratchpad accessor. With both fixed, this build runs the front end and the Endor and
Hoth Conquest matches (300 s each), as the low-memory build does.

## Limitations (known, not hidden)

* **Conservative signatures:**
  * Functions that make an indirect call with unknown candidates, or pass registers through, get extra parameters.
  * Many address-taken functions return `rv_t`.
  * This affects performance and readability, not correctness.
* **Unexecuted paths:** paths the tests never ran are covered only by the static checks above.
* **Pointer tagging:** a few sites clear or set bits 30-31 of values (`ins` at bit 30/31). The ones read so far
  operate on flags, hashes or floats, not pointers. A site that tags a pointer's top bits would misbehave with memory
  above 0x80000000. None did in the high-layout runs.
* **Unidentified library code:** libgu functions are only partly identified by name (tools/dc/gu_match.py matches
  GE-command fingerprints against PSPSDK's libgu). newlib, libm and libsupc++ are not named.
* **32-bit only:** asset files and in-memory structures hold 32-bit pointers. A 64-bit port needs every pointer field
  typed.
* **Patches not ported:** the earlier project's gameplay patches (bots, frame rate, tickets, AI pool) are not applied
  in this base. They were patches of specific instructions and become source edits of the corresponding functions:
  `func_08978CEC`, `func_08979D14`, `func_08A69140`, `func_08956118`, `func_0895DBA0`.
