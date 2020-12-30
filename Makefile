CC 		= i686-elf-gcc
AS 		= nasm

ASMFILES  := $(shell find src/ -type f -name '*.asm')
CFILES    := $(shell find src/ -type f -name '*.c')

OBJECTS   = $(CFILES:.c=.o) $(ASMFILES:.asm=.o)

CFLAGS  	:= -std=gnu99 \
		   -ffreestanding \
		   -O2 \
		   -Wall \
		   -Wextra

ASFLAGS 	:= -felf32 \

LDFLAGS 	:= -ffreestanding \
		   -O2 \
		   -nostdlib \
		   -lgcc \

dev: clean build run

run:
	qemu-system-i386 -kernel bin/seikos.bin

build: $(OBJECTS) linker

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

%.o: %.asm
	$(AS) $< -o $@ $(ASFLAGS)

linker:
	$(CC) -T src/linker.ld -o bin/seikos.bin $(OBJECTS) $(LDFLAGS)

clean:
	$(RM) $(OBJECTS)