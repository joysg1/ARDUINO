// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(LED_BUILTIN, LOW);
  int suma =0;
  for(int i=0; i<=100; i++){
  
    Serial.println("+-------------------+");
    Serial.print("Suma: ");
    Serial.println(suma);
    Serial.print("Contador: ");
    Serial.println(i);
    Serial.println("+-------------------+");
    Serial.println("\n");
    suma = suma + i;
    if (i == 100){
    
    Serial.println("FIN DE EJECUCION");
    digitalWrite(LED_BUILTIN, HIGH);
    delay(8000);
    
    }
    
    delay(850);
      
  
  }
  
  
  
  
  
}