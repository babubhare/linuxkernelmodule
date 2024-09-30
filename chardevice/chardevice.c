#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>


MODULE_LICENSE("GPL");
MODULE_AUTHOR("BABU");
MODULE_DESCRIPTION("CHAR DEVICE MODULE");
MODULE_VERSION("1.0.0");


static int __init chardevice_init(void)
{
    printk(KERN_INFO "char device module!! Init");
    return 0;
}

static void __exit chardevice_exit(void)
{
    printk(KERN_INFO "char device module!! Exit");
}

module_init(chardevice_init);
module_exit(chardevice_exit);