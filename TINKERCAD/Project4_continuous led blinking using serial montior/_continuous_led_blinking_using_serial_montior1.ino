// C++ code
void ledpattern1();
void ledpattern2();
void ledpattern3();
void ledpattern4();
int f=0;
  

void setup()
{
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  char c;
  if(Serial.available())
  {
    c=Serial.read();
    if(c=='a')
    {
      f=1;
    //ledpattern1();
    }
    else if(c=='b')
    {
      f=2;
      //ledpattern2();
    }
    else if(c=='c')
    {
      f=3;
      //ledpattern3();
    }
    else if(c=='d')
    {
      f=4;
      //ledpattern4();
    }
  }
  if(f==1)
  {
    ledpattern1();
  }
  else if(f==2)
  {
    ledpattern2();
  }
  else if(f==3)
  {
    ledpattern3();
  }
  else if(f==4)
  {
    ledpattern4();
  }
  
}
    
void ledpattern1()
{
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(2000); //
      
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(2000);
      
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);      
  delay(2000);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(2000); //
}
void ledpattern2()
{
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(2000);
  
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(2000);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(2000);
}
void ledpattern3()
{
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(2000);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(2000);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(2000);
}
void ledpattern4()
{
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(2000);
  
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(2000);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(2000);
}