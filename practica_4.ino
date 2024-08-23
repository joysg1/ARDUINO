int SensTemp = 25;

void setup()
{
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  
  
  switch(SensTemp) {
  
  case 18:
    digitalWrite(12, HIGH);
    
    break;
    
  case 25:
    digitalWrite(9, HIGH);
    
    break;
    
  case 32:
    digitalWrite(7, HIGH);
    
    break;
  
  
     
  
  }
  
  
  
}

void loop()
{
 
}