int ledPIN = 9;
int boton = 2;
int estadoBotonAnterior = LOW;
int estadoLed = LOW;

void setup()
{
  pinMode(ledPIN, OUTPUT);
  pinMode(boton, INPUT);
}

void loop()
{
  int estadoBoton = digitalRead(boton);
  if (estadoBoton == HIGH && estadoBotonAnterior == LOW) {
    if (estadoLed == LOW) {
      digitalWrite(ledPIN, HIGH);
      estadoLed = HIGH;
    } else {
      digitalWrite(ledPIN, LOW);
      estadoLed = LOW;
    }
  }
  estadoBotonAnterior = estadoBoton;
  delay(50); // para evitar rebotes del botón
}
