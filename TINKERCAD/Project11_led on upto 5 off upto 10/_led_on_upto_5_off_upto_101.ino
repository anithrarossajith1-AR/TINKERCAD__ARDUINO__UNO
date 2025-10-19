// C++ code
//
int f=0;
void setup()
{
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  //Serial.print("Hello");
}

void loop()
{
  int a;
  if(Serial.available())
  {
    a=Serial.parseInt();
    if(a<=5)
    {
      f=1;
      digitalWrite(9, HIGH);
    }
    else if(a=6 && a<=10)
    {
      f=0;
      digitalWrite(9, LOW);
    }
    else
    {
      Serial.println("Invalid");
      
    }
  }
}