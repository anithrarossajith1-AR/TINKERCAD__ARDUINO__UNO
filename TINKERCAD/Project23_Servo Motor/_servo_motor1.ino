// C++ code
//
#include<Servo.h>
Servo Servomotor;
void setup()
{
  Servomotor.attach(7);
  Servomotor.write(0);
}

void loop()
{
  Servomotor.write(180);
  delay(100);
}