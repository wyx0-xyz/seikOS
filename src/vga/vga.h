#ifndef _SEIKO_VGA_
#define _SEIKO_VGA_

#define VGA_ADDRESS 0xb8000
#define VGA_BLACK 0
#define VGA_BLUE 1
#define VGA_GREEN 2
#define VGA_CYAN 3
#define VGA_RED 4
#define VGA_PURPLE 5
#define VGA_BROWN 6
#define VGA_GRAY 7
#define VGA_DARK_GRAY 8
#define VGA_LIGHT_BLUE 9
#define VGA_LIGH_GREEN 10
#define VGA_LIGHT_CYAN 11
#define VGA_LIGHT_RED 12
#define VGA_LIGHT_PURPLE 13
#define VGA_YELLOW 14
#define VGA_WHITE 15

#define VGA_WIDTH 80
#define VGA_HEIGHT 25

void vga_put_char(char c);
void vga_print(const char *message, int color);
void vga_clear(void);

#endif