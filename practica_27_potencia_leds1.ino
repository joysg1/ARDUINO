byte ledRojo = 6;
byte ledVerde = 5;
void setup()
{
  Serial.begin(9600);
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  
}

void loop()
{
  int pot = analogRead(A5);
  float porc = pot * (100.00/1024);
  int potT = porc;
  Serial.print("++ Potencia: ");
  Serial.println(potT);
  delay(500);
  
  if (potT >= 75) {
  
  digitalWrite(ledRojo, HIGH);
  digitalWrite(ledVerde, LOW);
  Serial.println(" *** ALERTA POTENCIA ALTA ***");
  delay(200);
  
  
  
  }
  
  else {
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledRojo, LOW);
  Serial.println(" *** POTENCIA EN RANGO NORMAL *** ");
  delay(200);
  
  
  
  }
 
}