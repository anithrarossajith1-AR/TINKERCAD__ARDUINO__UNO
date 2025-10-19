// C++ code
//
void setup()
{
  pinMode(12,INPUT);
  pinMode(10, OUTPUT);
  
}
int last=0;
int current;
int f=0;
void loop()
{
  current=digitalRead(12);
  if(last==0 && current==1)
  {
    if(f==0)
    {
      f=1;
           digitalWrite(10,1);
     
    }
    else
    {
      f=0;
           digitalWrite(10,0);
    }

  delay(200);
  }
  last=current;
}