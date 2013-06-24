CFLAGS=-m32 -nostdlib -nostartfiles -nodefaultlibs
LFLAGS=-melf_i386 -T linker.ld -o 
OBJS=./bin/kernel.bin ./bin/loader.o ./bin/main.o ./bin/vga.o ./bin/bios_data.o
CC=clang

run: kernel
	qemu-system-i386 -kernel ./bin/kernel.bin

prepare:
	mkdir -p bin

loader: prepare
	nasm -f elf -o ./bin/loader.o loader.asm

kernel: loader main.c
	$(CC) -o ./bin/vga.o -c vga.c $(CFLAGS)
	$(CC) -o ./bin/main.o -c main.c  $(CFLAGS)
	$(CC) -o ./bin/bios_data.o -c bios_data.c  $(CFLAGS)
	ld $(LFLAGS) $(OBJS)
		
clean:
	rm -rf ./bin/*
