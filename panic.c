#include "vga.h"

void panic( char *panic_info )
{
    vga_puts( "kernel panic! :(\n ");
    vga_puts( panic_info );
}
