float novo_sal, sal_base, grat, imposto;

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
  Serial.println("digite o valor do salario, sem virgula e sem o sinal da moeda");
  sal_base = aguardaEntradaNumerica();
  grat = sal_base * 5/100;
  imposto = sal_base * 7/100;
  novo_sal = sal_base + grat - imposto;
  Serial.print("gratificacao: R$");
  Serial.println(grat);
  delay(1000);
  Serial.print("imposto: R$");
  Serial.println(imposto);
  delay(1000);
  Serial.print("salario a receber: R$");
  Serial.println(novo_sal);
  delay(2000);
}
