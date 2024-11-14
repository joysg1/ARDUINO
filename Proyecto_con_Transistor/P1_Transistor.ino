const int pinTransistor = 3; 

void setup() {
  pinMode(pinTransistor, OUTPUT);  
  digitalWrite(pinTransistor, HIGH); 
}

void loop() {
  
}



// Emisor (izquierda) ----> ground
// Base (central) ----> pin D3
/// Colector (derecha) ----> plantilla termica
