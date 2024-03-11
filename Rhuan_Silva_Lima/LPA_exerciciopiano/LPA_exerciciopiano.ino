#define pinobuzzer 2
#define pinoC 3
#define pinoD 4
#define pinoE 5
#define pinoF 6
#define pinoG 7
#define pinoA 8
#define pinoB 9
#define pinoC8 10

byte C, D, E, F, G, A, B, C8;

void setup() {
  // put your setup code here, to run once:

  pinMode(pinoC, INPUT);
  pinMode(pinoD, INPUT);
  pinMode(pinoE, INPUT);
  pinMode(pinoF, INPUT);
  pinMode(pinoG, INPUT);
  pinMode(pinoA, INPUT);
  pinMode(pinoB, INPUT);
  pinMode(pinoC8, INPUT);
  pinMode(pinobuzzer, OUTPUT);

  Serial.begin(9600);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  C = digitalRead(pinoC);
  D = digitalRead(pinoD);
  E = digitalRead(pinoE);
  F = digitalRead(pinoF);
  G = digitalRead(pinoG);
  A = digitalRead(pinoA);
  B = digitalRead(pinoB);
  C8 = digitalRead(pinoC8);

  if (C == 1) {
    tone(pinobuzzer, 260);
  } else if (D == 1) {
    tone(pinobuzzer, 292);
  } else if (E == 1) {
    tone(pinobuzzer, 328);
  } else if (F == 1) {
    tone(pinobuzzer, 347);
  } else if (G == 1) {
    tone(pinobuzzer, 390);
  } else if (A == 1) {
    tone(pinobuzzer, 438);
  } else if (B == 1) {
    tone(pinobuzzer, 492);
  } else if (C8 == 1) {
    tone(pinobuzzer, 526);
  } else {
    noTone(pinobuzzer);
  }
}
