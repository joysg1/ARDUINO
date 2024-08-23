byte ledP =13;
byte button=2;
byte buttonState=0;
byte buttonStateBefore=0;

int salida = 0;


void setup()
{
  pinMode(ledP, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  buttonState = digitalRead(button);
  if ((buttonState ==HIGH)&&(buttonStateBefore==LOW)){
  
  
  salida = 1 - salida;
  delay (20);
  
   
  }
  
  buttonStateBefore = buttonState;
  
  
  
  if (salida ==1){
     digitalWrite(ledP,HIGH);
  
  
  }
  else {
  
     digitalWrite(ledP,LOW);
  
  
  }
  
  
  
  
}