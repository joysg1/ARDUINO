int sensorTemp = 32;

void setup()
  
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  
  if (sensorTemp=32) {
  Serial.print("Es un dia caluroso");
  digitalWrite(LED_BUILTIN, HIGH);
         
  }
  
  else{
  
  Serial.print("Es un dia sin mucha calor");
  digitalWrite(LED_BUILTIN, LOW);
  
  
  }
    
    
    
}

void loop()
{
  
}