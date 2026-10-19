#pragma once
/* The game's own UI assets for the platform's screens (game_ui.c): its font (GRAPHICS/FONTS.ASR, Franklin Gothic Medium Condensed in
 * two sizes) and its menu textures (GUIMENU/*.GUI), read from the user's game files. */
#include <stdint.h>

typedef struct { float u, v, w; } gfont_glyph_t;          /* pixels on the page; w = advance and cell width */
typedef struct {
    int ok, height, pw, ph;                                /* line height (21 or 16 px), page size */
    uint32_t *rgba;                                        /* page 0 (RGBA8, white glyphs in alpha), malloc'd */
    gfont_glyph_t g[256];                                  /* Latin-1; w = 0: no glyph */
} gfont_t;

/* size: 13 (menus) or 9 (small print).  0 = loaded */
int rs_game_font_load(gfont_t *f, int size);
int rs_game_font_load_path(gfont_t *f, const char *fonts_asr, int size);   /* the same from a given FONTS.ASR path */
/* a texture of a GUI file, e.g. ("GUIMENU/BFF_MAINMENU.GUI", "menu_buttons.tga").  0 = loaded (rgba malloc'd) */
int rs_game_ui_texture(const char *rel, const char *name, uint32_t **rgba, int *w, int *h);
/* the path of a game file for vfs_fopen ("PSP_GAME/USRDIR/" + rel); 0 = not found */
int rs_game_file(const char *rel, char *out, unsigned cap);

/* rectangles (pixels) of the elements used, on their 256 x 256 textures */
#define GUI_BUTTON_X 0     /* GUIMENU/BFF_MAINMENU.GUI menu_buttons.tga: the main menu's buttons */
#define GUI_BUTTON_Y 0     /*   normal: (0, 0) 181 x 21; selected: (0, 23) */
#define GUI_BUTTON_W 181
#define GUI_BUTTON_H 21
#define GUI_BUTTON_SEL_Y 23
#define GUI_BOX_X 1        /* box_elements.tga: the blue dialog box, 154 x 119 */
#define GUI_BOX_Y 1
#define GUI_BOX_W 154
#define GUI_BOX_H 119
#define GUI_PANEL_X 0      /* GUIMENU/BFF_CUSTOMISATION.GUI personalisation_01.tga: the green Personalisation panel, 139 x 83 */
#define GUI_PANEL_Y 80
#define GUI_PANEL_W 139
#define GUI_PANEL_H 83
