// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}

void loop()
{
  int c;
  if(Serial.available())
  {
    c=Serial.read();
    if(c==n)
    {
  digitalWrite(11, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}