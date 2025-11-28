#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

void modem_say_hello(void) {
    printk(">>> HELLO from the PRIVATE SOURCE CODE! <<<\n");
}