# include<Servo.h>

Servo ms;
int pos = 0;

void setup()
{
  ms.attach(2);
}

void loop()
{
  
  for (pos =0; pos<=180; pos ++){
    ms.write(pos);
    delay(10);
  
  
  }
  
  for(pos = 180; pos>=0; pos --){
    ms.write(pos);
    delay(10);
  
  
  
  
  }
 
}