// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(A5,INPUT);
}

void loop()
{
  int c;
  c=analogRead(A5);
  Serial.println(c);
}