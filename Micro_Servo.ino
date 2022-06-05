#include <Servo.h>

Servo servo;
int SERVO = 2;
int MIN = 550;
int MAX = 2450;
int POT = 0;

void setup() {
  servo.attach(SERVO, MIN, MAX);
}

void loop() { 
  servo.write(map(analogRead(POT), 0, 1023, 0, 180));
  delay(20);
}
