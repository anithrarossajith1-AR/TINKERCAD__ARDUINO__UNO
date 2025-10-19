// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(9,INPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  int c;
  c=digitalRead(9);
  Serial.println(c);
  if (c==1)
  {
    digitalWrite(10,HIGH);
  }
  else if(c==0)
  {
    digitalWrite(10,LOW);
  }
}