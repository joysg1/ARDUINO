byte bPin = 3;


void setup() {
 pinMode(bPin, OUTPUT);

}

void loop() {
  // pin, hr, duracion
  tone(bPIn, 440, 200);
  delay(200);
  noTone(bPin);
  delay(200);
  

}
