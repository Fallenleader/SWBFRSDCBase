# Reverse-engineering helpers

- `reloc.py` - applies BOOT.BIN's PRX relocations (type 0x700000A0 sections) and writes a flat image based at 0x08804000
  (`image_reloc.bin`), so code and data pointers read as the game sees them.
- Ghidra 11.4.2 headless: import the image as raw MIPS:LE:32 at 0x08804000, then `CreateFns.java` makes a function at every
  `/* ADDR */` of the decomp (list in funcs.txt), and `gdec.sh ADDR...` decompiles with `Decomp.java`.  VFPU code stops
  Ghidra's decompiler (bad instruction); read those in the decomp instead.
- `dispatch.py FILE FIRST LAST REG LO HI SRC` - walks a decomp compare tree for each value of a register and prints the first call
  each value reaches (how the ENTI type -> class map in docs/enti_types.md was made).
- `xref.sh PATTERN` - the decomp functions whose body matches a pattern.

Paths inside the scripts point at /home/claude/work; change them for another machine.
