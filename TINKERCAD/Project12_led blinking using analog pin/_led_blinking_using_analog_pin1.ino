// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
}
int i;
void loop()
{
  for(i=0;i<=255;i++)
  {
    analogWrite(11, i);
    delay(10); // Wait for 1000 millisecond(s)
  }
  
  for(i=225;i>=0;i--);
  {
    analogWrite(11, i);
    delay(10); // Wait for 1000 millisecond(s)
  }
}