// C++ code
//
int push = 0;

int push2 = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  Serial.begin(9600);
  pinMode(10, OUTPUT);
}

void loop()
{
  push = digitalRead(2);
  push2 = digitalRead(3);
  Serial.print(push);
  Serial.print(push2);
  Serial.println("hello world");
  if (push == 1 || push2 == 1) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}