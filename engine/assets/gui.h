/* The game's front-end menus: GUIMENU/<name>.GUI files (Asura chunk files).  Each UIMP chunk is one menu page, a tree of widgets;
 * the RSCF chunks beside them are the pages' pictures ("\graphics" + the widget's picture name).  The reader follows the game's
 * own widget loaders (class load methods, vtable slot 21 - see tools/asura/uimp.py, which reads every page of the game exactly):
 *
 *   widget        {u32 class version, u32 type} then the class's load (08888918, 08888B48)
 *   base 08888454 u32 version (11), str name, f32 rgba[4], f32 pos[3], u32 id (h31 of the lower-case name), u32 flags,
 *                 u32 n + n x {u32, u32}, u32, u32 x 2, u32 x 2, anim block (0887EA90), u32 n + n x property (08886218),
 *                 u32 n + n x anim ref (0887D79C)
 *   children      08888AB4: u32 count + count widgets
 *   types         1 page, 1001 image, 1002 text, 1003 point list, 1004 model, 1005 sprite list, 2001 button, 2002 / 2006 plain
 *                 buttons, 2003 spinner, 2004 text box, 2005 text list, 2009 scroll bar, 2010 / 2012 list box
 *
 * Strings are stored in 4-byte steps (the length + 1 rounded up).  Text is a pair (table hash, key hash) into MISC/MENU/
 * MENU_<language>.ASR (HTXT: u32 count, u32 table, u32, count x {u32 key, u32 length with the 0, UTF-16}).  A button's "target"
 * is the h31 hash of the page it opens. */
#ifndef AK_GUI_H
#define AK_GUI_H
#include "asura.h"

enum { AK_GUI_PAGE = 1, AK_GUI_IMAGE = 1001, AK_GUI_TEXT = 1002, AK_GUI_POINTS = 1003, AK_GUI_MODEL = 1004, AK_GUI_SPRITES = 1005,
       AK_GUI_BUTTON = 2001, AK_GUI_BUTTON2 = 2002, AK_GUI_SPINNER = 2003, AK_GUI_TEXTBOX = 2004, AK_GUI_TEXTLIST = 2005,
       AK_GUI_GROUP = 2006, AK_GUI_SCROLLBAR = 2009, AK_GUI_LIST = 2010, AK_GUI_LIST2 = 2012 };

typedef struct { const char *fn, *arg; u32 key; } ak_gui_action;    /* key: the button that runs it (16 cross, 32 square, 64 circle) */
/* a condition on a script value ("BFF.FE_MapSelectionStatus", "1", op): the widget shows while its conditions hold (0887E7B0: mode
 * 0 all, 1 any; 0887E45C / 08AB10A4: op 0 true, 1 ==, 2 >, 3 >=, 4 <, 5 <=, the value against the number in `val`) */
typedef struct { const char *var, *val; u32 op; } ak_gui_cond;    /* a script function by name ("FE_OpenProfileMenu") and its argument */

typedef struct ak_widget {
    u32 type, cver;                    /* class and its version (the header's first word) */
    const char *name; u32 id, flags;
    f32 rgba[4], pos[3], size[2], uv[4];
    s32 tex;                           /* the picture: index into the file's textures, -1 none */
    const char *tex_name;              /* its name ("\\gui\\menu elements\\red_schematics_1.tga"): another file's picture when not in this one */
    u32 text_table, text_key;          /* text: the menu text entry (0 = none) */
    const char *font; f32 text_scale; u32 text_flags;
    u32 links[4];                      /* buttons: the neighbours' ids (left, right, up, down) */
    u32 target;                        /* buttons: the page it opens (h31 of its name), 0 none */
    const ak_gui_action *actions; u32 nactions;
    const char *binding;               /* a script value the widget shows ("BFF.FE_ShowVersionNumber") */
    const char **anims; u32 nanims;    /* UIAN animations it plays ("pulse_highlight") */
    const f32 *anim_speed;             /* each one's speed (0887D79C's f32: the animation time advances speed x dt) */
    /* buttons (2001, 0888D170): b_flags (+176; bit 1: presses itself), b_flag8 (+153), and the page-active times (+192, +196):
       the button ignores its keys until the page has been active ready_time seconds; with bit 1 (and +153) it presses itself (key
       16) once the page has been active auto_time seconds (MP_MSplashScreen's W_BU_SelectProfile: 1 s, 10 s, flags 3) */
    u32 b_flags; u8 b_flag8; f32 ready_time, auto_time;
    const ak_gui_cond *cond; u32 ncond, cond_mode;
    /* text lists (2005) and list boxes (2010 / 2012; size = the list's box): rows at most, rows shown, the chosen row's colour, the
       function that fills it (FE_ListAllMaps; a list box's row parts each have their own, the column's) */
    u32 rows_max, rows_shown, rows_align; f32 sel_rgba[4]; ak_gui_action fill;   /* (align: the text flags' 2 left, 4 centred, 8 right) */
    f32 step;                          /* spinners / sliders (2003): the step of the value they set (0.1 for the volumes) */
    /* 3D models (1004): the field of view (radians) over its divisor, the camera's offset from the model (game axes), the
       model's turn (x, y, z radians) and its spin (radians a second) */
    f32 cam_fov, cam_aspect, cam_off[3], cam_rot[3], cam_spin[3];
    bool is_template;                  /* a list box's row (its last child): drawn once per row, not on its own */
    struct ak_widget *child; u32 nchild;
} ak_widget;

typedef struct {
    ak_widget root;                    /* type AK_GUI_PAGE; root.size = the page's 480 x 272 */
    u32 focus;                         /* the button focused first (its id) */
    const char *script;                /* "BFF_MainMenu" */
    ak_gui_action on_open, on_close;
} ak_gui_page;

/* UIAN: the file's animations (the chunk's loader 088264F8 / track 0887CD44: u32 count, then per animation its name and one track:
 * u32 version 0, u32, u32 mode, u32 type, u32 n, n key times (0..1 of the length), the keys' values (type 1: 1 float, 3: 2, 4: 4),
 * f32 length (s), u32 flags: 1 loop, 2 interpolate (else steps), 4 there and back (twice the length)).  Modes (08881058's table):
 * 1 adds the values to the widget's x, y; 15 multiplies its alpha (0x0F); others (14, 16, 17) not used by the game's menus yet. */
typedef struct { const char *name; u32 mode, type, n; const f32 *t, *v; f32 len; u32 flags; } ak_gui_anim;

typedef struct {
    ak_gui_page *pages; u32 npages;
    ak_texture *tex; u32 ntex;
    ak_gui_anim *anims; u32 nanims;
} ak_gui_file;
const ak_gui_anim *ak_gui_find_anim(const ak_gui_file *f, const char *name);
/* the animation's values at `time` seconds since it started (0887D48C: the key index and fraction; 0887D1C8 & co: the values);
 * returns how many (1, 2 or 4) */
u32 ak_gui_anim_eval(const ak_gui_anim *a, f32 time, f32 out[4]);

bool ak_gui_load(const ak_blob *file, ak_arena *a, ak_gui_file *out);
const ak_gui_page *ak_gui_find_page(const ak_gui_file *f, u32 hash);
u32 ak_gui_hash(const char *s);        /* the game's h31 over lower case */

/* MENU_<language>.ASR: the menu texts */
typedef struct { u32 table, n; u32 *key; const u16 **text; u32 *len; } ak_gui_texts;
bool ak_gui_texts_load(const ak_blob *file, ak_arena *a, ak_gui_texts *out);
const u16 *ak_gui_text(const ak_gui_texts *t, u32 key, u32 *len);
#endif
