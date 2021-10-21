// keep intellisense satisfied
#ifndef __AVR_ATmega328P__
#define __AVR_ATmega328P__
#endif


#include <avr/io.h>
#include <avr/interrupt.h>
#include <HardwareSerial.h>


volatile char toggle_timer;

ISR(TIMER0_OVF_vect)
{
  toggle_timer = !toggle_timer;
}

// Een delay-functie.

void my_delay(int sec)
{
  int teller = sec * 61;
  char old_toggle = toggle_timer;
  Serial.println("teller =");
  Serial.println(teller);
    Serial.flush();
  Serial.println("old_toggle =");
  Serial.println(old_toggle);
    Serial.flush();
  Serial.println("toggle_timer =");
  Serial.println(toggle_timer);
    Serial.flush();

  while (teller > 0){
    if (toggle_timer != old_toggle)
    {
      Serial.println("Enter IF");
    Serial.flush();

      old_toggle = !old_toggle;
      teller--;
    }
  }
    Serial.println("EXIT");
    Serial.flush();

}

int main(void)
{
    Serial.begin(9600);

  // init my_delay()
  TCCR0B |= (1 << CS02) | (1 << CS00);
  TIMSK0 |= (1 << TOIE0);
  sei();
  // blink
  DDRB |= (1 << DDB5);
  while (1)
  {
    Serial.println("TURN ON");
    Serial.flush();
    PORTB |= (1 << PORTB5);
    Serial.println("WAIT");
    Serial.flush();
    my_delay(1);
    PORTB &= ~(1 << PORTB5);
    my_delay(1);
  }
}