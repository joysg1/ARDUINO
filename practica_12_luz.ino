// C++ code
//
int LDR = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop()
{
  LDR = analogRead(A0);
  Serial.println(LDR);

  if (LDR < 150) {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}