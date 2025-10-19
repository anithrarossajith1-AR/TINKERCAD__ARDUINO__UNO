// C++ code
//
int f=0;
void setup()
{
  Serial.begin(9600);
  pinMode(8, INPUT);
}

void loop()
{
  int c;
  c=digitalRead(8);
  //Serial.println(c);
 
    if(f==0 && c==0)
    {
      f=1;
    Serial.println("no moisture content");
    }
    else if(f==1 && c==1)
    {
      f=0;
      Serial.println("moisure content is present");
    }
  
}