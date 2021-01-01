#include "vga/vga.h"
#include "serial/com.h"

void kernel_main(void)
{
     vga_clear();
     init_serial();

     vga_print("Kernel loaded!", VGA_WHITE);
     serial_print("Hello from serial :p");
}
