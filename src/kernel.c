#include "vga/vga.h"

void kernel_main(void)
{
     vga_clear();
     vga_print("Kernel loaded", VGA_WHITE);
}
