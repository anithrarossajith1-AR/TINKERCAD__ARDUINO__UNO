// C++ code
//
void ledpattern1();
void ledpattern2();
void ledpattern3();
void ledpattern4();
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  
}

void loop()
{
  ledpattern1();
  ledpattern2();
  ledpattern3();
  ledpattern4();
}
void ledpattern1()
{
  digitalWrite(9, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(10, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
void ledpattern2()
{
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);
  delay(3000); 
  
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  delay(2000); 
  
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  delay(3000); 
  
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  delay(2000); 
  
 
}
void ledpattern3()
{
  digitalWrite(9, HIGH);
  digitalWrite(12, HIGH);
  delay(3000);
  
  digitalWrite(9, LOW);
  digitalWrite(12, LOW);
  delay(2000);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(3000);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(2000); 
}
  
void ledpattern4()
{
  digitalWrite(12, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(10, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(9, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
   
}
