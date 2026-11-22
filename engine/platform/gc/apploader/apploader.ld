/* the apploader: one block from 0x81200000 (its zero-initialised data included: nothing clears it) */
ENTRY(entry)
SECTIONS
{
    . = 0x81200000;
    .text : { *(.text.entry) *(.text*) }
    .rodata : { *(.rodata*) }
    .data : { *(.data*) *(.sdata*) *(.sbss*) *(.bss*) *(COMMON) . = ALIGN(32); }
    /DISCARD/ : { *(.comment) *(.eh_frame*) *(.gnu.attributes) }
}
