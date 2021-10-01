/*
 * blink program with Serial
 */
// keep intellisense satisfied
#ifndef __AVR_ATmega328P__
    #define __AVR_ATmega328P__
#endif

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "Wire.h"

int main(void)
{
    Wire.begin();
    DDRB |= (1 << DDB5);                    // pin 13 output mode

    // endless loop
    while (1)
    {
      Wire.beginTransmission()
           PORTB ^= (1<<PORTB5);           // toggle pin
            _delay_ms(1000);                // wait a while
    }

    return(0);                              // keep compiler satisfied (no warnings)
}
