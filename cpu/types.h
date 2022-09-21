#ifndef TYPES_H
#define TYPES_H

/* Instead of using 'chars' to allocate non-character bytes,
 * we will use these new type with no semantic meaning 
 * Naming convention:
 * [prefix][type]
 * example: uint32
 * u - prefix for 'unsigned'
 * int32 - type 'int'
 */
typedef unsigned int uint32;
typedef int sint32;
typedef unsigned short uint16;
typedef short sint16;
typedef unsigned char uint8;
typedef char sint8;
typedef unsigned long size_t;

#define low_16(address) (uint16)((address) & 0xFFFF)
#define high_16(address) (uint16)(((address) >> 16) & 0xFFFF)

#endif
