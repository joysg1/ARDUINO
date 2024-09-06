// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  
}

void loop()
{
  int clima = 99;
  if (clima >=99) {
  
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
    Serial.println("HACE CALOR");
  
  }
  
  
}