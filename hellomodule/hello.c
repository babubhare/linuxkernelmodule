#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>


MODULE_LICENSE("GPL")
MODULE_AUTHOR("BABU")
MODULE_DESCRIPTION("HELLO")
MODULE_VERSION("1.0.0")


static int __init helloworld_init(void)
{
    printk()
    return 0;
}


