int i =0;
void setup()
  
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  
  /*
  for(i=0; i<100; i++){
  Serial.println(i);
  digitalWrite(13, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(300);
  
  
  }
  
  */
  
  
  /*
  
  while(i<100){
    
  Serial.println(i);
  digitalWrite(13, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(300);
  i = i +1;
  
  
  
  }
  
  */
  
  
  do{
  Serial.println(i);
  digitalWrite(13, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(300);
  i = i +1;
  
  
  
  }while(i<100);
}

void loop()
{
  
}