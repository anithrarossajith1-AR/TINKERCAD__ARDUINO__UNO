// C++ code
//
int f=0;
void setup()
{
  Serial.begin(9600);
  pinMode(12, INPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  int c;
  c=digitalRead(12);
  if(f==0 && c==0)
  {
    f=1;
    Serial.println("no moisture content");
    digitalWrite(8, LOW);
    delay(10);
    digitalWrite(10, LOW);
    delay(1000);
    
  }
  
  else if(f==1 && c==1)
  {
    f=0;
    Serial.println("moisture conent is present");
    digitalWrite(8,HIGH);
    delay(10);
    digitalWrite(10, HIGH);
    delay(1000);
  }  
}