// C++ code
//
int f=0;
void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(A5,INPUT);
}

void loop()
{
  int c;
  c=analogRead(A5);
  Serial.println(c);
  if(c<10 )
{
   
    digitalWrite(8,LOW);
  }
  else if(c>=679 && c<690)
  {

    digitalWrite(8,HIGH);
  }
}