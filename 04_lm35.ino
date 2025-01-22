const int lm35Pin = A0;

void setup()
{
    Serial.begin(115200);
    Serial.println("Membaca Suhu dari LM35");
}

void loop()
{
    int nilaiAnalog = analogRead(lm35Pin);
    float suhuC = (nilaiAnalog * 5.0 / 1023.0) * 100.0; // Konversi ke Celcius

    Serial.print("Suhu: ");
    Serial.print(suhuC);
    Serial.println(" °C");

    delay(2000)
}