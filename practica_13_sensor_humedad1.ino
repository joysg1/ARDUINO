int humedad = 0;

void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  humedad = analogRead(A5);
  Serial.println(humedad);

  // Apagar todos los LEDs
  for (int x = 9; x <= 13; x++) {
    digitalWrite(x, LOW);
  }

  // Condicionales para encender LEDs según el nivel de humedad
  if (humedad < 200) {
    digitalWrite(13, HIGH); // Encender LED 13 si la humedad es baja
  } else if (humedad < 400) {
    digitalWrite(12, HIGH); // Encender LED 12 si la humedad es moderada
  } else if (humedad < 600) {
    digitalWrite(11, HIGH); // Encender LED 11 si la humedad es alta
  } else if (humedad < 800) {
    digitalWrite(10, HIGH); // Encender LED 10 si la humedad es muy alta
  } else {
    digitalWrite(9, HIGH); // Encender LED 9 si la humedad es extremadamente alta
  }
  
  delay(100);
}
