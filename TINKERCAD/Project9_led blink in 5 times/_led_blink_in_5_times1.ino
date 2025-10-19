// C++ code
//
int f=0;
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  int a=1;
  for(;a<=5;a++)
  {
    f=1;
    digitalWrite(13, HIGH);
    delay(1000); 
    digitalWrite(13, LOW);
    delay(1000); 
    
  }
  for(;a>5;) 
  {
    f=0;
    digitalWrite(13, LOW);
  }
}