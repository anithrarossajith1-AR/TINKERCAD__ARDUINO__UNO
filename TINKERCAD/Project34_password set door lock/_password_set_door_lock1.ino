// C++ code
//
#include<Servo.h>
#include <Keypad.h>

const byte numRows= 4; //number of rows on the keypad
const byte numCols= 4; //number of columns on the keypad

char keymap[numRows][numCols]= 
{
{'1', '2', '3', 'A'}, 
{'4', '5', '6', 'B'}, 
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'}
};


byte rowPins[numRows] = {13,12,11,10}; //Rows 0 to 3
byte colPins[numCols]= {6,5,4,3};

String password ="4A23";
String enterpassword="";

Keypad myKeypad= Keypad(makeKeymap(keymap), rowPins, colPins, numRows, numCols);

Servo Servomotor;

void setup()
{
  Serial.begin(9600);
  Serial.println("enter the password");
  
  pinMode(7, OUTPUT);//green led
  pinMode(8,OUTPUT);//red led
  
  Servomotor.attach(2);//servo
  Servomotor.write(0);
}

void loop()
{
  char keypressed = myKeypad.getKey();
  if (keypressed != NO_KEY )
  {
    enterpassword += keypressed;
    Serial.print(keypressed);
    
    if(enterpassword.length() == password.length())
    {
      if (enterpassword == password)
      {
        Serial.println(" Correct Password!");
        digitalWrite(7, HIGH);
        digitalWrite(8,LOW);
        Servomotor.write(180);
        delay(100);
      }
      else
      {
        Serial.println(" Wrong Password!");
        digitalWrite(8, HIGH);
        Servomotor.write(0);
        delay(100);
        enterpassword = "";   
        delay(500);
        Serial.println("Enter the password:");
      }
    }
  }  
}