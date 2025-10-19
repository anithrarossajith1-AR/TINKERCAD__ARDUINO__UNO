// C++ code
//
void setup()
{
  pinMode(10, OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop()
{
  analogWrite(10,3);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  
}