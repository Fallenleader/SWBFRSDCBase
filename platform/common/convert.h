#pragma once
/* First-boot media conversion (platform/common/convert.c).
 *
 * The PSP game ships ATRAC3plus audio (.AT3) and PMF video (.PMF).  Targets without ATRAC3plus/PMF support get converted copies,
 * made once on the device itself, then checked on every boot:
 *   USRDIR/.../X.AT3  ->  <out>/USRDIR/.../X.AT3.wav   16-bit stereo PCM, exactly the samples sceAtracDecodeData returns
 *                                                     (every ATRAC frame decoded with the same decoder; no decoding while playing)
 *   USRDIR/.../X.PMF  ->  <out>/USRDIR/.../X.PMF.mp4   the PMF's H.264 video copied unchanged + its ATRAC3plus audio as AAC-LC
 * <out>/manifest.txt records each source (size + signature of its first 4 KB) and the size of its output.  A boot check stats
 * every output and re-converts anything missing, truncated, or made from a different source file.
 *
 * Game files are read through vfs (extracted folder or ISO image).  All of this is platform-neutral C; the platform supplies the
 * output folder, the worker count and the screen. */
#include <stdint.h>

typedef struct {
    int phase;                 /* RS_CONV_* */
    int files_total;           /* convertible files on the disc */
    int files_ok;              /* already valid at the check, or converted in this session */
    int files_todo;            /* found missing / out of date by the check */
    int files_done;            /* converted in this session */
    uint64_t work_total, work_done;   /* source bytes to convert / already processed (progress bar) */
    char current[4][96];       /* file each worker is on ("" = idle) */
    char message[200];         /* error text (RS_CONV_FAILED) */
} rs_conv_status_t;

enum { RS_CONV_IDLE, RS_CONV_CHECKING, RS_CONV_CONVERTING, RS_CONV_DONE, RS_CONV_FAILED };

/* game_root: what the game's disc0:/ maps to (the folder holding PSP_GAME, or "iso:" when an ISO image is mounted with vfs).
 * out_dir: folder for the converted files (created if needed).  workers: conversion threads (1..4).
 * free_bytes: space left on the output device, or 0 if unknown (checked before converting).
 * Runs in a background thread; poll rs_convert_status() until phase is RS_CONV_DONE or RS_CONV_FAILED. */
int rs_convert_start(const char *game_root, const char *out_dir, int workers, uint64_t free_bytes);
void rs_convert_status(rs_conv_status_t *out);

/* Path of the converted copy of a game file (full host path as opened by the platform layer), or 0 when the file is not one
 * that gets converted or conversion is not in use.  ext: ".wav" or ".mp4".  Returns a pointer to a static buffer per thread. */
const char *rs_convert_output_for(const char *full_path, const char *ext);
