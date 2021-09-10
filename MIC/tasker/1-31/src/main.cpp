
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <HardwareSerial.h>


int main()
{
  Serial.begin(9600); // open serial connection
  for (int i = 65; i <= 122; i++)
  {
    Serial.println((char) i);
  }
  return 0;
}
