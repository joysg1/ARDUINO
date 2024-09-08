int array [5] = {1,2,3,4};
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for (int i =0; i<5; i++){
  
  
  Serial.println(i);
  delay(500);
  
  
  
  }
}