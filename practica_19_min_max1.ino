void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  static float mintemp = 1000.0; // Initialize with a high value
  static float maxtemp = -1000.0; // Initialize with a low value

  int cles = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
  float far = (cles * 9.0) / 5.0 + 32.0; // Convert to Fahrenheit

  mintemp = min(mintemp, far);
  maxtemp = max(maxtemp, far);

  Serial.print("Temp (F): ");
  Serial.print(far, 1); // Display current temperature in Fahrenheit with 1 decimal place
  Serial.print(" | Min: ");
  Serial.print(mintemp, 1); // Display minimum temperature in Fahrenheit with 1 decimal place
  Serial.print(" | Max: ");
  Serial.println(maxtemp, 1); // Display maximum temperature in Fahrenheit with 1 decimal place

  delay(2000);
}
