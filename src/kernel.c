#include "logger/log.h"
#include "serial/com.h"
#include "vga/vga.h"

void kernel_main(void) {
    vga_clear();
    init_serial();

    log(INFO, "Kernel loaded");
    serial_print("Serial works\n");
}
