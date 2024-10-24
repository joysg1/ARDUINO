int dot = 11;
int dash = 8;

void blink(int led) {

digitalWrite(led, HIGH);
delay(200);
digitalWrite(led, LOW);
delay(200);

}

void letter_A() {

blink(dot);
blink(dash);

}

void letter_B() {
blink(dash);
blink(dot);
blink(dot);
blink(dot);

}

void letter_C() {
blink(dash);
blink(dot);
blink(dash);
blink(dot);

}

void letter_D() {
blink(dash);
blink(dot);
blink(dot);

}

void letter_E() {
blink(dot);

}

void letter_F() {
blink(dot);
blink(dot);
blink(dash);
blink(dot);

}

void letter_G() {
blink(dash);
blink(dash);
blink(dot);

}

void letter_H() {
blink(dot);
blink(dot);
blink(dot);
blink(dot);

}

void letter_I() {
blink(dot);
blink(dot);

}

void letter_J() {
blink(dot);
blink(dash);
blink(dash);
blink(dash);

}

void letter_K() {
blink(dash);
blink(dot);
blink(dash);

}

void letter_L() {
blink(dot);
blink(dash);
blink(dot);
blink(dot);

}

void letter_M() {
blink(dash);
blink(dash);

}

void letter_N() {
blink(dash);
blink(dot);

}

void letter_O() {
blink(dash);
blink(dash);
blink(dash);

}

void letter_P() {
blink(dot);
blink(dash);
blink(dash);
blink(dot);

}

void letter_Q() {
blink(dash);
blink(dash);
blink(dot);
blink(dash);

}

void letter_R() {
blink(dot);
blink(dash);
blink(dot);

}

void letter_S() {
blink(dot);
blink(dot);
blink(dot);

}

void letter_T() {
blink(dash);

}

void letter_U() {
blink(dot);
blink(dot);
blink(dash);

}

void letter_V() {
blink(dot);
blink(dot);
blink(dot);
blink(dash);

}

void letter_W() {
blink(dot);
blink(dash);
blink(dash);

}

void letter_X() {
blink(dash);
blink(dot);
blink(dot);
blink(dash);

}

void letter_Y() {
blink(dash);
blink(dot);
blink(dash);
blink(dash);

}

void letter_Z() {
blink(dash);
blink(dash);
blink(dot);
blink(dot);

}

void setup()
{
Serial.begin(9600);
pinMode(dot, OUTPUT);
pinMode(dash, OUTPUT);

}

void loop()
{

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
Serial.println("++++ Ingrese una letra por favor: ");
delay(1000);
break;
}
}
}

// Video para anexar el led (8x8): https://www.youtube.com/watch?v=eMTjrQj3LNs
// Proyecto base tinkercad: https://www.tinkercad.com/things/iacU79WAYPG-practica30codigomorse/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard%2Fdesigns%2Fcircuits
