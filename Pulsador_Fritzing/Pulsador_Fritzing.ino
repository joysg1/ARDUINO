const int pinPlantilla = 9; // Pin donde está conectado el cable rojo de la plantilla
int a = 1;
void setup() {
  Serial.begin(9600);
  pinMode(pinPlantilla, OUTPUT); // Configura el pin como salida
  digitalWrite(pinPlantilla, HIGH); // Enciende la plantilla
}

void loop() {
  a = a + 1;
  Serial.println(a);
  delay(1000);
}
