// C++ code
//
#include<Servo.h>
Servo Servomotor;
void setup()
{
  Serial.begin(9600);
  Servomotor.attach(4);
  Servomotor.write(0);
  pinMode(A5,INPUT);
}

void loop()
{
  int c;
  c=analogRead(A5);
  Serial.println(c);
  if(c>400)
  {
  Servomotor.write(270);
  delay(100);
  }
  else
  {
    Servomotor.write(0);
    delay(100);
  }
}