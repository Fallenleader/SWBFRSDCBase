/* vita-elf-create appends the module's SCE data (import/export tables, a few KB) to the end of the code segment.  The default
 * linker script starts the data segment at the next 64 KB boundary after the code, so whenever the code happens to end less than
 * that many bytes before such a boundary the two overlap and vita-elf-create fails ("segment 1 overlaps").  This leaves a 64 KB
 * gap of unmapped address space before the data segment, whatever the size of the code. */
SECTIONS
{
  . = . + 0x10000;
}
INSERT BEFORE .init_array;
