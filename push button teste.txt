// declaração do pino do botão const
#define pinoButton 8 
bool status = false;
#define ledverde 9

void setup() 
{
  pinMode(pinoButton, INPUT);
  pinMode(ledverde, OUTPUT);
  Serial.begin(9600);
  delay(1000);
}

void loop() 
{
  Serial.println(digitalRead(pinoButton));

  if(digitalRead(pinoButton) == 1 && status == false){
    Serial.println("Botão apertado ON...");
    
    status = true;
    digitalWrite(ledverde, HIGH);
  }
  else if (digitalRead(pinoButton) == 1 && status == true){
    Serial.println("Botão apertado OFF...");
    
    status = false;
    digitalWrite(ledverde, LOW);
  }

  delay(500);

}
