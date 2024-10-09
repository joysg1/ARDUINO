

int ledRojo = 2;
int ledVerde = 4;
int ledAzul = 6;


  


void setup()
{
  Serial.begin(9600);
  

  
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);


}

void loop()
{
 

  int in = analogRead(3);
  float volt = in * (5.0 / 1024.0);
  float temp = ((volt - 0.616) * 100)-2; //Factor de temperatura encontrado experimentalmente
  int tempT = temp;
  Serial.print(tempT);
  Serial.print(" C");
  Serial.print("\n");
  delay(700);

   
  
  if (tempT >=38) {
  digitalWrite(ledRojo, HIGH);
  delay(75);
  digitalWrite(ledRojo, LOW);
  delay(75);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAzul, LOW);
  
  }

  else if ((tempT) <38 && (tempT) >=35) {
  
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



  
}
