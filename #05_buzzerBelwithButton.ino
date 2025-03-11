int tombol = 0;
int Buzzer = 8;

void setup()
{
  pinMode(7, INPUT);
  pinMode(9, OUTPUT);
}

void loop()
{	
	tombol = digitalRead(7);
  if(tombol == HIGH){
    digitalWrite(9, HIGH);
    tone (Buzzer,500,2);
    delay(2);
  }
  else{
    digitalWrite(9, LOW);
  }
}
