#include "com.h"
#include "x86.h"
#include <stdarg.h>

void init_serial(void) {
  outb(COM1 + 1, 0x00);
  outb(COM1 + 3, 0x80);
  outb(COM1 + 0, 0x03);
  outb(COM1 + 1, 0x00);
  outb(COM1 + 3, 0x03);
  outb(COM1 + 2, 0xC7);
  outb(COM1 + 4, 0x0B);
  outb(COM1 + 4, 0x1E);
  outb(COM1 + 0, 0xAE);

  outb(COM1 + 4, 0x0F);
}

int serial_received(void) { return inb(COM1 + 5) & 1; }

char read_serial(void) {
  while (serial_received() == 0)
    ;

  return inb(COM1);
}

int is_transmit_empty(void) { return inb(COM1 + 5) & 0x20; }

void write_serial(char c) {
  while (is_transmit_empty() == 0)
    ;

  outb(COM1, c);
}

void serial_print(const char *message) {
  int i = 0;

  while (message[i] != '\0') {
    write_serial(message[i]);
    i++;
  }
}
