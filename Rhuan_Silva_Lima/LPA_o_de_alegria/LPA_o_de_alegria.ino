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

 tone(E);
 delay(500);
 tone()
}
