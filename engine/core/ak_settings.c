#include "ak_settings.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXS 256
static struct { char key[48]; char val[208]; } set[MAXS];
static int nset;

static char *trim(char *s)
{
    while (isspace((u8)*s)) s++;
    char *e = s + strlen(s);
    while (e > s && isspace((u8)e[-1])) *--e = 0;
    return s;
}

void ak_settings_load(const char *path)
{
    FILE *f = fopen(path, "r");
    if (!f) { AK_INFO("settings", "%s not found: defaults", path); return; }
    char line[300];
    while (fgets(line, sizeof line, f) && nset < MAXS) {
        char *s = trim(line);
        if (!*s || *s == '#') continue;
        char *eq = strchr(s, '=');
        if (!eq) continue;
        *eq = 0;
        snprintf(set[nset].key, sizeof set[nset].key, "%s", trim(s));
        snprintf(set[nset].val, sizeof set[nset].val, "%s", trim(eq + 1));
        nset++;
    }
    fclose(f);
    AK_INFO("settings", "%s: %d values", path, nset);
}

const char *ak_setting_str(const char *key, const char *def)
{
#ifndef __vita__
    const char *e = getenv(key);
    if (e) return e;
#endif
    for (int i = nset - 1; i >= 0; i--) if (!strcmp(set[i].key, key)) return set[i].val;
    return def;
}
int ak_setting_int(const char *key, int def) { const char *s = ak_setting_str(key, NULL); return s && *s ? (int)strtol(s, NULL, 0) : def; }
float ak_setting_float(const char *key, float def) { const char *s = ak_setting_str(key, NULL); return s && *s ? strtof(s, NULL) : def; }
