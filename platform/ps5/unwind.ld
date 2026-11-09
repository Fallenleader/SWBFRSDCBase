/* Unwind-table bounds for the SDK's libunwind (the OpenGL SDK's C++ code), as the PS5 OpenGL SDK's own native-app link script
 * defines them; added after the boilerplate's ps5-pie.ld. */
PROVIDE(__eh_frame_start = ADDR(.eh_frame));
PROVIDE(__eh_frame_end = ADDR(.eh_frame) + SIZEOF(.eh_frame));
PROVIDE(__eh_frame_hdr_start = ADDR(.eh_frame_hdr));
PROVIDE(__eh_frame_hdr_end = ADDR(.eh_frame_hdr) + SIZEOF(.eh_frame_hdr));
