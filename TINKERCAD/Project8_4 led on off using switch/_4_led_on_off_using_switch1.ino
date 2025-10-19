// C++ code
//
#define sw1 4
#define sw2 5
#define sw3 6
#define sw4 7




void setup()
{
  Serial.begin(9600);
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
  pinMode(sw3, INPUT);
  pinMode(sw4, INPUT);
  
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  int c,d,e,f;
  c=digitalRead(sw1);
  Serial.println(c);
  
  d=digitalRead(sw2);
  Serial.println(d);
  
  e=digitalRead(sw3);
  Serial.println(e);
  
  f=digitalRead(sw4);
  Serial.println(f);
  
  if (c==1)
  {
    digitalWrite(10,HIGH);
  }
  else if(c==0)
  {
    digitalWrite(10,LOW);
  }
  
  if(d==1)
  {
      digitalWrite(11,HIGH);
  }
  else if(d==0)
  {
    digitalWrite(11,LOW);
  }
  if(e==1)
  {
      digitalWrite(12,HIGH);
  }
  else if(e==0)
  {
    digitalWrite(12,LOW);
  }
  if(f==1)
  {
      digitalWrite(13,HIGH);
  }
  else if(f==0)
  {
    digitalWrite(13,LOW);
  }
  
}