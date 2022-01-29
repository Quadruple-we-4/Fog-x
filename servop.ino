#include<Servo.h> //header
Servo servop; // class
int pot = A0; //potentiometer meter connection
int val;

void setup(){
  servop.attach(9);
}

void loop(){
  val = analogRead(pot);
  val = map(val , 0, 1023, 0, 180);
  servop.write(val);
  if (val == 0)
    digitalRead(HIGH);
  if (val == 180)
    digitalRead(HIGH);
  if (val > 0)
    digitalRead(LOW);
  if (val > 180)
    digitalRead(LOW);
  delay(10);
}
