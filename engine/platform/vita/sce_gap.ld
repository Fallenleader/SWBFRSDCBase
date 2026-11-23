/* A page of address space between the code segment and the data segment: vita-elf-create appends the module's SCE data (a few KB)
 * after the code segment and fails ("segment 1 overlaps") when the data segment happens to start within that distance. */
SECTIONS { . = ALIGN(0x1000) + 0x2000; } INSERT BEFORE .init_array;
