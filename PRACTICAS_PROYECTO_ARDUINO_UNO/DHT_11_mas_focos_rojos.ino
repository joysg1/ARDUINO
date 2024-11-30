#include <DHT.h>
#include <DHT_U.h>

int SENSOR =9;
int TEMPERATURA;
int HUMEDAD;
int ledAzul_1 = 5;
int ledAzul_2 = 4;
int ledAzul_3 = 3;
int ledAzul_4 = 2;
int ledRojoCalor = 6;
int ledAmarTemp = 7;
int ledVerdeFrio = 8;
int ledRojo1 = A5;
int ledRojo2 = A4;
int ledRojo3 = A3;
int ledRojo4 = A2;
int ledRojo5 = A1;
int ledRojo6 = A0;




DHT dht(SENSOR, DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(ledAzul_1,OUTPUT); 
  pinMode(ledAzul_2,OUTPUT); 
  pinMode(ledAzul_3,OUTPUT); 
  pinMode(ledAzul_4,OUTPUT); 
  pinMode(ledRojoCalor,OUTPUT);
  pinMode(ledAmarTemp,OUTPUT);
  pinMode(ledVerdeFrio,OUTPUT);
  pinMode(ledRojo1,OUTPUT);
  pinMode(ledRojo2,OUTPUT);
  pinMode(ledRojo3,OUTPUT);
  pinMode(ledRojo4,OUTPUT);
  pinMode(ledRojo5,OUTPUT);
  pinMode(ledRojo6,OUTPUT);
  
  

}

void loop() {
  
  medirTemperatura();
  controlTemperatura();
  parpadeo_Leds_Azules();
  
  

}




void controlTemperatura() {
  if (TEMPERATURA <=24) {
    parpadeo_Led_Verde();
    
  } else if (TEMPERATURA >= 25 && TEMPERATURA <= 28) {
    parpadeo_Led_Amarillo();
    
  } else if (TEMPERATURA > 28) {
    parpadeo_Led_Rojo();
    LedsRojos();
    
   
  }
}



void medirTemperatura(){
  
  
  TEMPERATURA = dht.readTemperature();
  HUMEDAD = dht.readHumidity();
  Serial.print("TEMPERATURA: ");
  Serial.print(TEMPERATURA);
  Serial.print(" HUMEDAD: ");
  Serial.println(HUMEDAD);
  delay(700);
  
  
  
  }





// Funciones de parpadeo de los leds

void parpadeo_Led_Verde(){
  digitalWrite(ledVerdeFrio, HIGH);
  delay(200);
  digitalWrite(ledVerdeFrio, LOW);
  delay(200);
  
  
   
  
  
  }




void parpadeo_Led_Amarillo(){
  digitalWrite(ledAmarTemp, HIGH);
  delay(200);
  digitalWrite(ledAmarTemp, LOW);
  delay(200);
  
   
  
  }




void parpadeo_Led_Rojo(){
  digitalWrite(ledRojoCalor, HIGH);
  delay(200);
  digitalWrite(ledRojoCalor, LOW);
  delay(200);
  
   
  
  }



  void parpadeo_Leds_Azules(){
  digitalWrite(ledAzul_1, HIGH);
  delay(200);
  digitalWrite(ledAzul_1, LOW);
  delay(200);
  digitalWrite(ledAzul_2, HIGH);
  delay(200);
  digitalWrite(ledAzul_2, LOW);
  delay(200);
  digitalWrite(ledAzul_3, HIGH);
  delay(200);
  digitalWrite(ledAzul_3, LOW);
  delay(200);
  digitalWrite(ledAzul_4, HIGH);
  delay(200);
  digitalWrite(ledAzul_4, LOW);
  delay(200);
  
  
   
  
  }

  void LedsRojos() {
    
  analogWrite(ledRojo1, 255);
  delay(200);
  analogWrite(ledRojo1, 0);
  delay(200);
  analogWrite(ledRojo2, 255);
  delay(200);
  analogWrite(ledRojo2, 0);
  delay(200);
  analogWrite(ledRojo3, 255);
  delay(200);
  analogWrite(ledRojo3, 0);
  delay(200);
  analogWrite(ledRojo4, 255);
  delay(200);
  analogWrite(ledRojo4, 0);
  delay(200);
  analogWrite(ledRojo5, 255);
  delay(200);
  analogWrite(ledRojo5, 0);
  delay(200);
  analogWrite(ledRojo6, 255);
  delay(200);
  analogWrite(ledRojo6, 0);
  delay(200);
    
    
    
    
    
    
    
    
    
    
}
