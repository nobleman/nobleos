#include "common.h"
#include "vga.h"
#include "asm_wrap.h"
#include "bios_data.h"

void init();
    
int start(void* mbd, unsigned int magic) //mbd - multiboot structur info
{
    vga_init();
    bda_init(); // bda - bios data area, place where was bios information

    if (magic != 0x2BADB002) //error handling
    {
        vga_puts(" :( Kernel PANIC: ");
        vga_puts("failed to load kernel");
    }

    vga_puts("\nUruchomienie sterownika kernela powiodlo sie! \n");
    vga_puts("Zaladowanie kernela powiodlo sie! \n");
    
    hlt();

    return 0;
}
