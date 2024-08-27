int TRIG = 13;
int ECHO = 12;
int LED = 5;
int duracion;
int distancia;

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // Tiempo de envio y recepcion
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  // Recepcion del eco de respuesta
  duracion = pulseIn(ECHO, HIGH);
  distancia = duracion * 0.034 / 2; // Calcula la distancia en centímetros

  // Enciende el LED si la distancia es menor a 45 cm
  if (distancia < 45) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }

  delay(100); // Espera 100 ms antes de tomar la próxima medida
}

