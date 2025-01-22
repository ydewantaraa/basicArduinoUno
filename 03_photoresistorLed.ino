int sensorValue = 0;
void setup()
{
    pinMode(A0, INPUT);
    pinMode(10, OUTPUT);
    Serial.begin(115200);
}
void loop()
{
    sensorValue = analogRead(A0);
    Serial.println(sensorValue);
    analogWrite(10, map(sensorValue, 0, 1023, 255, 0));
    delay(100);
}