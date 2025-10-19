// C++ code
//
float voltage,temp;
//int c;
void setup()
{
  Serial.begin(9600);
  pinMode(A5,INPUT);
}

void loop()
{
  int c;
  c=analogRead(A5);
  voltage=c*(5.0/1023.0);
  temp =(voltage - 0.5)*100;
  Serial.println(temp);
}