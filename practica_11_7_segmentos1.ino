byte p1 = 1;
byte p2 = 2;
byte p3 = 3;
byte p4 = 4;
byte p5 = 5;
byte p6 = 6;
byte p7 = 7;

byte del = 150;

byte noSeven[] = {p2,p1,p6};
byte noSix[]  = {p2,p3,p4,p5,p6,p7};
byte noFive[] = {p2,p3,p7,p6,p5};
byte noFour[] = {p3,p7,p1,p6};
byte noThree[] = {p2,p1,p7,p6,p5};
byte noTwo[]  = {p2,p1,p7,p4,p5};
byte noOne[]  = {p6,p5};
byte noZero[] = {p1,p2,p3,p4,p5,p6};

void setup()
{
  Serial.begin(9600);
  pinMode(p1,OUTPUT);
  pinMode(p2,OUTPUT);
  pinMode(p3,OUTPUT);
  pinMode(p4,OUTPUT);
  pinMode(p5,OUTPUT);
  pinMode(p6,OUTPUT);
  pinMode(p7,OUTPUT);
}

void loop()
{
  noEight();
  cleanNum();
  sevenNumber();
  cleanNum();
  sixNumber();
  cleanNum();
  fiveNumber();
  cleanNum();
  fourNumber();
  cleanNum();
  threeNumber();
  cleanNum();
  twoNumber();
  cleanNum();
  oneNumber();
  cleanNum();
  zeroNumber();
  cleanNum();
}

void cleanNum(){
  for(int i=1; i<8;  i++){
    digitalWrite(i, LOW);
    delay(50);
  }
}

void noEight(){
  for (int i=1; i<8; i++){
    digitalWrite(i,HIGH);
    delay(del);
  }
}

void sevenNumber(){
  for(int i = 0; i<3; i++){
    digitalWrite(noSeven[i],HIGH);
    delay(del);
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





