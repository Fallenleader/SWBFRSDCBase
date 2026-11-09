#pragma once
/* Vulkan back end (gfx_vk.c): the platform hands it the Vulkan entry point before gfx_init.
 *   get_instance_proc_addr: vkGetInstanceProcAddr (a loader's) or vk_icdGetInstanceProcAddr (a driver linked in: RADV on the PS5)
 *   display: 1 = present through VK_KHR_display (the PS5's VideoOut), 0 = headless (frames only read back) */
void gfx_vk_setup(void *get_instance_proc_addr, int display);
int  gfx_vk_has_rt(void);
/* a desktop window instead (platform/desktop): exts = the instance extensions it needs, make_surface(VkInstance) -> VkSurfaceKHR,
 * drawable_size(&w, &h) = its size in pixels now */
void gfx_vk_setup_window(void *get_instance_proc_addr, const char *const *exts, int n, void *(*make_surface)(void *instance), void (*drawable_size)(int *, int *));
