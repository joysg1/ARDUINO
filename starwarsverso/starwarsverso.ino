
byte pinB = 8;
//Notas musicales

int a = 440;
int f =349;
int cH = 523;




void setup() {
 pinMode(pinB, OUTPUT);
 

}

void loop() {
  tone(pinB, a);
  delay(500);
  stepPause();
  tone(pinB, a);
  delay(500);
  stepPause();
  tone(pinB, a);
  delay(500);
  stepPause();

  tone(pinB, f);
  delay(350);

  tone(pinB, cH);
  delay(150);

  tone(pinB, a);
  delay(500);

  tone(pinB, f);
  delay(350);

  tone(pinB, cH);
  delay(150);

  tone(pinB, a);
  delay(650);

  stepPause();

}


void stepPause(){
  noTone(pinB);
  delay(30);
  
   
  
  
  
  }
