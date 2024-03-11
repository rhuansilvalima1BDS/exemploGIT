float nota1, nota2, nota3, peso1, peso2, peso3, result;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  //inicia a comunicação com o Serial Monitor

  delay(1000);  //espera estratégica
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("digite a nota 1:");

  nota1 = aguardaEntrada();
  Serial.println(nota1);

  Serial.println("digite a nota 2:");
  nota2 = aguardaEntrada();
  Serial.println(nota2);

  Serial.println("digite a nota 3:");
  nota3 = aguardaEntrada();
  Serial.println(nota3);

  Serial.println("digite o peso 1:");
  peso1 = aguardaEntrada();
  Serial.println(peso1);


  Serial.println("digite o peso 2:");
  peso2 = aguardaEntrada();
  Serial.println(peso2);

  Serial.println("digite o peso 3:");
  peso3 = aguardaEntrada();
  Serial.println(peso3);

  result = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

  Serial.print("a média ponderada é: ");
  Serial.println(result);
  delay(2000);
  Serial.println();
}

//criando uma função chamada
float aguardaEntrada() {
  while (!Serial.available()) {
    //aguarda até que um valor seja digitado
  }

  //retornar o valor digitado no serial em tipo float
  return Serial.parseFloat();
}