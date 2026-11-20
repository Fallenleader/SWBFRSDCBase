/* settings.txt: KEY=VALUE per line, '#' comments.  Environment variables of the same name override the file (desktop testing). */
#ifndef AK_SETTINGS_H
#define AK_SETTINGS_H
#include "ak_core.h"
void        ak_settings_load(const char *path);          /* missing file: defaults */
const char *ak_setting_str(const char *key, const char *def);
int         ak_setting_int(const char *key, int def);
float       ak_setting_float(const char *key, float def);
void        ak_setting_set(const char *key, const char *val);   /* the program's own choice: above the file and the environment */
#endif
