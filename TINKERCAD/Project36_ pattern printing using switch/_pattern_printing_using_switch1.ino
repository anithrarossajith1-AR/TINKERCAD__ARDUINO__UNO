// C++ code
//
int x=0;
void setup()
{
  Serial.begin(9600);
  pinMode(13,INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  
}
void loop()
{
  int c;
  c=digitalRead(13);
  Serial.println(x);
  
  if(c==1)
  {
    while(digitalRead(13)==1);
    x++;

    if(x>2)
    {
      x=0;
    }
  }
  if(x==0)
  {
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
  }
  else if(x==1)
  {
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
  }
  else if(x==2)
  {
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  }
}