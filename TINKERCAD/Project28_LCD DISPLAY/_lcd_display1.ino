#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 13, 4, 5,6,7);
void setup()
{
 lcd.begin(16, 2); 
}

void loop()
{
  lcd.setCursor(0,0);          
  lcd.print(" HELLO! "); 
  lcd.setCursor(2,1);           
  lcd.print(" WORLD!!!! ");    
  }