int ledRojo = 2;
int ledVerde = 3;
int ledAzul = 4;

void setup()
{
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);
}

void loop()
{
  digitalWrite(ledRojo, HIGH);
  delay(200); 
  digitalWrite(ledVerde, HIGH);
  delay(200); 
  digitalWrite(ledAzul, HIGH);
  delay(200);
  digitalWrite(ledAzul, LOW);
  delay(200); 
  digitalWrite(ledVerde, LOW);
  delay(200); 
  digitalWrite(ledRojo, LOW);
  delay(200);
  
}