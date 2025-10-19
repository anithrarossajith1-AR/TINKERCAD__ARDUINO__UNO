// C++ code
//
#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12, 4, 5,6,7);
int f=0;
void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(8,INPUT);
   
}
void loop()
{
  int c;
  c=digitalRead(8);
  
  if (c==1)
  {
    while(digitalRead(8)==1);
    f++;
    if(f>2)
    {
      f=0;
    }
   
  }
   if(f==1)
   {
     lcd.clear();
     lcd.setCursor(0,0);          
     lcd.print(" HELLO! "); 
     lcd.setCursor(2,1);
     lcd.print(" WORLD!!!! ");
   }
   else if(f==2)
   {
     lcd.clear();
  lcd.setCursor(0,0);          
  lcd.print(" HELLO! "); 
  lcd.setCursor(2,1);       
  lcd.print(" aiswarya !!!! ");
   }
   else 
   {
       lcd.clear();
   }
  
}
  