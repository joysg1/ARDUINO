long previoMillis =0;
long intervalo = 1000; //intervalo de 1 segundo
int n=0; //Variable que guarda los segundos transcurridos.
void setup()
{
Serial.begin(9600); //Inicia la comunicación serial
}
void loop()
{
unsigned long transcurridoMillis = millis();
if(transcurridoMillis - previoMillis >= intervalo)
 {
 previoMillis=transcurridoMillis;
 n = n + 1;
 Serial.println(n);
}
} 