#include <DHT.h>
#include <DHT_U.h>

int SENSOR =2;
int TEMPERATURA;
int HUMEDAD;
int ledRojo_Calor = 5;
int ledAmarillo_Templado = 6;
int ledVerde_Frio = 7;
int pinTransistor = 10;

DHT dht(SENSOR, DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(ledRojo_Calor,OUTPUT); 
  pinMode(ledAmarillo_Templado,OUTPUT); 
  pinMode(ledVerde_Frio,OUTPUT);
  pinMode(pinTransistor,OUTPUT); 
  digitalWrite(pinTransistor,HIGH);
  

}

void loop() {
  
  medirTemperatura();
  controlTemperatura();
  

}




void controlTemperatura() {
  if (TEMPERATURA <=24) {
    parpadeo_Led_Verde();
    digitalWrite(ledAmarillo_Templado, LOW);  // LED templado apagado
    digitalWrite(ledRojo_Calor, LOW);   // LED de calor apagado
    Serial.println("--- TEMPERATURA FRIA --- ");
    Serial.println("");
    
  } else if (TEMPERATURA >= 25 && TEMPERATURA <= 28) {
    parpadeo_Led_Amarillo();
    digitalWrite(ledRojo_Calor, LOW);  // LED de calor apagado
    digitalWrite(ledVerde_Frio, LOW);   // LED frío apagado
    Serial.println("--- TEMPERATURA TEMPLADA --- ");
    Serial.println("");
    
  } else if (TEMPERATURA > 28) {
    parpadeo_Led_Rojo();
    digitalWrite(ledAmarillo_Templado, LOW);   // LED templado apagado
    digitalWrite(ledVerde_Frio, LOW);   // LED frío apagado
    Serial.println("--- TEMPERATURA CALIENTE --- ");
    Serial.println("");
    
   
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
  digitalWrite(ledVerde_Frio, HIGH);
  delay(500);
  digitalWrite(ledVerde_Frio, LOW);
  delay(500);
  digitalWrite(ledVerde_Frio, HIGH);
  delay(500);
  
   
  
  
  }




void parpadeo_Led_Amarillo(){
  digitalWrite(ledAmarillo_Templado, HIGH);
  delay(500);
  digitalWrite(ledAmarillo_Templado, LOW);
  delay(500);
  digitalWrite(ledAmarillo_Templado, HIGH);
  delay(500);
  
   
  
  }



  void parpadeo_Led_Rojo(){
  digitalWrite(ledRojo_Calor, HIGH);
  delay(500);
  digitalWrite(ledRojo_Calor, LOW);
  delay(500);
  digitalWrite(ledRojo_Calor, HIGH);
  delay(500);
  
   
  
  }
