#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x122c3a7e, "_printk" },
	{ 0xf892384, "spi_write_then_read" },
	{ 0xdcb764ad, "memset" },
	{ 0xe4b1e351, "spi_sync" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x80c234c9, "__spi_register_driver" },
	{ 0xb2042fcb, "phy_disconnect" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9a91416a, "regmap_update_bits_base" },
	{ 0x2a97ecb1, "netdev_err" },
	{ 0xf2901ae, "regmap_read" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1ae7112, "regmap_write" },
	{ 0xc0db8ef3, "regmap_bulk_write" },
	{ 0xac259930, "regmap_bulk_read" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6447069e, "driver_unregister" },
	{ 0x63bae7f1, "phy_set_sym_pause" },
	{ 0x924e21a2, "phy_start_aneg" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7d082e4, "skb_queue_tail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xce274101, "phy_print_status" },
	{ 0xcd33bb0f, "eth_prepare_mac_addr_change" },
	{ 0x68dcd34c, "eth_commit_mac_addr_change" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xf2986595, "phy_stop" },
	{ 0x15af9420, "skb_queue_purge_reason" },
	{ 0xddce200a, "skb_dequeue" },
	{ 0x426ff5de, "consume_skb" },
	{ 0x595fc7fb, "netif_tx_wake_queue" },
	{ 0x9916fe3f, "devm_alloc_etherdev_mqs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc973d911, "__devm_regmap_init" },
	{ 0x46d2810, "_dev_info" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xaea4f9cf, "dev_addr_mod" },
	{ 0x9a299ed0, "devm_mdiobus_alloc_size" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbb5eeef6, "__devm_mdiobus_register" },
	{ 0xe83cf3fb, "phy_connect" },
	{ 0xa861052a, "devm_register_netdev" },
	{ 0x468e3817, "dev_err_probe" },
	{ 0x197f0d7b, "_dev_err" },
	{ 0x6bd42a4f, "irq_get_irq_data" },
	{ 0x7ec5ee4, "phy_support_sym_pause" },
	{ 0xa1198d7, "phy_start" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6fde4977, "__netdev_alloc_skb" },
	{ 0x595082ac, "skb_put" },
	{ 0x6653939e, "eth_type_trans" },
	{ 0x787cbc7a, "netif_rx" },
	{ 0xd96a88f2, "eth_validate_addr" },
	{ 0x92acae20, "phy_ethtool_nway_reset" },
	{ 0x765bc064, "ethtool_op_get_link" },
	{ 0x4b7e1885, "phy_ethtool_get_link_ksettings" },
	{ 0xbdb43dbb, "phy_ethtool_set_link_ksettings" },
	{ 0xe478ef45, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0636BB6F640B95DF1738B0F");
