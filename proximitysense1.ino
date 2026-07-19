#include <Servo.h>
const int ping = 9;
const int motor = 7;
int dist = 20,openval =90,closeval =0,wait = 2000;
Servo bin;
void setup(){
  bin.attach(motor);
  bin.write(closeval);
}
long readCm(){
  pinMode(ping,OUTPUT);
  digitalWrite(ping,1);
  delayMicroseconds(5);
  digitalWrite(ping,0);
  pinMode(ping,INPUT);
  return pulseIn(ping,1)/58;
}
void loop(){
  long cm =readCm();
  if(cm > 0 && cm <= dist){
    bin.write(openval);
    while (readCm() >  0&& readCm() <= dist){
      delay(200);
    }
    delay(wait);
    bin.write(closeval);
    delay(1000);
  }
  delay(100);
}
    