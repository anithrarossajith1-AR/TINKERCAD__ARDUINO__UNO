// C++ code
//
//Automatic Door with Lock Control
//Servo motor acts as door lock.
//If potentiometer at max value → unlock (servo at 90°).
//Else → locked (servo at 0°).
//If button pressed → DC motor rotates to open/close the do

#include<Servo.h>
Servo Servomotor;
int f=0;
void setup()
{
  Serial.begin(9600);
  
  Servomotor.attach(4);//servo
  Servomotor.write(0);
  
  pinMode(A5,INPUT);//potentiometer
  
  pinMode(10, OUTPUT);//motor
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  
  pinMode(7,INPUT);//pushbutton
  
}

void loop()
{
  int c,d;
  c=analogRead(A5);//potentiometer
  Serial.println(c);
  
  if (c>1000)
  {
    Servomotor.write(90);//servo
    delay(100);
  }
  else
  {
    Servomotor.write(0);
    delay(100);
  }
  
  d=digitalRead(7);//pushbutton
  delay(50);
  Serial.println(d);
  
  if(d==1 && f==0)
  {
    f=1;
    analogWrite(10,255);//motor
    digitalWrite(9,LOW);
    digitalWrite(8,HIGH);
  }
  else
  {
    f=0;
    analogWrite(10,1);
    digitalWrite(9,LOW);
    digitalWrite(8,HIGH);
  }
    
}
  
  
  
 