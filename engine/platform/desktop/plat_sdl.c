/* Desktop start-up and input (SDL2): keyboard, mouse-free for now, and the first game controller. */
#include "../plat.h"
#include "../../core/ak_settings.h"
#include <SDL2/SDL.h>
#include <stdlib.h>

static SDL_GameController *pad;
static const char *dirs[3];
static int ndirs;

bool ak_plat_init(void)
{
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER | SDL_INIT_EVENTS) != 0) { AK_ERROR("plat", "SDL: %s", SDL_GetError()); return false; }
    const char *d = getenv("AK_DATA_DIR");
    if (d) dirs[ndirs++] = d;
    dirs[ndirs++] = ".";
    return true;
}
const char *const *ak_plat_data_dirs(int *n) { *n = ndirs; return dirs; }
const char *ak_plat_user_dir(void) { return "."; }

static f32 axis(Sint16 v) { f32 f = v / 32767.0f; return f > 0.15f || f < -0.15f ? f : 0.0f; }

bool ak_plat_poll(ak_input *in)
{
    u32 prev = in->held; SDL_Event e;
    while (SDL_PollEvent(&e)) {
        if (e.type == SDL_QUIT) return false;
        if (e.type == SDL_CONTROLLERDEVICEADDED && !pad) pad = SDL_GameControllerOpen(e.cdevice.which);
    }
    const Uint8 *k = SDL_GetKeyboardState(NULL);
    if (k[SDL_SCANCODE_ESCAPE]) return false;
    u32 h = 0;
    in->lx = (f32)(k[SDL_SCANCODE_D] - k[SDL_SCANCODE_A]); in->ly = (f32)(k[SDL_SCANCODE_W] - k[SDL_SCANCODE_S]);
    in->rx = (f32)(k[SDL_SCANCODE_RIGHT] - k[SDL_SCANCODE_LEFT]); in->ry = (f32)(k[SDL_SCANCODE_UP] - k[SDL_SCANCODE_DOWN]);
    if (k[SDL_SCANCODE_SPACE]) h |= AK_BTN_CROSS;
    if (k[SDL_SCANCODE_Q]) h |= AK_BTN_L;
    if (k[SDL_SCANCODE_E]) h |= AK_BTN_R;
    if (k[SDL_SCANCODE_RETURN]) h |= AK_BTN_START;
    if (k[SDL_SCANCODE_TAB]) h |= AK_BTN_SELECT;
    if (k[SDL_SCANCODE_T]) h |= AK_BTN_TRIANGLE;
    if (pad) {
        f32 v;
        if ((v = axis(SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_LEFTX))) != 0) in->lx = v;
        if ((v = axis(SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_LEFTY))) != 0) in->ly = -v;
        if ((v = axis(SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_RIGHTX))) != 0) in->rx = v;
        if ((v = axis(SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_RIGHTY))) != 0) in->ry = -v;
        static const struct { int b; u32 m; } map[] = {
            { SDL_CONTROLLER_BUTTON_A, AK_BTN_CROSS }, { SDL_CONTROLLER_BUTTON_B, AK_BTN_CIRCLE }, { SDL_CONTROLLER_BUTTON_X, AK_BTN_SQUARE },
            { SDL_CONTROLLER_BUTTON_Y, AK_BTN_TRIANGLE }, { SDL_CONTROLLER_BUTTON_LEFTSHOULDER, AK_BTN_L }, { SDL_CONTROLLER_BUTTON_RIGHTSHOULDER, AK_BTN_R },
            { SDL_CONTROLLER_BUTTON_START, AK_BTN_START }, { SDL_CONTROLLER_BUTTON_BACK, AK_BTN_SELECT }, { SDL_CONTROLLER_BUTTON_DPAD_UP, AK_BTN_UP },
            { SDL_CONTROLLER_BUTTON_DPAD_DOWN, AK_BTN_DOWN }, { SDL_CONTROLLER_BUTTON_DPAD_LEFT, AK_BTN_LEFT }, { SDL_CONTROLLER_BUTTON_DPAD_RIGHT, AK_BTN_RIGHT } };
        for (size_t i = 0; i < AK_ARRAY_LEN(map); i++) if (SDL_GameControllerGetButton(pad, (SDL_GameControllerButton)map[i].b)) h |= map[i].m;
    }
    in->held = h; in->pressed = h & ~prev;
    return true;
}
