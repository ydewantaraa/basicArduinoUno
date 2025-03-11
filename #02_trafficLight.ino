void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  // kedip pertama merah
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(500);
  
  // kedip kedua merah
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  delay(500);
  
  // kedip pertama hijau
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(4, LOW);
  delay(500);
}
