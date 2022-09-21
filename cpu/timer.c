#include "timer.h"
#include "isr.h"
#include "../drivers/ports.h"
#include "../libc/function.h"

uint32 tick = 0;

static void timer_callback(registers_t regs) {
    tick++;
    UNUSED(regs);
}

void init_timer(uint32 freq) {
    /* Install the function we just wrote */
    register_interrupt_handler(IRQ0, timer_callback);

    /* Get the PIT value: hardware clock at 1193180 Hz */
    uint32 divisor = 1193180 / freq;
    uint8 low  = (uint8)(divisor & 0xFF);
    uint8 high = (uint8)( (divisor >> 8) & 0xFF);
    /* Send the command */
    port_byte_out(0x43, 0x36); /* Command port */
    port_byte_out(0x40, low);
    port_byte_out(0x40, high);
}

