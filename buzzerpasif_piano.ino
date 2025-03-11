const int aktif = 0;
const int Buzzer = 2;
const int tombol1 = 3;
const int tombol2 =4; 
const int tombol3 =5;
const int tombol4 =6;
const int tombol5 =7;
const int tombol6 =8;

void setup() {
  pinMode(Buzzer, OUTPUT);
  pinMode(tombol1, INPUT_PULLUP);
  pinMode(tombol2, INPUT_PULLUP);
  pinMode(tombol3, INPUT_PULLUP);
  pinMode(tombol4, INPUT_PULLUP);
  pinMode(tombol5, INPUT_PULLUP);
  pinMode(tombol6, INPUT_PULLUP);
}

void loop() {
  while (digitalRead(tombol1) == aktif) {
    tone(Buzzer,264,500);
  }
  while (digitalRead(tombol2) == aktif) {
    tone(Buzzer,297,500);
  }
  while (digitalRead(tombol3) == aktif) {
    tone(Buzzer,330,500);
  }
  while (digitalRead(tombol4) == aktif) {
    tone(Buzzer,352,500);
  }
  while (digitalRead(tombol5) == aktif) {
    tone(Buzzer,396,500);
  }
  while (digitalRead(tombol6) == aktif) {
    tone(Buzzer,440,500);
  }
}

// Frekuensi nada do, re, mi, fa, sol, la, si, dan do' adalah: 
// Do = 264 Hz
// Re = 297 Hz
// Mi = 330 Hz
// Fa = 352 Hz
// Sol = 396 Hz
// La = 440 Hz
// Si = 495 Hz
// Do' = 528 Hz
