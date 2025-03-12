int tombol;
int aktif = 0;
int Buzzer = 8;

void setup()
{
  pinMode(7, INPUT_PULLUP);
  pinMode(9, OUTPUT);
}

void loop()
{	
  tombol = digitalRead(7);
  if(tombol == aktif){
    digitalWrite(9, HIGH);
    tone (Buzzer,500,5);
    delay(2);
  }
  else{
    digitalWrite(9, LOW);
  }
}
