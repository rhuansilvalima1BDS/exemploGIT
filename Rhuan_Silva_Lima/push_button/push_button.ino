//declaração da constante que armazena o pino do push button
#define pinobutton 8
#define pinoled 9

//"bool" é uma variável que funciona com true e false, ou seja, ou está ligado ou não está. A variável bool "status" recebe o status "falso".
bool status = false;

void setup() {
  //definir a modalidade do pino
  pinMode(pinobutton, INPUT);  //"INPUT" significa que esta constante (no caso, um pino) enviará informações para o arduino.
  pinMode(pinoled, OUTPUT);

  delay(1000);  //parada estratégica
  Serial.begin(9600);
}

void loop() {
Serial.println(digitalRead(pinobutton));

  if (digitalRead(pinobutton) == 1 && status == false) {
    Serial.println("led: ON...");
    status = true;
    digitalWrite(pinoled HIGH);
  }
  else if (digitalRead(pinobutton) == 1 && status == true) {
    Serial.println("led: OFF...");
    status = false;
  }