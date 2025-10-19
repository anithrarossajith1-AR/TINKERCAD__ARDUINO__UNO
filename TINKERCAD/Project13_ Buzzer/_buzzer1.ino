// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
}
int i;
void loop()
{
  for(i=0;i<=255;i++)
  {
    analogWrite(3, i);
    delay(10); 
  }
  
  for(i=225;i>=0;i--);
  {
    analogWrite(3, i);
    delay(10); 
  }
}