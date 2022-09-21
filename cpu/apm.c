/**
 * Advanced Power Management (APM) source file
*/

#include "apm.h"

// Defining assembly functions for use in C functions
extern void apmshutdown();
extern void apmreboot();

void shutdown() {
    apmshutdown();
}

void reboot() {
    apmreboot();
}