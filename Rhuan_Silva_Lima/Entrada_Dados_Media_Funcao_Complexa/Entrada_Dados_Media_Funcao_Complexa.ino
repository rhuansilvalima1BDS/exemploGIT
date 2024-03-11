float nota1, nota2, nota3, peso1, peso2, peso3, result;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  //inicia a comunicação com o Serial Monitor

  delay(1000);  //espera estratégica
}

void loop() {
  // put your main code here, to run repeatedly:





  Serial.println("digite a nota 1:");

  nota1 = aguardaEntradaNumerica();
  Serial.println(nota1);

  Serial.println("digite a nota 2:");
  nota2 = aguardaEntradaNumerica();
  Serial.println(nota2);

  Serial.println("digite a nota 3:");
  nota3 = aguardaEntradaNumerica();
  Serial.println(nota3);

  Serial.println("digite o peso 1:");
  peso1 = aguardaEntradaNumerica();
  Serial.println(peso1);


  Serial.println("digite o peso 2:");
  peso2 = aguardaEntradaNumerica();
  Serial.println(peso2);

  Serial.println("digite o peso 3:");
  peso3 = aguardaEntradaNumerica();
  Serial.println(peso3);

  result = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

  Serial.print("a média ponderada é: ");
  Serial.println(result);
  delay(2000);
  Serial.println();
}

//criando uma função chamada
float aguardaEntradaNumerica() {
  while (!Serial.available()) {
    //aguarda até que um valor seja digitado
  }

  //verifica se a entrada é numérica ou ponto
  while (!isdigit(Serial.peek()) && Serial.peek() != '.') {
    //descarta a entrada não numérica
    Serial.read();
    Serial.println("achou que eu ia aceitar coisas alem de numeros, ne? não sou inclusivo.");
    while (Serial.available() == 0) {

      //aguarda a nova entrada do usuário
    }
  }
  //retornar o valor digitado no serial em tipo float
  return Serial.parseFloat();
}