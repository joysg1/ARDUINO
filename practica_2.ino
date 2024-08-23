// Declaracion de variables 

float res;
float v1 = 0.45;
float v2 = 0.85;

byte var1=100;
byte var2=20;



void setup()
  
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  
  // suma
  
  res = var1 + var2;
  Serial.println(res);  
  
  // resta
  res = var1 - var2;
  Serial.println(res);
  
  // multi
  
  res = var1 * var2;
  Serial.println(res);
  
  // division
  
  res = var1 / var2;
  Serial.println(res);
  
  // division decimales
  
  res = v1 / v2;
  Serial.println(res);
  
  // modulo 
  
  res = var1 % var2;
  Serial.println(res);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}