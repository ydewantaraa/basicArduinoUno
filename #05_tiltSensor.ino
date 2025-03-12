int tilt = 2;
int led = 3;
int buzzer = 4;
void setup()
{
  pinMode(tilt, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}
 
void loop()
{
  int reading;
  reading = digitalRead(tilt);
  
  if(reading) {
    digitalWrite(led, LOW);
  }
  else {
    tone(buzzer, 29, 500);
    digitalWrite(led, HIGH);
  }
}
