float sal, novo_sal;

float aguardaEntradaNumerica() {
  while (!Serial.available()) {
    //aguarda até que um valor seja digitado
  }

  //verifica se a entrada é numérica ou ponto
  while (!isdigit(Serial.peek()) && Serial.peek() != '.') {
    //descarta a entrada não numérica
    Serial.read();
    Serial.println("Digite um valor valido, seu analfabeto.");
    while (Serial.available() == 0) {

      //aguarda a nova entrada do usuário
    }
  }
  //retornar o valor digitado no serial em tipo float
  return Serial.parseFloat();
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Digite o valor do salario sem virgulas e sem o cifrao da moeda");
  sal = aguardaEntradaNumerica();
  novo_sal = sal + (sal * 25 / 100);
  Serial.print("O novo salario e: ");
  Serial.println(novo_sal);
}
