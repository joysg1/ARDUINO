const int PULSADOR = 2;
const int TRANSISTOR = 3;

const int ledVerde = 13;  //Leds Verdes para encendido de la plantilla


const int ledRojo = 12; //Leds Rojo para apagado de la plantilla


int estado = LOW;

void setup() {
  Serial.begin(9600);
  pinMode(PULSADOR,INPUT);
  pinMode(TRANSISTOR, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledRojo, OUTPUT);
  
}

void loop() {
 estado = digitalRead(PULSADOR);
 controlPlantilla();
  
}

void controlPlantilla(){
  
  if (estado == 0) {
    
    digitalWrite(TRANSISTOR, HIGH);
    Serial.println("+++++ PLANTILLA ENCENDIDA POR DEFAULT +++++");
    delay(1000);
    encendidoLedsVerdes();
    apagadoLedsRojos();
    
    
    
    }

  else if (estado = 1) {
    
    digitalWrite(TRANSISTOR, LOW);
    Serial.println("+++++ PLANTILLA APAGADA MIENTRAS PRESIONE EL BOTON +++++ ");
    delay(1000);
    encendidoLedsRojos();
    apagadoLedsVerdes();
    
    
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
  digitalWrite(ledVerde,HIGH);
  delay(85);
  
  
  
  
  }



void apagadoLedsRojos() {
  
  
  digitalWrite(ledRojo, LOW);
  
  
  
  
  }



void apagadoLedsVerdes() {
  
  digitalWrite(ledVerde, LOW);
  
  
  
  }



// Emisor (izquierda) ----> ground
// Base (central) ----> pin D3
/// Colector (derecha) ----> plantilla termica
