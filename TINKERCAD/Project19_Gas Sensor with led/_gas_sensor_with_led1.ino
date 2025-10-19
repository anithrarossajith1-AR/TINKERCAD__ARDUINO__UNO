// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(A5, INPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  int c;
  c=analogRead(A5);
  Serial.println(c);
  if (c>90)
  {
    digitalWrite(9,HIGH);
  }
  else if(c<90)
  {
    digitalWrite(9,LOW);
  }
}