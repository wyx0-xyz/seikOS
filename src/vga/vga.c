#include "vga.h"

int position = 0;
char *vga_buffer = (char *)VGA_ADDRESS;

void vga_print(const char *message, int color)
{
     int i = 0;

     while (message[i] != '\0')
     {
          vga_buffer[position++] = message[i++];
          vga_buffer[position++] = color;
     }
}

void vga_clear(void)
{
     for (int y = 0; y < VGA_HEIGHT; y++)
     {
          for (int x = 0; x < VGA_WIDTH; x++)
          {
               int i = y * VGA_WIDTH + x;
               vga_buffer[i] = VGA_BLACK;
          }
     }
}
