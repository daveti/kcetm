/*
 * kcetm
 * Kernel code execution time measurement
 * May 12, 2018
 * root@davejingtian.org
 * http://davejingtian.org
 */
#include <linux/module.h>

static int __init kcetm_init(void)
{
	pr_info("kcetm: Entering: %s\n", __func__);
	return 0;
}

static void __exit kcetm_exit(void)
{
	pr_info("exiting kcetm module\n");
}

module_init(kcetm_init);
module_exit(kcetm_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("kcetm module");
MODULE_AUTHOR("daveti");
