int BlueLed = 7;
int RedLed = 8;
void setup()
{
  Serial.begin(9600);
  pinMode(BlueLed, OUTPUT);
  pinMode(RedLed, OUTPUT);
}

void loop()
{
  
  if (Serial.available()>=0) {
  
    if(Serial.readString() == "BlueLed"){
      
      digitalWrite(BlueLed, HIGH);
      delay(200);
      digitalWrite(BlueLed, LOW);
      delay(200);
      
      
      }
    
    
    else if (Serial.readString() == "RedLed"){
    
    digitalWrite(RedLed, HIGH);
    delay(200);
    digitalWrite(RedLed, LOW);
    delay(200);
  
    
    }
    
  
  
  }
 
}