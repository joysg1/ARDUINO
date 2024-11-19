
// Variables asociadas a los pines de los leds

int dot = 11;
int dash = 12;



// Variables asociadas a los pines del 7 segmentos


byte p2 = 2;
byte p3 = 3;
byte p4 = 4;
byte p5 = 5;
byte p6 = 6;
byte p7 = 7;
byte p8 = 8;


byte noSeven[] = {p2,p8,p6};
byte noSix[]  = {p2,p3,p4,p5,p6,p7};
byte noFive[] = {p2,p3,p7,p6,p5};
byte noFour[] = {p3,p7,p8,p6};
byte noThree[] = {p2,p8,p7,p6,p5};
byte noTwo[]  = {p2,p8,p7,p4,p5};
byte noOne[]  = {p6,p5};
byte noZero[] = {p8,p2,p3,p4,p5,p6};


// Funciones asociadas al codigo MORSE

void blink(int led) {

digitalWrite(led, HIGH);
delay(200);
digitalWrite(led, LOW);
delay(200);

}

void letter_A() {

blink(dot);
zeroNumber();
cleanNum();


blink(dash);
noEight();
cleanNum();

}

void letter_B() {
blink(dash);
noEight();
cleanNum();

blink(dot);
zeroNumber();
cleanNum();


blink(dot);
zeroNumber();
cleanNum();


blink(dot);
zeroNumber();
cleanNum();


}

void letter_C() {
blink(dash);
noEight();
cleanNum();

blink(dot);
zeroNumber();
cleanNum();


blink(dash);
noEight();
cleanNum();

blink(dot);
zeroNumber();
cleanNum();

}

void letter_D() {
blink(dash);
noEight();
cleanNum();

blink(dot);
zeroNumber();
cleanNum();


blink(dot);
zeroNumber();
cleanNum();


}

void letter_E() {
blink(dot);
zeroNumber();
cleanNum();


}

void letter_F() {
blink(dot);
zeroNumber();
cleanNum();


blink(dot);
zeroNumber();
cleanNum();


blink(dash);
noEight();
cleanNum();

blink(dot);
zeroNumber();
cleanNum();


}

void letter_G() {
blink(dash);
noEight();
cleanNum();

blink(dash);
noEight();
cleanNum();

blink(dot);
zeroNumber();
cleanNum();


}

void letter_H() {
blink(dot);
zeroNumber();
cleanNum();

blink(dot);
zeroNumber();
cleanNum();


blink(dot);
zeroNumber();
cleanNum();


blink(dot);
zeroNumber();
cleanNum();



}

void letter_I() {
blink(dot);
zeroNumber();
cleanNum();


blink(dot);
zeroNumber();
cleanNum();



}

void letter_J() {
blink(dot);
zeroNumber();
cleanNum();


blink(dash);
noEight();
cleanNum();

blink(dash);
noEight();
cleanNum();

blink(dash);
noEight();
cleanNum();

}

void letter_K() {
blink(dash);
noEight();
cleanNum();

blink(dot);
zeroNumber();
cleanNum();



blink(dash);
noEight();
cleanNum();

}

void letter_L() {
blink(dot);
zeroNumber();
cleanNum();


blink(dash);
noEight();
cleanNum();

blink(dot);
zeroNumber();
cleanNum();


blink(dot);
zeroNumber();
cleanNum();


}

void letter_M() {
blink(dash);
noEight();
cleanNum();

blink(dash);
noEight();
cleanNum();

}

void letter_N() {
blink(dash);
noEight();
cleanNum();

blink(dot);
zeroNumber();
cleanNum();



}

void letter_O() {
blink(dash);
noEight();
cleanNum();

blink(dash);
noEight();
cleanNum();

blink(dash);
noEight();
cleanNum();

}

void letter_P() {
blink(dot);
zeroNumber();
cleanNum();


blink(dash);
noEight();
cleanNum();

blink(dash);
noEight();
cleanNum();

blink(dot);
zeroNumber();
cleanNum();



}

void letter_Q() {
blink(dash);
noEight();
cleanNum();

blink(dash);
noEight();
cleanNum();

blink(dot);
zeroNumber();
cleanNum();


blink(dash);
noEight();
cleanNum();

}

void letter_R() {
blink(dot);
zeroNumber();
cleanNum();


blink(dash);
noEight();
cleanNum();


blink(dot);
zeroNumber();
cleanNum();


}

void letter_S() {
blink(dot);
zeroNumber();
cleanNum();



blink(dot);
zeroNumber();
cleanNum();


blink(dot);
zeroNumber();
cleanNum();


}

void letter_T() {
blink(dash);
noEight();
cleanNum();

}

void letter_U() {
blink(dot);
zeroNumber();
cleanNum();


blink(dot);
zeroNumber();
cleanNum();


blink(dash);
noEight();
cleanNum();

}

void letter_V() {
blink(dot);
zeroNumber();
cleanNum();


blink(dot);
zeroNumber();
cleanNum();


blink(dot);
zeroNumber();
cleanNum();


blink(dash);
noEight();
cleanNum();

}

void letter_W() {
blink(dot);
zeroNumber();
cleanNum();

blink(dash);
noEight();
cleanNum();

blink(dash);
noEight();
cleanNum();

}

void letter_X() {
blink(dash);
noEight();
cleanNum();

blink(dot);
zeroNumber();
cleanNum();


blink(dot);
zeroNumber();
cleanNum();


blink(dash);
noEight();
cleanNum();

}

void letter_Y() {
blink(dash);
noEight();
cleanNum();


blink(dot);
zeroNumber();
cleanNum();



blink(dash);
noEight();
cleanNum();



blink(dash);
noEight();
cleanNum();

}

void letter_Z() {
blink(dash);
noEight();
cleanNum();

blink(dash);
noEight();
cleanNum();

blink(dot);
zeroNumber();
cleanNum();


blink(dot);
zeroNumber();
cleanNum();


}


// FUNCIONES ASOCIADAS AL 7 SEGMENTOS

void cleanNum(){
  for(int i=1; i<8;  i++){
    digitalWrite(i, LOW);
    delay(50);
  }
}

void noEight(){
  for (int i=1; i<8; i++){
    digitalWrite(i,HIGH);
    
  }
}

void sevenNumber(){
  for(int i = 0; i<3; i++){
    digitalWrite(noSeven[i],HIGH);
    
  }
}

void sixNumber(){
  for(int i=0; i<6; i++){
    digitalWrite(noSix[i],HIGH);
  }
}

void fiveNumber(){
  for(int i=0; i<5; i++){
    digitalWrite(noFive[i],HIGH);
  }
}

void fourNumber(){
  for(int i=0; i<4; i++){
    digitalWrite(noFour[i],HIGH);
  }
}

void threeNumber(){
  for(int i=0; i<5; i++){
    digitalWrite(noThree[i],HIGH);
  }
}

void twoNumber(){
  for(int i=0; i<5; i++){
    digitalWrite(noTwo[i],HIGH);
  }
}

void oneNumber(){
  for(int i=0; i<2; i++){
    digitalWrite(noOne[i],HIGH);
  }
}

void zeroNumber(){
  for(int i=0; i<6; i++){
    digitalWrite(noZero[i],HIGH);
  }
}






void setup()
{
Serial.begin(9600);

// PINES ASOCIADOS A LOS LEDS 

pinMode(dot, OUTPUT);
pinMode(dash, OUTPUT);



// PINES ASOCIADOS AL 7 SEGMENTOS


pinMode(p2,OUTPUT);
pinMode(p3,OUTPUT);
pinMode(p4,OUTPUT);
pinMode(p5,OUTPUT);
pinMode(p6,OUTPUT);
pinMode(p7,OUTPUT);
pinMode(p8,OUTPUT);

}

void loop()
{


 
// FUNCIONALIDAD DE LECTURA DE CADENA PARA EL CODIGO MORSE

if(Serial.available()>=0) {

char letter = Serial.read();

switch(letter) {

case 'a':
letter_A();
break;

case 'b':
letter_B();
break;

case 'c':
letter_C();
break;

case 'd':
letter_D();
break;

case 'e':
letter_E();
break;

case 'f':
letter_F();
break;
  
case 'g':
letter_G();
break;

case 'h':
letter_H();
break;

case 'i':
letter_I();
break;

case 'j':
letter_J();
break;

case 'k':
letter_K();
break;

case 'l':
letter_L();
break;

case 'm':
letter_M();
break;

case 'n':
letter_N();
break;

case 'o':
letter_O();
break;

case 'p':
letter_P();
break;

case 'q':
letter_Q();
break;

case 'r':
letter_R();
break;

case 's':
letter_S();
break;

case 't':
letter_T();
break;

case 'u':
letter_U();
break;

case 'v':
letter_V();
break;

case 'w':
letter_W();
break;

case 'x':
letter_X();
break;

case 'y':
letter_Y();
break;

case 'z':
letter_Z();
break;

default:
Serial.println("++++ Ingrese una cadena por favor: ");
delay(2000);
break;
}
}


}


// Proyecto base tinkercad: https://www.tinkercad.com/things/iacU79WAYPG-practica30codigomorse/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard%2Fdesigns%2Fcircuits
