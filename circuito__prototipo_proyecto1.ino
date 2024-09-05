#define PIN_SENSOR A0
#define PIN_SWITCH 10

float targetC = 24.0; // Temperatura en Celsius para activar el parpadeo del LED

// Rango esperado de temperatura
float minTempC = 15.0; // Temperatura mínima esperada
float maxTempC = 40.0; // Temperatura máxima esperada

void setup()
{
  pinMode(PIN_SENSOR, INPUT);
  pinMode(PIN_SWITCH, OUTPUT);

  Serial.begin(9600);
}

float getTemperature() {
  float data = analogRead(PIN_SENSOR);
  // Conversión a voltios
  float voltage = data * (5.0 / 1024.0);
  // Conversión a grados Celsius (TMP36: 500 mV = 0°C, 10 mV/°C)
  float temperatureC = (voltage - 0.5) * 100.0;
  Serial.print(temperatureC);
  return temperatureC;
}

void loop()
{
  // Leer temperatura
  float temperatureC = getTemperature();
  Serial.print("Temperatura: ");
  Serial.print(temperatureC);
  Serial.println(" C");

  // Verificación del rango de temperatura
  if (temperatureC < minTempC || temperatureC > maxTempC) {
    // Apagar LED si la temperatura está fuera del rango
    digitalWrite(PIN_SWITCH, LOW);
    Serial.println("Temperatura fuera de rango");
    Serial.println("--- LED OFF ---");
  } 
   else if (temperatureC <= targetC)
  {
    // Parpadeo rápido del LED si la temperatura <= 24°C
    for (int i = 0; i < 10; i++) // Número de parpadeos por ciclo
    {
      digitalWrite(PIN_SWITCH, HIGH); // Encender LED
      delay(100); // Tiempo de encendido (100 ms)
      digitalWrite(PIN_SWITCH, LOW);  // Apagar LED
      delay(100); // Tiempo de apagado (100 ms)
      Serial.println("--- LED ON ---");
    }
  } 
  else
  {
    // Apagar LED si la temperatura > 24°C
    digitalWrite(PIN_SWITCH, LOW);
    Serial.println("--- LED OFF ---");
  }

  delay(500); // Intervalo entre verificaciones (500 ms)
}





