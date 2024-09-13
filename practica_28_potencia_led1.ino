int led = 11;

void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  
  
  int pot = analogRead(A0);
  float porc = pot * (255.00/1024);
  int inten = porc;
  analogWrite(led, inten);
  
  
  
  
  
  
  
 
}