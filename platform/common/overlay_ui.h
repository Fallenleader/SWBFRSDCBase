#pragma once
/* Native menu overlays drawn over the game's finished frames (colour picker, save manager): 2D shapes and text in PSP screen
 * pixels (480 x 272), submitted through the renderer interface (gfx.h) so every platform draws them the same way. */
#include "psp_impl.h"
typedef struct { float r, g, b, a; } col_t;
col_t ov_c(int r, int g, int b, float a);
void  ov_quad(float x0, float y0, float x1, float y1, col_t tl, col_t tr, col_t bl, col_t br, float u0, float v0, float u1, float v1);
void  ov_rect(float x0, float y0, float x1, float y1, col_t c);
void  ov_vgrad(float x0, float y0, float x1, float y1, col_t top, col_t bottom);
void  ov_frame(float x0, float y0, float x1, float y1, float w, col_t c);
void  ov_tri(float ax, float ay, float bx, float by, float cx, float cy, col_t c);
void  ov_ring(float cx, float cy, float r0, float r1, col_t c);
float ov_text_w(const char *s, float scale);
void  ov_text(float x, float y, float scale, col_t c, const char *s);
void  ov_entry(float x0, float y0, float x1, float y1, const char *label, int focused);   /* a menu list entry, game style */
/* the overlays (each draws only while it is up) */
void rs_picker_draw(void);
void rs_savemgr_draw(void);
void ov_panel(float x0, float y0, float x1, float y1);   /* a panel in the Personalisation screen's green (gradient, light rim) */
