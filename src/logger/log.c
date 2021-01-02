#include "log.h"
#include "../vga/vga.h"

void log(int status, const char *message)
{
     switch (status)
     {
     case 1:
          vga_print("[INFO] ", VGA_CYAN);
          break;

     case 2:
          vga_print("[DEBUG] ", VGA_BLUE);
          break;

     case 3:
          vga_print("[WARN] ", VGA_YELLOW);
          break;

     case 4:
          vga_print("[ERROR] ", VGA_RED);
          break;

     default: 
          break;
     }

     vga_print(message, VGA_WHITE);
}
