//declaração de variáveis para números decimais
float sal_atual, novo_sal;




void setup() {
  // put your setup code here, to run once:

  sal_atual = 1200;

  //verificando o valor do salário com a condicional
  if (sal_atual <= 500 && sal_atual > 0) {  //inicio
    novo_sal = sal_atual * 1.2;
  }  //fim
  else if (sal_atual > 500) {
    novo_sal = sal_atual + 1.1;
  } else novo_sal = -1;
  //iniciando a comunicação com o monitor
  Serial.begin(9600);


  /*processamento das entradas*/
}

void loop() {
  // put your main code here, to run repeatedly:

  if (novo_sal == 0) {
    Serial.println("Digite um salário válido:");
  }

  else {

    Serial.print("Novo salário: ");
    Serial.println(novo_sal);
    Serial.println("-------------------------");
  }
  
  delay(1000);
}
