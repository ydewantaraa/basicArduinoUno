int sensorCahaya = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop()
{
  sensorCahaya = analogRead(A0);
  Serial.println(sensorCahaya);
  if (sensorCahaya < 50) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
  delay(10);
}
