#include "primitives.h"
#include "bios_data.h"

struct bios_data *bda;

void bda_init()
{
    bda = (struct bios_data*) 0x0400;
}
