/* Vulkan back end for the PSP GE (RS_RENDERER=vulkan): the same renderer interface (gfx.h) as the OpenGL back end (gfx_gl.c), with
 * hardware ray tracing on devices that have VK_KHR_ray_query (the PS5 through RADV, lavapipe on a PC).
 *
 *  - Every PSP render target becomes a 512x512 (x RS_RES_SCALE) RGBA8 image, PSP row 0 = image row 0, kept in GENERAL layout so it can be
 *    drawn into, sampled and copied without layout transitions; one shared depth/stencil image.  Drawing uses dynamic rendering.
 *  - All work of a frame goes into one command buffer per frame in flight (2): vertices, per-draw parameters and texture uploads come
 *    from that frame's host-visible ring buffer; descriptors are pushed (VK_KHR_push_descriptor).  Pipelines are made on first use per
 *    (program, blend state, colour mask); depth, stencil, cull, viewport and scissor are dynamic state.
 *  - PSP vertex buffers (native draws) are decoded on the CPU into the hardware T&L vertex format, so one vertex program (vk/hw.vert)
 *    covers every vertex type; 2D (through-mode) draws go to the CPU-vertex program (vk/main.vert).
 *  - Sun shadows: the shadow map of the GL back end (previous frame's opaque 3D triangles, camera space), or with RS_RT_SHADOWS=1 a ray
 *    query per pixel against an acceleration structure of the previous frame's opaque triangles in world space (rebuilt every frame).
 *  - Reflections (RS_RT_REFLECTIONS=1): smooth PBR surfaces (mod textures with _ms maps) trace the reflected view ray against the same
 *    acceleration structure; a hit shows that triangle's colour (vertex colour x its texture's average colour) lit by the sun.
 * Shaders: vk/*.vert|frag, compiled to SPIR-V at build time (vk/build_shaders.py -> vk_spv.h).  Platform hooks: gfx_vk.h. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define VK_NO_PROTOTYPES
#include <vulkan/vulkan.h>
#include "gfx_backend_vk.h"                     /* gfx_* renamed vk_gfx_* (gfx_backend.c) */
#include "tex_mips.h"
#include "gfx.h"
#include "gfx_vk.h"
#include "vk_spv.h"
#if defined(RS_PS5) || defined(RS_GFX_FX)
#include "gfx_fx.h"
#endif

/* ------------------------------------------------------------------ the Vulkan commands used */
#define VK_GLOBAL(X) X(CreateInstance) X(EnumerateInstanceExtensionProperties)
#define VK_INSTANCE(X) X(EnumeratePhysicalDevices) X(GetPhysicalDeviceProperties) X(GetPhysicalDeviceQueueFamilyProperties) \
    X(GetPhysicalDeviceMemoryProperties) X(GetPhysicalDeviceFeatures2) X(GetPhysicalDeviceFormatProperties) X(CreateDevice) X(GetDeviceProcAddr) \
    X(EnumerateDeviceExtensionProperties) X(GetPhysicalDeviceProperties2) \
    X(GetPhysicalDeviceDisplayPropertiesKHR) X(GetDisplayModePropertiesKHR) X(CreateDisplayPlaneSurfaceKHR) \
    X(GetPhysicalDeviceSurfaceSupportKHR) X(GetPhysicalDeviceSurfaceCapabilitiesKHR) X(GetPhysicalDeviceSurfaceFormatsKHR)
#define VK_DEVICE(X) X(GetDeviceQueue) X(CreateCommandPool) X(AllocateCommandBuffers) X(BeginCommandBuffer) X(EndCommandBuffer) \
    X(QueueSubmit) X(QueueWaitIdle) X(DeviceWaitIdle) X(CreateFence) X(WaitForFences) X(ResetFences) X(ResetCommandBuffer) \
    X(CreateBuffer) X(DestroyBuffer) X(GetBufferMemoryRequirements) X(AllocateMemory) X(FreeMemory) X(BindBufferMemory) X(MapMemory) \
    X(CreateImage) X(DestroyImage) X(GetImageMemoryRequirements) X(BindImageMemory) X(CreateImageView) X(DestroyImageView) \
    X(CreateSampler) X(CreateShaderModule) X(CreateDescriptorSetLayout) X(CreatePipelineLayout) X(CreateGraphicsPipelines) \
    X(CmdBeginRendering) X(CmdEndRendering) X(CmdPipelineBarrier) X(CmdBindPipeline) X(CmdBindVertexBuffers) X(CmdDraw) \
    X(CmdSetViewport) X(CmdSetScissor) X(CmdSetCullMode) X(CmdSetFrontFace) X(CmdSetDepthTestEnable) X(CmdSetDepthWriteEnable) \
    X(CmdSetDepthCompareOp) X(CmdSetStencilTestEnable) X(CmdSetStencilOp) X(CmdSetStencilCompareMask) X(CmdSetStencilWriteMask) \
    X(CmdSetStencilReference) X(CmdSetBlendConstants) X(CmdPushConstants) X(CmdClearAttachments) X(CmdCopyImage) X(CmdCopyBufferToImage) \
    X(CmdCopyImageToBuffer) X(CmdBlitImage) X(CmdPushDescriptorSetKHR) \
    X(CreateSwapchainKHR) X(GetSwapchainImagesKHR) X(AcquireNextImageKHR) X(QueuePresentKHR) X(CreateSemaphore)
#define VK_RT(X) X(GetBufferDeviceAddress) X(GetAccelerationStructureBuildSizesKHR) X(CreateAccelerationStructureKHR) \
    X(DestroyAccelerationStructureKHR) X(CmdBuildAccelerationStructuresKHR) X(GetAccelerationStructureDeviceAddressKHR)
#define VKP(n) static PFN_vk##n vk##n;
VK_GLOBAL(VKP) VK_INSTANCE(VKP) VK_DEVICE(VKP) VK_RT(VKP)
#undef VKP

extern volatile unsigned rs_gfx_epoch;
extern rs_perf_t rs_perf;
extern int rs_setting_int(const char *, int);
#define VKCHK(x, what) do { VkResult r_ = (x); if (r_ != VK_SUCCESS) { fprintf(stderr, "[VK] %s failed (%d)\n", what, (int)r_); return -1; } } while (0)

/* ------------------------------------------------------------------ device */
static PFN_vkGetInstanceProcAddr gipa; static int want_display;
static VkInstance inst; static VkPhysicalDevice phys; static VkDevice dev; static VkQueue queue; static uint32_t qfam;
static VkPhysicalDeviceMemoryProperties memprops; static VkPhysicalDeviceProperties props;
static int has_rt, rt_shadows, rt_refl; static VkFormat dsfmt;
void gfx_vk_setup(void *get_instance_proc_addr, int display){ gipa = (PFN_vkGetInstanceProcAddr)get_instance_proc_addr; want_display = display; }
int gfx_vk_has_rt(void){ return has_rt; }

static uint32_t memtype(uint32_t bits, VkMemoryPropertyFlags want){
    for (uint32_t i = 0; i < memprops.memoryTypeCount; i++) if ((bits & (1u << i)) && (memprops.memoryTypes[i].propertyFlags & want) == want) return i;
    for (uint32_t i = 0; i < memprops.memoryTypeCount; i++) if (bits & (1u << i)) return i;
    return 0; }
typedef struct { VkBuffer buf; VkDeviceMemory mem; u8 *map; VkDeviceSize size; VkDeviceAddress addr; } vbuf_t;
static int buf_make(vbuf_t *b, VkDeviceSize size, VkBufferUsageFlags use, int host){
    memset(b, 0, sizeof *b); b->size = size;
    if (has_rt) use |= VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT;
    VkBufferCreateInfo bi = {VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO, 0, 0, size, use, VK_SHARING_MODE_EXCLUSIVE, 0, 0};
    VKCHK(vkCreateBuffer(dev, &bi, 0, &b->buf), "vkCreateBuffer");
    VkMemoryRequirements mr; vkGetBufferMemoryRequirements(dev, b->buf, &mr);
    VkMemoryAllocateFlagsInfo fi = {VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO, 0, VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT, 0};
    VkMemoryAllocateInfo ai = {VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO, has_rt ? &fi : 0, mr.size,
        memtype(mr.memoryTypeBits, host ? VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT : VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT)};
    VKCHK(vkAllocateMemory(dev, &ai, 0, &b->mem), "vkAllocateMemory (buffer)");
    vkBindBufferMemory(dev, b->buf, b->mem, 0);
    if (host) vkMapMemory(dev, b->mem, 0, VK_WHOLE_SIZE, 0, (void **)&b->map);
    if (has_rt) { VkBufferDeviceAddressInfo da = {VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO, 0, b->buf}; b->addr = vkGetBufferDeviceAddress(dev, &da); }
    return 0; }
static void buf_free(vbuf_t *b){ if (b->buf) vkDestroyBuffer(dev, b->buf, 0); if (b->mem) vkFreeMemory(dev, b->mem, 0); memset(b, 0, sizeof *b); }

/* ------------------------------------------------------------------ images: one table for textures, surfaces and the rest */
typedef struct { VkImage img; VkImageView view; VkDeviceMemory mem; int w, h, mips, used; u32 avg; } vimg_t;
#define IMG_N 4096
static vimg_t imgs[IMG_N]; static int img_hint = 1;
static unsigned img_new(int w, int h, VkFormat fmt, VkImageUsageFlags use, int mips, VkImageAspectFlags aspect){
    int id = 0; for (int i = 0; i < IMG_N - 1 && !id; i++) { int k = 1 + (img_hint + i - 1) % (IMG_N - 1); if (!imgs[k].used) id = k; }
    if (!id) { fprintf(stderr, "[VK] out of image slots\n"); return 0; }
    img_hint = id + 1; vimg_t *m = &imgs[id]; memset(m, 0, sizeof *m);
    VkImageCreateInfo ii = {VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO, 0, 0, VK_IMAGE_TYPE_2D, fmt, {(uint32_t)w, (uint32_t)h, 1}, (uint32_t)mips, 1,
        VK_SAMPLE_COUNT_1_BIT, VK_IMAGE_TILING_OPTIMAL, use, VK_SHARING_MODE_EXCLUSIVE, 0, 0, VK_IMAGE_LAYOUT_UNDEFINED};
    if (vkCreateImage(dev, &ii, 0, &m->img) != VK_SUCCESS) { fprintf(stderr, "[VK] vkCreateImage %dx%d failed\n", w, h); return 0; }
    VkMemoryRequirements mr; vkGetImageMemoryRequirements(dev, m->img, &mr);
    VkMemoryAllocateInfo ai = {VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO, 0, mr.size, memtype(mr.memoryTypeBits, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT)};
    if (vkAllocateMemory(dev, &ai, 0, &m->mem) != VK_SUCCESS) { vkDestroyImage(dev, m->img, 0); fprintf(stderr, "[VK] out of video memory (%dx%d image)\n", w, h); return 0; }
    vkBindImageMemory(dev, m->img, m->mem, 0);
    VkImageViewCreateInfo vi = {VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO, 0, 0, m->img, VK_IMAGE_VIEW_TYPE_2D, fmt, {0, 0, 0, 0}, {aspect, 0, (uint32_t)mips, 0, 1}};
    vkCreateImageView(dev, &vi, 0, &m->view);
    m->w = w; m->h = h; m->mips = mips; m->used = 1; m->avg = 0xFF808080u; return (unsigned)id; }

/* ------------------------------------------------------------------ frames in flight */
#define FR 2
#define RING_SIZE (48u << 20)
typedef struct { VkCommandBuffer cb; VkFence fence; vbuf_t ring; VkDeviceSize ring_at; int recording, submitted;
                 unsigned dead[256]; int ndead; } frame_t;
static frame_t fr[FR]; static int fi; static VkCommandPool pool;
static VkCommandBuffer cmd(void);
static void img_free_now(unsigned id){ vimg_t *m = &imgs[id]; if (!m->used) return;
    if (m->view) vkDestroyImageView(dev, m->view, 0); if (m->img) vkDestroyImage(dev, m->img, 0); if (m->mem) vkFreeMemory(dev, m->mem, 0); memset(m, 0, sizeof *m); }
static void img_free(unsigned id){                                       /* after the frames that may still use it */
    if (!id || !imgs[id].used) return;
    frame_t *f = &fr[fi]; if (f->ndead == 256) { vkDeviceWaitIdle(dev); for (int i = 0; i < FR; i++) { for (int k = 0; k < fr[i].ndead; k++) img_free_now(fr[i].dead[k]); fr[i].ndead = 0; } }
    f->dead[f->ndead++] = id; }
/* n bytes in this frame's ring buffer (aligned); a full ring finishes the frame's work so far first */
static void sync_flush(void);
static VkDeviceSize ring_alloc(VkDeviceSize n, VkDeviceSize align, u8 **p){
    frame_t *f = &fr[fi]; VkDeviceSize at = (f->ring_at + align - 1) & ~(align - 1);
    if (at + n > f->ring.size) { sync_flush(); f = &fr[fi]; at = 0; if (n > f->ring.size) { *p = 0; return 0; } }
    f->ring_at = at + n; *p = f->ring.map + at; return at; }

/* ------------------------------------------------------------------ surfaces */
#define SURF_N 12
#define SZ 512
static int RS_S = 1, SURF_H = 512;
#define PX (SZ * RS_S)
#define PXH (SURF_H * RS_S)
typedef struct { u32 addr; int stride, psz, fmt, used, drawn; unsigned img, stamp; } surf_t;
static surf_t surfs[SURF_N]; static unsigned surf_stamp, depth_img; static surf_t *rp_surf;   /* rp_surf: the surface being rendered to */
static u32 disp_addr, disp_stride = 512, disp_fmt;
static unsigned st_draws, st_batches, st_tris, st_texup, st_clears, st_passes;
static u32 akey(u32 a){ return gfx_vram(a) & 0x0FFFFFFFu; }

static void barrier_all(VkCommandBuffer c){
    VkMemoryBarrier mb = {VK_STRUCTURE_TYPE_MEMORY_BARRIER, 0, VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT, VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT};
    vkCmdPipelineBarrier(c, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, 0, 1, &mb, 0, 0, 0, 0); }
static void end_render(void){ if (!rp_surf) return; VkCommandBuffer c = cmd(); vkCmdEndRendering(c); barrier_all(c); rp_surf = 0; }
static int dyn_dirty = 1;
static void begin_render(surf_t *s){
    if (rp_surf == s) return; end_render();
    VkCommandBuffer c = cmd();
    VkRenderingAttachmentInfo ca = {VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO, 0, imgs[s->img].view, VK_IMAGE_LAYOUT_GENERAL, 0, 0, 0,
        VK_ATTACHMENT_LOAD_OP_LOAD, VK_ATTACHMENT_STORE_OP_STORE, {{{0, 0, 0, 0}}}};
    VkRenderingAttachmentInfo da = {VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO, 0, imgs[depth_img].view, VK_IMAGE_LAYOUT_GENERAL, 0, 0, 0,
        VK_ATTACHMENT_LOAD_OP_LOAD, VK_ATTACHMENT_STORE_OP_STORE, {{{0, 0, 0, 0}}}};
    VkRenderingInfo ri = {VK_STRUCTURE_TYPE_RENDERING_INFO, 0, 0, {{0, 0}, {(uint32_t)PX, (uint32_t)PXH}}, 1, 0, 1, &ca, &da, &da};
    vkCmdBeginRendering(c, &ri); rp_surf = s; dyn_dirty = 1; st_passes++; }

/* image layout UNDEFINED -> GENERAL (new images) */
static void to_general(VkCommandBuffer c, VkImage im, VkImageAspectFlags aspect, int mips){
    VkImageMemoryBarrier b = {VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER, 0, 0, VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT,
        VK_IMAGE_LAYOUT_UNDEFINED, VK_IMAGE_LAYOUT_GENERAL, VK_QUEUE_FAMILY_IGNORED, VK_QUEUE_FAMILY_IGNORED, im, {aspect, 0, (uint32_t)mips, 0, 1}};
    vkCmdPipelineBarrier(c, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, 0, 0, 0, 0, 0, 1, &b); }
static void clear_surface(surf_t *s){
    begin_render(s);
    VkClearAttachment ca[2] = {{VK_IMAGE_ASPECT_COLOR_BIT, 0, {{{0, 0, 0, 1}}}}, {VK_IMAGE_ASPECT_DEPTH_BIT | (dsfmt != VK_FORMAT_D32_SFLOAT ? VK_IMAGE_ASPECT_STENCIL_BIT : 0), 0, {.depthStencil = {1.0f, 0}}}};
    VkClearRect r = {{{0, 0}, {(uint32_t)PX, (uint32_t)PXH}}, 0, 1};
    vkCmdClearAttachments(cmd(), 2, ca, 1, &r); }
static surf_t *surf_find(u32 addr){ addr = akey(addr); for (int i = 0; i < SURF_N; i++) if (surfs[i].used && surfs[i].addr == addr) return &surfs[i]; return 0; }
static void flush_batch(void);
static surf_t *surf_create(u32 addr, int fmt, int stride){
    flush_batch();
    addr = akey(addr); surf_t *s = 0, *old = &surfs[0];
    for (int i = 0; i < SURF_N; i++) { if (!surfs[i].used) { s = &surfs[i]; break; } if (surfs[i].stamp < old->stamp) old = &surfs[i]; }
    if (!s) { s = old; if (rp_surf == s) end_render(); }
    if (!s->img) {
        s->img = img_new(PX, PXH, VK_FORMAT_R8G8B8A8_UNORM, VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT |
                         VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT, 1, VK_IMAGE_ASPECT_COLOR_BIT);
        if (!s->img) return 0;
        end_render(); to_general(cmd(), imgs[s->img].img, VK_IMAGE_ASPECT_COLOR_BIT, 1); }
    s->used = 1; s->addr = addr; s->fmt = fmt; s->stride = stride ? stride : 512; s->psz = fmt == 3 ? 4 : 2; s->drawn = 0; s->stamp = ++surf_stamp;
    clear_surface(s);
    return s; }
static surf_t *surf_for_addr(u32 a, int *y0, int *x0){
    a = akey(a);
    for (int i = 0; i < SURF_N; i++) { surf_t *s = &surfs[i]; if (!s->used || !s->drawn || a < s->addr) continue;
        u32 off = a - s->addr, rowb = (u32)(s->stride * s->psz); if (off >= rowb * 272u || (off % rowb) % (u32)s->psz) continue;
        *y0 = (int)(off / rowb); *x0 = (int)((off % rowb) / (u32)s->psz); return s; }
    return 0; }
static surf_t *target_for(const gfx_state_t *s){
    surf_t *t = surf_find(s->fbaddr); if (!t) t = surf_create(s->fbaddr, s->fbfmt, s->fbstride);
    if (!t) return 0;
    t->stamp = ++surf_stamp; t->drawn = 1; t->fmt = s->fbfmt; t->psz = s->fbfmt == 3 ? 4 : 2; if (s->fbstride) t->stride = s->fbstride; return t; }

/* ------------------------------------------------------------------ pipelines */
enum { PR_MAIN, PR_HW, PR_FILL, PR_SHADOW, PR_PRESENT, PR_FXAA, PR_N };
static VkShaderModule sm_hw_v, sm_main_v, sm_shadow_v, sm_fill_v, sm_fill_f, sm_pres_v, sm_pres_f, sm_fxaa_f, sm_basic_f, sm_fx_f, sm_fxrt_f;
static VkDescriptorSetLayout dsl; static VkPipelineLayout plo;
typedef struct { u8 prog, variant, blend, sc, dc, sa, da, eq, cmask, pad[3]; u32 fmt; } pkey_t;   /* variant: hw skin|lit<<1, shadow skin */
typedef struct { pkey_t k; VkPipeline p; } pent_t;
#define PC_N 1024
static pent_t pcache[PC_N]; static int pc_n;
static VkShaderModule shader(const uint32_t *code, size_t bytes){
    VkShaderModuleCreateInfo ci = {VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO, 0, 0, bytes, code}; VkShaderModule m = 0;
    if (vkCreateShaderModule(dev, &ci, 0, &m) != VK_SUCCESS) fprintf(stderr, "[VK] shader module failed\n"); return m; }
static VkPipeline pipeline(const pkey_t *k){
    for (int i = 0; i < pc_n; i++) if (!memcmp(&pcache[i].k, k, sizeof *k)) return pcache[i].p;
    if (pc_n == PC_N) { fprintf(stderr, "[VK] pipeline cache full\n"); return pcache[0].p; }
    VkShaderModule vs = 0, fs = 0; VkVertexInputBindingDescription vb = {0, 0, VK_VERTEX_INPUT_RATE_VERTEX}; VkVertexInputAttributeDescription va[7]; int nva = 0;
    VkSpecializationMapEntry se[2] = {{0, 0, 4}, {1, 4, 4}}; u32 spec[2] = {k->variant & 1u, (k->variant >> 1) & 1u};
    VkSpecializationInfo si = {2, se, 8, spec};
    switch (k->prog) {
    case PR_MAIN: vs = sm_main_v; fs = sm_basic_f; vb.stride = sizeof(gfx_vtx_t);
        va[nva++] = (VkVertexInputAttributeDescription){0, 0, VK_FORMAT_R32G32B32A32_SFLOAT, offsetof(gfx_vtx_t, x)};
        va[nva++] = (VkVertexInputAttributeDescription){1, 0, VK_FORMAT_R32G32_SFLOAT, offsetof(gfx_vtx_t, u)};
        va[nva++] = (VkVertexInputAttributeDescription){2, 0, VK_FORMAT_R32G32B32A32_SFLOAT, offsetof(gfx_vtx_t, r)};
        va[nva++] = (VkVertexInputAttributeDescription){3, 0, VK_FORMAT_R32_SFLOAT, offsetof(gfx_vtx_t, f)}; break;
    case PR_HW: vs = sm_hw_v; fs = (has_rt && sm_fxrt_f) ? sm_fxrt_f : sm_fx_f; vb.stride = sizeof(gfx_hvtx_t);
        va[nva++] = (VkVertexInputAttributeDescription){0, 0, VK_FORMAT_R32G32B32_SFLOAT, offsetof(gfx_hvtx_t, x)};
        va[nva++] = (VkVertexInputAttributeDescription){1, 0, VK_FORMAT_R32G32B32_SFLOAT, offsetof(gfx_hvtx_t, nx)};
        va[nva++] = (VkVertexInputAttributeDescription){2, 0, VK_FORMAT_R32G32_SFLOAT, offsetof(gfx_hvtx_t, u)};
        va[nva++] = (VkVertexInputAttributeDescription){3, 0, VK_FORMAT_R32G32B32A32_SFLOAT, offsetof(gfx_hvtx_t, r)};
        va[nva++] = (VkVertexInputAttributeDescription){4, 0, VK_FORMAT_R32G32B32A32_SFLOAT, offsetof(gfx_hvtx_t, w)};
        va[nva++] = (VkVertexInputAttributeDescription){5, 0, VK_FORMAT_R32G32B32A32_SFLOAT, offsetof(gfx_hvtx_t, w) + 16};
        va[nva++] = (VkVertexInputAttributeDescription){6, 0, VK_FORMAT_R32G32B32_SFLOAT, offsetof(gfx_hvtx_t, tx)}; break;
    case PR_FILL: vs = sm_fill_v; fs = sm_fill_f; vb.stride = 8; va[nva++] = (VkVertexInputAttributeDescription){0, 0, VK_FORMAT_R32G32_SFLOAT, 0}; break;
    case PR_SHADOW: vs = sm_shadow_v; fs = 0; vb.stride = sizeof(gfx_hvtx_t);
        va[nva++] = (VkVertexInputAttributeDescription){0, 0, VK_FORMAT_R32G32B32_SFLOAT, offsetof(gfx_hvtx_t, x)};
        va[nva++] = (VkVertexInputAttributeDescription){4, 0, VK_FORMAT_R32G32B32A32_SFLOAT, offsetof(gfx_hvtx_t, w)};
        va[nva++] = (VkVertexInputAttributeDescription){5, 0, VK_FORMAT_R32G32B32A32_SFLOAT, offsetof(gfx_hvtx_t, w) + 16}; break;
    case PR_PRESENT: vs = sm_pres_v; fs = sm_pres_f; break;
    case PR_FXAA: vs = sm_pres_v; fs = sm_fxaa_f; break; }
    VkPipelineShaderStageCreateInfo st[2] = {{VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO, 0, 0, VK_SHADER_STAGE_VERTEX_BIT, vs, "main", &si},
                                             {VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO, 0, 0, VK_SHADER_STAGE_FRAGMENT_BIT, fs, "main", 0}};
    VkPipelineVertexInputStateCreateInfo vi = {VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO, 0, 0, nva ? 1u : 0u, &vb, (uint32_t)nva, va};
    VkPipelineInputAssemblyStateCreateInfo ia = {VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO, 0, 0,
        (k->prog == PR_PRESENT || k->prog == PR_FXAA || k->prog == PR_FILL) ? VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP : VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST, 0};
    VkPipelineViewportStateCreateInfo vp = {VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO, 0, 0, 1, 0, 1, 0};
    VkPipelineRasterizationStateCreateInfo rs = {VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO, 0, 0, 0, 0, VK_POLYGON_MODE_FILL,
        VK_CULL_MODE_NONE, VK_FRONT_FACE_CLOCKWISE, 0, 0, 0, 0, 1.0f};
    VkPipelineMultisampleStateCreateInfo ms = {VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO, 0, 0, VK_SAMPLE_COUNT_1_BIT, 0, 0, 0, 0, 0};
    VkPipelineDepthStencilStateCreateInfo ds = {VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO, 0, 0, 0, 0, VK_COMPARE_OP_ALWAYS, 0, 0, {0}, {0}, 0, 1};
    VkPipelineColorBlendAttachmentState ba = {k->blend, (VkBlendFactor)k->sc, (VkBlendFactor)k->dc, (VkBlendOp)k->eq, (VkBlendFactor)k->sa, (VkBlendFactor)k->da, (VkBlendOp)k->eq, k->cmask};
    VkPipelineColorBlendStateCreateInfo cb = {VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO, 0, 0, 0, VK_LOGIC_OP_COPY, k->prog == PR_SHADOW ? 0u : 1u, &ba, {0, 0, 0, 0}};
    static const VkDynamicState dyn[] = {VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR, VK_DYNAMIC_STATE_CULL_MODE, VK_DYNAMIC_STATE_FRONT_FACE,
        VK_DYNAMIC_STATE_DEPTH_TEST_ENABLE, VK_DYNAMIC_STATE_DEPTH_WRITE_ENABLE, VK_DYNAMIC_STATE_DEPTH_COMPARE_OP, VK_DYNAMIC_STATE_STENCIL_TEST_ENABLE,
        VK_DYNAMIC_STATE_STENCIL_OP, VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK, VK_DYNAMIC_STATE_STENCIL_WRITE_MASK, VK_DYNAMIC_STATE_STENCIL_REFERENCE,
        VK_DYNAMIC_STATE_BLEND_CONSTANTS};
    VkPipelineDynamicStateCreateInfo dy = {VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO, 0, 0, sizeof dyn / sizeof dyn[0], dyn};
    VkFormat cf = (VkFormat)k->fmt;
    VkPipelineRenderingCreateInfo pr = {VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO, 0, 0, k->prog == PR_SHADOW ? 0u : 1u, &cf,
        (k->prog == PR_PRESENT || k->prog == PR_FXAA) ? VK_FORMAT_UNDEFINED : (k->prog == PR_SHADOW ? VK_FORMAT_D32_SFLOAT : dsfmt),
        (k->prog == PR_PRESENT || k->prog == PR_FXAA || k->prog == PR_SHADOW || dsfmt == VK_FORMAT_D32_SFLOAT) ? VK_FORMAT_UNDEFINED : dsfmt};
    VkGraphicsPipelineCreateInfo gi = {VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO, &pr, 0, fs ? 2u : 1u, st, &vi, &ia, 0, &vp, &rs, &ms, &ds, &cb, &dy, plo, 0, 0, 0, -1};
    VkPipeline p = 0;
    if (vkCreateGraphicsPipelines(dev, 0, 1, &gi, 0, &p) != VK_SUCCESS) fprintf(stderr, "[VK] pipeline (program %d) failed\n", k->prog);
    pcache[pc_n].k = *k; pcache[pc_n].p = p; pc_n++; return p; }

/* ------------------------------------------------------------------ samplers */
static VkSampler samp[16];            /* [linear | clamp_u << 1 | clamp_v << 2 | mip << 3] */
static VkSampler sampler(int linear, int cu, int cv, int mip){
    int i = (linear ? 1 : 0) | (cu ? 2 : 0) | (cv ? 4 : 0) | (mip ? 8 : 0); if (samp[i]) return samp[i];
    VkSamplerCreateInfo si = {VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO, 0, 0, linear ? VK_FILTER_LINEAR : VK_FILTER_NEAREST, linear ? VK_FILTER_LINEAR : VK_FILTER_NEAREST,
        mip ? VK_SAMPLER_MIPMAP_MODE_LINEAR : VK_SAMPLER_MIPMAP_MODE_NEAREST, cu ? VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE : VK_SAMPLER_ADDRESS_MODE_REPEAT,
        cv ? VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE : VK_SAMPLER_ADDRESS_MODE_REPEAT, VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE, 0,
        mip ? 1u : 0u, mip ? 16.0f : 1.0f, 0, VK_COMPARE_OP_ALWAYS, 0, mip ? 16.0f : 0.25f, VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE, 0};
    if (mip && props.limits.maxSamplerAnisotropy < 16.0f) si.maxAnisotropy = props.limits.maxSamplerAnisotropy;
    vkCreateSampler(dev, &si, 0, &samp[i]); return samp[i]; }

/* ------------------------------------------------------------------ command buffers, frames */
static void frame_begin(frame_t *f){
    if (f->recording) return;
    if (f->submitted) { vkWaitForFences(dev, 1, &f->fence, VK_TRUE, UINT64_MAX); f->submitted = 0; }
    for (int k = 0; k < f->ndead; k++) img_free_now(f->dead[k]); f->ndead = 0;
    vkResetFences(dev, 1, &f->fence); vkResetCommandBuffer(f->cb, 0);
    VkCommandBufferBeginInfo bi = {VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO, 0, VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT, 0};
    vkBeginCommandBuffer(f->cb, &bi); f->recording = 1; f->ring_at = 0; dyn_dirty = 1; }
static VkCommandBuffer cmd(void){ frame_t *f = &fr[fi]; if (!f->recording) frame_begin(f); return f->cb; }
static void submit(VkSemaphore wait, VkSemaphore signal){
    frame_t *f = &fr[fi]; if (!f->recording) return;
    end_render(); vkEndCommandBuffer(f->cb);
    VkPipelineStageFlags ws = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    VkSubmitInfo si = {VK_STRUCTURE_TYPE_SUBMIT_INFO, 0, wait ? 1u : 0u, &wait, &ws, 1, &f->cb, signal ? 1u : 0u, &signal};
    if (vkQueueSubmit(queue, 1, &si, f->fence) != VK_SUCCESS) fprintf(stderr, "[VK] vkQueueSubmit failed\n");
    f->recording = 0; f->submitted = 1; }
static void next_frame(void){ fi = (fi + 1) % FR; frame_begin(&fr[fi]); }
/* finish everything recorded so far (readbacks, a full ring): submit and wait, then go on in the same frame slot */
static void sync_flush(void){
    frame_t *f = &fr[fi]; if (!f->recording) return;
    submit(0, 0); vkWaitForFences(dev, 1, &f->fence, VK_TRUE, UINT64_MAX); f->submitted = 0; frame_begin(f); }

/* ------------------------------------------------------------------ texture cache (as gfx_gl.c) */
#define TC_N 1024
typedef struct { gtex_key_t k; u32 hash; unsigned id, epoch, stamp, mr, nrm, up_ep; long bytes; int used, hd, hnext; } tent_t;
static tent_t tc[TC_N]; static unsigned tc_stamp; static u32 *scratch; static long tc_bytes;
static unsigned last_mr, last_nrm; static int last_hd;
void gfx_tex_maps(unsigned *mr, unsigned *nrm, int *hd){ *mr = last_mr; *nrm = last_nrm; *hd = last_hd; }
#define TC_HB 4096
static int tc_head[TC_HB];
static u32 tk_hash(const gtex_key_t *k){ u32 h = k->addr * 2654435761u ^ (u32)k->w * 40503u ^ (u32)k->h * 9973u ^ (u32)k->fmt * 131u ^ (u32)k->swz ^ (u32)k->bufw * 7919u ^ k->clut * 2246822519u; return (h ^ (h >> 15)) & (TC_HB - 1); }
static int tk_eq(const gtex_key_t *a, const gtex_key_t *b){ return a->addr == b->addr && a->w == b->w && a->h == b->h && a->fmt == b->fmt && a->swz == b->swz && a->bufw == b->bufw && a->clut == b->clut; }
static void tc_link(tent_t *e){ u32 h = tk_hash(&e->k); e->hnext = tc_head[h]; tc_head[h] = (int)(e - tc) + 1; }
static void tc_unlink(tent_t *e){ u32 h = tk_hash(&e->k); int me = (int)(e - tc) + 1; int *pp = &tc_head[h];
    while (*pp) { if (*pp == me) { *pp = e->hnext; break; } pp = &tc[*pp - 1].hnext; } e->hnext = 0; }
static void tent_free(tent_t *e){ if (!e->used) return; tc_unlink(e); img_free(e->id); img_free(e->mr); img_free(e->nrm); tc_bytes -= e->bytes; memset(e, 0, sizeof *e); }
static u32 avg_rgba(const u32 *px, int n){
    u64 r = 0, g = 0, b = 0, a = 0; int step = n > 4096 ? n / 4096 : 1, c = 0;
    for (int i = 0; i < n; i += step, c++) { u32 v = px[i]; r += v & 255; g += (v >> 8) & 255; b += (v >> 16) & 255; a += v >> 24; }
    if (!c) return 0xFF808080u; return (u32)(r / c) | (u32)(g / c) << 8 | (u32)(b / c) << 16 | (u32)(a / c) << 24; }
/* RGBA8 pixels -> image level 0 (+ the mip chain by blits when mips > 1) */
static void upload(unsigned id, const u32 *px, int w, int h){
    vimg_t *m = &imgs[id]; u8 *p; VkDeviceSize at = ring_alloc((VkDeviceSize)w * h * 4, 16, &p); if (!p) return;
    memcpy(p, px, (size_t)w * h * 4); m->avg = avg_rgba(px, w * h);
    end_render(); VkCommandBuffer c = cmd();
    VkBufferImageCopy r = {at, 0, 0, {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1}, {0, 0, 0}, {(uint32_t)w, (uint32_t)h, 1}};
    vkCmdCopyBufferToImage(c, fr[fi].ring.buf, m->img, VK_IMAGE_LAYOUT_GENERAL, 1, &r);
    for (int l = 1; l < m->mips; l++) {
        barrier_all(c);
        int sw = w >> (l - 1), sh = h >> (l - 1), dw = w >> l, dh = h >> l; if (sw < 1) sw = 1; if (sh < 1) sh = 1; if (dw < 1) dw = 1; if (dh < 1) dh = 1;
        VkImageBlit b = {{VK_IMAGE_ASPECT_COLOR_BIT, (uint32_t)l - 1, 0, 1}, {{0, 0, 0}, {sw, sh, 1}}, {VK_IMAGE_ASPECT_COLOR_BIT, (uint32_t)l, 0, 1}, {{0, 0, 0}, {dw, dh, 1}}};
        vkCmdBlitImage(c, m->img, VK_IMAGE_LAYOUT_GENERAL, m->img, VK_IMAGE_LAYOUT_GENERAL, 1, &b, VK_FILTER_LINEAR); }
    barrier_all(c); st_texup++; }
static unsigned tex_image(int w, int h, int mips){
    unsigned id = img_new(w, h, VK_FORMAT_R8G8B8A8_UNORM, VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT, mips, VK_IMAGE_ASPECT_COLOR_BIT);
    if (id) { end_render(); to_general(cmd(), imgs[id].img, VK_IMAGE_ASPECT_COLOR_BIT, mips); }
    return id; }

extern int rs_texrep_active(void); extern int rs_texrep_find(u32 key, u32 pal, const char *paths[3]); extern int rs_texrep_dumping(void);
extern void rs_texrep_dump(u32 key, u32 pal, int w, int h, const u32 *rgba); extern u8 *rs_png_load(const char *path, int *w, int *h); extern u32 rs_crc32(const u8 *p, size_t n);
extern int rs_patch_mod_tex_max(void);
static int log2i(int v){ int l = 0; while ((1 << (l + 1)) <= v) l++; return l; }
static unsigned upload_png(const char *path, long *bytes){
    int w, h; u8 *px = rs_png_load(path, &w, &h); if (!px) { fprintf(stderr, "[MOD] cannot read %s\n", path); return 0; }
    int mx = rs_patch_mod_tex_max();
    while (w > mx || h > mx) { int nw = w > 1 ? w / 2 : 1, nh = h > 1 ? h / 2 : 1; u8 *o = malloc((size_t)nw * nh * 4);
        for (int y = 0; y < nh; y++) for (int x = 0; x < nw; x++) for (int ch = 0; ch < 4; ch++) o[(y * nw + x) * 4 + ch] = px[((y * 2) * w + x * 2) * 4 + ch];
        free(px); px = o; w = nw; h = nh; }
    int mips = 1 + log2i(w > h ? w : h);
    unsigned id = tex_image(w, h, mips); if (id) upload(id, (const u32 *)px, w, h);
    free(px); *bytes += (long)w * h * 4 * 4 / 3; return id; }
static u32 tex_key(const gtex_key_t *k){
    int f = k->fmt; size_t bytes;
    if (f >= 8) bytes = (size_t)((k->w + 3) / 4) * ((k->h + 3) / 4) * (f == 8 ? 8 : 16);
    else { int bpp = (f == 3 || f == 7) ? 32 : (f == 4 ? 4 : (f == 5 ? 8 : 16)); int bw = k->bufw > k->w ? k->bufw : k->w; bytes = (size_t)bw * k->h * bpp / 8; }
    size_t base = GADDR(gfx_vram(k->addr) & 0x0FFFFFFFu); if (base >= GMEM_SIZE || bytes > GMEM_SIZE - base) return 0;
    return rs_crc32(g_mem + base, bytes); }
static int try_replace(tent_t *e, const gtex_key_t *k){
    if (!rs_texrep_active()) return 0;
    u32 key = tex_key(k); const char *p[3]; if (!rs_texrep_find(key, k->clut, p)) return 0;
    long bytes = 0; unsigned id = upload_png(p[0], &bytes); if (!id) return 0;
    if (rs_setting_int("RS_MOD_LOG", 0)) fprintf(stderr, "[MOD] texture %08x-%08x -> %s%s%s\n", key, k->clut, p[0], p[1] ? " +mr" : "", p[2] ? " +normal" : "");
    img_free(e->id); e->id = id; e->hd = 1;
    img_free(e->mr); img_free(e->nrm); e->mr = e->nrm = 0;
    if (p[1]) e->mr = upload_png(p[1], &bytes);
    if (p[2]) e->nrm = upload_png(p[2], &bytes);
    tc_bytes += bytes - e->bytes; e->bytes = bytes; return 1; }

unsigned gfx_tex_acquire(const gtex_key_t *k, const gtex_src_t *src, float uvs[4]){
    uvs[0] = uvs[1] = 1; uvs[2] = uvs[3] = 0; last_mr = last_nrm = 0; last_hd = 0;
    if (k->w <= 0 || k->h <= 0 || k->w > 1024 || k->h > 1024) return 0;
    int y0, x0; surf_t *s = surf_for_addr(k->addr, &y0, &x0);
    if (s) { if (s == rp_surf) return 0; flush_batch(); uvs[0] = (float)k->w / SZ; uvs[1] = (float)k->h / SURF_H; uvs[2] = (float)y0 / SURF_H; uvs[3] = (float)x0 / SZ; return s->img; }
    tent_t *e = 0, *old = &tc[0];
    for (int i = tc_head[tk_hash(k)]; i; i = tc[i - 1].hnext) if (tk_eq(&tc[i - 1].k, k)) { e = &tc[i - 1]; break; }
    if (!e) for (int i = 0; i < TC_N; i++) { tent_t *t = &tc[i]; if (!t->used) { old = t; break; } if (t->stamp < old->stamp) old = t; }
#define TEX_RET(e) do { last_mr = (e)->mr; last_nrm = (e)->nrm; last_hd = (e)->hd; return (e)->id; } while (0)
    if (e && e->epoch == rs_gfx_epoch) { e->stamp = ++tc_stamp; TEX_RET(e); }
    u64 t_h = rs_perf_us(); u32 h = src->hash(src->ud); rs_perf.hash_n++; rs_perf.hash_us += rs_perf_us() - t_h;
    if (e && e->hash == h) { e->epoch = rs_gfx_epoch; e->stamp = ++tc_stamp; TEX_RET(e); }
    flush_batch();
    long need = (long)k->w * k->h * 4;
    if (!e) {
        static long budget = -1; if (budget < 0) { extern int rs_patch_tex_budget_mb(void); budget = (long)rs_patch_tex_budget_mb() * 1048576L; }
        while (tc_bytes + need > budget) { tent_t *v = 0; for (int i = 0; i < TC_N; i++) if (tc[i].used && tc[i].epoch != rs_gfx_epoch && (!v || tc[i].stamp < v->stamp)) v = &tc[i];
            if (!v) break; tent_free(v); old = v; }
        e = old; tent_free(e); e->k = *k; e->used = 1; e->bytes = need; tc_bytes += need; tc_link(e); }
    else if (e->hd || imgs[e->id].w != k->w) { tent_t keep = *e; keep.bytes = 0; tent_free(e); *e = keep; e->hnext = 0; e->hd = 0; e->id = e->mr = e->nrm = 0; e->bytes = need; tc_bytes += need; tc_link(e); }
    e->hash = h; e->epoch = rs_gfx_epoch; e->stamp = ++tc_stamp;
    if (try_replace(e, k)) TEX_RET(e);
    if (!scratch) scratch = malloc(1024 * 1024 * 4);
    u64 t_u = rs_perf_us(); src->decode(scratch, src->ud);
    if (!e->id) e->id = tex_image(k->w, k->h, 1);
    if (e->id) upload(e->id, scratch, k->w, k->h);
    e->up_ep = rs_gfx_epoch;
    if (rs_texrep_dumping()) rs_texrep_dump(tex_key(k), k->clut, k->w, k->h, scratch);
    rs_perf.up_n++; rs_perf.up_us += rs_perf_us() - t_u;
    TEX_RET(e); }
#undef TEX_RET

/* ------------------------------------------------------------------ per-draw parameters (vk/common.glsl) */
typedef struct {
    float cfg0[4], cfg1[4], env[4], fog[4], mul[4], uvs[4];
    float mvp[16], wvz[4], wld[12], wv[12];
    float vp0[4], vp1[4], vp2[4], uvt[4], fogp[4], defc[4];
    float mamb[4], mdif[4], memi[4], msca[4], lfl[4];
    float lpos[16], latt[16], lspot[16], la[16], ld[16];
    float shm[16], shp[4], pbr[4], sun[4], sunc[4], rt[4], vinv[12], sunw[4], amb[4];
    float bone[96];
} ubo_t;

/* ------------------------------------------------------------------ shadows + ray tracing state */
/* receivers' normal offset against self-shadowing ("acne"): RS_SHADOW_OFFSET shadow-map texels (x 1..3 by the slope); 4 at
 * 4096 px / 60 m is 12 cm on flat ground.  The casters are the previous frame's geometry, so less shows stripes on slopes. */
static float sh_offset(void){ static float o = -1.0f; if (o < 0.0f) { extern int rs_setting_int(const char *, int); o = (float)rs_setting_int("RS_SHADOW_OFFSET", 4); if (o < 0.0f) o = 0.0f; } return o; }
static int sh_on, sh_res = 1024; static float sh_range = 40.0f, sh_strength = 0.45f, sh_sun[3] = {0, 1, 0};
static unsigned sh_img; static float sh_mat[16]; static int sh_valid;
typedef struct { int first, count, skin; float wv[12], bone[96]; u32 col; } shrec_t;
static shrec_t *shr; static int shr_n, shr_cap; static gfx_hvtx_t *shv; static int shv_n, shv_cap; static float sh_view[12]; static int sh_cam_ok, sh_view_ok, sh_view_any;
static int pbr_ok; static float pbr_sunc[3] = {1, 0.95f, 0.85f}, pbr_spec = 1;
static int sh_caster(const gfx_state_t *st){ return st->ztest && st->zwrite && !st->blend && !st->atest && (st->cmr || st->cmg || st->cmb); }
static void norm3(float *v){ float l = sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]); if (l > 1e-9f) { v[0] /= l; v[1] /= l; v[2] /= l; } }
static int is_identity(const float *v){ static const float I[12] = {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0}; for (int i = 0; i < 12; i++) if (fabsf(v[i] - I[i]) > 1e-4f) return 0; return 1; }
static void sh_record(const gfx_state_t *st, const gfx_hw_t *hw, const gfx_hvtx_t *v, int n){
    if (!is_identity(hw->view)) { memcpy(sh_view, hw->view, sizeof sh_view); sh_view_any = 1; }
    if (!(sh_on || rt_shadows || rt_refl) || !sh_caster(st) || n <= 0) return;
    if (shv_n + n > shv_cap) { int nc = (shv_n + n) * 2; if (nc < 65536) nc = 65536; gfx_hvtx_t *t = realloc(shv, sizeof *shv * (size_t)nc); if (!t) return; shv = t; shv_cap = nc; }
    if (shr_n + 1 > shr_cap) { int nc = shr_cap ? shr_cap * 2 : 512; shrec_t *t = realloc(shr, sizeof *shr * (size_t)nc); if (!t) return; shr = t; shr_cap = nc; }
    u32 col = st->tex && st->texid && st->texid < IMG_N ? imgs[st->texid].avg : 0xFFFFFFFFu;
    shrec_t *r = &shr[shr_n]; int merge = shr_n > 0 && shr[shr_n - 1].skin == hw->skin && shr[shr_n - 1].col == col && !memcmp(shr[shr_n - 1].wv, hw->wv, sizeof r->wv) && (!hw->skin || !memcmp(shr[shr_n - 1].bone, hw->bone, sizeof r->bone));
    if (merge) shr[shr_n - 1].count += n;
    else { r->first = shv_n; r->count = n; r->skin = hw->skin; r->col = col; memcpy(r->wv, hw->wv, sizeof r->wv); if (hw->skin) memcpy(r->bone, hw->bone, sizeof r->bone); shr_n++; }
    memcpy(&shv[shv_n], v, sizeof *v * (size_t)n); shv_n += n;
    sh_cam_ok = 1; if (!is_identity(hw->view)) sh_view_ok = 1; }

/* acceleration structures: one BLAS (all opaque triangles of the last frame, world space) and a TLAS with one instance, per frame slot */
typedef struct { vbuf_t vb, scratch, blas_buf, tlas_buf, inst, hitcol; VkAccelerationStructureKHR blas, tlas; int ntri, valid; unsigned frame; } rtas_t;
static unsigned vk_frame_no = 1;                                  /* Vulkan frames (presents): an acceleration structure is built at most once per frame */
static rtas_t as[FR], as_dummy; static float rt_vinv[12]; static float rt_len = 200.0f;

static void inv_view(const float *V, float out[12]);
/* ------------------------------------------------------------------ batching and drawing */
static gfx_vtx_t *bv; static int bn, bcap; static gfx_state_t bst; static int bactive;
static gfx_hvtx_t *bhv; static int bhcap, bkind; static gfx_hw_t bhw;          /* bkind 0 = CPU vertices (bv), 1 = HW T&L (bhv + bhw) */
static VkBlendFactor bfactor(int f, int is_src, u32 fix, int fb565, float *bc, int *use_const){
    switch (f) {
    case 0: return is_src ? VK_BLEND_FACTOR_DST_COLOR : VK_BLEND_FACTOR_SRC_COLOR;
    case 1: return is_src ? VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR : VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR;
    case 2: case 6: return VK_BLEND_FACTOR_SRC_ALPHA;
    case 3: case 7: return VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    case 4: case 8: return fb565 ? VK_BLEND_FACTOR_ONE : VK_BLEND_FACTOR_DST_ALPHA;
    case 5: case 9: return fb565 ? VK_BLEND_FACTOR_ZERO : VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
    default:
        if ((fix & 0xFFFFFF) == 0) return VK_BLEND_FACTOR_ZERO;
        if ((fix & 0xFFFFFF) == 0xFFFFFF) return VK_BLEND_FACTOR_ONE;
        if (*use_const && (bc[3] != (float)(fix & 0xFFFFFF))) { u32 other = ((u32)bc[3]) ^ 0xFFFFFF; if ((fix & 0xFFFFFF) == other) return VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR; }
        if (!*use_const) { bc[0] = (fix & 255) / 255.0f; bc[1] = ((fix >> 8) & 255) / 255.0f; bc[2] = ((fix >> 16) & 255) / 255.0f; bc[3] = (float)(fix & 0xFFFFFF); *use_const = 1; }
        return VK_BLEND_FACTOR_CONSTANT_COLOR; } }
static const VkCompareOp cmpop[8] = {VK_COMPARE_OP_NEVER, VK_COMPARE_OP_ALWAYS, VK_COMPARE_OP_EQUAL, VK_COMPARE_OP_NOT_EQUAL, VK_COMPARE_OP_LESS,
                                     VK_COMPARE_OP_LESS_OR_EQUAL, VK_COMPARE_OP_GREATER, VK_COMPARE_OP_GREATER_OR_EQUAL};
static const VkStencilOp sop[8] = {VK_STENCIL_OP_KEEP, VK_STENCIL_OP_ZERO, VK_STENCIL_OP_REPLACE, VK_STENCIL_OP_INVERT, VK_STENCIL_OP_INCREMENT_AND_CLAMP,
                                   VK_STENCIL_OP_DECREMENT_AND_CLAMP, VK_STENCIL_OP_KEEP, VK_STENCIL_OP_KEEP};
/* render state: the pipeline for (program, blend, colour mask) and the dynamic state; returns the colour multiplier the blend needs */
static void bind_state(const gfx_state_t *s, int prog, int variant, float mul[3]){
    VkCommandBuffer c = cmd();
    pkey_t k; memset(&k, 0, sizeof k); k.prog = (u8)prog; k.variant = (u8)variant; k.fmt = VK_FORMAT_R8G8B8A8_UNORM;
    float bc[4] = {0, 0, 0, 0}; int uc = 0; mul[0] = mul[1] = mul[2] = 1;
    if (s->blend) {
        int fb565 = s->fbfmt == 0;
        VkBlendFactor sf = bfactor(s->bsrc, 1, s->bfixa, fb565, bc, &uc), df = bfactor(s->bdst, 0, s->bfixb, fb565, bc, &uc);
        k.blend = 1; k.sc = (u8)sf; k.dc = (u8)df;
        k.sa = (u8)((sf == VK_BLEND_FACTOR_DST_COLOR || sf == VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR) ? VK_BLEND_FACTOR_ONE : sf);
        k.da = (u8)((df == VK_BLEND_FACTOR_SRC_COLOR || df == VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR) ? VK_BLEND_FACTOR_ONE : df);
        k.eq = (u8)(s->beq == 1 ? VK_BLEND_OP_SUBTRACT : (s->beq == 2 ? VK_BLEND_OP_REVERSE_SUBTRACT : VK_BLEND_OP_ADD)); }
    k.cmask = (u8)((s->cmr ? 1 : 0) | (s->cmg ? 2 : 0) | (s->cmb ? 4 : 0) | (s->cma ? 8 : 0));
    vkCmdBindPipeline(c, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline(&k));
    if (uc) { float b4[4] = {bc[0], bc[1], bc[2], 1.0f}; vkCmdSetBlendConstants(c, b4); }
    VkViewport vp = {0, 0, (float)PX, (float)PX, 0, 1}; vkCmdSetViewport(c, 0, 1, &vp);
    int x1 = s->sx1 < 0 ? 0 : s->sx1, y1 = s->sy1 < 0 ? 0 : s->sy1, x2 = s->sx2 > SZ - 1 ? SZ - 1 : s->sx2, y2 = s->sy2 > SURF_H - 1 ? SURF_H - 1 : s->sy2;
    VkRect2D sc = {{x1 * RS_S, y1 * RS_S}, {(uint32_t)(x2 >= x1 ? (x2 - x1 + 1) * RS_S : 0), (uint32_t)(y2 >= y1 ? (y2 - y1 + 1) * RS_S : 0)}};
    vkCmdSetScissor(c, 0, 1, &sc);
    vkCmdSetDepthTestEnable(c, s->ztest != 0); vkCmdSetDepthWriteEnable(c, s->ztest && s->zwrite); vkCmdSetDepthCompareOp(c, s->ztest ? cmpop[s->zfunc & 7] : VK_COMPARE_OP_ALWAYS);
    vkCmdSetCullMode(c, s->cull_en ? (s->cull_mode == 1 ? VK_CULL_MODE_BACK_BIT : VK_CULL_MODE_FRONT_BIT) : VK_CULL_MODE_NONE);
    vkCmdSetFrontFace(c, VK_FRONT_FACE_CLOCKWISE);                 /* = GL's counter-clockwise (Vulkan's y axis points down) */
    int st = s->sten && dsfmt != VK_FORMAT_D32_SFLOAT; vkCmdSetStencilTestEnable(c, st);
    if (st) { vkCmdSetStencilOp(c, VK_STENCIL_FACE_FRONT_AND_BACK, sop[s->sfail & 7], sop[s->szpass & 7], sop[s->szfail & 7], cmpop[s->sfunc & 7]);
        vkCmdSetStencilCompareMask(c, VK_STENCIL_FACE_FRONT_AND_BACK, (uint32_t)s->smask); vkCmdSetStencilWriteMask(c, VK_STENCIL_FACE_FRONT_AND_BACK, (uint32_t)s->swmask);
        vkCmdSetStencilReference(c, VK_STENCIL_FACE_FRONT_AND_BACK, (uint32_t)s->sref); }
    else { vkCmdSetStencilOp(c, VK_STENCIL_FACE_FRONT_AND_BACK, VK_STENCIL_OP_KEEP, VK_STENCIL_OP_KEEP, VK_STENCIL_OP_KEEP, VK_COMPARE_OP_ALWAYS);
        vkCmdSetStencilCompareMask(c, VK_STENCIL_FACE_FRONT_AND_BACK, 0); vkCmdSetStencilWriteMask(c, VK_STENCIL_FACE_FRONT_AND_BACK, 0); vkCmdSetStencilReference(c, VK_STENCIL_FACE_FRONT_AND_BACK, 0); } }
static unsigned white_img;
/* descriptors: parameters at ring offset uo, the textures */
static void push_desc(VkDeviceSize uo, unsigned tex, VkSampler ts, unsigned mr, unsigned nm, int fx){
    VkDescriptorBufferInfo ub = {fr[fi].ring.buf, uo, sizeof(ubo_t)};
    VkDescriptorImageInfo ti = {ts, imgs[tex ? tex : white_img].view, VK_IMAGE_LAYOUT_GENERAL};
    VkSampler lin = sampler(1, 1, 1, 0), lr = sampler(1, 0, 0, 1);
    VkDescriptorImageInfo shi = {sampler(0, 1, 1, 0), imgs[sh_img ? sh_img : white_img].view, VK_IMAGE_LAYOUT_GENERAL};
    VkDescriptorImageInfo mri = {lr, imgs[mr ? mr : (tex ? tex : white_img)].view, VK_IMAGE_LAYOUT_GENERAL}, nmi = {lr, imgs[nm ? nm : (tex ? tex : white_img)].view, VK_IMAGE_LAYOUT_GENERAL};
    (void)lin;
    VkWriteDescriptorSet w[7]; int n = 0;
    w[n++] = (VkWriteDescriptorSet){VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET, 0, 0, 0, 0, 1, VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, 0, &ub, 0};
    w[n++] = (VkWriteDescriptorSet){VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET, 0, 0, 1, 0, 1, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, &ti, 0, 0};
    if (fx) {
        w[n++] = (VkWriteDescriptorSet){VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET, 0, 0, 2, 0, 1, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, &shi, 0, 0};
        w[n++] = (VkWriteDescriptorSet){VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET, 0, 0, 3, 0, 1, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, &mri, 0, 0};
        w[n++] = (VkWriteDescriptorSet){VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET, 0, 0, 4, 0, 1, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, &nmi, 0, 0}; }
    VkWriteDescriptorSetAccelerationStructureKHR wa; VkDescriptorBufferInfo hb;
    if (fx && has_rt) {
        rtas_t *a = &as[fi]; rtas_t *any = (a->valid && a->tlas) ? a : &as_dummy;   /* the shader's descriptors must always be valid */
        if (any->tlas) {
            wa = (VkWriteDescriptorSetAccelerationStructureKHR){VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR, 0, 1, &any->tlas};
            w[n++] = (VkWriteDescriptorSet){VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET, &wa, 0, 5, 0, 1, VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR, 0, 0, 0};
            hb = (VkDescriptorBufferInfo){any->hitcol.buf, 0, VK_WHOLE_SIZE};
            w[n++] = (VkWriteDescriptorSet){VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET, 0, 0, 6, 0, 1, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, 0, &hb, 0}; } }
    vkCmdPushDescriptorSetKHR(cmd(), VK_PIPELINE_BIND_POINT_GRAPHICS, plo, 0, (uint32_t)n, w); }
static void fill_frag_params(ubo_t *u, const gfx_state_t *s, const float mul[3]){
    int use = s->tex && s->texid;
    u->cfg0[0] = use ? 1.0f : 0.0f; u->cfg0[1] = (float)s->tfunc; u->cfg0[2] = (float)s->trgba; u->cfg0[3] = (float)s->tdbl;
    u->cfg1[0] = s->atest ? (float)s->afunc : 1.0f; u->cfg1[1] = (float)s->aref;
    u->env[0] = (s->tenv & 255) / 255.0f; u->env[1] = ((s->tenv >> 8) & 255) / 255.0f; u->env[2] = ((s->tenv >> 16) & 255) / 255.0f; u->env[3] = 1;
    memcpy(u->uvs, s->uvs, sizeof u->uvs);
    u->mul[0] = mul[0]; u->mul[1] = mul[1]; u->mul[2] = mul[2]; u->mul[3] = 1;
    u->fog[0] = (s->fogcol & 255) / 255.0f; u->fog[1] = ((s->fogcol >> 8) & 255) / 255.0f; u->fog[2] = ((s->fogcol >> 16) & 255) / 255.0f; u->fog[3] = s->fog ? 1.0f : 0.0f; }
static VkSampler tex_sampler(const gfx_state_t *s){ int use = s->tex && s->texid; return sampler(use && (s->tfilter || s->texhd), s->tclampu, s->tclampv, s->texhd && imgs[s->texid].mips > 1); }

static void flush_batch(void){
    if (!bactive) return; bactive = 0;
    if (bn <= 0) { bn = 0; return; }
    surf_t *t = target_for(&bst); if (!t) { bn = 0; return; }
    float mul[3];
    u8 *up; VkDeviceSize uo = ring_alloc(sizeof(ubo_t), props.limits.minUniformBufferOffsetAlignment > 16 ? props.limits.minUniformBufferOffsetAlignment : 16, &up);
    if (!up) { bn = 0; return; }
    ubo_t *u = (ubo_t *)up; memset(u, 0, sizeof *u);
    size_t vsz = bkind == 1 ? sizeof(gfx_hvtx_t) : sizeof(gfx_vtx_t); u8 *vp; VkDeviceSize vo = ring_alloc(vsz * (size_t)bn, 16, &vp);
    if (!vp) { bn = 0; return; }
    begin_render(t); VkCommandBuffer c = cmd();
    if (bkind == 1) {
        const gfx_hw_t *h = &bhw; memcpy(vp, bhv, vsz * (size_t)bn);
        bind_state(&bst, PR_HW, h->skin | (h->lit << 1), mul); fill_frag_params(u, &bst, mul);
        memcpy(u->mvp, h->mvp, sizeof u->mvp); memcpy(u->wvz, h->wvz, sizeof u->wvz); memcpy(u->wld, h->wld, sizeof u->wld); memcpy(u->wv, h->wv, sizeof u->wv);
        memcpy(u->vp0, h->vp0, 16); memcpy(u->vp1, h->vp1, 16); memcpy(u->vp2, h->vp2, 16); memcpy(u->uvt, h->uvt, 16); memcpy(u->fogp, h->fogp, 16);
        memcpy(u->mamb, h->mamb, 16); memcpy(u->mdif, h->mdif, 16); memcpy(u->memi, h->memi, 16); memcpy(u->msca, h->msca, 16); memcpy(u->lfl, h->lfl, 16);
        memcpy(u->lpos, h->lpos, 64); memcpy(u->latt, h->latt, 64); memcpy(u->lspot, h->lspot, 64); memcpy(u->la, h->la, 64); memcpy(u->ld, h->ld, 64);
        if (h->skin) memcpy(u->bone, h->bone, sizeof u->bone);
        int rcv = bst.ztest && !bst.blend;
        int sm = sh_on && sh_valid && rcv, rts = rt_shadows && rcv;
        if (sm) memcpy(u->shm, sh_mat, sizeof u->shm);
        u->shp[0] = 1.0f / (float)sh_res; u->shp[1] = 1.0f / (3.0f * (float)sh_res); u->shp[2] = sh_strength; u->shp[3] = (sm || rts) ? 1.0f : 0.0f;
        const float *V = sh_view_any ? sh_view : (const float[12]){1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0};
        float sv[3]; for (int k = 0; k < 3; k++) sv[k] = sh_sun[0] * V[k] + sh_sun[1] * V[3 + k] + sh_sun[2] * V[6 + k]; norm3(sv);
        u->sun[0] = sv[0]; u->sun[1] = sv[1]; u->sun[2] = sv[2];
        u->sunc[0] = pbr_sunc[0]; u->sunc[1] = pbr_sunc[1]; u->sunc[2] = pbr_sunc[2]; u->sunc[3] = 1;
        int pbr = pbr_ok && bst.tex && (bst.texmr || bst.texn) && h->lfl[3] > 0.5f;
        if (pbr) { u->pbr[0] = bst.texmr ? 1.0f : 0.0f; u->pbr[1] = bst.texn ? 1.0f : 0.0f; u->pbr[2] = pbr_spec; u->pbr[3] = 1; }
        u->rt[0] = rts ? 1.0f : 0.0f; u->rt[1] = rt_refl ? 1.0f : 0.0f; u->rt[2] = rt_len; u->rt[3] = (as[fi].valid && sh_view_any && !getenv("RS_RT_NOTRACE")) ? 1.0f : 0.0f;
        if (has_rt) { static float lv[12] = {9}; if (memcmp(lv, sh_view, sizeof lv)) { memcpy(lv, sh_view, sizeof lv); inv_view(sh_view, rt_vinv); } }
        memcpy(u->vinv, rt_vinv, sizeof u->vinv); u->sunw[0] = sh_sun[0]; u->sunw[1] = sh_sun[1]; u->sunw[2] = sh_sun[2];
        u->amb[0] = u->amb[1] = u->amb[2] = 0.45f; { static int d = -1; if (d < 0) d = getenv("RS_RT_FIXEDRAY") != 0; u->amb[3] = (float)d; }
        push_desc(uo, bst.tex ? bst.texid : 0, tex_sampler(&bst), bst.texmr, bst.texn, 1); }
    else {
        memcpy(vp, bv, vsz * (size_t)bn);
        bind_state(&bst, PR_MAIN, 0, mul); fill_frag_params(u, &bst, mul);
        push_desc(uo, bst.tex ? bst.texid : 0, tex_sampler(&bst), 0, 0, 0); }
    VkBuffer b = fr[fi].ring.buf; vkCmdBindVertexBuffers(c, 0, 1, &b, &vo);
    u64 t_d = rs_perf_us(); vkCmdDraw(c, (uint32_t)bn, 1, 0, 0); rs_perf.draw_us += rs_perf_us() - t_d; rs_perf.batches++; st_batches++; st_tris += (unsigned)bn / 3;
    bn = 0; }
void gfx_flush(void){ flush_batch(); }

void gfx_draw_hw(const gfx_state_t *st, const gfx_hw_t *hw, const gfx_hvtx_t *v, int n){
    if (n <= 0) return; st_draws++; sh_record(st, hw, v, n);
#if defined(RS_PS5) || defined(RS_GFX_FX)
    if (hw->lfl[2] > 0.5f) rs_fx_note_lights(hw);
#endif
    if (bactive && (bkind != 1 || memcmp(&bst, st, sizeof *st) != 0 || memcmp(&bhw, hw, sizeof *hw) != 0 || bn + n > bhcap)) flush_batch();
    if (!bhv || n > bhcap) { int nc = n > (1 << 16) ? n : (1 << 16); bhv = realloc(bhv, sizeof(gfx_hvtx_t) * (size_t)nc); bhcap = nc; }
    if (!bactive) { bst = *st; bhw = *hw; bactive = 1; bkind = 1; bn = 0; }
    memcpy(&bhv[bn], v, sizeof(gfx_hvtx_t) * (size_t)n); bn += n; }
void gfx_draw(const gfx_state_t *st, const gfx_vtx_t *v, int n){
    if (n <= 0) return; st_draws++;
    if (bactive && (bkind != 0 || memcmp(&bst, st, sizeof *st) != 0 || bn + n > bcap)) flush_batch();
    if (!bv || n > bcap) { int nc = n > (1 << 17) ? n : (1 << 17); bv = realloc(bv, sizeof(gfx_vtx_t) * (size_t)nc); bcap = nc; }
    if (!bactive) { bst = *st; bactive = 1; bkind = 0; bn = 0; }
    memcpy(&bv[bn], v, sizeof(gfx_vtx_t) * (size_t)n); bn += n; }
int gfx_hw_ok(void){ return 1; }

/* ---- native draws: the PSP vertex buffer decoded here (every format), then drawn as HW T&L (3D) or CPU vertices (2D) */
static float rdf(const u8 *p, int f, int thr){ if (f == 1) { signed char v = (signed char)p[0]; return thr ? (float)v : v * (1.0f / 128.0f); }
    if (f == 2) { short v; memcpy(&v, p, 2); return thr ? (float)v : v * (1.0f / 32768.0f); } float v; memcpy(&v, p, 4); return v; }
static float rdu(const u8 *p, int f, int thr){ if (f == 1) return thr ? (float)p[0] : p[0] * (1.0f / 128.0f);
    if (f == 2) { unsigned short v; memcpy(&v, p, 2); return thr ? (float)v : v * (1.0f / 32768.0f); } float v; memcpy(&v, p, 4); return v; }
static void rdcol(const u8 *q, int cf, float *c){
    if (cf == 7) { c[0] = q[0] / 255.0f; c[1] = q[1] / 255.0f; c[2] = q[2] / 255.0f; c[3] = q[3] / 255.0f; return; }
    u16 v; memcpy(&v, q, 2);
    if (cf == 4) { c[0] = (v & 31) / 31.0f; c[1] = ((v >> 5) & 63) / 63.0f; c[2] = ((v >> 11) & 31) / 31.0f; c[3] = 1; }
    else if (cf == 5) { c[0] = (v & 31) / 31.0f; c[1] = ((v >> 5) & 31) / 31.0f; c[2] = ((v >> 10) & 31) / 31.0f; c[3] = (v & 0x8000) ? 1.0f : 0.0f; }
    else { c[0] = (v & 15) / 15.0f; c[1] = ((v >> 4) & 15) / 15.0f; c[2] = ((v >> 8) & 15) / 15.0f; c[3] = ((v >> 12) & 15) / 15.0f; } }
int gfx_draw_native(const gfx_state_t *st, const gfx_hw_t *h, const gfx_native_t *nv){
    if (nv->count < 3 || nv->vsz <= 0 || nv->off[4] < 0) return nv->count < 3 && nv->off[4] >= 0;
    u32 vt = nv->vt; int tf = vt & 3, cf = (vt >> 2) & 7, nf = (vt >> 5) & 3, pf = (vt >> 7) & 3, wf = (vt >> 9) & 3, nw = ((vt >> 14) & 7) + 1, thr = (vt >> 23) & 1;
    static const int fs[4] = {0, 1, 2, 4};
    int n = nv->count; if (nv->ptype == 3) n -= n % 3;
    int ntri = nv->ptype == 3 ? n / 3 : n - 2; if (ntri <= 0) return 1;
    static int *ix; static int ixcap; if (ixcap < ntri * 3) { ixcap = ntri * 3 + 1024; ix = realloc(ix, sizeof *ix * (size_t)ixcap); }
    #define IDX(i) (nv->idxf == 0 ? (i) : nv->idxf == 1 ? nv->idata[i] : nv->idxf == 2 ? (int)(nv->idata[(i) * 2] | nv->idata[(i) * 2 + 1] << 8) : (int)(nv->idata[(i) * 4] | nv->idata[(i) * 4 + 1] << 8 | nv->idata[(i) * 4 + 2] << 16 | (u32)nv->idata[(i) * 4 + 3] << 24))
    switch (nv->ptype) {
    case 3: for (int i = 0; i < n; i++) ix[i] = IDX(i); break;
    case 4: for (int i = 0; i + 2 < n; i++) { int *q = ix + i * 3; if (i & 1) { q[0] = IDX(i + 1); q[1] = IDX(i); } else { q[0] = IDX(i); q[1] = IDX(i + 1); } q[2] = IDX(i + 2); } break;
    default: for (int i = 1; i + 1 < n; i++) { int *q = ix + (i - 1) * 3; q[0] = IDX(0); q[1] = IDX(i); q[2] = IDX(i + 1); } break; }
    #undef IDX
    int nvx = ntri * 3;
    if (thr) {                                                    /* 2D: screen coordinates -> clip space, texel uv -> normalised */
        static gfx_vtx_t *o; static int ocap; if (ocap < nvx) { ocap = nvx + 1024; o = realloc(o, sizeof *o * (size_t)ocap); }
        for (int i = 0; i < nvx; i++) { const u8 *p = nv->vdata + (size_t)ix[i] * (size_t)nv->vsz; gfx_vtx_t *v = &o[i]; float c[4] = {nv->defc[0], nv->defc[1], nv->defc[2], nv->defc[3]};
            if (cf && nv->off[2] >= 0) rdcol(p + nv->off[2], cf, c);
            float px = rdf(p + nv->off[4], pf, 1), py = rdf(p + nv->off[4] + fs[pf], pf, 1), pz;
            if (pf == 2) { u16 z; memcpy(&z, p + nv->off[4] + 4, 2); pz = z; } else pz = rdf(p + nv->off[4] + 2 * fs[pf], pf, 1);
            if (pz < 0) pz = 0; if (pz > 65535) pz = 65535;
            float uu = 0, vv = 0; if (tf && nv->off[1] >= 0) { uu = rdu(p + nv->off[1], tf, 1); vv = rdu(p + nv->off[1] + fs[tf], tf, 1); }
            v->x = px * (2.0f / 512) - 1; v->y = py * (2.0f / 512) - 1; v->z = pz * (2.0f / 65535) - 1; v->w = 1;
            v->u = uu * h->uvt[0] + h->uvt[2]; v->v = vv * h->uvt[1] + h->uvt[3]; v->r = c[0]; v->g = c[1]; v->b = c[2]; v->a = c[3]; v->f = 1; }
        gfx_draw(st, o, nvx); return 1; }
    static gfx_hvtx_t *o; static int ocap; if (ocap < nvx) { ocap = nvx + 1024; o = realloc(o, sizeof *o * (size_t)ocap); }
    for (int i = 0; i < nvx; i++) { const u8 *p = nv->vdata + (size_t)ix[i] * (size_t)nv->vsz; gfx_hvtx_t *v = &o[i]; memset(v, 0, sizeof *v);
        v->r = nv->defc[0]; v->g = nv->defc[1]; v->b = nv->defc[2]; v->a = nv->defc[3];
        if (cf && nv->off[2] >= 0) { float c[4]; rdcol(p + nv->off[2], cf, c); v->r = c[0]; v->g = c[1]; v->b = c[2]; v->a = c[3]; }
        const u8 *pp = p + nv->off[4]; v->x = rdf(pp, pf, 0); v->y = rdf(pp + fs[pf], pf, 0); v->z = rdf(pp + 2 * fs[pf], pf, 0);
        if (nf && nv->off[3] >= 0) { const u8 *q = p + nv->off[3]; v->nx = rdf(q, nf, 0); v->ny = rdf(q + fs[nf], nf, 0); v->nz = rdf(q + 2 * fs[nf], nf, 0); } else v->nz = 1;
        if (tf && nv->off[1] >= 0) { v->u = rdu(p + nv->off[1], tf, 0); v->v = rdu(p + nv->off[1] + fs[tf], tf, 0); }
        if (wf && nv->off[0] >= 0) for (int k = 0; k < nw && k < 8; k++) v->w[k] = rdu(p + nv->off[0] + k * fs[wf], wf, 0);
        v->tx = 1; }
    gfx_draw_hw(st, h, o, nvx); return 1; }

/* ------------------------------------------------------------------ clears */
void gfx_clear(const gfx_state_t *st, int x0, int y0, int x1, int y1, const float rgba[4], float depth, int cc, int ca, int cz){
    flush_batch(); surf_t *t = target_for(st); if (!t) return; st_clears++;
    if (x0 < 0) x0 = 0; if (y0 < 0) y0 = 0; if (x1 > SZ - 1) x1 = SZ - 1; if (y1 > SURF_H - 1) y1 = SURF_H - 1;
    int sx1 = st->sx1 > x0 ? st->sx1 : x0, sy1 = st->sy1 > y0 ? st->sy1 : y0, sx2 = st->sx2 < x1 ? st->sx2 : x1, sy2 = st->sy2 < y1 ? st->sy2 : y1;
    if (sx2 < sx1 || sy2 < sy1) return;
    u8 *fp = 0; VkDeviceSize fo = 0; if ((cc || ca) && !(cc && ca)) { fo = ring_alloc(32, 16, &fp); if (!fp) return; }
    begin_render(t); VkCommandBuffer c = cmd();
    VkClearRect r = {{{sx1 * RS_S, sy1 * RS_S}, {(uint32_t)((sx2 - sx1 + 1) * RS_S), (uint32_t)((sy2 - sy1 + 1) * RS_S)}}, 0, 1};
    VkClearAttachment a[2]; int n = 0;
    if (cc && ca) a[n++] = (VkClearAttachment){VK_IMAGE_ASPECT_COLOR_BIT, 0, {{{rgba[0], rgba[1], rgba[2], rgba[3]}}}};
    else if (cc || ca) {                                          /* colour without alpha (or the reverse): a quad through the colour mask */
        pkey_t k; memset(&k, 0, sizeof k); k.prog = PR_FILL; k.fmt = VK_FORMAT_R8G8B8A8_UNORM; k.cmask = (u8)((cc ? 7 : 0) | (ca ? 8 : 0));
        vkCmdBindPipeline(c, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline(&k));
        VkViewport vp = {0, 0, (float)PX, (float)PX, 0, 1}; vkCmdSetViewport(c, 0, 1, &vp); vkCmdSetScissor(c, 0, 1, &r.rect);
        vkCmdSetDepthTestEnable(c, 0); vkCmdSetDepthWriteEnable(c, 0); vkCmdSetDepthCompareOp(c, VK_COMPARE_OP_ALWAYS); vkCmdSetCullMode(c, VK_CULL_MODE_NONE);
        vkCmdSetFrontFace(c, VK_FRONT_FACE_CLOCKWISE); vkCmdSetStencilTestEnable(c, 0);
        vkCmdSetStencilOp(c, VK_STENCIL_FACE_FRONT_AND_BACK, VK_STENCIL_OP_KEEP, VK_STENCIL_OP_KEEP, VK_STENCIL_OP_KEEP, VK_COMPARE_OP_ALWAYS);
        vkCmdSetStencilCompareMask(c, VK_STENCIL_FACE_FRONT_AND_BACK, 0); vkCmdSetStencilWriteMask(c, VK_STENCIL_FACE_FRONT_AND_BACK, 0); vkCmdSetStencilReference(c, VK_STENCIL_FACE_FRONT_AND_BACK, 0);
        static const float q[8] = {-1, -1, 1, -1, -1, 1, 1, 1}; memcpy(fp, q, sizeof q);
        VkBuffer b = fr[fi].ring.buf; vkCmdBindVertexBuffers(c, 0, 1, &b, &fo);
        vkCmdPushConstants(c, plo, VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT, 0, 16, rgba); vkCmdDraw(c, 4, 1, 0, 0); }
    if (cz || (ca && dsfmt != VK_FORMAT_D32_SFLOAT)) {             /* PSP: the alpha clear IS the stencil clear */
        int sv = (int)(rgba[3] * 255.0f + 0.5f); if (sv < 0) sv = 0; if (sv > 255) sv = 255;
        VkImageAspectFlags asp = (cz ? VK_IMAGE_ASPECT_DEPTH_BIT : 0) | ((ca && dsfmt != VK_FORMAT_D32_SFLOAT) ? VK_IMAGE_ASPECT_STENCIL_BIT : 0);
        a[n++] = (VkClearAttachment){asp, 0, {.depthStencil = {depth < 0 ? 0 : (depth > 1 ? 1 : depth), (uint32_t)sv}}}; }
    if (n) vkCmdClearAttachments(c, (uint32_t)n, a, 1, &r); }

/* ------------------------------------------------------------------ transfers */
void gfx_transfer(u32 src, int sbw, int sx, int sy, u32 dst, int dbw, int dx, int dy, int w, int h, int bpp){
    flush_batch();
    int ys = 0, yd = 0, xs = 0, xd = 0; surf_t *ss = surf_for_addr(src, &ys, &xs), *ds = surf_for_addr(dst, &yd, &xd);
    if (w <= 0 || h <= 0 || w > SZ || h > SZ) return;
    if (ss) {
        if (!ds) { ds = surf_create(dst, ss->fmt, dbw); if (!ds) return; ds->drawn = 1; yd = xd = 0; ss = surf_for_addr(src, &ys, &xs); if (!ss) return; }
        if (ds == ss) return;
        end_render(); VkCommandBuffer c = cmd();
        VkImageCopy r = {{VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1}, {(sx + xs) * RS_S, (sy + ys) * RS_S, 0}, {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1}, {(dx + xd) * RS_S, (dy + yd) * RS_S, 0},
                         {(uint32_t)(w * RS_S), (uint32_t)(h * RS_S), 1}};
        if (r.srcOffset.x + (int)r.extent.width > PX || r.dstOffset.x + (int)r.extent.width > PX || r.srcOffset.y + (int)r.extent.height > PXH || r.dstOffset.y + (int)r.extent.height > PXH) return;
        vkCmdCopyImage(c, imgs[ss->img].img, VK_IMAGE_LAYOUT_GENERAL, imgs[ds->img].img, VK_IMAGE_LAYOUT_GENERAL, 1, &r); barrier_all(c);
        ds->stamp = ++surf_stamp; rs_perf.copy_n++; }
    else if (ds) {                                               /* CPU memory -> GPU surface */
        int fmt = bpp == 4 ? 3 : (ds->psz == 2 ? ds->fmt : 1), W = w * RS_S, H = h * RS_S;
        if ((dx + xd) * RS_S + W > PX || (dy + yd) * RS_S + H > PXH) return;
        u8 *p; VkDeviceSize at = ring_alloc((VkDeviceSize)W * H * 4, 16, &p); if (!p) return;
        u32 *o = (u32 *)p;
        for (int y = 0; y < H; y++) for (int x = 0; x < W; x++) o[y * W + x] = gfx_px_read(gfx_gp(src + (u32)(((sy + y / RS_S) * sbw + sx + x / RS_S) * bpp)), fmt);
        end_render(); VkCommandBuffer c = cmd();
        VkBufferImageCopy r = {at, 0, 0, {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1}, {(dx + xd) * RS_S, (dy + yd) * RS_S, 0}, {(uint32_t)W, (uint32_t)H, 1}};
        vkCmdCopyBufferToImage(c, fr[fi].ring.buf, imgs[ds->img].img, VK_IMAGE_LAYOUT_GENERAL, 1, &r); barrier_all(c); } }

/* ------------------------------------------------------------------ display, readback */
void gfx_get_display(u32 *a, u32 *s, u32 *f){ *a = disp_addr; *s = disp_stride; *f = disp_fmt; }
void gfx_set_display(u32 addr, u32 stride, u32 fmt){ if (addr) { disp_addr = akey(addr); disp_stride = stride ? stride : 512; disp_fmt = fmt & 3; } }
static surf_t *disp_surface(void){ surf_t *s = surf_find(disp_addr); return (s && s->drawn) ? s : 0; }
static void cpu_display(u32 *out){ rs_perf.cpu_disp_n++;
    for (int y = 0; y < 272; y++) for (int x = 0; x < 480; x++) { u32 a = disp_addr + (u32)((y * disp_stride + x) * (disp_fmt == 3 ? 4 : 2)); out[y * 480 + x] = gfx_px_read(g_mem + GADDR(a | 0x04000000u), disp_fmt) | 0xFF000000u; } }
static vbuf_t rb_buf;
/* the display surface (internal resolution) -> host memory; returns the pixels (480*S x 272*S, row 0 = top) */
static const u32 *read_surface(surf_t *s){
    VkDeviceSize need = (VkDeviceSize)480 * RS_S * 272 * RS_S * 4;
    if (rb_buf.size < need) { buf_free(&rb_buf); if (buf_make(&rb_buf, need, VK_BUFFER_USAGE_TRANSFER_DST_BIT, 1)) return 0; }
    end_render(); VkCommandBuffer c = cmd();
    VkBufferImageCopy r = {0, 0, 0, {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1}, {0, 0, 0}, {(uint32_t)(480 * RS_S), (uint32_t)(272 * RS_S), 1}};
    vkCmdCopyImageToBuffer(c, imgs[s->img].img, VK_IMAGE_LAYOUT_GENERAL, rb_buf.buf, 1, &r);
    sync_flush(); rs_perf.readback_n++; return (const u32 *)rb_buf.map; }
int gfx_read_display(u32 *out){
    if (!disp_addr) return 0;
    flush_batch(); surf_t *s = disp_surface();
    if (!s) { cpu_display(out); return 1; }
    const u32 *m = read_surface(s); if (!m) return 0;
    for (int y = 0; y < 272; y++) for (int x = 0; x < 480; x++) out[y * 480 + x] = m[(size_t)(y * RS_S + RS_S / 2) * 480 * RS_S + x * RS_S + RS_S / 2] | 0xFF000000u;
    return 1; }
u32 *gfx_read_display_full(int *w, int *h){
    flush_batch(); surf_t *s = disp_surface(); if (!s) return 0;
    const u32 *m = read_surface(s); if (!m) return 0;
    *w = 480 * RS_S; *h = 272 * RS_S; u32 *b = malloc((size_t)*w * *h * 4); if (b) memcpy(b, m, (size_t)*w * *h * 4); return b; }

/* ---- presentation: VK_KHR_display swapchain (PS5 VideoOut) or nothing (headless) */
static VkSurfaceKHR wsurf; static VkSwapchainKHR swch; static VkImage sw_img[8]; static VkImageView sw_view[8]; static uint32_t sw_n, sw_w, sw_h; static VkFormat sw_fmt;
static VkSemaphore sem_acq[FR], sem_done[FR]; static int use_fxaa; static unsigned cpu_img;
static int display_init(void){
    uint32_t n = 1; VkDisplayPropertiesKHR dp;
    if (vkGetPhysicalDeviceDisplayPropertiesKHR(phys, &n, &dp) != VK_SUCCESS || !n) { fprintf(stderr, "[VK] no display\n"); return -1; }
    VkDisplayModePropertiesKHR modes[8]; uint32_t nm = 8; vkGetDisplayModePropertiesKHR(phys, dp.display, &nm, modes); if (!nm) return -1;
    int pick = 0; int want_h = rs_setting_int("RS_OUTPUT", 2160);
    for (uint32_t i = 0; i < nm; i++) if ((int)modes[i].parameters.visibleRegion.height == want_h && modes[i].parameters.refreshRate >= 59000 && modes[i].parameters.refreshRate <= 61000) pick = (int)i;
    VkDisplaySurfaceCreateInfoKHR si = {VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR, 0, 0, modes[pick].displayMode, 0, 0, VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR, 1.0f,
        VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR, modes[pick].parameters.visibleRegion};
    VKCHK(vkCreateDisplayPlaneSurfaceKHR(inst, &si, 0, &wsurf), "vkCreateDisplayPlaneSurfaceKHR");
    VkSurfaceCapabilitiesKHR caps; vkGetPhysicalDeviceSurfaceCapabilitiesKHR(phys, wsurf, &caps);
    VkSurfaceFormatKHR fmts[16]; uint32_t nf = 16; vkGetPhysicalDeviceSurfaceFormatsKHR(phys, wsurf, &nf, fmts); sw_fmt = nf ? fmts[0].format : VK_FORMAT_B8G8R8A8_UNORM;
    for (uint32_t i = 0; i < nf; i++) if (fmts[i].format == VK_FORMAT_B8G8R8A8_UNORM || fmts[i].format == VK_FORMAT_R8G8B8A8_UNORM) { sw_fmt = fmts[i].format; break; }
    sw_w = caps.currentExtent.width; sw_h = caps.currentExtent.height;
    uint32_t cnt = caps.minImageCount < 3 ? 3 : caps.minImageCount; if (caps.maxImageCount && cnt > caps.maxImageCount) cnt = caps.maxImageCount;
    VkSwapchainCreateInfoKHR ci = {VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR, 0, 0, wsurf, cnt, sw_fmt, VK_COLOR_SPACE_SRGB_NONLINEAR_KHR, {sw_w, sw_h}, 1,
        VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT, VK_SHARING_MODE_EXCLUSIVE, 0, 0, VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR, VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR, VK_PRESENT_MODE_FIFO_KHR, 1, 0};
    VKCHK(vkCreateSwapchainKHR(dev, &ci, 0, &swch), "vkCreateSwapchainKHR");
    sw_n = 8; vkGetSwapchainImagesKHR(dev, swch, &sw_n, sw_img);
    for (uint32_t i = 0; i < sw_n; i++) { VkImageViewCreateInfo vi = {VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO, 0, 0, sw_img[i], VK_IMAGE_VIEW_TYPE_2D, sw_fmt, {0, 0, 0, 0}, {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1}};
        vkCreateImageView(dev, &vi, 0, &sw_view[i]); }
    VkSemaphoreCreateInfo sci = {VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO, 0, 0};
    for (int i = 0; i < FR; i++) { vkCreateSemaphore(dev, &sci, 0, &sem_acq[i]); vkCreateSemaphore(dev, &sci, 0, &sem_done[i]); }
    fprintf(stderr, "[VK] display %ux%u at %.2f Hz, %u swapchain images, format %d\n", sw_w, sw_h, modes[pick].parameters.refreshRate / 1000.0, sw_n, (int)sw_fmt);
    return 0; }
/* the display surface (or the CPU-written frame buffer) scaled to w x h into view (format f), letterboxed; layout -> GENERAL / PRESENT */
static void draw_picture(VkImageView view, VkImage image, VkFormat f, int w, int h, VkImageLayout final){
    VkCommandBuffer c = cmd(); end_render();
    surf_t *s = disp_surface(); unsigned tex = 0;
    if (s) tex = s->img;
    else if (disp_addr) {
        if (!cpu_img) cpu_img = tex_image(480, 272, 1);
        static u32 pix[480 * 272]; cpu_display(pix); if (cpu_img) upload(cpu_img, pix, 480, 272); tex = cpu_img; c = cmd(); }
    VkImageMemoryBarrier b = {VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER, 0, 0, VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT, VK_IMAGE_LAYOUT_UNDEFINED, VK_IMAGE_LAYOUT_GENERAL,
        VK_QUEUE_FAMILY_IGNORED, VK_QUEUE_FAMILY_IGNORED, image, {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1}};
    vkCmdPipelineBarrier(c, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT, 0, 0, 0, 0, 0, 1, &b);
    VkRenderingAttachmentInfo ca = {VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO, 0, view, VK_IMAGE_LAYOUT_GENERAL, 0, 0, 0, VK_ATTACHMENT_LOAD_OP_CLEAR, VK_ATTACHMENT_STORE_OP_STORE, {{{0, 0, 0, 1}}}};
    VkRenderingInfo ri = {VK_STRUCTURE_TYPE_RENDERING_INFO, 0, 0, {{0, 0}, {(uint32_t)w, (uint32_t)h}}, 1, 0, 1, &ca, 0, 0};
    vkCmdBeginRendering(c, &ri);
    if (tex) {
        static int crop = -1; if (crop < 0) crop = rs_setting_int("RS_CROP_169", 0) != 0;
        int r0 = crop ? 1 : 0, r1 = crop ? 271 : 272, rows = r1 - r0;
        int dw = w, dh = w * rows / 480; if (dh > h) { dh = h; dw = h * 480 / rows; }
        float hh = s ? (float)SURF_H : 272.0f, ww = s ? (float)SZ : 480.0f;
        struct { float uv[4], dst[4], texel[4]; } pc = {{0, r0 / hh, 480.0f / ww, r1 / hh}, {-(float)dw / w, -(float)dh / h, (float)dw / w, (float)dh / h},
                                                        {1.0f / (float)imgs[tex].w, 1.0f / (float)imgs[tex].h, (480.0f * (s ? RS_S : 1) - 0.5f) / imgs[tex].w, (272.0f * (s ? RS_S : 1) - 0.5f) / imgs[tex].h}};
        pkey_t k; memset(&k, 0, sizeof k); k.prog = (s && use_fxaa) ? PR_FXAA : PR_PRESENT; k.fmt = (u32)f; k.cmask = 15;
        vkCmdBindPipeline(c, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline(&k));
        VkViewport vp = {0, 0, (float)w, (float)h, 0, 1}; VkRect2D sc = {{0, 0}, {(uint32_t)w, (uint32_t)h}};
        vkCmdSetViewport(c, 0, 1, &vp); vkCmdSetScissor(c, 0, 1, &sc); vkCmdSetCullMode(c, VK_CULL_MODE_NONE); vkCmdSetFrontFace(c, VK_FRONT_FACE_CLOCKWISE);
        vkCmdSetDepthTestEnable(c, 0); vkCmdSetDepthWriteEnable(c, 0); vkCmdSetDepthCompareOp(c, VK_COMPARE_OP_ALWAYS); vkCmdSetStencilTestEnable(c, 0);
        vkCmdSetStencilOp(c, VK_STENCIL_FACE_FRONT_AND_BACK, VK_STENCIL_OP_KEEP, VK_STENCIL_OP_KEEP, VK_STENCIL_OP_KEEP, VK_COMPARE_OP_ALWAYS);
        vkCmdSetStencilCompareMask(c, VK_STENCIL_FACE_FRONT_AND_BACK, 0); vkCmdSetStencilWriteMask(c, VK_STENCIL_FACE_FRONT_AND_BACK, 0); vkCmdSetStencilReference(c, VK_STENCIL_FACE_FRONT_AND_BACK, 0);
        vkCmdPushConstants(c, plo, VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT, 0, sizeof pc, &pc);
        VkDescriptorImageInfo ti = {sampler(1, 1, 1, 0), imgs[tex].view, VK_IMAGE_LAYOUT_GENERAL};
        VkWriteDescriptorSet wd = {VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET, 0, 0, 1, 0, 1, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, &ti, 0, 0};
        vkCmdPushDescriptorSetKHR(c, VK_PIPELINE_BIND_POINT_GRAPHICS, plo, 0, 1, &wd);
        vkCmdDraw(c, 4, 1, 0, 0); }
    vkCmdEndRendering(c);
    VkImageMemoryBarrier b2 = {VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER, 0, VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT, VK_ACCESS_MEMORY_READ_BIT, VK_IMAGE_LAYOUT_GENERAL, final,
        VK_QUEUE_FAMILY_IGNORED, VK_QUEUE_FAMILY_IGNORED, image, {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1}};
    vkCmdPipelineBarrier(c, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, 0, 0, 0, 0, 0, 1, &b2); }
void gfx_present(int ww, int wh){
    u64 t = rs_perf_us(); flush_batch();
    if (swch) {
        uint32_t idx = 0; VkResult r = vkAcquireNextImageKHR(dev, swch, UINT64_MAX, sem_acq[fi], 0, &idx);
        if (r == VK_SUCCESS || r == VK_SUBOPTIMAL_KHR) {
            draw_picture(sw_view[idx], sw_img[idx], sw_fmt, (int)sw_w, (int)sw_h, VK_IMAGE_LAYOUT_PRESENT_SRC_KHR);
            int f = fi; submit(sem_acq[f], sem_done[f]);
            VkPresentInfoKHR pi = {VK_STRUCTURE_TYPE_PRESENT_INFO_KHR, 0, 1, &sem_done[f], 1, &swch, &idx, 0};
            vkQueuePresentKHR(queue, &pi); }
        else { fprintf(stderr, "[VK] vkAcquireNextImageKHR: %d\n", (int)r); submit(0, 0); } }
    else submit(0, 0);
    (void)ww; (void)wh;
    next_frame(); rs_gfx_epoch++; vk_frame_no++;
    rs_perf.present_n++; rs_perf.present_us += rs_perf_us() - t; }
/* debug: the final picture (incl. FXAA) at w x h -> malloc'd RGBA, row 0 = bottom (as the GL back end) */
u32 *gfx_present_image(int w, int h){
    flush_batch();
    unsigned id = img_new(w, h, VK_FORMAT_R8G8B8A8_UNORM, VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT, 1, VK_IMAGE_ASPECT_COLOR_BIT); if (!id) return 0;
    draw_picture(imgs[id].view, imgs[id].img, VK_FORMAT_R8G8B8A8_UNORM, w, h, VK_IMAGE_LAYOUT_GENERAL);
    vbuf_t b; if (buf_make(&b, (VkDeviceSize)w * h * 4, VK_BUFFER_USAGE_TRANSFER_DST_BIT, 1)) { img_free(id); return 0; }
    VkBufferImageCopy r = {0, 0, 0, {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1}, {0, 0, 0}, {(uint32_t)w, (uint32_t)h, 1}};
    vkCmdCopyImageToBuffer(cmd(), imgs[id].img, VK_IMAGE_LAYOUT_GENERAL, b.buf, 1, &r); sync_flush();
    u32 *o = malloc((size_t)w * h * 4); if (o) for (int y = 0; y < h; y++) memcpy(o + (size_t)y * w, b.map + (size_t)(h - 1 - y) * w * 4, (size_t)w * 4);
    buf_free(&b); img_free(id); return o; }

void gfx_cache_stats(char *buf, int n){ int used = 0; unsigned long px = 0; for (int i = 0; i < TC_N; i++) if (tc[i].used) { used++; px += (unsigned long)tc[i].bytes; }
    int ns = 0; for (int i = 0; i < SURF_N; i++) ns += surfs[i].used;
    snprintf(buf, (size_t)n, "texture cache %d/%d entries, %.1f MB; %d render surfaces; %d pipelines", used, TC_N, px / 1048576.0, ns, pc_n); }
void gfx_stats(char *buf, int n){ int ns = 0; for (int i = 0; i < SURF_N; i++) ns += surfs[i].used;
    snprintf(buf, (size_t)n, "draws=%u batches=%u tris=%u clears=%u texture-uploads=%u surfaces=%d passes=%u", st_draws, st_batches, st_tris, st_clears, st_texup, ns, st_passes); }

/* ------------------------------------------------------------------ the sun shadow map (as gfx_gl.c) */
static void shadow_matrix(float M[16]){
    static const float I12[12] = {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0}; const float *V = sh_view_ok ? sh_view : I12;
    const float *d = sh_sun; float upv[3] = {0, 1, 0}; if (fabsf(d[1]) > 0.95f) { upv[0] = 1; upv[1] = 0; }
    float X[3] = {upv[1] * d[2] - upv[2] * d[1], upv[2] * d[0] - upv[0] * d[2], upv[0] * d[1] - upv[1] * d[0]}; norm3(X);
    float Y[3] = {d[1] * X[2] - d[2] * X[1], d[2] * X[0] - d[0] * X[2], d[0] * X[1] - d[1] * X[0]};
    const float *t = V + 9; float cw[3], fw[3], Xv[3], Yv[3], dv[3];
    for (int j = 0; j < 3; j++) { cw[j] = -(t[0] * V[j * 3] + t[1] * V[j * 3 + 1] + t[2] * V[j * 3 + 2]); fw[j] = -V[j * 3 + 2]; }
    for (int c = 0; c < 3; c++) { Xv[c] = X[0] * V[c] + X[1] * V[3 + c] + X[2] * V[6 + c]; Yv[c] = Y[0] * V[c] + Y[1] * V[3 + c] + Y[2] * V[6 + c]; dv[c] = d[0] * V[c] + d[1] * V[3 + c] + d[2] * V[6 + c]; }
    float R = sh_range, D = sh_range * 3.0f, C[3]; for (int j = 0; j < 3; j++) C[j] = cw[j] + fw[j] * R * 0.5f;
    float tx = 2.0f * R / (float)sh_res, cx = C[0] * X[0] + C[1] * X[1] + C[2] * X[2], cy = C[0] * Y[0] + C[1] * Y[1] + C[2] * Y[2], cz = C[0] * d[0] + C[1] * d[1] + C[2] * d[2];
    cx = floorf(cx / tx) * tx; cy = floorf(cy / tx) * tx;
    float tX = t[0] * Xv[0] + t[1] * Xv[1] + t[2] * Xv[2], tY = t[0] * Yv[0] + t[1] * Yv[1] + t[2] * Yv[2], tD = t[0] * dv[0] + t[1] * dv[1] + t[2] * dv[2];
    float m[16] = {Xv[0] / (2 * R), Xv[1] / (2 * R), Xv[2] / (2 * R), 0.5f + (-tX - cx) / (2 * R),
                   Yv[0] / (2 * R), Yv[1] / (2 * R), Yv[2] / (2 * R), 0.5f + (-tY - cy) / (2 * R),
                   -dv[0] / (2 * D), -dv[1] / (2 * D), -dv[2] / (2 * D), (tD + cz + D) / (2 * D),
                   dv[0], dv[1], dv[2], 2.0f * R / (float)sh_res * sh_offset()};       /* w: the receivers' normal offset (metres) */
    memcpy(M, m, sizeof m); }
static void shadow_pass(void){
    if (!sh_on || !sh_img || !sh_cam_ok || !shr_n) { sh_valid = 0; return; }
    flush_batch(); end_render();
    float M[16]; shadow_matrix(M);
    VkDeviceSize ua = props.limits.minUniformBufferOffsetAlignment > 16 ? props.limits.minUniformBufferOffsetAlignment : 16, ubs = (sizeof(ubo_t) + ua - 1) & ~(ua - 1);
    VkDeviceSize total = (VkDeviceSize)shr_n * ubs + (VkDeviceSize)shv_n * sizeof(gfx_hvtx_t) + ua;
    u8 *blk; VkDeviceSize base = ring_alloc(total, ua, &blk); if (!blk) { sh_valid = 0; return; }
    VkCommandBuffer c = cmd(); VkDeviceSize at = 0;
    VkRenderingAttachmentInfo da = {VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO, 0, imgs[sh_img].view, VK_IMAGE_LAYOUT_GENERAL, 0, 0, 0, VK_ATTACHMENT_LOAD_OP_CLEAR, VK_ATTACHMENT_STORE_OP_STORE, {.depthStencil = {1.0f, 0}}};
    VkRenderingInfo ri = {VK_STRUCTURE_TYPE_RENDERING_INFO, 0, 0, {{0, 0}, {(uint32_t)sh_res, (uint32_t)sh_res}}, 1, 0, 0, 0, &da, 0};
    vkCmdBeginRendering(c, &ri);
    VkViewport vp = {0, 0, (float)sh_res, (float)sh_res, 0, 1}; VkRect2D sc = {{0, 0}, {(uint32_t)sh_res, (uint32_t)sh_res}};
    vkCmdSetViewport(c, 0, 1, &vp); vkCmdSetScissor(c, 0, 1, &sc); vkCmdSetCullMode(c, VK_CULL_MODE_NONE); vkCmdSetFrontFace(c, VK_FRONT_FACE_CLOCKWISE);
    vkCmdSetDepthTestEnable(c, 1); vkCmdSetDepthWriteEnable(c, 1); vkCmdSetDepthCompareOp(c, VK_COMPARE_OP_LESS); vkCmdSetStencilTestEnable(c, 0);
    vkCmdSetStencilOp(c, VK_STENCIL_FACE_FRONT_AND_BACK, VK_STENCIL_OP_KEEP, VK_STENCIL_OP_KEEP, VK_STENCIL_OP_KEEP, VK_COMPARE_OP_ALWAYS);
    vkCmdSetStencilCompareMask(c, VK_STENCIL_FACE_FRONT_AND_BACK, 0); vkCmdSetStencilWriteMask(c, VK_STENCIL_FACE_FRONT_AND_BACK, 0); vkCmdSetStencilReference(c, VK_STENCIL_FACE_FRONT_AND_BACK, 0);
    u64 t0 = rs_perf_us(); int last_skin = -1;
    for (int i = 0; i < shr_n; i++) { const shrec_t *r = &shr[i];
        VkDeviceSize uo = base + at; u8 *up = blk + at; at += ubs; VkDeviceSize vo = base + at; u8 *vp8 = blk + at; at += (VkDeviceSize)r->count * sizeof(gfx_hvtx_t); at = (at + ua - 1) & ~(ua - 1);
        ubo_t *u = (ubo_t *)up; memset(u, 0, offsetof(ubo_t, bone)); memcpy(u->wv, r->wv, sizeof u->wv); memcpy(u->shm, M, sizeof M); if (r->skin) memcpy(u->bone, r->bone, sizeof u->bone);
        memcpy(vp8, &shv[r->first], sizeof(gfx_hvtx_t) * (size_t)r->count);
        if (r->skin != last_skin) { pkey_t k; memset(&k, 0, sizeof k); k.prog = PR_SHADOW; k.variant = (u8)r->skin; k.fmt = VK_FORMAT_UNDEFINED; vkCmdBindPipeline(c, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline(&k)); last_skin = r->skin; }
        VkDescriptorBufferInfo ub = {fr[fi].ring.buf, uo, sizeof(ubo_t)};
        VkWriteDescriptorSet w = {VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET, 0, 0, 0, 0, 1, VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, 0, &ub, 0};
        vkCmdPushDescriptorSetKHR(c, VK_PIPELINE_BIND_POINT_GRAPHICS, plo, 0, 1, &w);
        VkBuffer b = fr[fi].ring.buf; vkCmdBindVertexBuffers(c, 0, 1, &b, &vo); vkCmdDraw(c, (uint32_t)r->count, 1, 0, 0); }
    vkCmdEndRendering(c); barrier_all(c);
    rs_perf.shadow_us += rs_perf_us() - t0; rs_perf.shadow_draws += (u64)shr_n;
    memcpy(sh_mat, M, sizeof M); sh_valid = 1; }

/* ------------------------------------------------------------------ ray tracing: the last frame's opaque triangles in world space */
static void inv_view(const float *V, float out[12]){        /* V: GE view (4x3 rows: 3x3 rotation, translation) -> camera-to-world rows (3x4) */
    /* camera = R^T-ish layout as used by the shadow code: cam[j] = sum_i world[i] * V[i*3+j] + t[j]  ->  world = (cam - t) * V^T */
    const float *t = V + 9;
    for (int i = 0; i < 3; i++) { out[i * 4 + 0] = V[i * 3 + 0]; out[i * 4 + 1] = V[i * 3 + 1]; out[i * 4 + 2] = V[i * 3 + 2];
        out[i * 4 + 3] = -(t[0] * V[i * 3 + 0] + t[1] * V[i * 3 + 1] + t[2] * V[i * 3 + 2]); } }
static int as_grow(vbuf_t *b, VkDeviceSize need, VkBufferUsageFlags use, int host){
    if (b->buf && b->size >= need) return 0;
    if (b->buf) { vkDeviceWaitIdle(dev); buf_free(b); }
    VkDeviceSize n = need + need / 2 + 65536; return buf_make(b, n, use, host) ? -1 : 0; }
static void as_build(rtas_t *a, int ntri);
static void rt_build(void){
    rtas_t *a = &as[fi];
    if (a->frame == vk_frame_no) return;                          /* already built (and maybe used) in this command buffer: keep it */
    a->frame = vk_frame_no; a->valid = 0;
    if (!has_rt || !(rt_shadows || rt_refl) || !sh_cam_ok || !shr_n || !sh_view_ok) return;
    inv_view(sh_view, rt_vinv);
    int ntri = shv_n / 3; if (ntri <= 0) return;
    /* vertices: model -> camera (wv, skinning) -> world */
    VkDeviceSize vbytes = (VkDeviceSize)ntri * 3 * 12;
    if (as_grow(&a->vb, vbytes, VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR, 1)) return;
    if (as_grow(&a->hitcol, (VkDeviceSize)ntri * 4 + 16, VK_BUFFER_USAGE_STORAGE_BUFFER_BIT, 1)) return;
    float *o = (float *)a->vb.map; u32 *hc = (u32 *)a->hitcol.map; int ti = 0, nbad = 0;
    for (int r = 0; r < shr_n; r++) { const shrec_t *s = &shr[r]; const float *W = s->wv;
        for (int i = 0; i < s->count; i++) { const gfx_hvtx_t *v = &shv[s->first + i]; float p[3] = {v->x, v->y, v->z};
            if (s->skin) { float q[3] = {0, 0, 0}; for (int b = 0; b < 8; b++) { float w = v->w[b]; if (w == 0) continue; const float *B = &s->bone[b * 12];
                    for (int k = 0; k < 3; k++) q[k] += w * (p[0] * B[k * 4] + p[1] * B[k * 4 + 1] + p[2] * B[k * 4 + 2] + B[k * 4 + 3]); }
                p[0] = q[0]; p[1] = q[1]; p[2] = q[2]; }
            /* wv: 3 vec4 rows over (x, y, z, 1) as the shader's dot(q, u.wv[k]) - stored column-major 4x3 in gfx_hw_t: element (c*4 + r) */
            float cam[3]; for (int k = 0; k < 3; k++) cam[k] = W[k * 4 + 0] * p[0] + W[k * 4 + 1] * p[1] + W[k * 4 + 2] * p[2] + W[k * 4 + 3];
            float *dst = o + (size_t)(s->first + i) * 3;
            for (int k = 0; k < 3; k++) dst[k] = rt_vinv[k * 4] * cam[0] + rt_vinv[k * 4 + 1] * cam[1] + rt_vinv[k * 4 + 2] * cam[2] + rt_vinv[k * 4 + 3];
            for (int k = 0; k < 3; k++) if (!isfinite(dst[k]) || fabsf(dst[k]) > 1e6f) { dst[0] = dst[1] = dst[2] = 1e6f; nbad++; break; } }
        for (int i = 0; i + 2 < s->count; i += 3) { const gfx_hvtx_t *v = &shv[s->first + i]; u32 tc = s->col;
            float r8 = ((tc & 255) / 255.0f) * v->r, g8 = (((tc >> 8) & 255) / 255.0f) * v->g, b8 = (((tc >> 16) & 255) / 255.0f) * v->b;
            if (ti < ntri) hc[ti++] = (u32)(fminf(r8, 1) * 255) | (u32)(fminf(g8, 1) * 255) << 8 | (u32)(fminf(b8, 1) * 255) << 16 | 0xFF000000u; } }
    { static int lg = -1, n; if (lg < 0) lg = getenv("RS_RT_LOG") != 0; if (lg && n++ % 60 == 0) fprintf(stderr, "[VK] acceleration structure: %d triangles, %d bad vertices, %d records\n", ntri, nbad, shr_n); }
    as_build(a, ntri); }
/* the BLAS over a->vb's ntri triangles and the TLAS over it */
static void as_build(rtas_t *a, int ntri){
    /* BLAS */
    VkAccelerationStructureGeometryTrianglesDataKHR tri = {VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR, 0, VK_FORMAT_R32G32B32_SFLOAT,
        {.deviceAddress = a->vb.addr}, 12, (uint32_t)(ntri * 3 - 1), VK_INDEX_TYPE_NONE_KHR, {0}, {0}};
    VkAccelerationStructureGeometryKHR g = {VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR, 0, VK_GEOMETRY_TYPE_TRIANGLES_KHR, {.triangles = tri}, VK_GEOMETRY_OPAQUE_BIT_KHR};
    VkAccelerationStructureBuildGeometryInfoKHR bi = {VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR, 0, VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_KHR,
        VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_KHR, VK_BUILD_ACCELERATION_STRUCTURE_MODE_BUILD_KHR, 0, 0, 1, &g, 0, {0}};
    uint32_t prim = (uint32_t)ntri; VkAccelerationStructureBuildSizesInfoKHR sz = {VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR, 0, 0, 0, 0};
    vkGetAccelerationStructureBuildSizesKHR(dev, VK_ACCELERATION_STRUCTURE_BUILD_TYPE_DEVICE_KHR, &bi, &prim, &sz);
    VkBuffer old_bb = a->blas_buf.buf;
    if (as_grow(&a->blas_buf, sz.accelerationStructureSize, VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR, 0)) return;
    if (a->blas_buf.buf != old_bb && a->blas) { vkDestroyAccelerationStructureKHR(dev, a->blas, 0); a->blas = 0; }
    if (!a->blas) {
        VkAccelerationStructureCreateInfoKHR ci = {VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR, 0, 0, a->blas_buf.buf, 0, a->blas_buf.size, VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_KHR, 0};
        if (vkCreateAccelerationStructureKHR(dev, &ci, 0, &a->blas) != VK_SUCCESS) return; }
    /* TLAS: one instance, identity */
    if (as_grow(&a->inst, sizeof(VkAccelerationStructureInstanceKHR), VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR, 1)) return;
    VkAccelerationStructureDeviceAddressInfoKHR dai = {VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR, 0, a->blas};
    VkAccelerationStructureInstanceKHR in = {{{{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}}}, 0, 0xFF, 0, VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_KHR, vkGetAccelerationStructureDeviceAddressKHR(dev, &dai)};
    memcpy(a->inst.map, &in, sizeof in);
    VkAccelerationStructureGeometryInstancesDataKHR id = {VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR, 0, 0, {.deviceAddress = a->inst.addr}};
    VkAccelerationStructureGeometryKHR tg = {VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR, 0, VK_GEOMETRY_TYPE_INSTANCES_KHR, {.instances = id}, 0};
    VkAccelerationStructureBuildGeometryInfoKHR tb = {VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR, 0, VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_KHR,
        VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_KHR, VK_BUILD_ACCELERATION_STRUCTURE_MODE_BUILD_KHR, 0, 0, 1, &tg, 0, {0}};
    uint32_t one = 1; VkAccelerationStructureBuildSizesInfoKHR tsz = {VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR, 0, 0, 0, 0};
    vkGetAccelerationStructureBuildSizesKHR(dev, VK_ACCELERATION_STRUCTURE_BUILD_TYPE_DEVICE_KHR, &tb, &one, &tsz);
    if (!a->tlas) {
        if (as_grow(&a->tlas_buf, tsz.accelerationStructureSize, VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR, 0)) return;
        VkAccelerationStructureCreateInfoKHR ci = {VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR, 0, 0, a->tlas_buf.buf, 0, a->tlas_buf.size, VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_KHR, 0};
        if (vkCreateAccelerationStructureKHR(dev, &ci, 0, &a->tlas) != VK_SUCCESS) return; }
    VkDeviceSize scr = sz.buildScratchSize > tsz.buildScratchSize ? sz.buildScratchSize : tsz.buildScratchSize;
    VkPhysicalDeviceAccelerationStructurePropertiesKHR ap = {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR, 0};
    static VkDeviceSize salign; if (!salign) { VkPhysicalDeviceProperties2 p2 = {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2, &ap}; vkGetPhysicalDeviceProperties2(phys, &p2); salign = ap.minAccelerationStructureScratchOffsetAlignment ? ap.minAccelerationStructureScratchOffsetAlignment : 256; }
    if (as_grow(&a->scratch, scr + salign, VK_BUFFER_USAGE_STORAGE_BUFFER_BIT, 0)) return;
    VkDeviceAddress sa = (a->scratch.addr + salign - 1) & ~(salign - 1);
    end_render(); VkCommandBuffer c = cmd();
    bi.dstAccelerationStructure = a->blas; bi.scratchData.deviceAddress = sa;
    VkAccelerationStructureBuildRangeInfoKHR br = {prim, 0, 0, 0}; const VkAccelerationStructureBuildRangeInfoKHR *pbr = &br;
    vkCmdBuildAccelerationStructuresKHR(c, 1, &bi, &pbr);
    barrier_all(c);
    tb.dstAccelerationStructure = a->tlas; tb.scratchData.deviceAddress = sa;
    VkAccelerationStructureBuildRangeInfoKHR tr = {1, 0, 0, 0}; const VkAccelerationStructureBuildRangeInfoKHR *ptr = &tr;
    vkCmdBuildAccelerationStructuresKHR(c, 1, &tb, &ptr);
    barrier_all(c);
    a->ntri = ntri; a->valid = 1; }
/* a valid (empty: one degenerate triangle far away) acceleration structure for frames without one */
static void as_dummy_init(void){
    if (as_grow(&as_dummy.vb, 64, VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR, 1) || as_grow(&as_dummy.hitcol, 64, VK_BUFFER_USAGE_STORAGE_BUFFER_BIT, 1)) return;
    float *v = (float *)as_dummy.vb.map; for (int i = 0; i < 9; i++) v[i] = 1e7f; memset(as_dummy.hitcol.map, 0, 16);
    as_build(&as_dummy, 1); as_dummy.valid = 0; }

/* frame boundary (the first GE job of a new guest frame): the map's sun, then the shadow map and the acceleration structure from the
 * finished frame's triangles */
static void fx_frame(void){
#if defined(RS_PS5) || defined(RS_GFX_FX)
    rs_fx_frame();
    { float d[3], c[3]; unsigned g = 0; static unsigned lg;
      if (rs_fx_sun(d, c, &g) && g != lg) { lg = g; memcpy(sh_sun, d, sizeof sh_sun); norm3(sh_sun); memcpy(pbr_sunc, c, sizeof pbr_sunc); } }
#endif
}
void gfx_before_job(void){
    unsigned f = gfx_frame_seq(); static unsigned last = ~0u;
    if (f == last) return; last = f;
    fx_frame(); shadow_pass(); rt_build();
    shr_n = shv_n = 0; sh_cam_ok = 0; sh_view_ok = 0; }
void gfx_shadow_frame(void){ gfx_before_job(); }

/* ------------------------------------------------------------------ init */
int gfx_init(void){
    if (!gipa) { fprintf(stderr, "[VK] no vkGetInstanceProcAddr (gfx_vk_setup)\n"); return -1; }
    RS_S = rs_setting_int("RS_RES_SCALE", 2); if (RS_S < 1) RS_S = 1;
#ifndef RS_GFX_MAX_SCALE
#define RS_GFX_MAX_SCALE 4
#endif
    if (RS_S > RS_GFX_MAX_SCALE) RS_S = RS_GFX_MAX_SCALE;
    SURF_H = RS_S >= 3 ? 272 : 512;
#define VKG(n) vk##n = (PFN_vk##n)gipa(0, "vk" #n);
    VK_GLOBAL(VKG)
#undef VKG
    if (!vkCreateInstance) { fprintf(stderr, "[VK] no vkCreateInstance\n"); return -1; }
    const char *iext[4]; uint32_t nie = 0;
    { VkExtensionProperties ep[64]; uint32_t n = 64; vkEnumerateInstanceExtensionProperties(0, &n, ep);
      int has_surf = 0, has_disp = 0; for (uint32_t i = 0; i < n; i++) { if (!strcmp(ep[i].extensionName, "VK_KHR_surface")) has_surf = 1; if (!strcmp(ep[i].extensionName, "VK_KHR_display")) has_disp = 1; }
      if (want_display && has_surf && has_disp) { iext[nie++] = "VK_KHR_surface"; iext[nie++] = "VK_KHR_display"; }
      else if (want_display) { fprintf(stderr, "[VK] VK_KHR_display is not available\n"); want_display = 0; } }
    VkApplicationInfo app = {VK_STRUCTURE_TYPE_APPLICATION_INFO, 0, "SWBFRS", 1, "RS", 1, VK_API_VERSION_1_3};
    VkInstanceCreateInfo ici = {VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO, 0, 0, &app, 0, 0, nie, iext};
    VKCHK(vkCreateInstance(&ici, 0, &inst), "vkCreateInstance");
#define VKI(n) vk##n = (PFN_vk##n)gipa(inst, "vk" #n);
    VK_INSTANCE(VKI)
#undef VKI
    uint32_t np = 1; vkEnumeratePhysicalDevices(inst, &np, &phys); if (!np) { fprintf(stderr, "[VK] no GPU\n"); return -1; }
    vkGetPhysicalDeviceProperties(phys, &props); vkGetPhysicalDeviceMemoryProperties(phys, &memprops);
    { VkQueueFamilyProperties q[16]; uint32_t n = 16; vkGetPhysicalDeviceQueueFamilyProperties(phys, &n, q);
      for (uint32_t i = 0; i < n; i++) if (q[i].queueFlags & VK_QUEUE_GRAPHICS_BIT) { qfam = i; break; } }
    /* device extensions and features */
    int e_push = 0, e_as = 0, e_rq = 0, e_dho = 0, e_swap = 0;
    { VkExtensionProperties *ep = malloc(sizeof *ep * 512); uint32_t n = 512; vkEnumerateDeviceExtensionProperties(phys, 0, &n, ep);
      for (uint32_t i = 0; i < n; i++) { const char *s = ep[i].extensionName;
          if (!strcmp(s, "VK_KHR_push_descriptor")) e_push = 1; else if (!strcmp(s, "VK_KHR_acceleration_structure")) e_as = 1; else if (!strcmp(s, "VK_KHR_ray_query")) e_rq = 1;
          else if (!strcmp(s, "VK_KHR_deferred_host_operations")) e_dho = 1; else if (!strcmp(s, "VK_KHR_swapchain")) e_swap = 1; }
      free(ep); }
    if (!e_push) { fprintf(stderr, "[VK] VK_KHR_push_descriptor is required\n"); return -1; }
    VkPhysicalDeviceRayQueryFeaturesKHR frq = {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR, 0, 0};
    VkPhysicalDeviceAccelerationStructureFeaturesKHR fas = {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR, &frq, 0, 0, 0, 0, 0};
    VkPhysicalDeviceVulkan13Features f13 = {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES, (e_as && e_rq && e_dho) ? (void *)&fas : 0};
    VkPhysicalDeviceVulkan12Features f12 = {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES, &f13};
    VkPhysicalDeviceFeatures2 f2 = {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2, &f12};
    vkGetPhysicalDeviceFeatures2(phys, &f2);
    if (!f13.dynamicRendering) { fprintf(stderr, "[VK] dynamic rendering is required\n"); return -1; }
    has_rt = e_as && e_rq && e_dho && fas.accelerationStructure && frq.rayQuery && f12.bufferDeviceAddress && rs_setting_int("RS_RT", 1);
    /* enable only what is used */
    VkPhysicalDeviceRayQueryFeaturesKHR erq = {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR, 0, VK_TRUE};
    VkPhysicalDeviceAccelerationStructureFeaturesKHR eas = {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR, &erq, VK_TRUE, 0, 0, 0, 0};
    VkPhysicalDeviceVulkan13Features e13 = {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES, has_rt ? (void *)&eas : 0}; e13.dynamicRendering = VK_TRUE; e13.synchronization2 = f13.synchronization2;
    VkPhysicalDeviceVulkan12Features e12 = {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES, &e13}; e12.bufferDeviceAddress = has_rt ? VK_TRUE : VK_FALSE;
    VkPhysicalDeviceFeatures2 e2 = {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2, &e12}; e2.features.samplerAnisotropy = f2.features.samplerAnisotropy;
    const char *dext[8]; uint32_t nde = 0; dext[nde++] = "VK_KHR_push_descriptor";
    if (has_rt) { dext[nde++] = "VK_KHR_acceleration_structure"; dext[nde++] = "VK_KHR_ray_query"; dext[nde++] = "VK_KHR_deferred_host_operations"; }
    if (want_display && e_swap) dext[nde++] = "VK_KHR_swapchain";
    float prio = 1.0f; VkDeviceQueueCreateInfo qi = {VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO, 0, 0, qfam, 1, &prio};
    VkDeviceCreateInfo dci = {VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO, &e2, 0, 1, &qi, 0, 0, nde, dext, 0};
    VKCHK(vkCreateDevice(phys, &dci, 0, &dev), "vkCreateDevice");
#define VKD(n) vk##n = (PFN_vk##n)vkGetDeviceProcAddr(dev, "vk" #n);
    VK_DEVICE(VKD)
    if (has_rt) { VK_RT(VKD) }
#undef VKD
    if (!vkCmdBeginRendering) { vkCmdBeginRendering = (PFN_vkCmdBeginRendering)vkGetDeviceProcAddr(dev, "vkCmdBeginRenderingKHR"); vkCmdEndRendering = (PFN_vkCmdEndRendering)vkGetDeviceProcAddr(dev, "vkCmdEndRenderingKHR"); }
    vkGetDeviceQueue(dev, qfam, 0, &queue);
    /* depth/stencil format: D24S8 where it is supported, else D32S8 */
    { VkFormatProperties fp; vkGetPhysicalDeviceFormatProperties(phys, VK_FORMAT_D24_UNORM_S8_UINT, &fp);
      dsfmt = (fp.optimalTilingFeatures & VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT) ? VK_FORMAT_D24_UNORM_S8_UINT : VK_FORMAT_D32_SFLOAT_S8_UINT;
      vkGetPhysicalDeviceFormatProperties(phys, dsfmt, &fp); if (!(fp.optimalTilingFeatures & VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT)) dsfmt = VK_FORMAT_D32_SFLOAT; }
    /* descriptors (pushed), pipeline layout */
    VkDescriptorSetLayoutBinding lb[7] = {
        {0, VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, 1, VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT, 0},
        {1, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 1, VK_SHADER_STAGE_FRAGMENT_BIT, 0}, {2, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 1, VK_SHADER_STAGE_FRAGMENT_BIT, 0},
        {3, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 1, VK_SHADER_STAGE_FRAGMENT_BIT, 0}, {4, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 1, VK_SHADER_STAGE_FRAGMENT_BIT, 0},
        {5, VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR, 1, VK_SHADER_STAGE_FRAGMENT_BIT, 0}, {6, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, 1, VK_SHADER_STAGE_FRAGMENT_BIT, 0}};
    VkDescriptorSetLayoutCreateInfo dl = {VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO, 0, VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR, has_rt ? 7u : 5u, lb};
    VKCHK(vkCreateDescriptorSetLayout(dev, &dl, 0, &dsl), "descriptor set layout");
    VkPushConstantRange pcr = {VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT, 0, 48};
    VkPipelineLayoutCreateInfo pl = {VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO, 0, 0, 1, &dsl, 1, &pcr};
    VKCHK(vkCreatePipelineLayout(dev, &pl, 0, &plo), "pipeline layout");
#define SM(m, a) m = shader(a, sizeof a)
    SM(sm_hw_v, spv_hw_vert); SM(sm_main_v, spv_main_vert); SM(sm_shadow_v, spv_shadow_vert); SM(sm_fill_v, spv_fill_vert); SM(sm_fill_f, spv_fill_frag);
    SM(sm_pres_v, spv_present_vert); SM(sm_pres_f, spv_present_frag); SM(sm_fxaa_f, spv_fxaa_frag); SM(sm_basic_f, spv_basic_frag); SM(sm_fx_f, spv_fx_frag);
    if (has_rt) SM(sm_fxrt_f, spv_fxrt_frag);
#undef SM
    /* frames */
    VkCommandPoolCreateInfo cpi = {VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO, 0, VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT, qfam};
    VKCHK(vkCreateCommandPool(dev, &cpi, 0, &pool), "command pool");
    for (int i = 0; i < FR; i++) {
        VkCommandBufferAllocateInfo ai = {VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO, 0, pool, VK_COMMAND_BUFFER_LEVEL_PRIMARY, 1};
        VKCHK(vkAllocateCommandBuffers(dev, &ai, &fr[i].cb), "command buffer");
        VkFenceCreateInfo fci = {VK_STRUCTURE_TYPE_FENCE_CREATE_INFO, 0, 0}; vkCreateFence(dev, &fci, 0, &fr[i].fence);
        if (buf_make(&fr[i].ring, RING_SIZE, VK_BUFFER_USAGE_VERTEX_BUFFER_BIT | VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT | VK_BUFFER_USAGE_TRANSFER_SRC_BIT | VK_BUFFER_USAGE_STORAGE_BUFFER_BIT, 1)) return -1; }
    fi = 0; frame_begin(&fr[0]);
    depth_img = img_new(PX, PX, dsfmt, VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT, 1, VK_IMAGE_ASPECT_DEPTH_BIT | (dsfmt != VK_FORMAT_D32_SFLOAT ? VK_IMAGE_ASPECT_STENCIL_BIT : 0));
    if (!depth_img) return -1;
    { VkImageView v = imgs[depth_img].view; (void)v; }
    /* the depth image's view for attachments must cover depth (+ stencil); layout GENERAL */
    to_general(cmd(), imgs[depth_img].img, VK_IMAGE_ASPECT_DEPTH_BIT | (dsfmt != VK_FORMAT_D32_SFLOAT ? VK_IMAGE_ASPECT_STENCIL_BIT : 0), 1);
    { static const u32 w1[64] = {0}; u32 px[64]; for (int i = 0; i < 64; i++) px[i] = 0xFFFFFFFFu; (void)w1; white_img = tex_image(8, 8, 1); upload(white_img, px, 8, 8); }
    /* shadows, PBR, ray tracing */
    { extern u32 rs_patch_shadows(void), rs_patch_pbr(void); extern int rs_patch_shadow_res(void), rs_patch_shadow_range(void), rs_patch_shadow_strength(void);
      extern void rs_patch_shadow_sun(float *), rs_patch_pbr_sun(float *, float *);
      sh_on = (int)rs_patch_shadows(); sh_res = rs_patch_shadow_res(); sh_range = (float)rs_patch_shadow_range(); sh_strength = rs_patch_shadow_strength() / 100.0f;
      rs_patch_shadow_sun(sh_sun); norm3(sh_sun); rs_patch_pbr_sun(pbr_sunc, &pbr_spec);
      pbr_ok = (int)rs_patch_pbr();
      rt_shadows = has_rt && rs_setting_int("RS_RT_SHADOWS", 1); rt_refl = has_rt && rs_setting_int("RS_RT_REFLECTIONS", 1);
      rt_len = (float)rs_setting_int("RS_RT_DISTANCE", 200);
      if (rt_shadows) sh_on = 0;                                     /* ray-traced sun shadows replace the shadow map */
      if (sh_on) { sh_img = img_new(sh_res, sh_res, VK_FORMAT_D32_SFLOAT, VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT, 1, VK_IMAGE_ASPECT_DEPTH_BIT);
          if (sh_img) to_general(cmd(), imgs[sh_img].img, VK_IMAGE_ASPECT_DEPTH_BIT, 1); else sh_on = 0; } }
    if (has_rt) as_dummy_init();
    use_fxaa = rs_setting_int("RS_FXAA", 1);
    if (want_display && display_init()) { fprintf(stderr, "[VK] no display output\n"); return -1; }
    fprintf(stderr, "[VK] %s, Vulkan %u.%u.%u; internal %dx%d (x%d); ray tracing %s (sun shadows %s, reflections %s); shadow map %s; PBR %s; FXAA %s\n",
            props.deviceName, VK_VERSION_MAJOR(props.apiVersion), VK_VERSION_MINOR(props.apiVersion), VK_VERSION_PATCH(props.apiVersion), 480 * RS_S, 272 * RS_S, RS_S,
            has_rt ? "available" : "not available", rt_shadows ? "ray-traced" : "off", rt_refl ? "ray-traced" : "off", sh_on ? "on" : "off", pbr_ok ? "on" : "off", use_fxaa ? "on" : "off");
    return 0; }
