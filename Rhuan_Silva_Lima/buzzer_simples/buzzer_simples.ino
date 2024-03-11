#define pinoBuzzer 2
#define ledVermelho 3



void setup() {
  Serial.begin(9600);

  pinMode(pinoBuzzer, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  delay(1000);
}

void loop() {
  tone(pinoBuzzer, 523);//nota dó
  digitalWrite(ledVermelho, HIGH);
  delay(1000);
  noTone(pinoBuzzer);//desliga a buzzer
  digitalWrite(ledVermelho, LOW);//apaga o led
  delay(1000);

}
