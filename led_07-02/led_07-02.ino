//declaração das variáveis que representam os pinos dos leds
int ledAmarelo1 = 8;
int ledVermelho1 = 9;
int ledVerde1 = 10;
int ledAmarelo2 = 2;
int ledVermelho2 = 3;
int ledVerde2 = 4;

void setup() {
  //definindo os tipos de pinos
  pinMode(ledAmarelo1, OUTPUT);
  pinMode(ledVermelho1, OUTPUT);
  pinMode(ledVerde1, OUTPUT);
pinMode(ledAmarelo2, OUTPUT);
pinMode(ledVermelho2, OUTPUT);
pinMode(ledVerde2, OUTPUT);

  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledVerde1, HIGH);
  digitalWrite(ledVermelho2, HIGH);
  delay(5000);
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledVermelho2, LOW);
  digitalWrite(ledVerde2, HIGH);
  digitalWrite(ledAmarelo1, HIGH);
  
  digitalWrite(ledAmarelo1, LOW);
  digitalWrite(ledVermelho1, HIGH);
  delay(5000);
  digitalWrite(ledVermelho1, LOW);
}
