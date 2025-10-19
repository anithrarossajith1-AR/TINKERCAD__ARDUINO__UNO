// C++ code
//
#define TRIG 4
#define ECHO 3
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
int f=0;
float distance,time;
String input= " ";
void setup()
{
  Serial.begin(9600);
  
  pinMode(11, OUTPUT);//motor1
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  
  pinMode(6, OUTPUT);//motor2
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  
  pinMode(5,OUTPUT);//buzzer&led
  
  pinMode(TRIG,OUTPUT);//ultra
  pinMode(ECHO,INPUT);
  
  lcd.init();//intializing lcd
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print(" ");
  
  analogWrite(11, 0);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);

  analogWrite(6, 0);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  
}

void loop()
{
  
  digitalWrite(TRIG,LOW);//ultra
  delayMicroseconds(2);
  
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  
  digitalWrite(TRIG,LOW);
  
  time=pulseIn(ECHO,HIGH);
  distance=(time*0.034)/2;
  
  //Serial.println(" cm distance");
  //Serial.print(distance);
  
  if(Serial.available())
  {
    input=Serial.readStringUntil('\n');
    input.trim();
  }
    if(input=="forward")
    {
      analogWrite(11,3); //forward
      digitalWrite(10, LOW);
      digitalWrite(8, HIGH);
      
      analogWrite(6,3); 
      digitalWrite(9, LOW);
      digitalWrite(7, HIGH);
      
      lcd.clear();//intializing lcd
      lcd.setCursor(0,0);
      lcd.print("FORWARD MOVING");
      
     if(distance<100)
      {
     analogWrite(11,0); 
     digitalWrite(10, LOW);
     digitalWrite(8, LOW);
     
     analogWrite(6,0);
     digitalWrite(9, LOW);
     digitalWrite(7, LOW);

     // blink buzzer/led
     digitalWrite(5, HIGH);
     delay(200);
     digitalWrite(5, LOW);
     delay(200);

     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("OBSTACLE STOP!");
      }
       else if(distance>=100)
      {
     digitalWrite(5, LOW);
    
      } 
      
    }
    
   else if(input=="reverse")
    {
      analogWrite(11,3); //forward
      digitalWrite(10, HIGH);
      digitalWrite(8, LOW);
      
      analogWrite(6,3);
      digitalWrite(9, HIGH);
      digitalWrite(7, LOW);
      
      lcd.clear();//intializing lcd
      lcd.setCursor(0,0);
      lcd.print("REVERSE MOVING");
      
     if(distance<100)
      {
     analogWrite(11,0); 
     digitalWrite(10, LOW);
     digitalWrite(8, LOW);
     
     analogWrite(6,0);
     digitalWrite(9, LOW);
     digitalWrite(7, LOW);

     // blink buzzer/led
     digitalWrite(5, HIGH);
     delay(200);
     digitalWrite(5, LOW);
     delay(200);

     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("OBSTACLE STOP!");
      }
     else if(distance>100)
      {
       digitalWrite(5, LOW);
      } 
    }
    
    else if(input=="stop")
    {
      analogWrite(11,0); 
      digitalWrite(10, LOW);
      digitalWrite(8, LOW);
      
      analogWrite(6,3);
      digitalWrite(9, LOW);
      digitalWrite(7, LOW);
      
      lcd.clear();//intializing lcd
      lcd.setCursor(0,0);
      lcd.print("STOP");
    }
}