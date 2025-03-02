#include <Servo.h>

int pos = 0;
int potentiometer = 0;
int output = 0;
Servo servo_9;

void setup()
{
  pinMode(A0, INPUT);
  servo_9.attach(9, 500, 2500);
}

void loop()
{
  potentiometer = analogRead(A0);
  output = map(potentiometer, 0, 1023, 0, 180);
  servo_9.write(output);
  delay(10);
}
