// C++ code
//
void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  int in = analogRead(A5);
  float volt = in * (5.0 / 1024.0);
  float temp = (volt - 0.5) * 100;
  Serial.print(temp);
  Serial.println( " C");
  delay(500);
  while(temp<=15){
  Serial.println("Hace mucho frio");
  delay(1000);
     
  
  }
  
  while(temp>=30){
  Serial.println("Hace mucho calor");
  delay(1000);
  
  
  
  }
  
}