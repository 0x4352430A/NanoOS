#ifndef MEM_H
#define MEM_H

#include "../cpu/types.h"

void memory_copy(uint8 *source, uint8 *dest, int nbytes);
void memory_set(uint8 *dest, uint8 val, uint32 len);

uint32 kmalloc(size_t size, int align, uint32 *phys_addr);

#endif
