

#include <Servo.h>

int pos = 0;
int GreenLed = 13;
int WhiteLed = 12;

Servo servo_9;

void setup()
{
  servo_9.attach(9, 500, 2500);
  pinMode(GreenLed, OUTPUT);
  pinMode(WhiteLed, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  for (pos = 0; pos <= 180; pos += 1) {
    
    servo_9.write(pos);
    delay(15);
    
    if (pos ==180){
     Serial.println("+++ POSICION MAXIMA ALCANZADA +++ ");
     digitalWrite(GreenLed, HIGH);
     digitalWrite(WhiteLed, LOW);
  
  
  
  
  }
  
   else if (pos == 0) {
    Serial.println(" +++ POSICION MINIMA ALCANZADA +++ ");
    digitalWrite(WhiteLed, HIGH);
    digitalWrite(GreenLed, LOW);
  
  
  
  
  }
    
    
  }
  
  for (pos = 180; pos >= 0; pos -= 1) {
   
    servo_9.write(pos);
    delay(15);
    
    if (pos ==180){
     Serial.println("+++ POSICION MAXIMA ALCANZADA +++ ");
     delay(50);
     digitalWrite(GreenLed, HIGH);
     digitalWrite(WhiteLed, LOW);
  
  
  
  
  }
  
  else if (pos == 0) {
   Serial.println(" +++ POSICION MINIMA ALCANZADA +++ ");
   delay(50);
   digitalWrite(WhiteLed, HIGH);
   digitalWrite(GreenLed, LOW);
  
  
  
  
  }
    
    
    
  }
  
  
  
}