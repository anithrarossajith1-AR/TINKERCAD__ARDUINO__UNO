// C++ code
//SEIAL MODE PRINTING
void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
}

void loop()
{
  char c;
  if(Serial.available())
  {
    c=Serial.read();
    if(c=='a')
    {
      digitalWrite(8, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(8, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
    }
    else if(c=='b')
    {
      digitalWrite(9, HIGH);
      delay(1000);  
      digitalWrite(9, LOW);
      delay(1000); 
    }
    else if(c=='c')
    {
      digitalWrite(10, HIGH);
      delay(1000); 
      digitalWrite(10, LOW);
      delay(1000); 
    }
    else if(c=='d')
    {
      digitalWrite(11, HIGH);
      delay(1000); 
      digitalWrite(11, LOW);
      delay(1000);
    }
  } 
}