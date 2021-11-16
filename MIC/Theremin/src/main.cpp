// Made by: Jacco Kalter (S1158783), Mark Heijnekamp (S1156618), Hidde Kijlstra (S1157730)
// Met hulp van: Cordell Stirling

// Keep intelisens satisfied
#ifndef __AVR_ATmega328P__
#define __AVR_ATmega328P__
#endif

// Includes
#include <avr/io.h>
#include <util/delay.h>
#include <HardwareSerial.h>
#include <avr/interrupt.h>
#include <stdint.h>

#define ADCPINS ((1 << MUX0) | (1 << MUX1) | (1 << MUX2) | (1 << MUX3))

void initADC(void)
{
  ADMUX &= ~ADCPINS;
  ADMUX |= (1 << REFS0);
  ADCSRB &= ~((1 << ADTS0) | (1 << ADTS1) | (1 << ADTS2));
  ADCSRA |= (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0) | (1 << ADATE) | (1 << ADIE) | (1 << ADEN) | (1 << ADSC);
  ADMUX |= (1 << ADLAR);
}

//timer1, CTC
void timer0_init(void)
{
  TCCR0A |= (1 << WGM01) | (1 << COM0A0);
  TCCR0B |= (1 << CS02);
  TIMSK0 |= (1 << OCIE0A);
}

//timer2, fastPWM
void timer2_init(void)
{
  TCCR2A |= (1 << WGM20) | (1<<WGM21); // Set Fast PWM Mode
    TCCR2A |= (1 << COM2A1); // Set to clear on compare match mode
    TCCR2B |= (1<<CS20); // No Prescale
    TIMSK2 |= (1<<TOIE2);
}

volatile uint16_t LDRValue;
volatile uint16_t PotentiometerValue;

ISR(ADC_vect)
{
  if(ADMUX & (1<<MUX0))
    {
        // Reading pin 1
        PotentiometerValue = ADCH;
    }
    else
    {
        // rRading pin 0
        LDRValue = ADCH;
    }
}

ISR(TIMER0_COMPA_vect)
{
  TCCR2A ^= (1 << COM2A1);
  OCR0A = LDRValue;
  OCR2A = PotentiometerValue;
}

ISR(TIMER2_OVF_vect){}

int main(void)
{
  initADC();
  timer0_init();
  timer2_init();
  //piezo outputpin
  DDRB |= (1 << DDB3);

  sei();

  while (1)
  {
   
    
       ADMUX ^= (1<<MUX0);
      _delay_ms(10);
  }
  return 0;
}
