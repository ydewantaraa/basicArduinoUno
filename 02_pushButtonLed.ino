int led = 13;
int pushButton = 2;

void setup() {
  Serial.begin(115200);
  pinMode(pushButton, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(pushButton);
  Serial.println(buttonState);
  if (buttonState == 1) {
      digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  delay(1);
}