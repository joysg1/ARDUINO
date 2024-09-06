// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int a = 2;
  int b = 2;
  int suma = 0;
  Serial.print("Si a = ");
  Serial.println(a);
  Serial.print("Si b = ");
  Serial.println(b);
  delay(2000);
  Serial.println("\n");
  suma = a + b;
  Serial.println("Suma: ");
  Serial.println(suma);
  int resta = a -b;
  delay(2000);
  Serial.println("\n");
  Serial.println("Resta: ");
  Serial.println(resta);
  int multi = a *b;
  delay(2000);
  Serial.println("\n");
  Serial.println("Multiplicacion: ");
  Serial.println(multi);
  int div = a / b;
  delay(2000);
  Serial.println("\n");
  Serial.println("Division: ");
  Serial.println(div);
  delay(2000);
  Serial.println("\n");
  
}