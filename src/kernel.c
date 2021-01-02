#include "logger/log.h"
#include "vga/vga.h"
#include "serial/com.h"

void kernel_main(void)
{
     vga_clear();
     init_serial();

     log(INFO, "Kernel loaded");
     serial_print("Serial works\n");
}
