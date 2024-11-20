const int PULSADOR = 2;
const int switchPins[] = {10, 9, 8, 7};
const int TRANSISTOR = 3;
const int ledVerde = 13;
const int ledRojo = 12;

int estadoPulsador = LOW;
int estadoSwitch = 0;

void setup() {
  Serial.begin(9600);
  pinMode(PULSADOR, INPUT);
  for (int i = 0; i < 4; i++) {
    pinMode(switchPins[i], INPUT);
  }
  pinMode(TRANSISTOR, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledRojo, OUTPUT);
}

void loop() {
  estadoPulsador = digitalRead(PULSADOR);
  estadoSwitch = leerSwitch();
  controlPlantilla(estadoPulsador, estadoSwitch);
  delay(100);
}

int leerSwitch() {
  int estado = 0;
  for (int i = 0; i < 4; i++) {
    if (digitalRead(switchPins[i]) == HIGH) {
      estado = i + 1;
    }
  }
  return estado;
}

void controlPlantilla(int estadoPulsador, int estadoSwitch) {
  if (estadoPulsador == HIGH) {
    digitalWrite(TRANSISTOR, LOW);
    Serial.println("+++++ PLANTILLA APAGADA MIENTRAS PRESIONE EL BOTON +++++ ");
    encendidoLedsRojos();
    apagadoLedsVerdes();
  } else {
    switch (estadoSwitch) {
      case 1:
        digitalWrite(TRANSISTOR, 25);
        Serial.println("+++++ PLANTILLA ENCENDIDA AL 25% +++++");
        encendidoLedsVerdes();
        apagadoLedsRojos();
        break;
      case 2:
        digitalWrite(TRANSISTOR, 50);
        Serial.println("+++++ PLANTILLA ENCENDIDA AL 50% +++++");
        encendidoLedsVerdes();
        apagadoLedsRojos();
        break;
      case 3:
        digitalWrite(TRANSISTOR, 75);
        Serial.println("+++++ PLANTILLA ENCENDIDA AL 75% +++++");
        encendidoLedsVerdes();
        apagadoLedsRojos();
        break;
      case 4:
        digitalWrite(TRANSISTOR, HIGH);
        Serial.println("+++++ PLANTILLA ENCENDIDA AL 100% +++++");
        encendidoLedsVerdes();
        apagadoLedsRojos();
        break;
      default:
        digitalWrite(TRANSISTOR, LOW);
        Serial.println("+++++ PLANTILLA APAGADA +++++");
        encendidoLedsRojos();
        apagadoLedsVerdes();
        break;
    }
  }
}

void encendidoLedsRojos() {
  digitalWrite(ledRojo, HIGH);
}

void encendidoLedsVerdes() {
  digitalWrite(ledVerde, HIGH);
  delay(85);
  digitalWrite(ledVerde, LOW);
  delay(85);
  digitalWrite(ledVerde, HIGH);
  delay(85);
}

void apagadoLedsRojos() {
  digitalWrite(ledRojo, LOW);
}

void apagadoLedsVerdes() {
  digitalWrite(ledVerde, LOW);
}

