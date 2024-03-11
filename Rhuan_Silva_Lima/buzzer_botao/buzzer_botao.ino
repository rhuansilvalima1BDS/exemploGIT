#define pinoled 9
#define pinobutton 8
#define pinobuzzer 7



void setup() {
  Serial.begin(9600);

  pinMode(pinoled, OUTPUT);
  pinMode(pinobutton, INPUT);
  pinMode(pinobuzzer, OUTPUT);

  delay(1000);
}

void loop() {
  if (digitalRead(pinobutton) == 1) {
    digitalWrite(pinoled, HIGH);
    tone(pinobuzzer, 523);
  } else if (digitalRead(pinobutton) == 0) {
    digitalWrite(pinoled, LOW);
    noTone(pinobuzzer);
  }
}
