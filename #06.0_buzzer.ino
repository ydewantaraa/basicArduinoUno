void setup()
{
  pinMode(8, OUTPUT);
}

void loop()
{
  tone(8, 29, 1000); // play tone 10 (A#0 = 29 Hz)
  delay(1000); // Wait for 1000 millisecond(s)
  tone(8, 52, 1000); // play tone 20 (G#1 = 52 Hz)
  delay(1000); // Wait for 1000 millisecond(s)
  tone(8, 92, 1000); // play tone 30 (F#2 = 92 Hz)
  delay(1000); // Wait for 1000 millisecond(s)
  tone(8, 165, 1000); // play tone 40 (E3 = 165 Hz)
  delay(1000); // Wait for 1000 millisecond(s)
  tone(8, 294, 1000); // play tone 50 (D4 = 294 Hz)
  delay(1000); // Wait for 1000 millisecond(s)
  tone(8, 523, 1000); // play tone 60 (C5 = 523 Hz)
  delay(1000); // Wait for 1000 millisecond(s)
}
