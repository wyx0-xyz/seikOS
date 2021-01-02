#include "logger/log.h"
#include "vga/vga.h"
#include "serial/com.h"

void kernel_main(void)
{
     vga_clear();
     init_serial();

     log(1, "Kernel loaded");
     serial_print("Serial works\n");
}
