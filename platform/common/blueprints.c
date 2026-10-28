/* Weapons_Mod.txt: changes to the game's weapons, projectiles and laser bolts, and new weapons (with their own on-screen names).
 *
 * The game's definitions are "blueprints" in MISC/COMMON.ASR: chunks "BLUE", one per category (Weapon, Projectile, LaserBolt,
 * Humanoid, Tank, Flyer, ...).  The format (read from the file):
 *   chunk: u32 0, u32 1, u32 hash of the category name, u32 entries, category name (NUL, padded to 4), the entries
 *   entry: u32 3, u32 hash of its name, u32 its parent's hash (0: none), name (NUL, padded), u32 properties, the properties
 *   property: u32 hash of its name, name (NUL, padded), u32 0 (declared here) / 3 (a parent's, given a new value),
 *             u32 a sub-type hash (asset kinds: model, sound, effect ...), u32 values, then each value: u32 type and
 *             0 int (4 bytes), 1 float (4), 2 bool (1 byte, no padding), 3 string (u32 its hash, then if that is not 0 the text,
 *             NUL, padded to 4), 4 u32 (4)
 *   hash: h = h * 31 + c over the lower-cased name.
 * An entry has its own values for what it sets and takes the rest from its parent ("Base" declares them all).  The game finds
 * weapons by the hash of their name: the soldier classes, heroes (Humanoid Loadout_1..5), vehicles (HardpointW1/W2) and the
 * Customize Load-out lists (loadout_slots.c) hold those hashes.
 * Faction versions (traced: func_08A23598): a weapon with "Faction Specific" = 1 is replaced, for a soldier of faction f, by its
 * direct child whose "Faction" is f (REP_Blaster_Rifle for BlasterRifle on the Republic side); without such a child it is used as is.
 * Names: Weapon_Name / Description are line numbers in TEXT/STDTEXT.ASR (chunks LTXT, one per language: u32 count, u32 language,
 * then per line u32 characters including the NUL and the UTF-16 text; RSFL lists each language's offset and size).
 *
 * What this does, when the game opens (or lists) MISC/COMMON.ASR or TEXT/STDTEXT.ASR (rs_patch_file, settings.c):
 *  - <data dir>/Weapons_<group>_Default.txt are rewritten with the game's own values (reference; never read): CIS, Republic,
 *    Imperial, Rebels, HV (heroes and villains), All (any class / faction), Vehicles.
 *  - <data dir>/Weapons_Mod.txt (written empty, with instructions, if missing) is read: only what is to change or be added,
 *    in sections [All] [CIS] [Republic] [Imperial] [Rebels] [HV] [Vehicles]:
 *      [Weapon:Name]               an existing weapon (projectile, laser bolt): the values given replace the game's
 *      [Weapon:NewName : Parent]   a new weapon, taking everything from Parent except the values given
 *      Name = "text"               the name shown on screen (a new line of STDTEXT.ASR, all languages)
 *      DescriptionText = "text"    the description shown in Customize Load-out
 *      Loadout = Weapon1           also listed in Customize Load-out (Weapon1, Weapon2, Explosive, Special)
 *      Hero = DarthVader 2         (HV) the hero's Loadout_2 becomes this weapon
 *      Vehicle = X_Wing 1          (Vehicles) the vehicle's / turret's weapon 1 (HardpointW1) becomes this weapon
 *    In a faction section the values go to that faction's version of the weapon (made if the weapon has none); in [All] to the
 *    weapon and every faction version of it.  A new weapon whose parent has faction versions (Sniper Rifle, BlasterRifle, ...)
 *    gets one per faction, with that faction's model, icon, sound and muzzle flash; anything set in [All] applies to all of them.
 *  - The result is given to the game: <data dir>/patched/COMMON.ASR.  The new lines of text are not written into STDTEXT.ASR (the game
 *    hangs when its language's LTXT chunk grows): the game's text lookup (func_08834304) is hooked instead (rs_stdtext_get). */
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
typedef struct { u32 a, hash, parent; char *name; int np, cap; prop_t *p; int group; } ent_t;
typedef struct { char *cat; u32 cat_hash, z, one; int ne, cap; ent_t *e; } blue_t;

static char *dupn(const char *s, size_t n){ char *o = malloc(n + 1); memcpy(o, s, n); o[n] = 0; return o; }
static char *dups(const char *s){ return dupn(s, strlen(s)); }
static u32 rd(const u8 *p){ u32 v; memcpy(&v, p, 4); return v; }
/* a NUL-terminated name padded to 4; returns the bytes taken, 0 if it runs past end */
static size_t rstr(const u8 *p, const u8 *end, char **out){
    const u8 *q = p; while (q < end && *q) q++; if (q >= end) return 0;
    size_t n = (size_t)(q - p) + 1; *out = dupn((const char *)p, n - 1); return (n + 3) & ~(size_t)3; }

static int parse_blue(const u8 *p, size_t n, blue_t *b){
    const u8 *e = p + n, *o = p; memset(b, 0, sizeof *b);
    if (n < 20) return -1;
    b->z = rd(o); b->one = rd(o + 4); b->cat_hash = rd(o + 8); b->ne = (int)rd(o + 12); o += 16;
    if (b->ne < 0 || b->ne > 100000) return -1;
    size_t k = rstr(o, e, &b->cat); if (!k) return -1; o += k;
    b->cap = b->ne; b->e = calloc((size_t)b->ne + 1, sizeof(ent_t));
    for (int i = 0; i < b->ne; i++) {
        ent_t *t = &b->e[i]; if (o + 12 > e) return -1;
        t->a = rd(o); t->hash = rd(o + 4); t->parent = rd(o + 8); o += 12;
        if (!(k = rstr(o, e, &t->name))) return -1; o += k;
        if (o + 4 > e) return -1; t->np = (int)rd(o); o += 4; if (t->np < 0 || t->np > 100000) return -1;
        t->cap = t->np; t->p = calloc((size_t)t->np + 1, sizeof(prop_t));
        for (int j = 0; j < t->np; j++) {
            prop_t *q = &t->p[j]; if (o + 4 > e) return -1; q->hash = rd(o); o += 4;
            if (!(k = rstr(o, e, &q->name))) return -1; o += k;
            if (o + 12 > e) return -1; q->x = rd(o); q->sub = rd(o + 4); q->nv = (int)rd(o + 8); o += 12;
            if (q->nv < 0 || q->nv > 4096) return -1;
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
static int eff_int(blue_t *b, ent_t *t, const char *name, int def){ prop_t *q = eff_prop(b, t, name); return q && q->nv > 0 && q->v[0].type != 3 ? (q->v[0].type == 1 ? (int)q->v[0].f : q->v[0].i) : def; }
static const char *eff_str(blue_t *b, ent_t *t, const char *name){ prop_t *q = eff_prop(b, t, name); return q && q->nv > 0 && q->v[0].type == 3 ? q->v[0].s : NULL; }
/* 1 if t is a, or a descends from it */
static int descends(blue_t *b, ent_t *t, const char *anc){
    u32 h = bp_hash(anc); for (int d = 0; t && d < 32; d++) { if (t->hash == h) return 1; t = t->parent ? find_ent(b, t->parent) : NULL; } return 0; }
/* every property name an entry has (its own and inherited), the root's first */
static int names_of(blue_t *b, ent_t *t, const char **out, int max){
    ent_t *chain[32]; int nc = 0; for (ent_t *c = t; c && nc < 32; c = c->parent ? find_ent(b, c->parent) : NULL) chain[nc++] = c;
    int n = 0;
    for (int k = nc - 1; k >= 0; k--) for (int j = 0; j < chain[k]->np; j++) { const char *nm = chain[k]->p[j].name; int dup = 0;
        for (int m = 0; m < n; m++) if (!strcasecmp(out[m], nm)) { dup = 1; break; }
        if (!dup && n < max) out[n++] = nm; }
    return n; }

/* ------------------------------------------------------------------ groups (the Default files and the Mod file's sections) */
enum { G_CIS, G_REP, G_IMP, G_REB, G_HV, G_ALL, G_VEH, NG };
static const char *const GFILE[NG] = {"CIS", "Republic", "Imperial", "Rebels", "HV", "All", "Vehicles"};
static const char *const GTITLE[NG] = {"CIS (Separatists)", "Republic", "Imperial (Empire)", "Rebels (Alliance)", "Heroes and Villains",
                                       "All classes and factions", "Vehicles, turrets and ships"};
static const int GFAC[NG] = {1, 0, 3, 2, -1, -1, -1};            /* the game's faction number: 0 Republic, 1 CIS, 2 Alliance, 3 Empire */
static const char *const FTAG[4] = {"REP", "CIS", "REB", "IMP"};
static int group_of_name(const char *s){
    for (int g = 0; g < NG; g++) if (!strcasecmp(s, GFILE[g])) return g;
    if (!strcasecmp(s, "Heroes") || !strcasecmp(s, "Villains") || !strcasecmp(s, "Heroes and Villains")) return G_HV;
    if (!strcasecmp(s, "Separatists") || !strcasecmp(s, "Empire") || !strcasecmp(s, "Alliance") || !strcasecmp(s, "Rebel") || !strcasecmp(s, "Vehicle")) {
        if (!strcasecmp(s, "Separatists")) return G_CIS; if (!strcasecmp(s, "Empire")) return G_IMP; if (!strcasecmp(s, "Vehicle")) return G_VEH; return G_REB; }
    return -1; }

#define NB_MAX 32
typedef struct { blue_t b[NB_MAX]; long at[NB_MAX]; int nb; } bps_t;
static blue_t *cat(bps_t *B, const char *name){ for (int c = 0; c < B->nb; c++) if (!strcasecmp(B->b[c].cat, name)) return &B->b[c]; return NULL; }
static int is_vehicle_cat(const char *c){ return !strcasecmp(c, "Tank") || !strcasecmp(c, "Flyer") || !strcasecmp(c, "Walker") || !strcasecmp(c, "Turret") || !strcasecmp(c, "UtilityDroid"); }
/* a string value of any property of e that names a Weapon */
static int refs_weapon(blue_t *W, ent_t *e, const char *prefix, ent_t **out, int max){
    int n = 0;
    for (int j = 0; j < e->np; j++) { prop_t *q = &e->p[j]; if (prefix && strncasecmp(q->name, prefix, strlen(prefix))) continue;
        for (int m = 0; m < q->nv; m++) if (q->v[m].type == 3 && q->v[m].u) { ent_t *w = find_ent(W, bp_hash(q->v[m].s)); if (w && n < max) out[n++] = w; } }
    return n; }
static void assign_groups(bps_t *B){
    blue_t *W = cat(B, "Weapon"); if (!W) return;
    char *veh = calloc((size_t)W->ne + 1, 1), *hero = calloc((size_t)W->ne + 1, 1);
    for (int c = 0; c < B->nb; c++) { blue_t *b = &B->b[c]; int v = is_vehicle_cat(b->cat), h = !strcasecmp(b->cat, "Humanoid"); if (!v && !h) continue;
        for (int i = 0; i < b->ne; i++) { ent_t *r[16]; int n = refs_weapon(W, &b->e[i], h ? "Loadout_" : NULL, r, 16);
            for (int k = 0; k < n; k++) (v ? veh : hero)[r[k] - W->e] = 1; } }
    static const char *const HTOK[] = {"Hero", "BobaFett", "JangoFett", "Ackbar", "HanSolo", "IG88", "Chewbacca", "Grevious", "Ventress", "Dooku", "Yoda", "DarthMaul"};
    for (int i = 0; i < W->ne; i++) { ent_t *t = &W->e[i]; const char *n = t->name;
        int pre = !strncasecmp(n, "REP_", 4) || !strncasecmp(n, "FED_", 4) || !strncasecmp(n, "ALL_", 4) || !strncasecmp(n, "EMP_", 4);
        int g = -1;
        if (veh[i] || descends(W, t, "Vehicle") || descends(W, t, "TurretLasers") || descends(W, t, "Particle_Beam_Vehicle")) g = G_VEH;
        else {
            int h = (hero[i] && !pre) || descends(W, t, "Lightsaber") || descends(W, t, "ForcePowers");
            for (size_t k = 0; !h && k < sizeof HTOK / sizeof HTOK[0]; k++) { size_t l = strlen(HTOK[k]); for (const char *s = n; *s && !h; s++) if (!strncasecmp(s, HTOK[k], l)) h = 1; }
            if (hero[i] && pre) h = 0;
            if (h) { static const char *const COMMON_ITEMS[] = {"Rage", "Rally", "Regenerate", "Stamina"}; for (size_t k = 0; k < 4; k++) if (!strcasecmp(n, COMMON_ITEMS[k])) h = 0; }
            if (h) g = G_HV;
            else { int f = eff_int(W, t, "Faction", 4); g = f == 0 ? G_REP : f == 1 ? G_CIS : f == 2 ? G_REB : f == 3 ? G_IMP : G_ALL; } }
        t->group = g; }
    /* projectiles and laser bolts: the group of the weapons that fire them (several groups: All) */
    const char *PC[2] = {"Projectile", "LaserBolt"};
    for (int c = 0; c < 2; c++) { blue_t *P = cat(B, PC[c]); if (!P) continue;
        for (int i = 0; i < P->ne; i++) P->e[i].group = -1;
        for (int i = 0; i < W->ne; i++) { const char *k[2] = {"Projectile", "ChargedProjectile"};
            for (int j = 0; j < 2; j++) { const char *s = eff_str(W, &W->e[i], k[j]); if (!s || !*s) continue; ent_t *p = find_ent(P, bp_hash(s)); if (!p) continue;
                p->group = p->group < 0 ? W->e[i].group : p->group == W->e[i].group ? p->group : G_ALL; } }
        for (int i = 0; i < P->ne; i++) if (P->e[i].group < 0) P->e[i].group = G_ALL; }
    free(veh); free(hero); }

/* ------------------------------------------------------------------ the Default files */
static const struct { const char *name, *what; } DESC[] = {
    {"WeaponModel", "3D model (blueprint / asset name)"}, {"RateOfFire", "seconds between shots"}, {"ReloadTime", "seconds to reload"},
    {"MaxClips", "spare magazines (-1 = unlimited)"}, {"AmmoPerClip", "rounds per magazine (-1 = no magazine)"},
    {"ProjectilesPerShot", "projectiles fired per shot (shotgun pellets)"}, {"WindupTime", "seconds before the first shot (spin-up)"},
    {"ChargeTime", "seconds to charge a charged shot"}, {"LockonTime", "seconds to lock on (0 = no lock-on)"},
    {"OverheatPershot", "heat added per shot (0 = never overheats)"}, {"OverheatDecay", "heat lost per second"},
    {"OverheatRecoveryTime", "seconds locked out after overheating"}, {"Projectile", "projectile / laser bolt fired (its name)"},
    {"ChargedProjectile", "projectile of a charged shot"}, {"MultishotIsSpreadRandomly", "1 = pellets spread at random"},
    {"MultishotSpreadAngle", "spread of the pellets (degrees)"}, {"OnlyLockOntoVehicles", "1 = locks onto vehicles only"},
    {"WillTrack", "1 = guided"}, {"NumberOfZoomLevels", "scope zoom levels"}, {"Weapon_Name", "name (line number in TEXT/STDTEXT; or use Name = \"...\")"},
    {"Description", "description (line number in TEXT/STDTEXT; or use DescriptionText = \"...\")"}, {"Cost", "load-out credits"}, {"GlobalAmmoLimit", "total rounds (-1 = no limit)"},
    {"Modifier_Bot_Damage", "damage factor when a bot fires it"}, {"Modifier_Bot_RateOfFire", "fire-rate factor for bots"},
    {"Faction", "faction (0 Republic, 1 CIS, 2 Rebels, 3 Imperial, 4 any)"}, {"Faction Specific", "1 = each faction uses its own version (the child entry with its Faction)"},
    {"primary", "1 = a primary weapon"}, {"AllowHeadshots", "1 = headshots count"}, {"Fire Sound", "sound when fired"},
    {"HUDIcon", "HUD icon texture"}, {"PFXMuzzleFlash", "muzzle flash effect"}, {"LocksOnTarget", "1 = locks on to targets"},
    {"Distance", "range of the shot (metres)"}, {"ZoomMagnification1", "magnification of zoom level 1"},
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
static char **g_text; static int g_text_n;                        /* STDTEXT (English), for the names in the Default files */
static void export_group(bps_t *B, int g, const char *path){
    FILE *f = fopen(path, "w"); if (!f) return;
    fprintf(f, "# Renegade Squadron: the game's own %s weapons%s, with every value they have.\n"
               "# Reference only - this file is rewritten at every start and never read.  To change a weapon or add one, copy its\n"
               "# [Weapon:Name] line and only the values to change into Weapons_Mod.txt (section [%s]).\n"
               "# \"(from the parent)\": the value is the parent entry's (shown after # parent); the entry does not set it itself.\n\n",
            GTITLE[g], g == G_VEH ? "" : ", projectiles and laser bolts", GFILE[g]);
    {   /* an index of the weapons: name, parent, on-screen name, model, who carries it */
        blue_t *W = cat(B, "Weapon");
        fprintf(f, "# ---- weapons in this file (name | made from | shown as | model | carried by)\n");
        for (int i = 0; W && i < W->ne; i++) { ent_t *t = &W->e[i]; if (t->group != g) continue;
            ent_t *par = t->parent ? find_ent(W, t->parent) : NULL; int wn = eff_int(W, t, "Weapon_Name", -1); const char *m = eff_str(W, t, "WeaponModel");
            fprintf(f, "#   %-34s | %-26s | %-22s | %-28s |", t->name, par ? par->name : "-", wn >= 0 && wn < g_text_n ? g_text[wn] : "", m && *m ? m : "-");
            int any = 0;
            for (int c = 0; c < B->nb; c++) { blue_t *x = &B->b[c]; int hero = !strcasecmp(x->cat, "Humanoid"); if (!hero && !is_vehicle_cat(x->cat)) continue;
                for (int k = 0; k < x->ne; k++) { ent_t *e = &x->e[k];
                    for (int j = 0; j < e->np; j++) { prop_t *q = &e->p[j]; if (q->nv < 1 || q->v[0].type != 3 || !q->v[0].u || strcasecmp(q->v[0].s, t->name)) continue;
                        if (hero ? strncasecmp(q->name, "Loadout_", 8) : 0) continue;
                        fprintf(f, "%s %s %s(%s)", any ? "," : "", hero ? "hero" : x->cat, e->name, q->name); any = 1; } } }
            if (!any) fprintf(f, " %s", g <= G_REB ? "this faction's version of the weapon it is made from" : g == G_ALL ? "soldier classes / Customize Load-out (or a base other weapons are made from)" : "-");
            fputc('\n', f); }
        fputs("\n", f); }
    for (int c = 0; c < 3; c++) { blue_t *b = cat(B, CATS[c]); if (!b) continue;
        for (int i = 0; i < b->ne; i++) { ent_t *t = &b->e[i]; if (t->group != g) continue;
            ent_t *par = t->parent ? find_ent(b, t->parent) : NULL;
            fprintf(f, "[%s:%s]", b->cat, t->name); if (par) fprintf(f, "   # parent %s", par->name);
            if (c == 0) { int wn = eff_int(b, t, "Weapon_Name", -1); if (wn >= 0 && wn < g_text_n && g_text[wn][0]) fprintf(f, "%s shown as \"%s\"", par ? "," : "   #", g_text[wn]); }
            fputc('\n', f);
            const char *nm[256]; int n = names_of(b, t, nm, 256);
            for (int k = 0; k < n; k++) { prop_t *q = eff_prop(b, t, nm[k]); if (!q) continue;
                const char *d = desc_of(nm[k]);
                fprintf(f, "%s = ", nm[k]); print_val(f, q);
                if (d || !own_prop(t, nm[k])) fprintf(f, "   #%s%s%s", d ? " " : "", d ? d : "", own_prop(t, nm[k]) ? "" : " (from the parent)");
                fputc('\n', f); }
            fputc('\n', f); } }
    fclose(f); }

static void write_mod_template(const char *path){
    FILE *f = fopen(path, "w"); if (!f) return;
    fputs("# Renegade Squadron - Weapons_Mod.txt: only the weapons you change or add.  Read at every start.\n"
          "# The game's own weapons: Weapons_<CIS|Republic|Imperial|Rebels|HV|All|Vehicles>_Default.txt (rewritten at every start, never\n"
          "# read).  Each starts with an index: name | made from | shown as | model | carried by.\n"
          "#\n"
          "# ---- what you can write\n"
          "#   [Weapon:Name]               change an existing weapon (also [Projectile:Name], [LaserBolt:Name]): list only the values to change\n"
          "#   [Weapon:NewName : Parent]   add a new weapon made from Parent (see below)\n"
          "#   Name = \"Sniper Shotgun\"     the name shown on screen (HUD, Customize Load-out)\n"
          "#   DescriptionText = \"...\"     the description shown in Customize Load-out\n"
          "#   Loadout = Weapon1           list it in Customize Load-out: Weapon1, Weapon2, Explosive or Special\n"
          "#   Hero = DarthVader 2         give it to a hero, in weapon slot 2 (1-5; the hero names are in Weapons_HV_Default.txt)\n"
          "#   Vehicle = X_Wing 1          put it on a vehicle / turret as its weapon 1 or 2 (names in Weapons_Vehicles_Default.txt)\n"
          "#\n"
          "# ---- how a new weapon works (inheritance)\n"
          "# Every weapon is \"made from\" another one, its parent: it has all of the parent's values except those it sets itself.  The game's\n"
          "# weapons form a tree (the \"made from\" column), e.g. Base > Infantry > Infantry_Others > Sniper Rifle > REP_Sniper_Rifle.\n"
          "#   [Weapon:Sniper Shotgun : Sniper Rifle]\n"
          "# adds ONE new weapon, named Sniper Shotgun, to that tree under Sniper Rifle.  It starts as an exact copy of the Sniper Rifle\n"
          "# (fire rate, ammunition, zoom, projectile, model, sounds ...) and the lines under it change only what they list.  The Sniper\n"
          "# Rifle and every other weapon stay as they were (to change the Sniper Rifle itself, write [Weapon:Sniper Rifle]).\n"
          "# Any weapon can be the parent, so [Weapon:Lightsaber Rifle : Lightsaber] is a new weapon that starts as the lightsaber, with\n"
          "# its behaviour, model and values, and you change what you want.  The parent decides what kind of weapon it is (a sword that\n"
          "# swings, a gun that fires a projectile, a grenade that is thrown, a power-up); to make a rifle look like something else, keep a\n"
          "# rifle as the parent and change WeaponModel.  The name before the colon is yours; it must not be an existing weapon's name.\n"
          "#\n"
          "# ---- factions\n"
          "# Some weapons have one version per faction (Faction Specific = 1): BlasterRifle is swapped for REP_Blaster_Rifle on the Republic\n"
          "# side, FED_Blaster_Rifle for the CIS, and so on - those versions are in the faction files.  A new weapon made from such a weapon\n"
          "# (BlasterRifle, Shotgun, Sniper Rifle, BlasterPistol, Rocket_Launcher, Fusion Cutter, Guided_Missile) gets its own version per\n"
          "# faction automatically (named <name>@REP, @CIS, @REB, @IMP), with that faction's model, icon, sound and muzzle flash.\n"
          "#   [All]       values for every faction (the weapon and all of its faction versions)\n"
          "#   [Republic]  [CIS]  [Imperial]  [Rebels]   the same [Weapon:Name] again: values for that faction's version only\n"
          "#   [HV]  [Vehicles]   heroes' and vehicles' weapons (no faction versions)\n"
          "#\n"
          "# Example: an explosive shotgun, rebels with the rebel blaster rifle's model:\n"
          "#   [All]\n"
          "#   [Weapon:Explosive Shotgun : Shotgun]\n"
          "#   Name = \"Explosive Shotgun\"\n"
          "#   Projectile = \"Rocket\"\n"
          "#   ProjectilesPerShot = 6\n"
          "#   Loadout = Weapon1\n"
          "#   [Rebels]\n"
          "#   [Weapon:Explosive Shotgun]\n"
          "#   WeaponModel = \"ALL_Blaster_Rifle\"\n\n"
          "[All]\n\n[CIS]\n\n[Republic]\n\n[Imperial]\n\n[Rebels]\n\n[HV]\n\n[Vehicles]\n", f);
    fclose(f); }

/* ------------------------------------------------------------------ Weapons_Mod.txt */
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
/* t's own value for name (made if it only inherits it) = the parsed text; 0 = done */
static int set_prop(blue_t *b, ent_t *t, const char *name, const char *text){
    prop_t *cur = eff_prop(b, t, name);
    if (!cur) { fprintf(stderr, "[WEAPONS] %s:%s has no value \"%s\" (ignored)\n", b->cat, t->name, name); return -1; }
    val_t nv[8]; memset(nv, 0, sizeof nv);
    if (cur->nv > 8 || parse_vals(text, cur, nv)) { fprintf(stderr, "[WEAPONS] %s:%s %s: cannot read \"%s\"\n", b->cat, t->name, name, text); return -1; }
    prop_t *own = own_prop(t, name);
    if (!own && same_vals(cur, nv)) return 0;
    if (!own) { if (t->np == t->cap) { t->cap = t->cap * 2 + 8; t->p = realloc(t->p, (size_t)t->cap * sizeof(prop_t)); }
        own = &t->p[t->np++]; own->hash = cur->hash; own->name = dups(cur->name); own->x = 3; own->sub = cur->sub; own->nv = cur->nv; own->v = calloc((size_t)cur->nv + 1, sizeof(val_t)); }
    for (int m = 0; m < own->nv; m++) own->v[m] = nv[m];
    return 0; }
static void set_prop_int(blue_t *b, ent_t *t, const char *name, int v){ char s[24]; snprintf(s, sizeof s, "%d", v); set_prop(b, t, name, s); }
static ent_t *new_ent(blue_t *b, const char *name, ent_t *parent){
    if (b->ne == b->cap) { ptrdiff_t pi = parent - b->e; b->cap = b->cap * 2 + 8; b->e = realloc(b->e, (size_t)b->cap * sizeof(ent_t)); parent = b->e + pi; }
    ent_t *t = &b->e[b->ne++]; memset(t, 0, sizeof *t); t->a = parent->a; t->hash = bp_hash(name); t->parent = parent->hash; t->name = dups(name); t->group = parent->group;
    return t; }
/* the direct children of w that are one faction's version (Faction 0..3) */
static int faction_children(blue_t *b, ent_t *w, int *idx, int max){
    int n = 0; for (int i = 0; i < b->ne && n < max; i++) { ent_t *c = &b->e[i]; if (c->parent != w->hash || c == w) continue;
        int f = eff_int(b, c, "Faction", 4); if (f >= 0 && f <= 3) idx[n++] = i; }
    return n; }
/* faction f's version of weapon w (made if it has none) */
static ent_t *faction_version(blue_t *b, ent_t *w, int f){
    if (eff_int(b, w, "Faction", 4) == f) return w;
    int idx[16]; int n = faction_children(b, w, idx, 16);
    for (int k = 0; k < n; k++) if (eff_int(b, &b->e[idx[k]], "Faction", 4) == f) return &b->e[idx[k]];
    ptrdiff_t wi = w - b->e; char nm[256]; snprintf(nm, sizeof nm, "%s@%s", w->name, FTAG[f]);
    ent_t *c = new_ent(b, nm, w); w = b->e + wi;
    set_prop_int(b, c, "Faction", f); set_prop_int(b, w, "Faction Specific", 1);
    fprintf(stderr, "[WEAPONS] new %s (the %s version of %s)\n", nm, FTAG[f], w->name);
    return c; }
/* a new weapon from a parent with faction versions: one version per faction, with that faction's look */
static void inherit_faction_versions(blue_t *b, ent_t *w, ent_t *par){
    static const char *const LOOK[] = {"WeaponModel", "HUDIcon", "Fire Sound", "PFXMuzzleFlash", "AnimPose", "MenuAnim", "empty clip sound",
                                       "MenuOffsetX", "MenuOffsetY", "MenuOffsetZ", "AppDisplayCameraOffsetX", "AppDisplayCameraOffsetY", "AppDisplayCameraOffsetZ"};
    ptrdiff_t wi = w - b->e, pi = par - b->e;
    int idx[16]; int n = faction_children(b, par, idx, 16);
    for (int k = 0; k < n; k++) { ent_t *pc = &b->e[idx[k]]; int f = eff_int(b, pc, "Faction", 4); if (f < 0 || f > 3) continue;
        char pcname[256]; snprintf(pcname, sizeof pcname, "%s", pc->name);
        ent_t *c = faction_version(b, b->e + wi, f); pc = find_ent(b, bp_hash(pcname)); if (!c || !pc) continue;
        for (size_t j = 0; j < sizeof LOOK / sizeof LOOK[0]; j++) { prop_t *q = eff_prop(b, pc, LOOK[j]); prop_t *mine = eff_prop(b, c, LOOK[j]);
            if (!q || !mine || own_prop(c, LOOK[j]) || q->nv != mine->nv || same_vals(mine, q->v)) continue;
            /* copy q's values as text-free: own copy of the property */
            if (c->np == c->cap) { c->cap = c->cap * 2 + 8; c->p = realloc(c->p, (size_t)c->cap * sizeof(prop_t)); }
            prop_t *o = &c->p[c->np++]; *o = *mine; o->name = dups(mine->name); o->x = 3; o->v = calloc((size_t)q->nv + 1, sizeof(val_t));
            for (int m = 0; m < q->nv; m++) { o->v[m] = q->v[m]; if (q->v[m].type == 3) o->v[m].s = dups(q->v[m].s); } } }
    (void)pi; }

/* new lines of STDTEXT (Name = / DescriptionText =) */
static char **new_text; static int new_text_n, text_base = -1;
static int add_text(const char *s){
    if (text_base < 0) return -1;
    for (int i = 0; i < new_text_n; i++) if (!strcmp(new_text[i], s)) return text_base + i;
    new_text = realloc(new_text, sizeof(char *) * (size_t)(new_text_n + 1)); new_text[new_text_n] = dups(s); return text_base + new_text_n++; }
static void unquote(char *v){
    if (*v == '"') { char *z = strchr(v + 1, '"'); if (z) *z = 0; memmove(v, v + 1, strlen(v + 1) + 1); }
    else { char *h = strchr(v, '#'); if (h) *h = 0; for (char *e = v + strlen(v); e > v && isspace((unsigned char)e[-1]); ) *--e = 0; } }

static int import_mod(bps_t *B, const char *path){
    FILE *f = fopen(path, "r"); if (!f) return 0;
    blue_t *W = cat(B, "Weapon");
    char line[1024]; blue_t *b = NULL; ent_t *base = NULL; int changed = 0, lno = 0, sec = G_ALL;
    while (fgets(line, sizeof line, f)) { lno++;
        char *s = line; while (isspace((unsigned char)*s)) s++;
        for (char *e = s + strlen(s); e > s && isspace((unsigned char)e[-1]); ) *--e = 0;
        if (!*s || *s == '#') continue;
        if (*s == '[') { char *z = strchr(s, ']'); b = NULL; base = NULL; if (!z) continue; *z = 0; s++;
            char *colon = strchr(s, ':');
            if (!colon) { int g = group_of_name(s); if (g < 0) fprintf(stderr, "[WEAPONS] line %d: unknown section [%s]\n", lno, s); else sec = g; continue; }
            *colon = 0; for (char *e = colon; e > s && isspace((unsigned char)e[-1]); ) *--e = 0;
            b = cat(B, s); if (!b || (strcasecmp(b->cat, "Weapon") && strcasecmp(b->cat, "Projectile") && strcasecmp(b->cat, "LaserBolt"))) { fprintf(stderr, "[WEAPONS] line %d: no category \"%s\"\n", lno, s); b = NULL; continue; }
            char *name = colon + 1, *par = strchr(name, ':'); if (par) *par++ = 0;
            while (isspace((unsigned char)*name)) name++; for (char *e = name + strlen(name); e > name && isspace((unsigned char)e[-1]); ) *--e = 0;
            base = find_ent(b, bp_hash(name));
            if (!base && par) { while (isspace((unsigned char)*par)) par++; for (char *e = par + strlen(par); e > par && isspace((unsigned char)e[-1]); ) *--e = 0;
                ent_t *pe = find_ent(b, bp_hash(par)); if (!pe) { fprintf(stderr, "[WEAPONS] line %d: no parent \"%s\" for %s\n", lno, par, name); continue; }
                char pname[256]; snprintf(pname, sizeof pname, "%s", pe->name);
                base = new_ent(b, name, pe); changed = 1; fprintf(stderr, "[WEAPONS] new %s:%s (parent %s)\n", b->cat, name, pname);
                if (b == W) { ptrdiff_t bi = base - b->e; inherit_faction_versions(b, base, find_ent(b, bp_hash(pname))); base = b->e + bi; } }
            if (!base) fprintf(stderr, "[WEAPONS] line %d: no %s \"%s\" (a new one needs \": Parent\")\n", lno, b->cat, name);
            continue; }
        if (!base) continue;
        char *eq = strchr(s, '='); if (!eq) continue; *eq = 0;
        char *key = s; for (char *e = eq; e > key && isspace((unsigned char)e[-1]); ) *--e = 0;
        char *val = eq + 1; while (isspace((unsigned char)*val)) val++;
        ptrdiff_t bi = base - b->e; char bname[256]; snprintf(bname, sizeof bname, "%s", base->name);
        if (!strcasecmp(key, "Loadout")) { static const char *const L[4] = {"Weapon1", "Weapon2", "Explosive", "Special"}; int ok = 0;
            for (int i = 0; i < 4; i++) if (!strncasecmp(val, L[i], strlen(L[i]))) { rs_loadout_add(i, base->hash); ok = 1; fprintf(stderr, "[WEAPONS] %s in the load-out list %s\n", bname, L[i]); }
            if (!ok) fprintf(stderr, "[WEAPONS] line %d: Loadout must be Weapon1, Weapon2, Explosive or Special\n", lno);
            continue; }
        if (!strcasecmp(key, "Hero") || !strcasecmp(key, "Vehicle")) {
            char who[128]; int slot = 0; if (sscanf(val, "%127s %d", who, &slot) != 2) { fprintf(stderr, "[WEAPONS] line %d: %s = <name> <slot>\n", lno, key); continue; }
            int hero = !strcasecmp(key, "Hero"); ent_t *e = NULL; blue_t *eb = NULL;
            for (int c = 0; c < B->nb && !e; c++) { blue_t *x = &B->b[c]; if (hero ? strcasecmp(x->cat, "Humanoid") : !is_vehicle_cat(x->cat)) continue; e = find_ent(x, bp_hash(who)); eb = x; }
            if (!e) { fprintf(stderr, "[WEAPONS] line %d: no %s \"%s\"\n", lno, hero ? "hero (Humanoid)" : "vehicle / turret", who); continue; }
            char pn[32], q[300]; if (hero) snprintf(pn, sizeof pn, "Loadout_%d", slot); else snprintf(pn, sizeof pn, "HardpointW%d", slot);
            snprintf(q, sizeof q, "\"%s\"", bname);
            if (!set_prop(eb, e, pn, q)) { changed = 1; fprintf(stderr, "[WEAPONS] %s %s = %s\n", e->name, pn, bname); }
            continue; }
        /* the entries the value goes to */
        ent_t *tg[8]; int nt = 0;
        if (b == W && GFAC[sec] >= 0) { tg[nt++] = faction_version(b, base, GFAC[sec]); }
        else { tg[nt++] = base;
            if (b == W) { int idx[8]; int n = faction_children(b, b->e + bi, idx, 7); for (int k = 0; k < n; k++) tg[nt++] = &b->e[idx[k]]; } }
        if (b == W && (!strcasecmp(key, "Name") || !strcasecmp(key, "DescriptionText"))) {
            unquote(val); int id = add_text(val); if (id < 0) { fprintf(stderr, "[WEAPONS] line %d: TEXT/STDTEXT.ASR not read: %s ignored\n", lno, key); continue; }
            const char *pn = !strcasecmp(key, "Name") ? "Weapon_Name" : "Description";
            for (int k = 0; k < nt; k++) { if (k > 0 && !own_prop(tg[k], pn)) continue; set_prop_int(b, tg[k], pn, id); }
            changed = 1; fprintf(stderr, "[WEAPONS] %s: %s = text line %d \"%s\"\n", bname, pn, id, val); continue; }
        for (int k = 0; k < nt; k++) { if (k > 0 && !own_prop(tg[k], key)) continue; set_prop(b, tg[k], key, val); }
        changed = 1; }
    fclose(f); return changed; }

/* ------------------------------------------------------------------ files */
static u8 *slurp(const char *p, long *n){
    FILE *f = fopen(p, "rb"); if (!f) return NULL; fseek(f, 0, SEEK_END); *n = ftell(f); fseek(f, 0, SEEK_SET);
    u8 *d = malloc((size_t)*n + 1); if (!d || fread(d, 1, (size_t)*n, f) != (size_t)*n) { fclose(f); free(d); return NULL; } fclose(f); return d; }
static int spit(const char *p, const u8 *d, size_t n){ FILE *w = fopen(p, "wb"); int ok = w && fwrite(d, 1, n, w) == n; if (w) fclose(w); return ok ? 0 : -1; }

/* STDTEXT: the English lines (for the Default files) and the count new lines start at */
static void text_read(const u8 *d, long n){
    for (long o = 8; o + 16 <= n; ) { u32 sz = rd(d + o + 4); if (sz < 16 || o + (long)sz > n) break;
        if (!memcmp(d + o, "LTXT", 4) && sz >= 24 && rd(d + o + 20) == 0) {
            u32 cnt = rd(d + o + 16); const u8 *p = d + o + 24, *e = d + o + sz;
            g_text = calloc(cnt + 1, sizeof(char *)); g_text_n = (int)cnt; text_base = (int)cnt;
            for (u32 i = 0; i < cnt && p + 4 <= e; i++) { u32 L = rd(p); p += 4; if (p + 2 * L > e) break;
                char *s = malloc(L + 1); u32 j = 0; for (u32 k = 0; k < L; k++) { u32 c = (u32)p[2 * k] | (u32)p[2 * k + 1] << 8; if (!c) break; s[j++] = c < 128 ? (char)c : '?'; } s[j] = 0;
                g_text[i] = s; p += 2 * L; }
            for (int i = 0; i < g_text_n; i++) if (!g_text[i]) g_text[i] = dups("");
            return; }
        o += sz; } }
/* UTF-8 -> UTF-16 code units, NUL included; returns the count */
static u32 utf16(const char *s, u16 *out, u32 max){
    u32 n = 0; const u8 *p = (const u8 *)s;
    while (*p && n + 1 < max) { u32 c = *p++;
        if (c >= 0xC0 && c < 0xE0 && (*p & 0xC0) == 0x80) { c = (c & 31) << 6 | (*p++ & 63); }
        else if (c >= 0xE0 && c < 0xF0 && (p[0] & 0xC0) == 0x80 && (p[1] & 0xC0) == 0x80) { c = (c & 15) << 12 | (p[0] & 63) << 6 | (p[1] & 63); p += 2; }
        else if (c >= 0x80) c = '?';
        out[n++] = (u16)c; }
    out[n++] = 0; return n; }
static int load_blues(const u8 *d, long n, bps_t *B){
    B->nb = 0;
    for (long o = 8; o + 16 <= n; ) { u32 sz = rd(d + o + 4); if (sz < 16 || o + (long)sz > n) break;
        if (!memcmp(d + o, "BLUE", 4) && B->nb < NB_MAX) { blue_t b; if (parse_blue(d + o + 16, sz - 16, &b) == 0) { B->b[B->nb] = b; B->at[B->nb] = o; B->nb++; } }
        o += sz; }
    return B->nb; }
static int common_write(const u8 *d, long n, bps_t *B, const char *dst){
    out_t o = {0}; put(&o, d, 8);
    long p = 8;
    for (; p + 16 <= n; ) { u32 sz = rd(d + p + 4); if (sz < 16 || p + (long)sz > n) break;
        int k = -1; for (int c = 0; c < B->nb; c++) if (B->at[c] == p) k = c;
        if (k < 0) put(&o, d + p, sz);
        else { size_t h = o.n; put(&o, d + p, 16); write_blue(&B->b[k], &o); u32 nsz = (u32)(o.n - h); memcpy(o.p + h + 4, &nsz, 4); }
        p += sz; }
    if (p < n) put(&o, d + p, (size_t)(n - p));                         /* what follows the last chunk */
    if (!memcmp(o.p + 8, "FNFO", 4) && rd(d + 24) == (u32)n) { u32 fs = (u32)o.n; memcpy(o.p + 8 + 16, &fs, 4); }
    int r = spit(dst, o.p, o.n); free(o.p); return r; }

/* ------------------------------------------------------------------ rs_patch_file (settings.c) for MISC/COMMON.ASR and TEXT/STDTEXT.ASR */
static char out_common[512]; static int done, ok_common;
static int ends_with(const char *s, const char *t){ size_t a = strlen(s), b = strlen(t); return a >= b && !strcasecmp(s + a - b, t); }
static void process(const char *host_common, const char *host_text){
    const char *dd = rs_platform_data_dir(); char dir[480], mod[480], p[600];
    snprintf(dir, sizeof dir, "%s/patched", dd); mkdir(dd, 0777); mkdir(dir, 0777);
    snprintf(out_common, sizeof out_common, "%s/COMMON.ASR", dir);
    snprintf(mod, sizeof mod, "%s/Weapons_Mod.txt", dd);
    snprintf(p, sizeof p, "%s/weapons_default.txt", dd); remove(p);           /* the earlier single reference file */
    long tn = 0; u8 *td = slurp(host_text, &tn); if (td) text_read(td, tn);
    long n = 0; u8 *d = slurp(host_common, &n);
    if (!d || n < 24 || memcmp(d, "Asura   ", 8)) { fprintf(stderr, "[WEAPONS] cannot read %s\n", host_common); free(d); free(td); return; }
    bps_t *B = calloc(1, sizeof *B);
    if (!load_blues(d, n, B) || !cat(B, "Weapon")) { fprintf(stderr, "[WEAPONS] %s: no blueprints found\n", host_common); free(d); free(td); return; }
    assign_groups(B);
    for (int g = 0; g < NG; g++) { snprintf(p, sizeof p, "%s/Weapons_%s_Default.txt", dd, GFILE[g]); export_group(B, g, p); }
    struct stat st; if (stat(mod, &st) != 0) { write_mod_template(mod); fprintf(stderr, "[WEAPONS] wrote %s (empty: the game's own weapons)\n", mod); }
    { snprintf(p, sizeof p, "%s/weapons.txt", dd); if (stat(p, &st) == 0) fprintf(stderr, "[WEAPONS] %s is no longer read: put changes in Weapons_Mod.txt\n", p); }
    if (import_mod(B, mod)) { ok_common = common_write(d, n, B, out_common) == 0; fprintf(stderr, "[WEAPONS] %s -> %s\n", mod, out_common); }
    if (new_text_n) fprintf(stderr, "[WEAPONS] %d new line(s) of text: numbers %d.. (game_patches.c rs_stdtext_get)\n", new_text_n, text_base);
    free(d); free(td); }
const char *rs_weapons_patch_file(const char *rel, const char *host){
    int is_common = ends_with(rel, "MISC/COMMON.ASR") || ends_with(rel, "MISC\\COMMON.ASR"), is_text = ends_with(rel, "TEXT/STDTEXT.ASR") || ends_with(rel, "TEXT\\STDTEXT.ASR");
    if (!(is_common || is_text) || !rs_setting_int("RS_WEAPONS", 1)) return NULL;
    if (!done) { done = 1;
        size_t hn = strlen(host); char hc[600], ht[600];
        if (hn >= 16 && hn < sizeof hc) {
            if (is_common) { snprintf(hc, sizeof hc, "%s", host); snprintf(ht, sizeof ht, "%.*s%s", (int)(hn - 15), host, host[hn - 1] == 'r' ? "text/stdtext.asr" : "TEXT/STDTEXT.ASR"); }
            else { snprintf(ht, sizeof ht, "%s", host); snprintf(hc, sizeof hc, "%.*s%s", (int)(hn - 16), host, host[hn - 1] == 'r' ? "misc/common.asr" : "MISC/COMMON.ASR"); }
            process(hc, ht); } }
    return is_common && ok_common ? out_common : NULL; }
/* the new lines of text (Name = / DescriptionText =) as UTF-16 with the NUL, for the game's text lookup (game_patches.c); 0 = not one */
int rs_weapons_text16(u32 id, u16 *out, int max){
    if (text_base < 0 || id < (u32)text_base || id >= (u32)(text_base + new_text_n) || max < 2) return 0;
    return (int)utf16(new_text[id - (u32)text_base], out, (u32)max); }
