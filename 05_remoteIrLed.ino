#include <IRremote.h>

int RECV_PIN = 12;
int S;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
    Serial.begin(9600);
    Serial.println("Enabling IRin");
    irrecv.enableIRIn();
    Serial.println("Enabled IRin");

    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
}

void loop()
{
    if (irrecv.decode(&results))
    {
        S = results.value, HEX;
        Serial.println(S);
        irrecv.resume();
        if (S == 2295)
        {
            digitalWrite(11, HIGH);
        }
        if (S == -30601)
        {
            digitalWrite(11, LOW);
        }
        if (S == 18615)
        {
            digitalWrite(10, HIGH);
        }
        if (S == 10455)
        {
            digitalWrite(10, LOW);
        }
        if (S == -22441)
        {
            digitalWrite(9, HIGH);
        }
        if (S == 26775)
        {
            digitalWrite(9, LOW);
        }
    }
    delay(10);
}