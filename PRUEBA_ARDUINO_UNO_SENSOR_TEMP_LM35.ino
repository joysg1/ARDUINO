int ledRojo = 2;
int ledVerde = 4;
int ledAzul = 6;

int pinl35 = 3;

  


void setup()
{
  Serial.begin(9600);
  

  
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);


}

void loop()
{
 

  int in = analogRead(pinl35);
  float temp = ((in * 5.0) / 1024.0) * 100;
  Serial.print(temp);
  Serial.print(" C");
  Serial.print("\n");
  delay(700);

   
  
  if (temp >=38) {
  digitalWrite(ledRojo, HIGH);
  delay(75);
  digitalWrite(ledRojo, LOW);
  delay(75);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAzul, LOW);
  
  }

  else if ((temp) <38 && (temp) >=35) {
  
  digitalWrite(ledVerde, HIGH);
  delay(75);
  digitalWrite(ledVerde, LOW);
  delay(75);
  digitalWrite(ledRojo, LOW);
  digitalWrite(ledAzul, LOW);
  

  }
  
  else {

    digitalWrite(ledAzul, HIGH);
    delay(75);
    digitalWrite(ledAzul, LOW);
    delay(75);
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledVerde, LOW);
    


    
  }

// Codigo arduino nano sensor de temperatura LM35 - 16 Octubre 2024


  
}