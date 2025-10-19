// C++ code
//
float temp,volt;
void setup()
{
  Serial.begin(9600);
  pinMode(A5, INPUT);//gas
  pinMode(A4,INPUT);//temp
  pinMode(11, OUTPUT);//led
  pinMode(9, OUTPUT);//buzzer
  pinMode(12,OUTPUT);//led2
  pinMode(6,INPUT);//pushbutton
}

void loop()
{
  int c,i,d,e;
  c=analogRead(A5);
  d=analogRead(A4);
  e=digitalRead(6);
  
  Serial.println(c);
  
  volt=d*(5.0/1023.0);
  temp =(volt - 0.5)*100;
  Serial.println(temp);
 
  if(c>160 && temp>50)
  {
    digitalWrite(11, HIGH);
    analogWrite(9,255);
    
    if(e==1)
    {
      digitalWrite(11, LOW);
      analogWrite(9,0);
      digitalWrite(12, HIGH);
    }
  }
}