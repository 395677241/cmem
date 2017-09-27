#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfcbc083c, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0xee57ea5d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xe7143a2d, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x9ba9883f, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x93d8adbf, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x85f74b00, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x2f5063f7, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x4b57d751, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x9fd57457, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x72ac3e56, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x1beaa6c1, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x164fea00, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xa3135606, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xe5d2bd7f, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xd12e767a, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x1435f044, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x34d8fbb3, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xc2982a03, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x60506751, __VMLINUX_SYMBOL_STR(unmap_kernel_range_noflush) },
	{ 0xb8963e8e, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x407136b1, __VMLINUX_SYMBOL_STR(__put_user_8) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6fc658de, __VMLINUX_SYMBOL_STR(free_vm_area) },
	{ 0x4f192a8d, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x2dfccaae, __VMLINUX_SYMBOL_STR(of_device_is_available) },
	{ 0x799e6938, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4dfc51f8, __VMLINUX_SYMBOL_STR(dma_buf_fd) },
	{ 0xda30a1b6, __VMLINUX_SYMBOL_STR(dma_buf_put) },
	{ 0x91521ac6, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xc26a5e7a, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xc7943b16, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0xcdd158d, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0xc071a835, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0x17506ac5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x4acd7839, __VMLINUX_SYMBOL_STR(dma_buf_export) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0xaf38708f, __VMLINUX_SYMBOL_STR(of_find_compatible_node) },
	{ 0xc198bc76, __VMLINUX_SYMBOL_STR(get_user_pages_remote) },
	{ 0xfde8176, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x2ab3cc9d, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x41ae0d2, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0x95c578a0, __VMLINUX_SYMBOL_STR(ioremap_page_range) },
	{ 0xb40b2ffa, __VMLINUX_SYMBOL_STR(__get_vm_area) },
	{ 0xad1b9735, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xf501072f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9046941d, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0xc5654ddf, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xecbcc99d, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x1db7dc40, __VMLINUX_SYMBOL_STR(pgprot_kernel) },
	{ 0x9cd60539, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0xc77e5c56, __VMLINUX_SYMBOL_STR(of_address_to_resource) },
	{ 0xa93ff57e, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x4298b775, __VMLINUX_SYMBOL_STR(v7_flush_kern_cache_all) },
	{ 0xd7e56a4e, __VMLINUX_SYMBOL_STR(simple_strtoll) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x2739c0b7, __VMLINUX_SYMBOL_STR(__class_create) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

