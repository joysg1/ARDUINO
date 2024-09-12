int ledPIN = 9;
int boton = 2;
boolean estadoBotonAnterior = LOW;
boolean estadoLed = LOW;

void setup()
{
  pinMode(ledPIN, OUTPUT);
  pinMode(boton, INPUT);
  Serial.begin(9600);
}

void loop()
{
  boolean estadoBoton = digitalRead(boton);
  if (estadoBoton == HIGH && estadoBotonAnterior == LOW) {
    if (estadoLed == LOW) {
      digitalWrite(ledPIN, HIGH);
      estadoLed = HIGH;
      Serial.println("** LED ENCENDIDO **");
    } else {
      digitalWrite(ledPIN, LOW);
      estadoLed = LOW;
      Serial.println("** LED APAGADO **");
    }
  }
  estadoBotonAnterior = estadoBoton;
  delay(50); // para evitar rebotes del botón
}
