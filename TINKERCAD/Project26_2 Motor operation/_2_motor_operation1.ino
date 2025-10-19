// C++ code
//
void setup()
{
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  
}

void loop()
{
  analogWrite(10,3);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  
  analogWrite(6,3);
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  
}