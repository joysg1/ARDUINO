// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int in = analogRead(A5);
  float volt = in * (5.0 / 1024.0);
  float temp = (volt - 0.5) * 100;
  int tempT = temp;
  Serial.print(tempT);
  Serial.print(" C");
  Serial.print("\n");
  delay(500);
}