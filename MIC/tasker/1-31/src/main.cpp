
#include <avr/io.h>
#include <util/delay.h>
#include <HardwareSerial.h>

int main()
{
  Serial.begin(9600); // open serial connection
  while (1)
  {
    for (int c = 'A'; c <= 'Z'; c++)
    {
      Serial.println((char)c);
      Serial.flush();
      _delay_ms(500); // wait a while
    }
  }
  return 0;
}
