#include "mem.h"

void memory_copy(uint8 *source, uint8 *dest, int nbytes) {
    int i;
    for (i = 0; i < nbytes; i++) {
        *(dest + i) = *(source + i);
    }
}

void memory_set(uint8 *dest, uint8 val, uint32 len) {
    uint8 *temp = (uint8 *)dest;
    for ( ; len != 0; len--) *temp++ = val;
}

uint32 free_mem_addr = 0x10000;

uint32 kmalloc(size_t size, int align, uint32 *phys_addr) {
    if (align == 1 && (free_mem_addr & 0xFFFFF000)) {
        free_mem_addr &= 0xFFFFF000;
        free_mem_addr += 0x1000;
    }

    if (phys_addr) *phys_addr = free_mem_addr;

    uint32 ret = free_mem_addr;
    free_mem_addr += size;
    return ret;
}