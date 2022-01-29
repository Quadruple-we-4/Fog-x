#include <Servo.h>

Servo fog; 

int pos = 0;   

void setup() {
  fog.attach(9); 
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { 
    fog.write(pos);              
    delay(200);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    fog.write(pos);             
    delay(200);                       
  }
}
