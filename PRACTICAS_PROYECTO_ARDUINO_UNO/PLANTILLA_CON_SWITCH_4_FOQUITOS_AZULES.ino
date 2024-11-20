const int PULSADOR = 2;
const int switchPins[] = {10, 9, 8, 7};
const int TRANSISTOR = 3;
const int ledVerde = 13;
const int ledRojo = 12;
const int ledAzul1 = 6;
const int ledAzul2 = 5;
const int ledAzul3 = 4;
const int ledAzul4 = 11;



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
  pinMode(ledAzul1, OUTPUT);
  pinMode(ledAzul2, OUTPUT);
  pinMode(ledAzul3, OUTPUT);
  pinMode(ledAzul4, OUTPUT);
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
        encendidoLedsAzules();
        break;
      case 2:
        digitalWrite(TRANSISTOR, 50);
        Serial.println("+++++ PLANTILLA ENCENDIDA AL 50% +++++");
        encendidoLedsVerdes();
        apagadoLedsRojos();
        encendidoLedsAzules();
        break;
      case 3:
        digitalWrite(TRANSISTOR, 75);
        Serial.println("+++++ PLANTILLA ENCENDIDA AL 75% +++++");
        encendidoLedsVerdes();
        apagadoLedsRojos();
        encendidoLedsAzules();
        break;
      case 4:
        digitalWrite(TRANSISTOR, HIGH);
        Serial.println("+++++ PLANTILLA ENCENDIDA AL 100% +++++");
        encendidoLedsVerdes();
        apagadoLedsRojos();
        encendidoLedsAzules();
        break;
      default:
        digitalWrite(TRANSISTOR, LOW);
        Serial.println("+++++ PLANTILLA APAGADA +++++");
        encendidoLedsRojos();
        apagadoLedsVerdes();
        apagadoLedsAzules();
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


void encendidoLedsAzules(){
  
  digitalWrite(ledAzul1, HIGH);
  delay(100);
  digitalWrite(ledAzul1, LOW);
  delay(100);
  digitalWrite(ledAzul2, HIGH);
  delay(100);
  digitalWrite(ledAzul2, LOW);
  delay(100);
  digitalWrite(ledAzul3, HIGH);
  delay(100);
  digitalWrite(ledAzul3, LOW);
  delay(100);
  digitalWrite(ledAzul4, HIGH);
  delay(100);
  digitalWrite(ledAzul4, LOW);
  delay(100);
  
  
  
  }


void apagadoLedsAzules() {
  
  
  digitalWrite(ledAzul1, LOW);
  digitalWrite(ledAzul2, LOW);
  digitalWrite(ledAzul3, LOW);
  digitalWrite(ledAzul4, LOW);
  
  
      
  
  
  }
