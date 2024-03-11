
float nota1, nota2, nota3, peso1, peso2, peso3, result;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  //inicia a comunicação com o Serial Monitor

  delay(1000);  //espera estratégica
}


void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("digite a nota 1:");
  while (Serial.available() == 0) {
    //Aguarda a entrada de valores do usuário
  }
  //Lê o valor do serial e guarda na variável nota1
  nota1 = Serial.parseFloat();
  Serial.println(nota1);

  Serial.println("digite a nota 2:");
  while (Serial.available() == 0) {  //aguarda a entrada da nota 2
  }
  nota2 = Serial.parseFloat();
  Serial.println(nota2);

  Serial.println("digite a nota 3:");
  while (Serial.available() == 0) {
  }
  nota3 = Serial.parseFloat();
  Serial.println(nota3);

  Serial.println("digite o peso 1:");
  while (Serial.available() == 0) {
  }
  peso1 = Serial.parseFloat();
  Serial.println(peso1);


  Serial.println("digite o peso 2:");
  while (Serial.available() == 0) {
  }
  peso2 = Serial.parseFloat();
  Serial.println(peso2);

  Serial.println("digite o peso 3:");
  while (Serial.available() == 0) {
  }
  peso3 = Serial.parseFloat();
  Serial.println(peso3);


  result = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

  Serial.print("a média ponderada é: ");
  Serial.println(result);
  delay(2000);
  Serial.println();
}