/*
  Luminosidad de un LED con variación a través del Analogwrite
*/
int lum = 50;            //luminicidad del led puede ser de 0 a 255
void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  analogWrite(9, lum);   
  delay(1000);              
  analogWrite(9, 0);    
  delay(1000);              
}
