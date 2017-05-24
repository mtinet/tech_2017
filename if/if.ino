const int ledpin=13;
const int sensorpin=A0;

void setup()
{
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  int rate = analogRead(sensorpin);
  Serial.println(rate);
  
  if(rate > 50)
  {
    digitalWrite(ledpin, HIGH);
  }
  else if(rate > 30) 
  {
    digitalWrite(ledpin, HIGH);
    delay(50);               
    digitalWrite(ledpin, LOW);    
    delay(50);
  }
  
  else 
  {
    digitalWrite(ledpin, HIGH);
    delay(200);               
    digitalWrite(ledpin, LOW);    
    delay(200);
  }
}
