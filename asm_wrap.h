#ifndef __ASM_H_
#define __ASM_H_

static inline
void hlt()
{
   asm volatile("hlt");
}

static inline
void outb( unsigned short port, unsigned char val )
{
    asm volatile( "outb %0, %1" : : "a"(val), "Nd"(port) );
}

static inline
unsigned char inb( unsigned short port )
{
    unsigned char ret;
    asm volatile( "inb %1, %0"
                  : "=a"(ret) : "Nd"(port) );
    return ret;
}
#endif
