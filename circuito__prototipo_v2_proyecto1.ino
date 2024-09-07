float tempCap, volt, tempConv;
int tempFin;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  tempCap = analogRead(A0);
  volt = tempCap * (5.0 / 1024.0);
  tempConv = (volt - 0.5) * 100;
  tempFin = tempConv;
  Serial.print("+++   Temperatura: ");
  Serial.print(tempFin);
  Serial.println(" C");
  delay(1000);
               
  if (tempFin <28){   
  
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
      
  
  } 
               
  else { 
    
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    
   
    
    }
  
  
  
  
  if (tempFin >= 28) {
     digitalWrite(4, HIGH);
     digitalWrite(3, LOW);
     digitalWrite(2, LOW);
     Serial.println("--- TEMPERATURA CALIENTE --- ");
     Serial.print("\n");
     delay(1000);
     
  }
   
    
  else if (tempFin<28 && tempFin>26) {
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    Serial.println("--- TEMPERATURA TEMPLADA --- ");
    Serial.print("\n");
    delay(1000);
    
   }
  
    
  else {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    Serial.println("--- TEMPERATURA FRIA --- ");
    Serial.print("\n");
    delay(1000);
    
  }
  
  
     
  
  
  
}
               
