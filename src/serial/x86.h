#ifndef _SEIKO_X86_
#define _SEIKO_X86_

void outb(int port, char c)
{
     asm volatile("outb %0, %1" : : "a"(c), "Nd"(port));
}

char inb(int port)
{
     char val;
     asm volatile("inb %1, %0" : "=a"(val) : "Nd"(port));
     return val;
}

#endif