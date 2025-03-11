int tombol;
int aktif = 0;

void setup()
{
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
}

void loop()
{
  tombol = digitalRead(2);
  if (tombol == aktif) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
  delay(50);
}
