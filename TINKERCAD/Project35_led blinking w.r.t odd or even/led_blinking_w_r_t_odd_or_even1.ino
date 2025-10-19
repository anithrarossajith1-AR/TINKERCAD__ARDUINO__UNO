// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  
}

void loop()
{
  int c;
  if(Serial.available())
  {
    c=Serial.read();
    if(c%2==0)
    {
      Serial.print("even");
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
    }
    else if(c%2!=0)
    {
      Serial.print("odd");
      digitalWrite(8, HIGH);
      digitalWrite(7, LOW);
    }
  }
  
}