#ifndef PORTS_H
#define PORTS_H

#include "../cpu/types.h"

unsigned char port_byte_in (uint16 port);
void port_byte_out (uint16 port, uint8 data);
unsigned short port_word_in (uint16 port);
void port_word_out (uint16 port, uint16 data);

#endif
