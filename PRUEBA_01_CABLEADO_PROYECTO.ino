
int Ro = 100, B =  3950; //Nominal resistance 100K, Beta constant
int Rseries = 10;// Series resistor 10K
float To = 298.15; // Nominal Temperature


void setup()
{
  Serial.begin(9600);
}

void loop()
{
   /*Read analog outputof NTC module,
   i.e the voltage across the thermistor */
  float Vi = analogRead(A0) * (5.0 / 1023.0);

  float Vii = analogRead(A1) * (5.0 / 1023.0);

  Vi = (Vi + Vii)/2;
 
  //Convert voltage measured to resistance value
  //All Resistance are in kilo ohms.
  float R = (Vi * Rseries) / (5 - Vi);
  /*Use R value in steinhart and hart equation
    Calculate temperature value in kelvin*/
  float T =  1 / ((1 / To) + ((log(R / Ro)) / B));
  float Tc = T - 273.15; // Converting kelvin to celsius
 // float Tf = Tc * 9.0 / 5.0 + 32.0; // Converting celsius to Fahrenheit
  Serial.println((String)"Temperature in celsius    :" + Tc + "°C");
 // Serial.println((String)"Temperature in Fahrenheit :" + Tf + "°F");
  Serial.println(" ");
  delay(2000);

// Los cables blancos son los de poder y los rojos del sensor
  
  
}
