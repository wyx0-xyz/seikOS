#ifndef _SEIKO_COM_
#define _SEIKO_COM_

#define COM1 0x3F8
#define COM2 0x2F8
#define COM3 0x3E8
#define COM4 0x2E8

void init_serial(void);

int serial_received(void);
char read_serial(void);

int is_transmit_empty(void);
void write_serial(char c);

void serial_print(const char *message);

#endif