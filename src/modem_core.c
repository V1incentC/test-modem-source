#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

void modem_say_hello(void) {
    printk(">>> HELLO from the PRIVATE SOURCE CODE! <<<\n");
}

int modem_calc_add(int a, int b) {
    return a + b;
}