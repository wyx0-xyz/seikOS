#include "vga.h"

int position = 0;
int color = VGA_WHITE;
char *vga_buffer = (char *)VGA_ADDRESS;

void vga_put_char(char c) {
    vga_buffer[position++] = c;
    vga_buffer[position++] = color;
}

void vga_print(const char *message, int _color) {
    int i = 0;
    color = _color;

    while (message[i] != '\0') {
        vga_put_char(message[i]);
        i++;
    }
}

void vga_clear(void) {
    for (int y = 0; y < VGA_HEIGHT; y++) {
        for (int x = 0; x < VGA_WIDTH; x++) {
            int i = y * VGA_WIDTH + x;
            vga_buffer[i] = VGA_BLACK;
        }
    }
}
