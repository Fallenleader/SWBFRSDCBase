/* Vulkan 1.3 renderer: the Windows and Steam Deck back end (SDL2 window), and the PS5's (AK_VK_DISPLAY: RADV, VK_KHR_display).  The same pipelines, shaders and draw rules as the
 * GL back end (gfx_gl.c), written for what Vulkan is good at: geometry and textures in device-local memory (sub-allocated from
 * large blocks), one persistent descriptor set per texture, per-draw state in push constants, the object lighting in a per-frame
 * ring of uniform records (dynamic offsets), dynamic rendering, two frames in flight.  vulkan-1.dll / libvulkan.so is loaded at
 * run time through SDL, so a PC without Vulkan gets an error message, not a missing-DLL crash.
 *
 * Ray tracing readiness: the device's VK_KHR_acceleration_structure / VK_KHR_ray_query / VK_KHR_ray_tracing_pipeline support is
 * detected and logged (an NVIDIA RTX card reports all three), buffer device addresses are switched on where the device has them
 * (acceleration structures need them), and AK_VK_RT=1 also enables the ray-tracing extensions on the device.  Nothing traces rays
 * yet (no PBR / RT in this build). */
#define VK_NO_PROTOTYPES 1
#include "../../render/ak_gfx.h"
#include "../../render/ak_font.h"
#include "../plat.h"
#include "../../core/ak_settings.h"
#include <vulkan/vulkan.h>
#ifdef AK_VK_DISPLAY
/* consoles (the PS5): no window system; the driver (RADV, linked in) presents to the video output through VK_KHR_display */
extern PFN_vkVoidFunction vk_icdGetInstanceProcAddr(VkInstance instance, const char *name);
extern int usleep(unsigned int);
#else
#include <SDL2/SDL.h>
#include <SDL2/SDL_vulkan.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gfx_vk_spv.h"

/* ---- entry points (loaded at run time) */
#define VK_GLOBAL(X) X(CreateInstance) X(EnumerateInstanceExtensionProperties) X(EnumerateInstanceLayerProperties) X(EnumerateInstanceVersion)
#define VK_INST(X) X(DestroyInstance) X(EnumeratePhysicalDevices) X(GetPhysicalDeviceProperties) X(GetPhysicalDeviceQueueFamilyProperties) \
    X(GetPhysicalDeviceMemoryProperties) X(GetPhysicalDeviceFeatures2) X(EnumerateDeviceExtensionProperties) X(CreateDevice) X(GetDeviceProcAddr) \
    X(GetPhysicalDeviceSurfaceSupportKHR) X(GetPhysicalDeviceSurfaceCapabilitiesKHR) X(GetPhysicalDeviceSurfaceFormatsKHR) \
    X(GetPhysicalDeviceSurfacePresentModesKHR) X(DestroySurfaceKHR) X(GetPhysicalDeviceFormatProperties) VK_INST_DISPLAY(X)
#ifdef AK_VK_DISPLAY
#define VK_INST_DISPLAY(X) X(GetPhysicalDeviceDisplayPropertiesKHR) X(GetDisplayModePropertiesKHR) X(CreateDisplayPlaneSurfaceKHR)
#else
#define VK_INST_DISPLAY(X)
#endif
#define VK_DEV(X) X(DestroyDevice) X(GetDeviceQueue) X(DeviceWaitIdle) X(CreateBuffer) X(DestroyBuffer) X(GetBufferMemoryRequirements) \
    X(AllocateMemory) X(FreeMemory) X(BindBufferMemory) X(MapMemory) X(CreateImage) X(DestroyImage) X(GetImageMemoryRequirements) \
    X(BindImageMemory) X(CreateImageView) X(DestroyImageView) X(CreateSampler) X(DestroySampler) X(CreateShaderModule) X(DestroyShaderModule) \
    X(CreateDescriptorSetLayout) X(CreatePipelineLayout) X(CreateGraphicsPipelines) X(CreateDescriptorPool) X(AllocateDescriptorSets) \
    X(FreeDescriptorSets) X(UpdateDescriptorSets) X(CreateCommandPool) X(AllocateCommandBuffers) X(BeginCommandBuffer) X(EndCommandBuffer) \
    X(ResetCommandBuffer) X(CreateFence) X(WaitForFences) X(ResetFences) X(CreateSemaphore) X(DestroySemaphore) X(QueueSubmit) X(QueueWaitIdle) \
    X(CmdPipelineBarrier) X(CmdCopyBufferToImage) X(CmdCopyBuffer) X(CmdCopyImageToBuffer) X(CmdBeginRendering) X(CmdEndRendering) \
    X(CmdBindPipeline) X(CmdBindDescriptorSets) X(CmdBindVertexBuffers) X(CmdBindIndexBuffer) X(CmdPushConstants) X(CmdSetViewport) \
    X(CmdSetScissor) X(CmdSetCullMode) X(CmdDrawIndexed) X(CmdDraw) X(CreateSwapchainKHR) X(DestroySwapchainKHR) X(GetSwapchainImagesKHR) \
    X(AcquireNextImageKHR) X(QueuePresentKHR)
#define DECL(n) static PFN_vk##n vk##n;
VK_GLOBAL(DECL) VK_INST(DECL) VK_DEV(DECL)
static PFN_vkGetInstanceProcAddr gipa;

#define FR 2                                  /* frames in flight */
#define RING_BYTES (16u << 20)                /* per frame: immediate vertices + the text overlay */
#define UBO_BYTES (1u << 20)                  /* per frame: light records */
#define STAGE_BYTES (32u << 20)
#define BLOCK_BYTES (64u << 20)
#define UI_MAXQ 4096

typedef struct { VkDeviceMemory mem; VkDeviceSize size, top; u32 type, live; int kind; u8 *map; } mblock;
typedef struct { VkDeviceMemory mem; VkDeviceSize off; int block; u8 *map; } mslice;
struct ak_gfx_buf { VkBuffer b; mslice m; };
struct ak_gfx_tex { VkImage img; VkImageView view; mslice m; VkDescriptorSet set; };
typedef struct { int kind; void *p; } dead_t;            /* 0 = buffer, 1 = texture */
typedef struct {
    VkCommandBuffer cb; VkFence fence; VkSemaphore acquired;
    VkBuffer ring; mslice ring_m; VkDeviceSize ring_top;
    dead_t *dead; int ndead, capdead;
} frame_t;
typedef struct { f32 mvp[16]; f32 tint[4]; f32 fogp[4]; f32 uvo[4]; } pconst;   /* 112 bytes (<= 128, the guaranteed minimum) */

#ifdef AK_VK_DISPLAY
static void *win __attribute__((unused)) = (void *)1;   /* (no window) */
#else
static SDL_Window *win;
#endif
static int W, H; static char name[200];
static VkInstance inst; static VkPhysicalDevice phys; static VkDevice dev; static VkQueue queue; static u32 qfam;
static VkPhysicalDeviceMemoryProperties memp; static VkPhysicalDeviceProperties props;
static VkSurfaceKHR surf; static VkSwapchainKHR swch; static VkFormat sw_fmt; static u32 sw_n;
static VkImage sw_img[8]; static VkImageView sw_view[8]; static VkSemaphore sw_done[8]; static bool sw_copy;
static VkImage depth_img; static VkImageView depth_view; static mslice depth_m; static VkFormat depth_fmt;
static mblock blocks[256]; static int nblocks;
static frame_t fr[FR]; static int fi; static u32 sw_i; static bool in_frame;
static VkBuffer ubo; static mslice ubo_m; static VkDeviceSize ubo_top, ubo_align, ubo_cur;
static VkCommandPool pool; static VkCommandBuffer ucb; static VkFence ufence; static bool upending;
static VkBuffer stg; static mslice stg_m; static VkDeviceSize stg_top;
static VkDescriptorSetLayout dsl; static VkPipelineLayout plo, ui_plo; static VkDescriptorPool dpool;
static VkPipeline pipe[AK_PIPE_COUNT], ui_pipe; static VkSampler samp_mip, samp_near;
static ak_gfx_tex *white, *font; static ak_gfx_buf *ui_ib;
static bool has_as, has_rq, has_rtp, rt_on; static bool vsync;
static VkPresentModeKHR present_mode;

typedef struct { f32 x, y, u, v; u32 c; } uiv;
static uiv *ui_v; static int ui_n;
static ak_gfx_stats st; static u64 t_begin; static f32 last_wait_ms;
static u8 *shot_px; static VkBuffer shot_buf; static mslice shot_m; static bool shot_want;

#define VKCHK(x, what) do { VkResult r_ = (x); if (r_ != VK_SUCCESS) { AK_ERROR("vk", "%s failed (%d)", what, (int)r_); return false; } } while (0)

/* ---- memory: large blocks per (memory type, buffer / image), bump-allocated; a block whose allocations are all freed starts over */
static int memtype(u32 bits, VkMemoryPropertyFlags want, VkMemoryPropertyFlags fallback)
{
    for (u32 i = 0; i < memp.memoryTypeCount; i++) if ((bits & (1u << i)) && (memp.memoryTypes[i].propertyFlags & want) == want) return (int)i;
    if (fallback != want) return memtype(bits, fallback, fallback);
    return -1;
}
static bool mem_get(VkMemoryRequirements r, VkMemoryPropertyFlags want, int kind, mslice *out)
{
    int t = memtype(r.memoryTypeBits, want, want & ~(VkMemoryPropertyFlags)VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    if (t < 0) { AK_ERROR("vk", "no memory type for 0x%x", (unsigned)want); return false; }
    bool host = (memp.memoryTypes[t].propertyFlags & VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT) != 0;
    for (int i = 0; i < nblocks && r.size <= BLOCK_BYTES / 4; i++) {
        mblock *b = &blocks[i];
        if (!b->mem || b->type != (u32)t || b->kind != kind) continue;
        VkDeviceSize o = (b->top + r.alignment - 1) & ~(r.alignment - 1);
        if (o + r.size > b->size) continue;
        b->top = o + r.size; b->live++;
        *out = (mslice){ b->mem, o, i, b->map ? b->map + o : NULL };
        return true;
    }
    bool dedicated = r.size > BLOCK_BYTES / 4;
    VkMemoryAllocateFlagsInfo fl = { VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO, NULL, VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT, 0 };
    VkMemoryAllocateInfo ai = { VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO, rt_on && kind == 0 ? &fl : NULL, dedicated ? r.size : BLOCK_BYTES, (u32)t };
    VkDeviceMemory m;
    if (vkAllocateMemory(dev, &ai, NULL, &m) != VK_SUCCESS) { AK_ERROR("vk", "out of GPU memory (%llu bytes)", (unsigned long long)ai.allocationSize); return false; }
    u8 *map = NULL;
    if (host) vkMapMemory(dev, m, 0, VK_WHOLE_SIZE, 0, (void **)&map);
    int slot = -1;
    for (int i = 0; i < nblocks; i++) if (!blocks[i].mem) { slot = i; break; }
    if (slot < 0) { if (nblocks >= (int)AK_ARRAY_LEN(blocks)) { AK_ERROR("vk", "too many memory blocks"); return false; } slot = nblocks++; }
    blocks[slot] = (mblock){ m, ai.allocationSize, r.size, (u32)t, 1, dedicated ? 2 : kind, map };
    *out = (mslice){ m, 0, slot, map };
    return true;
}
static void mem_put(mslice *s)
{
    if (!s->mem) return;
    mblock *b = &blocks[s->block];
    if (--b->live == 0) {
        if (b->kind == 2) { vkFreeMemory(dev, b->mem, NULL); memset(b, 0, sizeof *b); }
        else b->top = 0;
    }
    memset(s, 0, sizeof *s);
}
static bool buf_make(VkDeviceSize n, VkBufferUsageFlags use, VkMemoryPropertyFlags want, VkBuffer *b, mslice *m)
{
    if (rt_on) use |= VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT;
    VkBufferCreateInfo bi = { VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO, NULL, 0, n ? n : 4, use, VK_SHARING_MODE_EXCLUSIVE, 0, NULL };
    VKCHK(vkCreateBuffer(dev, &bi, NULL, b), "vkCreateBuffer");
    VkMemoryRequirements r; vkGetBufferMemoryRequirements(dev, *b, &r);
    if (!mem_get(r, want, 0, m)) { vkDestroyBuffer(dev, *b, NULL); *b = VK_NULL_HANDLE; return false; }
    vkBindBufferMemory(dev, *b, m->mem, m->off);
    return true;
}

/* ---- uploads: copied into a staging buffer, recorded into one command buffer, submitted (and waited for) before the next frame */
static void upload_flush(void)
{
    if (!upending) return;
    vkEndCommandBuffer(ucb);
    VkSubmitInfo si = { VK_STRUCTURE_TYPE_SUBMIT_INFO, NULL, 0, NULL, NULL, 1, &ucb, 0, NULL };
    vkQueueSubmit(queue, 1, &si, ufence);
    vkWaitForFences(dev, 1, &ufence, VK_TRUE, UINT64_MAX); vkResetFences(dev, 1, &ufence);
    upending = false; stg_top = 0;
}
static VkCommandBuffer upload_cb(void)
{
    if (!upending) {
        vkResetCommandBuffer(ucb, 0);
        VkCommandBufferBeginInfo bi = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO, NULL, VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT, NULL };
        vkBeginCommandBuffer(ucb, &bi); upending = true;
    }
    return ucb;
}
/* room for n bytes of staging (flushing first when full); NULL when n is larger than the staging buffer */
static u8 *stage(VkDeviceSize n, VkDeviceSize *off)
{
    if (n > STAGE_BYTES) return NULL;
    if (stg_top + n > STAGE_BYTES) upload_flush();
    *off = stg_top; stg_top = (stg_top + n + 15) & ~(VkDeviceSize)15;
    return stg_m.map + *off;
}
static void barrier(VkCommandBuffer c, VkImage im, VkImageAspectFlags asp, u32 levels, VkImageLayout from, VkImageLayout to,
                    VkAccessFlags sa, VkAccessFlags da, VkPipelineStageFlags ss, VkPipelineStageFlags ds)
{
    VkImageMemoryBarrier b = { VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER, NULL, sa, da, from, to, VK_QUEUE_FAMILY_IGNORED, VK_QUEUE_FAMILY_IGNORED, im, { asp, 0, levels, 0, 1 } };
    vkCmdPipelineBarrier(c, ss, ds, 0, 0, NULL, 0, NULL, 1, &b);
}

/* ---- device set-up */
static bool load_instance(void)
{
#define LOADG(n) vk##n = (PFN_vk##n)gipa(NULL, "vk" #n);
    VK_GLOBAL(LOADG)
    if (!vkCreateInstance) { AK_ERROR("vk", "no Vulkan driver (vkCreateInstance missing)"); return false; }
    u32 iver = VK_API_VERSION_1_0; if (vkEnumerateInstanceVersion) vkEnumerateInstanceVersion(&iver);
    if (iver < VK_API_VERSION_1_3) { AK_ERROR("vk", "the Vulkan loader is %u.%u; Aurek needs 1.3 (update the GPU driver)", VK_API_VERSION_MAJOR(iver), VK_API_VERSION_MINOR(iver)); return false; }
#ifdef AK_VK_DISPLAY
    unsigned int n = 2; const char **ext = (const char **)calloc(n + 2, sizeof *ext); ext[0] = "VK_KHR_surface"; ext[1] = "VK_KHR_display";
#else
    unsigned int n = 0; if (!SDL_Vulkan_GetInstanceExtensions(win, &n, NULL)) { AK_ERROR("vk", "SDL: %s", SDL_GetError()); return false; }
    const char **ext = (const char **)calloc(n + 2, sizeof *ext); SDL_Vulkan_GetInstanceExtensions(win, &n, ext);
#endif
    const char *layers[1]; u32 nl = 0;
    if (ak_setting_int("AK_VK_VALIDATE", 0)) {
        u32 lc = 0; vkEnumerateInstanceLayerProperties(&lc, NULL);
        VkLayerProperties *lp = (VkLayerProperties *)calloc(lc ? lc : 1, sizeof *lp); vkEnumerateInstanceLayerProperties(&lc, lp);
        for (u32 i = 0; i < lc; i++) if (!strcmp(lp[i].layerName, "VK_LAYER_KHRONOS_validation")) layers[nl++] = "VK_LAYER_KHRONOS_validation";
        if (!nl) AK_WARN("vk", "AK_VK_VALIDATE: the validation layer is not installed");
        free(lp);
    }
    VkApplicationInfo app = { VK_STRUCTURE_TYPE_APPLICATION_INFO, NULL, "Aurek", 1, "Aurek", 1, VK_API_VERSION_1_3 };
    VkInstanceCreateInfo ci = { VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO, NULL, 0, &app, nl, layers, n, ext };
    VkResult r = vkCreateInstance(&ci, NULL, &inst); free(ext);
    VKCHK(r, "vkCreateInstance");
#define LOADI(n) vk##n = (PFN_vk##n)gipa(inst, "vk" #n);
    VK_INST(LOADI)
#ifndef AK_VK_DISPLAY
    if (!SDL_Vulkan_CreateSurface(win, inst, &surf)) { AK_ERROR("vk", "surface: %s", SDL_GetError()); return false; }
#endif
    return true;
}

#ifdef AK_VK_DISPLAY
/* the video output as a surface: the display's mode with AK_OUTPUT lines (2160 / 1440 / 1080) at about 60 Hz, else its first mode.
 * Needs a physical device, so it runs after pick_device's first pass (which then checks presentation on this surface). */
static bool display_surface(VkPhysicalDevice pd)
{
    u32 n = 1; VkDisplayPropertiesKHR dp;
    if (vkGetPhysicalDeviceDisplayPropertiesKHR(pd, &n, &dp) != VK_SUCCESS || !n) { AK_ERROR("vk", "no display"); return false; }
    VkDisplayModePropertiesKHR modes[16]; u32 nm = 16; vkGetDisplayModePropertiesKHR(pd, dp.display, &nm, modes);
    if (!nm) { AK_ERROR("vk", "the display has no modes"); return false; }
    int pick = 0, want_h = ak_setting_int("AK_OUTPUT", 2160);
    for (u32 i = 0; i < nm; i++) AK_INFO("vk", "display mode %u: %ux%u at %.2f Hz", i, modes[i].parameters.visibleRegion.width, modes[i].parameters.visibleRegion.height, modes[i].parameters.refreshRate / 1000.0);
    for (u32 i = 0; i < nm; i++) if ((int)modes[i].parameters.visibleRegion.height == want_h && modes[i].parameters.refreshRate >= 59000 && modes[i].parameters.refreshRate <= 61000) { pick = (int)i; break; }
    VkDisplaySurfaceCreateInfoKHR si = { VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR, NULL, 0, modes[pick].displayMode, 0, 0, VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR, 1.0f,
        VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR, modes[pick].parameters.visibleRegion };
    VKCHK(vkCreateDisplayPlaneSurfaceKHR(inst, &si, NULL, &surf), "vkCreateDisplayPlaneSurfaceKHR");
    AK_INFO("vk", "video output %ux%u at %.2f Hz", modes[pick].parameters.visibleRegion.width, modes[pick].parameters.visibleRegion.height, modes[pick].parameters.refreshRate / 1000.0);
    return true;
}
#endif

static bool pick_device(void)
{
    u32 n = 0; vkEnumeratePhysicalDevices(inst, &n, NULL);
    if (!n) { AK_ERROR("vk", "no Vulkan GPU"); return false; }
    VkPhysicalDevice *pd = (VkPhysicalDevice *)calloc(n, sizeof *pd); vkEnumeratePhysicalDevices(inst, &n, pd);
    int want = ak_setting_int("AK_VK_DEVICE", -1), best = -1, best_score = -1; u32 best_q = 0;
    for (u32 i = 0; i < n; i++) {
        VkPhysicalDeviceProperties p; vkGetPhysicalDeviceProperties(pd[i], &p);
        u32 qn = 0; vkGetPhysicalDeviceQueueFamilyProperties(pd[i], &qn, NULL);
        VkQueueFamilyProperties *qp = (VkQueueFamilyProperties *)calloc(qn ? qn : 1, sizeof *qp); vkGetPhysicalDeviceQueueFamilyProperties(pd[i], &qn, qp);
        int q = -1;
        for (u32 k = 0; k < qn && q < 0; k++) { VkBool32 pres = VK_FALSE; vkGetPhysicalDeviceSurfaceSupportKHR(pd[i], k, surf, &pres); if ((qp[k].queueFlags & VK_QUEUE_GRAPHICS_BIT) && pres) q = (int)k; }
        free(qp);
        int score = q < 0 || p.apiVersion < VK_API_VERSION_1_3 ? -1 : p.deviceType == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU ? 3 : p.deviceType == VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU ? 2 : 1;
        AK_INFO("vk", "GPU %u: %s (Vulkan %u.%u%s)", i, p.deviceName, VK_API_VERSION_MAJOR(p.apiVersion), VK_API_VERSION_MINOR(p.apiVersion), score < 0 ? ", not usable" : "");
        if (want == (int)i && score >= 0) score = 100;
        if (score > best_score) { best_score = score; best = (int)i; best_q = q < 0 ? 0 : (u32)q; }
    }
    if (best < 0 || best_score < 0) { free(pd); AK_ERROR("vk", "no GPU with Vulkan 1.3 and a queue that can draw to the window"); return false; }
    phys = pd[best]; qfam = best_q; free(pd);
    vkGetPhysicalDeviceProperties(phys, &props); vkGetPhysicalDeviceMemoryProperties(phys, &memp);
    return true;
}

static bool make_device(void)
{
    u32 n = 0; vkEnumerateDeviceExtensionProperties(phys, NULL, &n, NULL);
    VkExtensionProperties *ep = (VkExtensionProperties *)calloc(n ? n : 1, sizeof *ep); vkEnumerateDeviceExtensionProperties(phys, NULL, &n, ep);
    bool has_dho = false;
    for (u32 i = 0; i < n; i++) {
        const char *s = ep[i].extensionName;
        if (!strcmp(s, "VK_KHR_acceleration_structure")) has_as = true; else if (!strcmp(s, "VK_KHR_ray_query")) has_rq = true;
        else if (!strcmp(s, "VK_KHR_ray_tracing_pipeline")) has_rtp = true; else if (!strcmp(s, "VK_KHR_deferred_host_operations")) has_dho = true;
    }
    free(ep);
    VkPhysicalDeviceAccelerationStructureFeaturesKHR fas = { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR };
    VkPhysicalDeviceRayQueryFeaturesKHR frq = { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR };
    VkPhysicalDeviceVulkan13Features f13 = { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES };
    VkPhysicalDeviceVulkan12Features f12 = { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES, &f13 };
    VkPhysicalDeviceFeatures2 f2 = { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2, &f12 };
    if (has_as && has_rq) { f13.pNext = &fas; fas.pNext = &frq; }
    vkGetPhysicalDeviceFeatures2(phys, &f2);
    if (!f13.dynamicRendering) { AK_ERROR("vk", "the GPU has no dynamic rendering"); return false; }
    bool rt_ready = has_as && has_rq && has_dho && fas.accelerationStructure && frq.rayQuery && f12.bufferDeviceAddress;
    rt_on = rt_ready && ak_setting_int("AK_VK_RT", 0) != 0;
    AK_INFO("vk", "ray tracing: %s (acceleration structures %s, ray query %s, ray-tracing pipelines %s)%s",
           rt_ready ? "supported" : "not supported", has_as ? "yes" : "no", has_rq ? "yes" : "no", has_rtp ? "yes" : "no",
           rt_on ? "; enabled on the device (AK_VK_RT=1), not used yet" : rt_ready ? "; not used yet" : "");
    /* only what is used: dynamic rendering, plus the RT set when AK_VK_RT=1 */
    VkPhysicalDeviceAccelerationStructureFeaturesKHR eas = { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR };
    VkPhysicalDeviceRayQueryFeaturesKHR erq = { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR };
    VkPhysicalDeviceVulkan13Features e13 = { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES };
    VkPhysicalDeviceVulkan12Features e12 = { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES, &e13 };
    VkPhysicalDeviceFeatures2 e2 = { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2, &e12 };
    e13.dynamicRendering = VK_TRUE; e2.features.samplerAnisotropy = f2.features.samplerAnisotropy;
    const char *dx[6]; u32 nd = 0; dx[nd++] = "VK_KHR_swapchain";
    if (rt_on) {
        e12.bufferDeviceAddress = VK_TRUE; e13.pNext = &eas; eas.pNext = &erq; eas.accelerationStructure = VK_TRUE; erq.rayQuery = VK_TRUE;
        dx[nd++] = "VK_KHR_acceleration_structure"; dx[nd++] = "VK_KHR_ray_query"; dx[nd++] = "VK_KHR_deferred_host_operations";
    }
    f32 prio = 1.0f;
    VkDeviceQueueCreateInfo qi = { VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO, NULL, 0, qfam, 1, &prio };
    VkDeviceCreateInfo ci = { VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO, &e2, 0, 1, &qi, 0, NULL, nd, dx, NULL };
    VKCHK(vkCreateDevice(phys, &ci, NULL, &dev), "vkCreateDevice");
#define LOADD(n) vk##n = (PFN_vk##n)vkGetDeviceProcAddr(dev, "vk" #n); if (!vk##n) { AK_ERROR("vk", "missing vk" #n); return false; }
    VK_DEV(LOADD)
    vkGetDeviceQueue(dev, qfam, 0, &queue);
    return true;
}

static void swap_destroy(void)
{
    for (u32 i = 0; i < sw_n; i++) { vkDestroyImageView(dev, sw_view[i], NULL); vkDestroySemaphore(dev, sw_done[i], NULL); }
    if (depth_view) vkDestroyImageView(dev, depth_view, NULL);
    if (depth_img) vkDestroyImage(dev, depth_img, NULL);
    mem_put(&depth_m); depth_view = VK_NULL_HANDLE; depth_img = VK_NULL_HANDLE;
}
static bool swap_make(void)
{
    VkSurfaceCapabilitiesKHR cap; vkGetPhysicalDeviceSurfaceCapabilitiesKHR(phys, surf, &cap);
    int dw = 0, dh = 0;
#ifndef AK_VK_DISPLAY
    SDL_Vulkan_GetDrawableSize(win, &dw, &dh);
#endif
    VkExtent2D ex = cap.currentExtent.width != 0xFFFFFFFFu ? cap.currentExtent : (VkExtent2D){ (u32)dw, (u32)dh };
    if (!ex.width || !ex.height) return false;                                   /* minimised */
    u32 cnt = cap.minImageCount + 1; if (cap.maxImageCount && cnt > cap.maxImageCount) cnt = cap.maxImageCount; if (cnt > 8) cnt = 8;
    sw_copy = (cap.supportedUsageFlags & VK_IMAGE_USAGE_TRANSFER_SRC_BIT) != 0;
    VkSwapchainKHR old = swch;
    VkSwapchainCreateInfoKHR ci = { VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR, NULL, 0, surf, cnt, sw_fmt, VK_COLOR_SPACE_SRGB_NONLINEAR_KHR, ex, 1,
        VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | (sw_copy ? VK_IMAGE_USAGE_TRANSFER_SRC_BIT : 0), VK_SHARING_MODE_EXCLUSIVE, 0, NULL,
        cap.currentTransform, VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR, present_mode, VK_TRUE, old };
    if (!(cap.supportedCompositeAlpha & VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR)) ci.compositeAlpha = VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR;
    VKCHK(vkCreateSwapchainKHR(dev, &ci, NULL, &swch), "vkCreateSwapchainKHR");
    if (old) { swap_destroy(); vkDestroySwapchainKHR(dev, old, NULL); }
    sw_n = 8; vkGetSwapchainImagesKHR(dev, swch, &sw_n, sw_img);
    for (u32 i = 0; i < sw_n; i++) {
        VkImageViewCreateInfo vi = { VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO, NULL, 0, sw_img[i], VK_IMAGE_VIEW_TYPE_2D, sw_fmt, { 0 }, { VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1 } };
        VKCHK(vkCreateImageView(dev, &vi, NULL, &sw_view[i]), "swapchain view");
        VkSemaphoreCreateInfo si = { VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO, NULL, 0 }; vkCreateSemaphore(dev, &si, NULL, &sw_done[i]);
    }
    W = (int)ex.width; H = (int)ex.height;
    VkImageCreateInfo ii = { VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO, NULL, 0, VK_IMAGE_TYPE_2D, depth_fmt, { ex.width, ex.height, 1 }, 1, 1, VK_SAMPLE_COUNT_1_BIT,
        VK_IMAGE_TILING_OPTIMAL, VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT, VK_SHARING_MODE_EXCLUSIVE, 0, NULL, VK_IMAGE_LAYOUT_UNDEFINED };
    VKCHK(vkCreateImage(dev, &ii, NULL, &depth_img), "depth image");
    VkMemoryRequirements r; vkGetImageMemoryRequirements(dev, depth_img, &r);
    if (!mem_get(r, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, 1, &depth_m)) return false;
    vkBindImageMemory(dev, depth_img, depth_m.mem, depth_m.off);
    VkImageViewCreateInfo dv = { VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO, NULL, 0, depth_img, VK_IMAGE_VIEW_TYPE_2D, depth_fmt, { 0 }, { VK_IMAGE_ASPECT_DEPTH_BIT, 0, 1, 0, 1 } };
    VKCHK(vkCreateImageView(dev, &dv, NULL, &depth_view), "depth view");
    if (shot_buf) { vkDestroyBuffer(dev, shot_buf, NULL); mem_put(&shot_m); shot_buf = VK_NULL_HANDLE; }
    return true;
}

static VkShaderModule shader(const u32 *code, size_t bytes)
{
    VkShaderModuleCreateInfo ci = { VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO, NULL, 0, bytes, code };
    VkShaderModule m = VK_NULL_HANDLE; vkCreateShaderModule(dev, &ci, NULL, &m); return m;
}
static VkPipeline make_pipe(VkShaderModule vs, VkShaderModule fs, VkPipelineLayout lo, const VkPipelineVertexInputStateCreateInfo *vi,
                            bool depth_test, bool depth_write, bool bias, int blend /* 0 none, 1 alpha, 2 add, 3 premultiplied */)
{
    VkPipelineShaderStageCreateInfo stg2[2] = {
        { VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO, NULL, 0, VK_SHADER_STAGE_VERTEX_BIT, vs, "main", NULL },
        { VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO, NULL, 0, VK_SHADER_STAGE_FRAGMENT_BIT, fs, "main", NULL } };
    VkPipelineInputAssemblyStateCreateInfo ia = { VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO, NULL, 0, VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST, VK_FALSE };
    VkPipelineViewportStateCreateInfo vp = { VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO, NULL, 0, 1, NULL, 1, NULL };
    /* glPolygonOffset(-1, -2) of the GL back end */
    VkPipelineRasterizationStateCreateInfo rs = { VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO, NULL, 0, VK_FALSE, VK_FALSE, VK_POLYGON_MODE_FILL,
        VK_CULL_MODE_NONE, VK_FRONT_FACE_COUNTER_CLOCKWISE, bias, bias ? -2.0f : 0.0f, 0.0f, bias ? -1.0f : 0.0f, 1.0f };
    VkPipelineMultisampleStateCreateInfo ms = { VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO, NULL, 0, VK_SAMPLE_COUNT_1_BIT };
    VkPipelineDepthStencilStateCreateInfo ds = { VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO, NULL, 0, depth_test, depth_write, VK_COMPARE_OP_LESS_OR_EQUAL };
    VkPipelineColorBlendAttachmentState ba = { blend != 0, VK_BLEND_FACTOR_SRC_ALPHA, VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA, VK_BLEND_OP_ADD,
        VK_BLEND_FACTOR_SRC_ALPHA, VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA, VK_BLEND_OP_ADD, 0xF };
    if (blend == 2) { ba.dstColorBlendFactor = ba.dstAlphaBlendFactor = VK_BLEND_FACTOR_ONE; }
    if (blend == 3) { ba.srcColorBlendFactor = ba.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE; }
    VkPipelineColorBlendStateCreateInfo cb = { VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO, NULL, 0, VK_FALSE, VK_LOGIC_OP_COPY, 1, &ba, { 0 } };
    VkDynamicState dyn[3] = { VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR, VK_DYNAMIC_STATE_CULL_MODE };
    VkPipelineDynamicStateCreateInfo dy = { VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO, NULL, 0, 3, dyn };
    VkPipelineRenderingCreateInfo ri = { VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO, NULL, 0, 1, &sw_fmt, depth_fmt, VK_FORMAT_UNDEFINED };
    VkGraphicsPipelineCreateInfo gi = { VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO, &ri, 0, 2, stg2, vi, &ia, NULL, &vp, &rs, &ms, &ds, &cb, &dy, lo, VK_NULL_HANDLE, 0, VK_NULL_HANDLE, -1 };
    VkPipeline p = VK_NULL_HANDLE;
    if (vkCreateGraphicsPipelines(dev, VK_NULL_HANDLE, 1, &gi, NULL, &p) != VK_SUCCESS) AK_ERROR("vk", "pipeline failed");
    return p;
}

static ak_gfx_tex *tex_make(int w, int h, int levels, VkFormat fmt, const u8 *const *px, const u32 *bytes, VkSampler smp);
static bool make_pipes(void)
{
    VkDescriptorSetLayoutBinding b[2] = {
        { 0, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 1, VK_SHADER_STAGE_FRAGMENT_BIT, NULL },
        { 1, VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC, 1, VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT, NULL } };
    VkDescriptorSetLayoutCreateInfo dl = { VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO, NULL, 0, 2, b };
    VKCHK(vkCreateDescriptorSetLayout(dev, &dl, NULL, &dsl), "set layout");
    VkPushConstantRange pr = { VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT, 0, sizeof(pconst) };
    VkPipelineLayoutCreateInfo pl = { VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO, NULL, 0, 1, &dsl, 1, &pr };
    VKCHK(vkCreatePipelineLayout(dev, &pl, NULL, &plo), "pipeline layout");
    VkPushConstantRange upr = { VK_SHADER_STAGE_VERTEX_BIT, 0, 8 };
    VkPipelineLayoutCreateInfo upl = { VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO, NULL, 0, 1, &dsl, 1, &upr };
    VKCHK(vkCreatePipelineLayout(dev, &upl, NULL, &ui_plo), "ui layout");
    VkDescriptorPoolSize ps[2] = { { VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 32768 }, { VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC, 32768 } };
    VkDescriptorPoolCreateInfo dp = { VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO, NULL, VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT, 32768, 2, ps };
    VKCHK(vkCreateDescriptorPool(dev, &dp, NULL, &dpool), "descriptor pool");
    VkSamplerCreateInfo si = { VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO, NULL, 0, VK_FILTER_LINEAR, VK_FILTER_LINEAR, VK_SAMPLER_MIPMAP_MODE_LINEAR,
        VK_SAMPLER_ADDRESS_MODE_REPEAT, VK_SAMPLER_ADDRESS_MODE_REPEAT, VK_SAMPLER_ADDRESS_MODE_REPEAT, 0.0f, VK_FALSE, 1.0f, VK_FALSE, VK_COMPARE_OP_ALWAYS, 0.0f, VK_LOD_CLAMP_NONE, VK_BORDER_COLOR_INT_OPAQUE_BLACK, VK_FALSE };
    {   int an = ak_setting_int("AK_ANISO", 1);       /* 1 = off (the GL back end's filtering); 2..16 anisotropic */
        if (an > 1 && props.limits.maxSamplerAnisotropy >= 2.0f) { si.anisotropyEnable = VK_TRUE; si.maxAnisotropy = (f32)an < props.limits.maxSamplerAnisotropy ? (f32)an : props.limits.maxSamplerAnisotropy; } }
    VKCHK(vkCreateSampler(dev, &si, NULL, &samp_mip), "sampler");
    si.magFilter = si.minFilter = VK_FILTER_NEAREST; si.mipmapMode = VK_SAMPLER_MIPMAP_MODE_NEAREST; si.anisotropyEnable = VK_FALSE; si.maxLod = 0.0f;
    VKCHK(vkCreateSampler(dev, &si, NULL, &samp_near), "sampler");

    VkVertexInputBindingDescription vb = { 0, sizeof(ak_vtx), VK_VERTEX_INPUT_RATE_VERTEX };
    VkVertexInputAttributeDescription va[4] = { { 0, 0, VK_FORMAT_R32G32B32_SFLOAT, offsetof(ak_vtx, pos) }, { 1, 0, VK_FORMAT_R32G32_SFLOAT, offsetof(ak_vtx, uv) },
        { 2, 0, VK_FORMAT_R8G8B8A8_SNORM, offsetof(ak_vtx, nrm) }, { 3, 0, VK_FORMAT_R8G8B8A8_UNORM, offsetof(ak_vtx, col) } };
    VkPipelineVertexInputStateCreateInfo vi = { VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO, NULL, 0, 1, &vb, 4, va };
    VkShaderModule vs = shader(spv_ak_vert, sizeof spv_ak_vert), f_op = shader(spv_opaque_frag, sizeof spv_opaque_frag),
        f_cut = shader(spv_cutout_frag, sizeof spv_cutout_frag), f_al = shader(spv_alpha_frag, sizeof spv_alpha_frag), f_bm = shader(spv_beam_frag, sizeof spv_beam_frag);
    pipe[AK_PIPE_OPAQUE]  = make_pipe(vs, f_op, plo, &vi, true, true, false, 0);
    pipe[AK_PIPE_CUTOUT]  = make_pipe(vs, f_cut, plo, &vi, true, true, false, 0);
    pipe[AK_PIPE_OVERLAY] = make_pipe(vs, f_cut, plo, &vi, true, true, true, 0);
    pipe[AK_PIPE_LAYER]   = make_pipe(vs, f_al, plo, &vi, true, false, false, 1);
    pipe[AK_PIPE_BLEND]   = make_pipe(vs, f_al, plo, &vi, true, false, true, 1);
    pipe[AK_PIPE_ADD]     = make_pipe(vs, f_al, plo, &vi, true, false, false, 2);
    pipe[AK_PIPE_BEAM]    = make_pipe(vs, f_bm, plo, &vi, true, false, false, 3);
    pipe[AK_PIPE_HUD]     = make_pipe(vs, f_al, plo, &vi, false, false, false, 1);
    VkVertexInputBindingDescription ub = { 0, sizeof(uiv), VK_VERTEX_INPUT_RATE_VERTEX };
    VkVertexInputAttributeDescription ua[3] = { { 0, 0, VK_FORMAT_R32G32_SFLOAT, 0 }, { 1, 0, VK_FORMAT_R32G32_SFLOAT, 8 }, { 2, 0, VK_FORMAT_R8G8B8A8_UNORM, 16 } };
    VkPipelineVertexInputStateCreateInfo uvi = { VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO, NULL, 0, 1, &ub, 3, ua };
    VkShaderModule uvs = shader(spv_ui_vert, sizeof spv_ui_vert), ufs = shader(spv_ui_frag, sizeof spv_ui_frag);
    ui_pipe = make_pipe(uvs, ufs, ui_plo, &uvi, false, false, false, 1);
    vkDestroyShaderModule(dev, vs, NULL); vkDestroyShaderModule(dev, f_op, NULL); vkDestroyShaderModule(dev, f_cut, NULL);
    vkDestroyShaderModule(dev, f_al, NULL); vkDestroyShaderModule(dev, f_bm, NULL); vkDestroyShaderModule(dev, uvs, NULL); vkDestroyShaderModule(dev, ufs, NULL);
    for (int i = 0; i < AK_PIPE_COUNT; i++) if (!pipe[i]) return false;
    return ui_pipe != VK_NULL_HANDLE;
}

bool ak_gfx_init(const ak_gfx_config *c)
{
    vsync = c->vsync;
#ifdef AK_VK_DISPLAY
    gipa = (PFN_vkGetInstanceProcAddr)vk_icdGetInstanceProcAddr;
    if (!load_instance()) return false;
    {   u32 n = 0; vkEnumeratePhysicalDevices(inst, &n, NULL);
        VkPhysicalDevice pd[4]; if (n > 4) n = 4; if (!n) { AK_ERROR("vk", "no Vulkan GPU"); return false; }
        vkEnumeratePhysicalDevices(inst, &n, pd);
        if (!display_surface(pd[0])) return false; }
    if (!pick_device() || !make_device()) return false;
#else
    u32 wf = SDL_WINDOW_VULKAN | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI;
    if (ak_setting_int("AK_FULLSCREEN", 0)) wf |= SDL_WINDOW_FULLSCREEN_DESKTOP;
    win = SDL_CreateWindow(c->title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, c->width, c->height, wf);
    if (!win) { AK_ERROR("vk", "window: %s", SDL_GetError()); return false; }
    gipa = (PFN_vkGetInstanceProcAddr)SDL_Vulkan_GetVkGetInstanceProcAddr();
    if (!gipa) { AK_ERROR("vk", "no Vulkan library (%s): install or update the GPU driver", SDL_GetError()); return false; }
    if (!load_instance() || !pick_device() || !make_device()) return false;
#endif
    ubo_align = props.limits.minUniformBufferOffsetAlignment; if (ubo_align < 16) ubo_align = 16;
    {   /* surface format: 8-bit UNORM (the GL back end writes its colours as they are, no sRGB conversion) */
        u32 n = 0; vkGetPhysicalDeviceSurfaceFormatsKHR(phys, surf, &n, NULL);
        VkSurfaceFormatKHR *f = (VkSurfaceFormatKHR *)calloc(n ? n : 1, sizeof *f); vkGetPhysicalDeviceSurfaceFormatsKHR(phys, surf, &n, f);
        sw_fmt = n ? f[0].format : VK_FORMAT_B8G8R8A8_UNORM;
        for (u32 i = 0; i < n; i++) if (f[i].format == VK_FORMAT_B8G8R8A8_UNORM || f[i].format == VK_FORMAT_R8G8B8A8_UNORM) { sw_fmt = f[i].format; break; }
        free(f);
        u32 pm = 0; vkGetPhysicalDeviceSurfacePresentModesKHR(phys, surf, &pm, NULL);
        VkPresentModeKHR *m = (VkPresentModeKHR *)calloc(pm ? pm : 1, sizeof *m); vkGetPhysicalDeviceSurfacePresentModesKHR(phys, surf, &pm, m);
        present_mode = VK_PRESENT_MODE_FIFO_KHR;
        if (!vsync) for (u32 i = 0; i < pm; i++) { if (m[i] == VK_PRESENT_MODE_MAILBOX_KHR) present_mode = m[i]; else if (m[i] == VK_PRESENT_MODE_IMMEDIATE_KHR && present_mode == VK_PRESENT_MODE_FIFO_KHR) present_mode = m[i]; }
        free(m);
        VkFormatProperties fp; depth_fmt = VK_FORMAT_D32_SFLOAT;
        vkGetPhysicalDeviceFormatProperties(phys, depth_fmt, &fp);
        if (!(fp.optimalTilingFeatures & VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT)) depth_fmt = VK_FORMAT_D24_UNORM_S8_UINT;
    }
    VkCommandPoolCreateInfo cp = { VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO, NULL, VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT, qfam };
    VKCHK(vkCreateCommandPool(dev, &cp, NULL, &pool), "command pool");
    VkCommandBufferAllocateInfo ca = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO, NULL, pool, VK_COMMAND_BUFFER_LEVEL_PRIMARY, 1 };
    VKCHK(vkAllocateCommandBuffers(dev, &ca, &ucb), "command buffer");
    VkFenceCreateInfo fc = { VK_STRUCTURE_TYPE_FENCE_CREATE_INFO, NULL, 0 }; vkCreateFence(dev, &fc, NULL, &ufence);
    VkSemaphoreCreateInfo sc = { VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO, NULL, 0 };
    VkMemoryPropertyFlags hostm = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
    for (int i = 0; i < FR; i++) {
        VKCHK(vkAllocateCommandBuffers(dev, &ca, &fr[i].cb), "command buffer");
        fc.flags = VK_FENCE_CREATE_SIGNALED_BIT; vkCreateFence(dev, &fc, NULL, &fr[i].fence);
        vkCreateSemaphore(dev, &sc, NULL, &fr[i].acquired);
        if (!buf_make(RING_BYTES, VK_BUFFER_USAGE_VERTEX_BUFFER_BIT, hostm, &fr[i].ring, &fr[i].ring_m)) return false;
    }
    if (!buf_make((VkDeviceSize)UBO_BYTES * FR, VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT, hostm, &ubo, &ubo_m)) return false;
    if (!buf_make(STAGE_BYTES, VK_BUFFER_USAGE_TRANSFER_SRC_BIT, hostm, &stg, &stg_m)) return false;
    if (!swap_make() || !make_pipes()) return false;
    {   const u8 *fp = ak_font_alpha; u32 fb = AK_FONT_W * AK_FONT_H_PX;
        font = tex_make(AK_FONT_W, AK_FONT_H_PX, 1, VK_FORMAT_R8_UNORM, &fp, &fb, samp_near);
        u32 wpx = 0xFFFFFFFFu; const u8 *wp = (const u8 *)&wpx; u32 wb = 4;
        white = tex_make(1, 1, 1, VK_FORMAT_R8G8B8A8_UNORM, &wp, &wb, samp_mip);
        u16 *q = (u16 *)malloc(UI_MAXQ * 6 * 2);
        for (int i = 0; i < UI_MAXQ; i++) { u16 b = (u16)(i * 4); u16 *p = q + i * 6; p[0] = b; p[1] = b + 1; p[2] = b + 2; p[3] = b + 2; p[4] = b + 1; p[5] = b + 3; }
        ui_ib = (ak_gfx_buf *)ak_gfx_indices((const u32 *)q, UI_MAXQ * 3); free(q);           /* (u16 pairs: 6 per quad = 3 u32) */
        if (!font || !white || !ui_ib) return false;
    }
    ui_v = (uiv *)malloc(sizeof(uiv) * 4 * UI_MAXQ);
    upload_flush();
    snprintf(name, sizeof name, "Vulkan %u.%u.%u (%s)%s", VK_API_VERSION_MAJOR(props.apiVersion), VK_API_VERSION_MINOR(props.apiVersion),
             VK_API_VERSION_PATCH(props.apiVersion), props.deviceName, has_as && has_rq ? " RT-capable" : "");
    AK_INFO("vk", "%s, %dx%d, present mode %d", name, W, H, (int)present_mode);
    return true;
}

static void dead_free(dead_t *d);
void ak_gfx_shutdown(void)
{
    if (dev) {
        vkDeviceWaitIdle(dev);
        for (int i = 0; i < FR; i++) { for (int k = 0; k < fr[i].ndead; k++) dead_free(&fr[i].dead[k]); fr[i].ndead = 0; free(fr[i].dead); }
        swap_destroy(); if (swch) vkDestroySwapchainKHR(dev, swch, NULL);
    }   /* (the device, its objects and the instance go with the process) */
#ifndef AK_VK_DISPLAY
    if (win) SDL_DestroyWindow(win);
#endif
    free(ui_v); free(shot_px);
}
void ak_gfx_size(int *w, int *h) { *w = W; *h = H; }
const char *ak_gfx_name(void) { return name; }

/* ---- buffers and textures */
static ak_gfx_buf *buf_upload(const void *d, VkDeviceSize n, VkBufferUsageFlags use)
{
    ak_gfx_buf *b = (ak_gfx_buf *)calloc(1, sizeof *b);
    if (!b || !buf_make(n, use | VK_BUFFER_USAGE_TRANSFER_DST_BIT, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, &b->b, &b->m)) { free(b); return NULL; }
    if (b->m.map && (memp.memoryTypes[blocks[b->m.block].type].propertyFlags & VK_MEMORY_PROPERTY_HOST_COHERENT_BIT)) {
        memcpy(b->m.map, d, n); return b;                                   /* device-local and mappable (ReBAR, the Deck's APU) */
    }
    for (VkDeviceSize done = 0; done < n;) {
        VkDeviceSize part = n - done > STAGE_BYTES ? STAGE_BYTES : n - done, off;
        u8 *p = stage(part, &off); memcpy(p, (const u8 *)d + done, part);
        VkBufferCopy cp = { off, done, part }; vkCmdCopyBuffer(upload_cb(), stg, b->b, 1, &cp);
        done += part;
    }
    return b;
}
ak_gfx_buf *ak_gfx_vertices(const ak_vtx *v, u32 n) { return buf_upload(v, (VkDeviceSize)sizeof *v * n, VK_BUFFER_USAGE_VERTEX_BUFFER_BIT); }
ak_gfx_buf *ak_gfx_indices(const u32 *i, u32 n) { return buf_upload(i, 4ull * n, VK_BUFFER_USAGE_INDEX_BUFFER_BIT); }

static void dead_add(int kind, void *p)
{
    frame_t *f = &fr[fi];
    if (f->ndead == f->capdead) { int nc = f->capdead ? f->capdead * 2 : 256; dead_t *nd = (dead_t *)realloc(f->dead, sizeof *nd * (size_t)nc); if (!nd) return; f->dead = nd; f->capdead = nc; }
    f->dead[f->ndead++] = (dead_t){ kind, p };
}
static void dead_free(dead_t *d)
{
    if (d->kind == 0) { ak_gfx_buf *b = (ak_gfx_buf *)d->p; vkDestroyBuffer(dev, b->b, NULL); mem_put(&b->m); free(b); }
    else { ak_gfx_tex *t = (ak_gfx_tex *)d->p; if (t->set) vkFreeDescriptorSets(dev, dpool, 1, &t->set); vkDestroyImageView(dev, t->view, NULL); vkDestroyImage(dev, t->img, NULL); mem_put(&t->m); free(t); }
}
void ak_gfx_free_buf(ak_gfx_buf *b) { if (b) dead_add(0, b); }
void ak_gfx_free_tex(ak_gfx_tex *t) { if (t) dead_add(1, t); }
void ak_gfx_wait_idle(void) { upload_flush(); vkDeviceWaitIdle(dev); }

static ak_gfx_tex *tex_make(int w, int h, int levels, VkFormat fmt, const u8 *const *px, const u32 *bytes, VkSampler smp)
{
    ak_gfx_tex *x = (ak_gfx_tex *)calloc(1, sizeof *x);
    if (!x) return NULL;
    VkImageCreateInfo ii = { VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO, NULL, 0, VK_IMAGE_TYPE_2D, fmt, { (u32)w, (u32)h, 1 }, (u32)levels, 1, VK_SAMPLE_COUNT_1_BIT,
        VK_IMAGE_TILING_OPTIMAL, VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT, VK_SHARING_MODE_EXCLUSIVE, 0, NULL, VK_IMAGE_LAYOUT_UNDEFINED };
    if (vkCreateImage(dev, &ii, NULL, &x->img) != VK_SUCCESS) { free(x); return NULL; }
    VkMemoryRequirements r; vkGetImageMemoryRequirements(dev, x->img, &r);
    if (!mem_get(r, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, 1, &x->m)) { vkDestroyImage(dev, x->img, NULL); free(x); return NULL; }
    vkBindImageMemory(dev, x->img, x->m.mem, x->m.off);
    VkImageViewCreateInfo vi = { VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO, NULL, 0, x->img, VK_IMAGE_VIEW_TYPE_2D, fmt, { 0 }, { VK_IMAGE_ASPECT_COLOR_BIT, 0, (u32)levels, 0, 1 } };
    vkCreateImageView(dev, &vi, NULL, &x->view);
    u32 total = 0; for (int l = 0; l < levels; l++) total += (bytes[l] + 15) & ~15u;
    VkDeviceSize off; u8 *p = stage(total, &off);
    if (!p) { AK_WARN("vk", "texture %dx%d too large to stage", w, h); }
    VkCommandBuffer c = upload_cb();
    barrier(c, x->img, VK_IMAGE_ASPECT_COLOR_BIT, (u32)levels, VK_IMAGE_LAYOUT_UNDEFINED, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 0, VK_ACCESS_TRANSFER_WRITE_BIT,
            VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT);
    if (p) {
        VkBufferImageCopy rg[16]; VkDeviceSize o = off;
        for (int l = 0; l < levels && l < 16; l++) {
            int lw = w >> l, lh = h >> l; if (!lw) lw = 1; if (!lh) lh = 1;
            memcpy(stg_m.map + o, px[l], bytes[l]);
            rg[l] = (VkBufferImageCopy){ o, 0, 0, { VK_IMAGE_ASPECT_COLOR_BIT, (u32)l, 0, 1 }, { 0, 0, 0 }, { (u32)lw, (u32)lh, 1 } };
            o += (bytes[l] + 15) & ~15u;
        }
        vkCmdCopyBufferToImage(c, stg, x->img, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, (u32)(levels < 16 ? levels : 16), rg);
    }
    barrier(c, x->img, VK_IMAGE_ASPECT_COLOR_BIT, (u32)levels, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
            VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_SHADER_READ_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT);
    VkDescriptorSetAllocateInfo da = { VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO, NULL, dpool, 1, &dsl };
    if (vkAllocateDescriptorSets(dev, &da, &x->set) != VK_SUCCESS) { AK_ERROR("vk", "out of descriptor sets"); x->set = VK_NULL_HANDLE; return x; }
    VkDescriptorImageInfo di = { smp, x->view, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL };
    VkDescriptorBufferInfo bi = { ubo, 0, 80 };
    VkWriteDescriptorSet wr[2] = { { VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET, NULL, x->set, 0, 0, 1, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, &di, NULL, NULL },
                                   { VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET, NULL, x->set, 1, 0, 1, VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC, NULL, &bi, NULL } };
    vkUpdateDescriptorSets(dev, 2, wr, 0, NULL);
    return x;
}
static ak_gfx_tex *texture_with(const ak_texture *t, const u32 *pal)
{
    int levels = t->levels ? t->levels : 1; if (levels > 8) levels = 8;
    u8 *lv[8]; u32 by[8]; size_t total = 0;
    for (int l = 0; l < levels; l++) { int w = t->width >> l, h = t->height >> l; if (!w) w = 1; if (!h) h = 1; by[l] = (u32)w * (u32)h * 4; total += by[l]; }
    u8 *px = (u8 *)malloc(total); if (!px) return NULL;
    ak_texture tt = *t; memcpy(tt.palette, pal, sizeof(u32) << t->bpp);
    size_t o = 0;
    for (int l = 0; l < levels; l++) { lv[l] = px + o; ak_texture_expand(&tt, l, (u32 *)lv[l]); o += by[l]; }
    ak_gfx_tex *x = tex_make(t->width, t->height, levels, VK_FORMAT_R8G8B8A8_UNORM, (const u8 *const *)lv, by, samp_mip);
    free(px);
    return x;
}
ak_gfx_tex *ak_gfx_texture(const ak_texture *t) { return texture_with(t, t->palette); }
ak_gfx_tex *ak_gfx_texture_palette(ak_gfx_tex *base, const ak_texture *t, const u32 *pal) { (void)base; return texture_with(t, pal); }

/* ---- the frame */
static pconst pc; static bool pc_dirty; static ak_gfx_env cur_env, frame_env;
static ak_m4 frame_vp; static int cur_pipe = -1; static VkDescriptorSet cur_set; static VkDeviceSize cur_set_off = ~0ull;
static VkBuffer cur_vb; static VkDeviceSize cur_vb_off; static VkBuffer cur_ib;
static int cull_mode, cull_state = -1; static bool cull_on = true;
static f32 light_sh[12]; static bool light_on, light_dirty;
static VkCommandBuffer cb(void) { return fr[fi].cb; }

static void light_write(void)
{
    /* one 80-byte record (sh[4], fog) in this frame's part of the uniform buffer */
    if (ubo_top + 80 > UBO_BYTES) ubo_top = 0;                                   /* (wraps: never in practice) */
    f32 *r = (f32 *)(ubo_m.map + (VkDeviceSize)fi * UBO_BYTES + ubo_top);
    for (int i = 0; i < 4; i++) { r[i * 4] = light_sh[i * 3]; r[i * 4 + 1] = light_sh[i * 3 + 1]; r[i * 4 + 2] = light_sh[i * 3 + 2]; r[i * 4 + 3] = 0; }
    r[16] = cur_env.fog_rgb[0]; r[17] = cur_env.fog_rgb[1]; r[18] = cur_env.fog_rgb[2]; r[19] = 1;
    ubo_cur = (VkDeviceSize)fi * UBO_BYTES + ubo_top; ubo_top = (ubo_top + 80 + ubo_align - 1) & ~(ubo_align - 1);
    light_dirty = false;
}

void ak_gfx_begin(u32 clear, const ak_m4 *vp, const ak_gfx_env *env)
{
    upload_flush();
    fi = (fi + 1) % FR; frame_t *f = &fr[fi];
    u64 t0 = ak_plat_time_us();
    vkWaitForFences(dev, 1, &f->fence, VK_TRUE, UINT64_MAX);
    last_wait_ms = (ak_plat_time_us() - t0) / 1000.0f;
    for (int k = 0; k < f->ndead; k++) dead_free(&f->dead[k]);
    f->ndead = 0; f->ring_top = 0; ubo_top = 0;
    t_begin = ak_plat_time_us(); memset(&st, 0, sizeof st); st.gpu_wait_ms = last_wait_ms;
    for (int tries = 0;; tries++) {
        VkResult r = vkAcquireNextImageKHR(dev, swch, UINT64_MAX, f->acquired, VK_NULL_HANDLE, &sw_i);
        if (r == VK_SUCCESS || r == VK_SUBOPTIMAL_KHR) break;
        vkDeviceWaitIdle(dev);
#ifdef AK_VK_DISPLAY
        while (!swap_make()) usleep(50000);
#else
        while (!swap_make()) { SDL_Event e; SDL_WaitEventTimeout(&e, 50); }                /* (minimised: wait for a size) */
#endif
        if (tries > 4) { AK_ERROR("vk", "cannot acquire a swapchain image (%d)", (int)r); break; }
    }
    vkResetFences(dev, 1, &f->fence);
    vkResetCommandBuffer(f->cb, 0);
    VkCommandBufferBeginInfo bi = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO, NULL, VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT, NULL };
    vkBeginCommandBuffer(f->cb, &bi);
    barrier(f->cb, sw_img[sw_i], VK_IMAGE_ASPECT_COLOR_BIT, 1, VK_IMAGE_LAYOUT_UNDEFINED, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL, 0,
            VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT);
    VkImageAspectFlags da = VK_IMAGE_ASPECT_DEPTH_BIT | (depth_fmt == VK_FORMAT_D24_UNORM_S8_UINT ? VK_IMAGE_ASPECT_STENCIL_BIT : 0);
    barrier(f->cb, depth_img, da, 1, VK_IMAGE_LAYOUT_UNDEFINED, VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL, 0,
            VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT | VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT,
            VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT | VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT, VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT);
    VkRenderingAttachmentInfo ca = { VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO, NULL, sw_view[sw_i], VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL,
        VK_RESOLVE_MODE_NONE, VK_NULL_HANDLE, VK_IMAGE_LAYOUT_UNDEFINED, VK_ATTACHMENT_LOAD_OP_CLEAR, VK_ATTACHMENT_STORE_OP_STORE, { { { 0 } } } };
    f32 cr = (clear & 255) / 255.0f, cg = ((clear >> 8) & 255) / 255.0f, cbl = ((clear >> 16) & 255) / 255.0f;
    ca.clearValue.color.float32[0] = cr; ca.clearValue.color.float32[1] = cg; ca.clearValue.color.float32[2] = cbl; ca.clearValue.color.float32[3] = 1.0f;
    VkRenderingAttachmentInfo za = { VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO, NULL, depth_view, VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL,
        VK_RESOLVE_MODE_NONE, VK_NULL_HANDLE, VK_IMAGE_LAYOUT_UNDEFINED, VK_ATTACHMENT_LOAD_OP_CLEAR, VK_ATTACHMENT_STORE_OP_DONT_CARE, { { { 0 } } } };
    za.clearValue.depthStencil.depth = 1.0f;
    VkRenderingInfo ri = { VK_STRUCTURE_TYPE_RENDERING_INFO, NULL, 0, { { 0, 0 }, { (u32)W, (u32)H } }, 1, 0, 1, &ca, &za, NULL };
    vkCmdBeginRendering(f->cb, &ri);
    VkViewport v = { 0, (f32)H, (f32)W, -(f32)H, 0.0f, 1.0f };                  /* flipped: GL's y up and winding */
    VkRect2D sc = { { 0, 0 }, { (u32)W, (u32)H } };
    vkCmdSetViewport(f->cb, 0, 1, &v); vkCmdSetScissor(f->cb, 0, 1, &sc);
    {   static int cull = -1; if (cull < 0) cull = ak_setting_int("AK_CULL", 0); cull_mode = cull; }
    cull_on = true; cull_state = -1;
    frame_vp = *vp; cur_env = frame_env = *env; cur_pipe = -1; cur_set = VK_NULL_HANDLE; cur_set_off = ~0ull; cur_vb = cur_ib = VK_NULL_HANDLE;
    memcpy(pc.mvp, vp->m, sizeof pc.mvp); pc.tint[0] = pc.tint[1] = pc.tint[2] = pc.tint[3] = 1;
    pc.fogp[0] = env->fog_start; pc.fogp[1] = env->fog_end; pc.fogp[2] = env->colour_scale; pc.fogp[3] = 0; pc.uvo[0] = pc.uvo[1] = pc.uvo[2] = pc.uvo[3] = 0;
    pc_dirty = true; light_on = false; memset(light_sh, 0, sizeof light_sh); light_write();
    shot_want = getenv("AK_SCREENSHOT") != NULL && sw_copy; in_frame = true;
}

void ak_gfx_set_cull(bool on) { cull_on = on; }
void ak_gfx_set_tint(const f32 *rgba)
{
    f32 t[4] = { 1, 1, 1, 1 }; if (rgba) memcpy(t, rgba, sizeof t);
    if (memcmp(t, pc.tint, sizeof t)) { memcpy(pc.tint, t, sizeof t); pc_dirty = true; }
}
void ak_gfx_set_light(const f32 *sh)
{
    bool on = sh != NULL;
    if (on != light_on) { light_on = on; pc.fogp[3] = on ? 1.0f : 0.0f; pc_dirty = true; }
    if (sh && memcmp(sh, light_sh, sizeof light_sh)) { memcpy(light_sh, sh, sizeof light_sh); light_dirty = true; }
}
void ak_gfx_set_fog_range(const f32 *se)
{
    f32 a = se ? se[0] : frame_env.fog_start, b = se ? se[1] : frame_env.fog_end;
    if (a != cur_env.fog_start || b != cur_env.fog_end) { cur_env.fog_start = a; cur_env.fog_end = b; if (cur_pipe != AK_PIPE_HUD) { pc.fogp[0] = a; pc.fogp[1] = b; } pc_dirty = true; }
}
void ak_gfx_set_uv_offset(const f32 *uv)
{
    f32 o[2] = { uv ? uv[0] : 0, uv ? uv[1] : 0 };
    if (o[0] != pc.uvo[0] || o[1] != pc.uvo[1]) { pc.uvo[0] = o[0]; pc.uvo[1] = o[1]; pc_dirty = true; }
}
void ak_gfx_set_transform(const ak_m4 *mvp) { memcpy(pc.mvp, (mvp ? mvp : &frame_vp)->m, sizeof pc.mvp); pc_dirty = true; }

static void draw_state(ak_pipe p, ak_gfx_tex *t)
{
    VkCommandBuffer c = cb();
    if ((int)p != cur_pipe) {
        vkCmdBindPipeline(c, VK_PIPELINE_BIND_POINT_GRAPHICS, pipe[p]);
        /* the HUD: no fog, the vertex colour as it is (the GL back end's uFogRange = 0, 0, 1) */
        if (p == AK_PIPE_HUD) { pc.fogp[0] = 0; pc.fogp[1] = 0; pc.fogp[2] = 1; }
        else { pc.fogp[0] = cur_env.fog_start; pc.fogp[1] = cur_env.fog_end; pc.fogp[2] = cur_env.colour_scale; }
        pc_dirty = true; cur_pipe = (int)p;
    }
    {   int want = cull_mode && cull_on && (p == AK_PIPE_OPAQUE || p == AK_PIPE_OVERLAY) ? cull_mode : 0;
        if (want != cull_state) { vkCmdSetCullMode(c, want == 0 ? VK_CULL_MODE_NONE : want == 2 ? VK_CULL_MODE_FRONT_BIT : VK_CULL_MODE_BACK_BIT); cull_state = want; } }
    if (light_dirty && light_on) light_write();
    ak_gfx_tex *tx = t ? t : white;
    if (tx->set != cur_set || ubo_cur != cur_set_off) {
        u32 dyn = (u32)ubo_cur;
        vkCmdBindDescriptorSets(c, VK_PIPELINE_BIND_POINT_GRAPHICS, plo, 0, 1, &tx->set, 1, &dyn);
        cur_set = tx->set; cur_set_off = ubo_cur;
    }
    if (pc_dirty) { vkCmdPushConstants(c, plo, VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT, 0, sizeof pc, &pc); pc_dirty = false; }
}
void ak_gfx_draw(ak_pipe p, ak_gfx_tex *t, ak_gfx_buf *vb, ak_gfx_buf *ib, u32 first, u32 count)
{
    if (!in_frame || !count || !vb || !ib) return;
    draw_state(p, t);
    VkCommandBuffer c = cb();
    if (vb->b != cur_vb || cur_vb_off) { VkDeviceSize o = 0; vkCmdBindVertexBuffers(c, 0, 1, &vb->b, &o); cur_vb = vb->b; cur_vb_off = 0; }
    if (ib->b != cur_ib) { vkCmdBindIndexBuffer(c, ib->b, 0, VK_INDEX_TYPE_UINT32); cur_ib = ib->b; }
    vkCmdDrawIndexed(c, count, 1, first, 0, 0);
    st.draws++; st.tris += count / 3;
}
static u8 *ring(VkDeviceSize n, VkDeviceSize *off)
{
    frame_t *f = &fr[fi];
    VkDeviceSize o = (f->ring_top + 15) & ~(VkDeviceSize)15;
    if (o + n > RING_BYTES) return NULL;
    f->ring_top = o + n; *off = o;
    return f->ring_m.map + o;
}
void ak_gfx_draw_immediate(ak_pipe p, ak_gfx_tex *t, const ak_vtx *v, u32 count)
{
    if (!in_frame || !count) return;
    VkDeviceSize off; u8 *dst = ring((VkDeviceSize)sizeof *v * count, &off);
    if (!dst) { AK_WARN("vk", "per-frame vertex memory full"); return; }
    memcpy(dst, v, sizeof *v * count);
    draw_state(p, t);
    VkCommandBuffer c = cb();
    vkCmdBindVertexBuffers(c, 0, 1, &fr[fi].ring, &off); cur_vb = fr[fi].ring; cur_vb_off = off ? off : 1;
    vkCmdDraw(c, count, 1, 0, 0);
    st.draws++; st.tris += count / 3;
}

void ak_gfx_text(f32 x, f32 y, u32 c, const char *s)
{
    for (; *s && ui_n < UI_MAXQ; s++, x += AK_FONT_CW) {
        int ch = (u8)*s; if (ch < 32 || ch > 126) ch = '?';
        if (ch == ' ') continue;
        int i = ch - 32; f32 u0 = (f32)((i % 16) * AK_FONT_CW) / AK_FONT_W, v0 = (f32)((i / 16) * AK_FONT_CH) / AK_FONT_H_PX;
        f32 u1 = u0 + (f32)AK_FONT_CW / AK_FONT_W, v1 = v0 + (f32)AK_FONT_CH / AK_FONT_H_PX;
        uiv *v = ui_v + ui_n * 4; ui_n++;
        v[0] = (uiv){ x, y, u0, v0, c }; v[1] = (uiv){ x + AK_FONT_CW, y, u1, v0, c }; v[2] = (uiv){ x, y + AK_FONT_CH, u0, v1, c }; v[3] = (uiv){ x + AK_FONT_CW, y + AK_FONT_CH, u1, v1, c };
    }
}

void ak_gfx_end(ak_gfx_stats *out)
{
    if (!in_frame) { if (out) *out = st; return; }
    frame_t *f = &fr[fi]; VkCommandBuffer c = f->cb;
    if (ui_n) {
        VkDeviceSize off; u8 *dst = ring(sizeof(uiv) * 4 * (VkDeviceSize)ui_n, &off);
        if (dst) {
            memcpy(dst, ui_v, sizeof(uiv) * 4 * (size_t)ui_n);
            vkCmdBindPipeline(c, VK_PIPELINE_BIND_POINT_GRAPHICS, ui_pipe); vkCmdSetCullMode(c, VK_CULL_MODE_NONE);
            u32 dyn = (u32)ubo_cur; vkCmdBindDescriptorSets(c, VK_PIPELINE_BIND_POINT_GRAPHICS, ui_plo, 0, 1, &font->set, 1, &dyn);
            f32 sc[2] = { 2.0f / W, 2.0f / H };               /* (NDC +y is the top, as in GL: the viewport is flipped) */
            vkCmdPushConstants(c, ui_plo, VK_SHADER_STAGE_VERTEX_BIT, 0, 8, sc);
            vkCmdBindVertexBuffers(c, 0, 1, &f->ring, &off); vkCmdBindIndexBuffer(c, ui_ib->b, 0, VK_INDEX_TYPE_UINT16);
            vkCmdDrawIndexed(c, (u32)ui_n * 6, 1, 0, 0, 0);
        }
        ui_n = 0;
    }
    vkCmdEndRendering(c);
    if (shot_want) {
        VkDeviceSize n = (VkDeviceSize)W * H * 4;
        if (!shot_buf) buf_make(n, VK_BUFFER_USAGE_TRANSFER_DST_BIT, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT | VK_MEMORY_PROPERTY_HOST_CACHED_BIT, &shot_buf, &shot_m);
        barrier(c, sw_img[sw_i], VK_IMAGE_ASPECT_COLOR_BIT, 1, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT, VK_ACCESS_TRANSFER_READ_BIT, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT);
        VkBufferImageCopy rg = { 0, 0, 0, { VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1 }, { 0, 0, 0 }, { (u32)W, (u32)H, 1 } };
        if (shot_buf) vkCmdCopyImageToBuffer(c, sw_img[sw_i], VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, shot_buf, 1, &rg);
        barrier(c, sw_img[sw_i], VK_IMAGE_ASPECT_COLOR_BIT, 1, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, VK_IMAGE_LAYOUT_PRESENT_SRC_KHR,
                VK_ACCESS_TRANSFER_READ_BIT, 0, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT);
    } else {
        barrier(c, sw_img[sw_i], VK_IMAGE_ASPECT_COLOR_BIT, 1, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL, VK_IMAGE_LAYOUT_PRESENT_SRC_KHR,
                VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT, 0, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT, VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT);
    }
    vkEndCommandBuffer(c);
    upload_flush();                                                    /* textures made during the frame: uploaded before it runs */
    VkPipelineStageFlags ws = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    VkSubmitInfo si = { VK_STRUCTURE_TYPE_SUBMIT_INFO, NULL, 1, &f->acquired, &ws, 1, &c, 1, &sw_done[sw_i] };
    vkQueueSubmit(queue, 1, &si, f->fence);
    st.cpu_submit_ms = (ak_plat_time_us() - t_begin) / 1000.0f;
    VkPresentInfoKHR pi = { VK_STRUCTURE_TYPE_PRESENT_INFO_KHR, NULL, 1, &sw_done[sw_i], 1, &swch, &sw_i, NULL };
    VkResult r = vkQueuePresentKHR(queue, &pi);
    in_frame = false;
#ifdef AK_VK_DISPLAY
    {   static bool first = true; extern void ak_plat_first_frame(void);       /* (the PS5 hides its launch splash) */
        if (first) { first = false; ak_plat_first_frame(); } }
#endif
    if (shot_want && shot_buf) {                                       /* keep the frame for ak_gfx_screenshot */
        vkWaitForFences(dev, 1, &f->fence, VK_TRUE, UINT64_MAX);
        free(shot_px); shot_px = (u8 *)malloc((size_t)W * H * 3);
        bool bgr = sw_fmt == VK_FORMAT_B8G8R8A8_UNORM || sw_fmt == VK_FORMAT_B8G8R8A8_SRGB;
        if (shot_px) for (size_t i = 0; i < (size_t)W * H; i++) {
            const u8 *s = shot_m.map + i * 4; u8 *d = shot_px + i * 3;
            d[0] = bgr ? s[2] : s[0]; d[1] = s[1]; d[2] = bgr ? s[0] : s[2];
        }
    }
    if (r == VK_ERROR_OUT_OF_DATE_KHR || r == VK_SUBOPTIMAL_KHR) { vkDeviceWaitIdle(dev); swap_make(); }
    if (out) *out = st;
}

bool ak_gfx_screenshot(const char *path)
{
    if (!shot_px) return false;
    FILE *f = fopen(path, "wb");
    if (!f) return false;
    fprintf(f, "P6\n%d %d\n255\n", W, H);
    fwrite(shot_px, 3, (size_t)W * H, f);                              /* (rows already top-down) */
    fclose(f);
    return true;
}
