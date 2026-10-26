/* weapons.txt: the weapons, projectiles and laser bolts of the game, editable, and new weapons.
 *
 * The game's definitions are "blueprints" in MISC/COMMON.ASR: chunks "BLUE", one per category (Weapon, Projectile, LaserBolt,
 * Humanoid, ...).  The format (read from the file):
 *   chunk: u32 0, u32 1, u32 hash of the category name, u32 entries, category name (NUL, padded to 4), the entries
 *   entry: u32 3, u32 hash of its name, u32 its parent's hash (0: none), name (NUL, padded), u32 properties, the properties
 *   property: u32 hash of its name, name (NUL, padded), u32 0 (declared here) / 3 (a parent's, given a new value),
 *             u32 a sub-type hash (asset kinds: model, sound, effect ...), u32 values, then each value: u32 type and
 *             0 int (4 bytes), 1 float (4), 2 bool (1 byte, no padding), 3 string (u32 its hash, then if that is not 0 the text,
 *             NUL, padded to 4), 4 u32 (4)
 *   hash: h = h * 31 + c over the lower-cased name.
 * An entry has its own values for what it sets and takes the rest from its parent ("Base" declares them all).  The game finds
 * weapons by the hash of their name: the soldier classes and the load-out lists (loadout_slots.c) hold those hashes.
 *
 * What this does: when the game opens MISC/COMMON.ASR, <data dir>/weapons.txt is read, the blueprints changed to match, and the game
 * given the result (<data dir>/patched/COMMON.ASR; rs_patch_file).  If weapons.txt does not exist it is written first, with every
 * weapon, projectile and laser bolt and all of their values, so it starts as the game's own definitions; weapons_default.txt is
 * always rewritten with the game's own values, for reference.
 *   [Weapon:Name]           an existing entry: a value that differs from the game's becomes this entry's own value
 *   [Weapon:NewName : Parent]   a new entry, taking everything from Parent except the values given
 *   Loadout = Weapon1       (a new weapon) also listed in the Customize Load-out list Weapon1, Weapon2, Explosive or Special
 * Values: numbers, 0/1 for yes/no, "text" for names (models, projectiles, sounds, effects). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <stddef.h>
#include <sys/stat.h>
#include "psp_impl.h"

extern int rs_setting_int(const char *, int);
__attribute__((weak)) const char *rs_platform_data_dir(void){ const char *d = getenv("RS_DATA_DIR"); return d ? d : "."; }
__attribute__((weak)) void rs_loadout_add(int list, u32 hash){ (void)list; (void)hash; }

static u32 bp_hash(const char *s){ u32 h = 0; for (; *s; s++) h = h * 31u + (u32)tolower((unsigned char)*s); return h; }

/* ------------------------------------------------------------------ the blueprints in memory */
typedef struct { u32 type; int i; float f; u32 u; char *s; } val_t;
typedef struct { u32 hash; char *name; u32 x, sub; int nv; val_t *v; } prop_t;
typedef struct { u32 a, hash, parent; char *name; int np, cap; prop_t *p; } ent_t;
typedef struct { char *cat; u32 cat_hash, z, one; int ne, cap; ent_t *e; } blue_t;

static char *dupn(const char *s, size_t n){ char *o = malloc(n + 1); memcpy(o, s, n); o[n] = 0; return o; }
static u32 rd(const u8 *p){ u32 v; memcpy(&v, p, 4); return v; }
/* a NUL-terminated name padded to 4; returns the bytes taken, 0 if it runs past end */
static size_t rstr(const u8 *p, const u8 *end, char **out){
    const u8 *q = p; while (q < end && *q) q++; if (q >= end) return 0;
    size_t n = (size_t)(q - p) + 1; *out = dupn((const char *)p, n - 1); return (n + 3) & ~(size_t)3; }

static int parse_blue(const u8 *p, size_t n, blue_t *b){
    const u8 *e = p + n, *o = p; memset(b, 0, sizeof *b);
    if (n < 20) return -1;
    b->z = rd(o); b->one = rd(o + 4); b->cat_hash = rd(o + 8); b->ne = (int)rd(o + 12); o += 16;
    size_t k = rstr(o, e, &b->cat); if (!k) return -1; o += k;
    b->cap = b->ne; b->e = calloc((size_t)b->ne + 1, sizeof(ent_t));
    for (int i = 0; i < b->ne; i++) {
        ent_t *t = &b->e[i]; if (o + 12 > e) return -1;
        t->a = rd(o); t->hash = rd(o + 4); t->parent = rd(o + 8); o += 12;
        if (!(k = rstr(o, e, &t->name))) return -1; o += k;
        if (o + 4 > e) return -1; t->np = (int)rd(o); o += 4; t->cap = t->np; t->p = calloc((size_t)t->np + 1, sizeof(prop_t));
        for (int j = 0; j < t->np; j++) {
            prop_t *q = &t->p[j]; if (o + 4 > e) return -1; q->hash = rd(o); o += 4;
            if (!(k = rstr(o, e, &q->name))) return -1; o += k;
            if (o + 12 > e) return -1; q->x = rd(o); q->sub = rd(o + 4); q->nv = (int)rd(o + 8); o += 12;
            q->v = calloc((size_t)q->nv + 1, sizeof(val_t));
            for (int m = 0; m < q->nv; m++) {
                val_t *v = &q->v[m]; if (o + 4 > e) return -1; v->type = rd(o); o += 4;
                switch (v->type) {
                case 0: if (o + 4 > e) return -1; v->i = (int)rd(o); o += 4; break;
                case 1: if (o + 4 > e) return -1; memcpy(&v->f, o, 4); o += 4; break;
                case 2: if (o + 1 > e) return -1; v->i = *o; o += 1; break;
                case 3: if (o + 4 > e) return -1; v->u = rd(o); o += 4; if (v->u) { if (!(k = rstr(o, e, &v->s))) return -1; o += k; } else v->s = dupn("", 0); break;
                case 4: if (o + 4 > e) return -1; v->u = rd(o); o += 4; break;
                default: return -1; } } } }
    return o == e ? 0 : -1; }

typedef struct { u8 *p; size_t n, cap; } out_t;
static void put(out_t *o, const void *d, size_t n){ if (o->n + n > o->cap) { o->cap = (o->n + n) * 2 + 4096; o->p = realloc(o->p, o->cap); } memcpy(o->p + o->n, d, n); o->n += n; }
static void put32(out_t *o, u32 v){ put(o, &v, 4); }
static void putstr(out_t *o, const char *s){ static const u8 z[4]; size_t n = strlen(s) + 1; put(o, s, n); put(o, z, ((n + 3) & ~(size_t)3) - n); }
static void write_blue(const blue_t *b, out_t *o){
    put32(o, b->z); put32(o, b->one); put32(o, b->cat_hash); put32(o, (u32)b->ne); putstr(o, b->cat);
    for (int i = 0; i < b->ne; i++) { const ent_t *t = &b->e[i];
        put32(o, t->a); put32(o, t->hash); put32(o, t->parent); putstr(o, t->name); put32(o, (u32)t->np);
        for (int j = 0; j < t->np; j++) { const prop_t *q = &t->p[j];
            put32(o, q->hash); putstr(o, q->name); put32(o, q->x); put32(o, q->sub); put32(o, (u32)q->nv);
            for (int m = 0; m < q->nv; m++) { const val_t *v = &q->v[m]; put32(o, v->type);
                switch (v->type) { case 0: put32(o, (u32)v->i); break; case 1: put(o, &v->f, 4); break; case 2: { u8 c = (u8)(v->i != 0); put(o, &c, 1); } break;
                case 3: put32(o, v->u); if (v->u) putstr(o, v->s); break; default: put32(o, v->u); break; } } } } }

static ent_t *find_ent(blue_t *b, u32 h){ for (int i = 0; i < b->ne; i++) if (b->e[i].hash == h) return &b->e[i]; return NULL; }
static prop_t *own_prop(ent_t *t, const char *name){ for (int j = 0; j < t->np; j++) if (!strcasecmp(t->p[j].name, name)) return &t->p[j]; return NULL; }
/* the value an entry has for a property: its own or its nearest parent's */
static prop_t *eff_prop(blue_t *b, ent_t *t, const char *name){
    for (int d = 0; t && d < 32; d++) { prop_t *q = own_prop(t, name); if (q) return q; t = t->parent ? find_ent(b, t->parent) : NULL; }
    return NULL; }
/* every property name an entry has (its own and inherited), the root's first */
static int names_of(blue_t *b, ent_t *t, const char **out, int max){
    ent_t *chain[32]; int nc = 0; for (ent_t *c = t; c && nc < 32; c = c->parent ? find_ent(b, c->parent) : NULL) chain[nc++] = c;
    int n = 0;
    for (int k = nc - 1; k >= 0; k--) for (int j = 0; j < chain[k]->np; j++) { const char *nm = chain[k]->p[j].name; int dup = 0;
        for (int m = 0; m < n; m++) if (!strcasecmp(out[m], nm)) { dup = 1; break; }
        if (!dup && n < max) out[n++] = nm; }
    return n; }

/* ------------------------------------------------------------------ weapons.txt */
static const struct { const char *name, *what; } DESC[] = {
    {"WeaponModel", "3D model (blueprint / asset name)"}, {"RateOfFire", "seconds between shots"}, {"ReloadTime", "seconds to reload"},
    {"MaxClips", "spare magazines (-1 = unlimited)"}, {"AmmoPerClip", "rounds per magazine (-1 = no magazine)"},
    {"ProjectilesPerShot", "projectiles fired per shot (shotgun pellets)"}, {"WindupTime", "seconds before the first shot (spin-up)"},
    {"ChargeTime", "seconds to charge a charged shot"}, {"LockonTime", "seconds to lock on (0 = no lock-on)"},
    {"OverheatPershot", "heat added per shot (0 = never overheats)"}, {"OverheatDecay", "heat lost per second"},
    {"OverheatRecoveryTime", "seconds locked out after overheating"}, {"Projectile", "projectile / laser bolt fired (its name)"},
    {"ChargedProjectile", "projectile of a charged shot"}, {"MultishotIsSpreadRandomly", "1 = pellets spread at random"},
    {"MultishotSpreadAngle", "spread of the pellets (degrees)"}, {"OnlyLockOntoVehicles", "1 = locks onto vehicles only"},
    {"WillTrack", "1 = guided"}, {"NumberOfZoomLevels", "scope zoom levels"}, {"Weapon_Name", "name (text number in TEXT/WEAPONNAMES)"},
    {"Description", "description (text number)"}, {"Cost", "load-out credits"}, {"GlobalAmmoLimit", "total rounds (-1 = no limit)"},
    {"Modifier_Bot_Damage", "damage factor when a bot fires it"}, {"Modifier_Bot_RateOfFire", "fire-rate factor for bots"},
    {"Faction", "faction (0 Republic, 1 CIS, 2 Alliance, 3 Empire, 4 any)"}, {"Faction Specific", "1 = one version per faction"},
    {"primary", "1 = a primary weapon"}, {"AllowHeadshots", "1 = headshots count"}, {"Fire Sound", "sound when fired"},
    {"HUDIcon", "HUD icon texture"}, {"PFXMuzzleFlash", "muzzle flash effect"},
    {"DamageToInfantry", "damage to soldiers"}, {"DamageToVehicle", "damage to vehicles"}, {"ExplosionRadius", "explosion radius (metres)"},
    {"ExplodesOnImpact", "1 = explodes when it hits"}, {"ExplodesOnTimer", "1 = explodes when Timer runs out"},
    {"Timer", "seconds before it explodes / disappears"}, {"FeelsGravity", "1 = falls"}, {"ProjectileSpeed", "speed (metres per second)"},
    {"MaxRange", "range (metres)"}, {"range", "range (metres)"}, {"PFXExplosion", "explosion effect"}, {"Skin", "projectile model"},
    {"colour", "bolt colour (0xAARRGGBB as a signed number)"}, {"length", "bolt length"}, {"thickness", "bolt thickness"},
};
static const char *desc_of(const char *n){ for (size_t i = 0; i < sizeof DESC / sizeof DESC[0]; i++) if (!strcasecmp(DESC[i].name, n)) return DESC[i].what; return NULL; }
static const char *const CATS[] = {"Weapon", "Projectile", "LaserBolt"};

static void print_val(FILE *f, const prop_t *q){
    for (int m = 0; m < q->nv; m++) { const val_t *v = &q->v[m]; if (m) fputs(", ", f);
        switch (v->type) { case 0: fprintf(f, "%d", v->i); break; case 1: { char t[32]; snprintf(t, sizeof t, "%g", v->f); if (strtof(t, NULL) != v->f) snprintf(t, sizeof t, "%.9g", v->f); fputs(t, f); } break; case 2: fprintf(f, "%d", v->i != 0); break;
        case 3: fprintf(f, "\"%s\"", v->s); break; default: fprintf(f, "0x%08x", v->u); break; } } }
static void export_txt(blue_t *bs, int nb, const char *path){
    FILE *f = fopen(path, "w"); if (!f) return;
    fprintf(f, "# Renegade Squadron weapons, projectiles and laser bolts (platform/common/blueprints.c).  Edit a value and restart.\n"
               "# [Category:Name] is the game's entry Name; every value it has is listed (its own and its parent's), with what it does.\n"
               "# A new weapon: [Weapon:MyWeapon : ParentName], then only the values that differ from the parent, and\n"
               "#   Loadout = Weapon1 / Weapon2 / Explosive / Special  to list it in Customize Load-out.\n"
               "# Example: an explosive shotgun with the rebel blaster rifle's model:\n"
               "#   [Weapon:ExplosiveShotgun : Shotgun]\n#   WeaponModel = \"ALL_Blaster_Rifle\"\n#   Projectile = \"Rocket\"\n#   ProjectilesPerShot = 6\n#   Loadout = Weapon1\n\n");
    for (int c = 0; c < nb; c++) { blue_t *b = &bs[c];
        for (int i = 0; i < b->ne; i++) { ent_t *t = &b->e[i]; ent_t *par = t->parent ? find_ent(b, t->parent) : NULL;
            fprintf(f, "[%s:%s]", b->cat, t->name); if (par) fprintf(f, "   # parent %s", par->name); fputc('\n', f);
            const char *nm[256]; int n = names_of(b, t, nm, 256);
            for (int k = 0; k < n; k++) { prop_t *q = eff_prop(b, t, nm[k]); if (!q) continue;
                const char *d = desc_of(nm[k]);
                fprintf(f, "%s = ", nm[k]); print_val(f, q);
                if (d || !own_prop(t, nm[k])) fprintf(f, "   #%s%s%s", d ? " " : "", d ? d : "", own_prop(t, nm[k]) ? "" : " (from the parent)");
                fputc('\n', f); }
            fputc('\n', f); } }
    fclose(f); }

/* a new property value from text, of the type the property is declared with (q gives the type and count) */
static int parse_vals(const char *s, const prop_t *decl, val_t *out){
    for (int m = 0; m < decl->nv; m++) {
        while (*s == ' ' || *s == '\t' || *s == ',') s++;
        val_t *v = &out[m]; v->type = decl->v[m].type;
        if (v->type == 3) { const char *a, *z; if (*s == '"') { a = ++s; z = strchr(s, '"'); if (!z) return -1; } else { a = s; z = s; while (*z && *z != ',' && *z != '#') z++; while (z > a && isspace((unsigned char)z[-1])) z--; }
            v->s = dupn(a, (size_t)(z - a)); v->u = *v->s ? bp_hash(v->s) : 0; s = *z == '"' ? z + 1 : z; }
        else { char *e; if (v->type == 1) { v->f = strtof(s, &e); } else if (v->type == 4) { v->u = (u32)strtoul(s, &e, 0); } else { v->i = (int)strtol(s, &e, 0); }
            if (e == s) return -1; s = e; } }
    return 0; }
static int same_vals(const prop_t *a, const val_t *v){
    for (int m = 0; m < a->nv; m++) { const val_t *x = &a->v[m];
        if (x->type == 1 ? x->f != v[m].f : x->type == 3 ? strcmp(x->s, v[m].s) : x->type == 4 ? x->u != v[m].u : x->type == 2 ? (x->i != 0) != (v[m].i != 0) : x->i != v[m].i) return 0; }
    return 1; }
static void set_prop(blue_t *b, ent_t *t, const char *name, const char *text){
    prop_t *cur = eff_prop(b, t, name);
    if (!cur) { fprintf(stderr, "[WEAPONS] %s:%s has no value \"%s\" (ignored)\n", b->cat, t->name, name); return; }
    val_t nv[8]; if (cur->nv > 8 || parse_vals(text, cur, nv)) { fprintf(stderr, "[WEAPONS] %s:%s %s: cannot read \"%s\"\n", b->cat, t->name, name, text); return; }
    if (same_vals(cur, nv)) return;
    prop_t *own = own_prop(t, name);
    if (!own) { if (t->np == t->cap) { t->cap = t->cap * 2 + 8; t->p = realloc(t->p, (size_t)t->cap * sizeof(prop_t)); }
        own = &t->p[t->np++]; own->hash = cur->hash; own->name = dupn(cur->name, strlen(cur->name)); own->x = 3; own->sub = cur->sub; own->nv = cur->nv; own->v = calloc((size_t)cur->nv, sizeof(val_t)); }
    for (int m = 0; m < own->nv; m++) own->v[m] = nv[m]; }

static int import_txt(blue_t *bs, int nb, const char *path){
    FILE *f = fopen(path, "r"); if (!f) return 0;
    char line[1024]; blue_t *b = NULL; ent_t *t = NULL; int changed = 0, lno = 0;
    while (fgets(line, sizeof line, f)) { lno++;
        char *s = line; while (isspace((unsigned char)*s)) s++;
        if (!*s || *s == '#') continue;
        if (*s == '[') { char *z = strchr(s, ']'); b = NULL; t = NULL; if (!z) continue; *z = 0; s++;
            char *colon = strchr(s, ':'); if (!colon) continue; *colon = 0;
            for (int c = 0; c < nb; c++) if (!strcasecmp(bs[c].cat, s)) b = &bs[c];
            if (!b) { fprintf(stderr, "[WEAPONS] line %d: no category \"%s\"\n", lno, s); continue; }
            char *name = colon + 1, *par = strchr(name, ':'); if (par) *par++ = 0;
            while (isspace((unsigned char)*name)) name++; for (char *e = name + strlen(name); e > name && isspace((unsigned char)e[-1]); ) *--e = 0;
            t = find_ent(b, bp_hash(name));
            if (!t && par) { while (isspace((unsigned char)*par)) par++; for (char *e = par + strlen(par); e > par && isspace((unsigned char)e[-1]); ) *--e = 0;
                ent_t *pe = find_ent(b, bp_hash(par)); if (!pe) { fprintf(stderr, "[WEAPONS] line %d: no parent \"%s\" for %s\n", lno, par, name); continue; }
                if (b->ne == b->cap) { ptrdiff_t pi = pe - b->e; b->cap = b->cap * 2 + 8; b->e = realloc(b->e, (size_t)b->cap * sizeof(ent_t)); pe = b->e + pi; }
                t = &b->e[b->ne++]; memset(t, 0, sizeof *t); t->a = pe->a; t->hash = bp_hash(name); t->parent = pe->hash; t->name = dupn(name, strlen(name));
                changed = 1; fprintf(stderr, "[WEAPONS] new %s:%s (parent %s)\n", b->cat, name, pe->name); }
            if (!t) fprintf(stderr, "[WEAPONS] line %d: no %s \"%s\" (a new one needs \": Parent\")\n", lno, b->cat, name);
            continue; }
        if (!t) continue;
        char *eq = strchr(s, '='); if (!eq) continue; *eq = 0;
        char *key = s; for (char *e = eq; e > key && isspace((unsigned char)e[-1]); ) *--e = 0;
        char *val = eq + 1; while (isspace((unsigned char)*val)) val++;
        if (!strcasecmp(key, "Loadout")) { static const char *const L[4] = {"Weapon1", "Weapon2", "Explosive", "Special"};
            for (int i = 0; i < 4; i++) if (!strncasecmp(val, L[i], strlen(L[i]))) { rs_loadout_add(i, t->hash); fprintf(stderr, "[WEAPONS] %s in the load-out list %s\n", t->name, L[i]); }
            continue; }
        int before = t->np; size_t sig = 0; for (int j = 0; j < t->np; j++) sig += (size_t)t->p[j].nv;
        set_prop(b, t, key, val); (void)before; (void)sig; changed = 1; }
    fclose(f); return changed; }

/* ------------------------------------------------------------------ the file */
static int patch_common(const char *src, const char *dst, const char *txt, const char *deftxt){
    FILE *f = fopen(src, "rb"); if (!f) return -1;
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    u8 *d = malloc((size_t)n); if (!d || fread(d, 1, (size_t)n, f) != (size_t)n) { fclose(f); free(d); return -1; } fclose(f);
    if (n < 24 || memcmp(d, "Asura   ", 8)) { free(d); return -1; }
    blue_t bs[3]; long at[3] = {-1, -1, -1}; int nb = 0;
    for (long o = 8; o + 16 <= n; ) { u32 sz = rd(d + o + 4); if (sz < 16 || o + (long)sz > n) break;
        if (!memcmp(d + o, "BLUE", 4)) { blue_t b; if (parse_blue(d + o + 16, sz - 16, &b) == 0) {
            for (int c = 0; c < 3; c++) if (!strcmp(b.cat, CATS[c])) { bs[nb] = b; at[nb] = o; nb++; } } }
        o += sz; }
    if (nb == 0) { free(d); fprintf(stderr, "[WEAPONS] %s: no blueprints found\n", src); return -1; }
    export_txt(bs, nb, deftxt);
    struct stat st; if (stat(txt, &st) != 0) { export_txt(bs, nb, txt); fprintf(stderr, "[WEAPONS] wrote %s (the game's own values)\n", txt); }
    if (!import_txt(bs, nb, txt)) { free(d); return 1; }                       /* nothing to change: the game's file */
    out_t o = {0}; put(&o, d, 8);
    long p = 8;
    for (; p + 16 <= n; ) { u32 sz = rd(d + p + 4); if (sz < 16 || p + (long)sz > n) break;
        int k = -1; for (int c = 0; c < nb; c++) if (at[c] == p) k = c;
        if (k < 0) put(&o, d + p, sz);
        else { size_t h = o.n; put(&o, d + p, 16); write_blue(&bs[k], &o); u32 nsz = (u32)(o.n - h); memcpy(o.p + h + 4, &nsz, 4); }
        p += sz; }
    if (p < n) put(&o, d + p, (size_t)(n - p));                         /* what follows the last chunk */
    if (!memcmp(o.p + 8, "FNFO", 4)) { u32 fs = (u32)o.n; memcpy(o.p + 8 + 16, &fs, 4); }
    FILE *w = fopen(dst, "wb"); int ok = w && fwrite(o.p, 1, o.n, w) == o.n; if (w) fclose(w);
    free(o.p); free(d);
    return ok ? 0 : -1; }

/* rs_patch_file (settings.c) for MISC/COMMON.ASR */
const char *rs_weapons_patch_file(const char *rel, const char *host){
    static char out[512]; static int done;
    size_t n = strlen(rel); if (n < 10 || strcasecmp(rel + n - 10, "COMMON.ASR") || !rs_setting_int("RS_WEAPONS", 1)) return NULL;
    if (!done) {
        const char *dd = rs_platform_data_dir(); char dir[480], txt[480], def[480];
        snprintf(dir, sizeof dir, "%s/patched", dd); mkdir(dd, 0777); mkdir(dir, 0777);
        snprintf(out, sizeof out, "%s/COMMON.ASR", dir); snprintf(txt, sizeof txt, "%s/weapons.txt", dd); snprintf(def, sizeof def, "%s/weapons_default.txt", dd);
        int r = patch_common(host, out, txt, def); done = r == 0 ? 1 : -1;
        if (r == 0) fprintf(stderr, "[WEAPONS] %s -> %s (from %s)\n", rel, out, txt); }
    return done > 0 ? out : NULL; }
