// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int pot = analogRead(A5);
  float percen = pot * (100.00/1024);
  int percenT = percen;
  Serial.print("---- Potencia: ");
  Serial.println(percenT);
  delay(100); 
}